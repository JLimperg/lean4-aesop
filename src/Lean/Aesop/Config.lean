/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Aesop.RuleBuilder

open Lean
open Lean.Meta (SimpEntry)

declare_syntax_cat aesop_kind

syntax &"norm" ("-"? num)? : aesop_kind
syntax "unsafe" num "%" : aesop_kind
syntax num "%" : aesop_kind
syntax &"safe" ("-"? num)? : aesop_kind

declare_syntax_cat aesop_clause

declare_syntax_cat aesop_builder

syntax &"apply" : aesop_builder
syntax &"simp_lemma" : aesop_builder
syntax &"tactic" : aesop_builder

syntax "(" &"builder" aesop_builder  ")" : aesop_clause

syntax (name := aesop) &"aesop" aesop_kind aesop_clause* : attr

namespace Lean.Aesop

variable [Monad m] [MonadError m]

inductive RuleKind
  | norm (penalty : Option Int)
  | safe (penalty : Option Int)
  | «unsafe» (successProbability : Percent)
  deriving Inhabited, BEq

namespace RuleKind

instance : ToString RuleKind where
  toString
    | norm p => s!"norm {p}"
    | safe p => s!"safe {p}"
    | «unsafe» p => s!"unsafe {p.toHumanString}"

protected def parse : Syntax → m RuleKind
  | `(norm $penalty) => norm <$> parsePenalty penalty
  | `(safe $penalty) => safe <$> parsePenalty penalty
  | `(aesop_kind|unsafe $prob:numLit %) => «unsafe» <$> parsePercent prob
  | `(aesop_kind|$prob:numLit %) => «unsafe» <$> parsePercent prob
  | _ => unreachable!
  where
    parsePenalty : Syntax → Option Int
      | `(- $n:numLit) => some $ - Int.ofNat n.toNat
      | `($n:numLit) => some $ n.toNat
      | _ => none

    parsePercent (n : Syntax) : m Percent :=
      let n := n.toNat
      if 0 ≤ n ∧ n ≤ 100
        then pure ⟨n.toFloat / 100⟩
        else throwError "Percentage must be between 0 and 100"

end RuleKind


inductive RegularBuilderClause
  | apply
  | tactic
  deriving Inhabited, BEq

namespace RegularBuilderClause

instance : ToString RegularBuilderClause where
  toString
    | apply => "apply"
    | tactic => "tactic"

def toRuleBuilder : RegularBuilderClause → RuleBuilder RegularRuleBuilderResult
  | apply => RuleBuilder.apply
  | tactic => RuleBuilder.tactic

end RegularBuilderClause


inductive BuilderClause
  | regular (c : RegularBuilderClause)
  | simpLemma
  deriving Inhabited, BEq

namespace BuilderClause

instance : ToString BuilderClause where
  toString
    | regular c => toString c
    | simpLemma => "simp_lemma"

open RegularBuilderClause in
protected def parseArgs : Syntax → m BuilderClause
  | `(apply) => regular apply
  | `(simp_lemma) => simpLemma
  | `(tactic) => regular tactic
  | _ => unreachable!

def toRuleBuilder : BuilderClause → RuleBuilder NormRuleBuilderResult
  | regular c => λ decl => NormRuleBuilderResult.regular <$> c.toRuleBuilder decl
  | simpLemma => λ decl => RuleBuilder.normSimpLemmas decl

end BuilderClause


inductive Clause
  | builder (c : BuilderClause)
  deriving Inhabited, BEq

namespace Clause

instance : ToString Clause where
  toString
    | builder c => s!"(builder {c})"

protected def parse : Syntax → m Clause
  | `((builder $b)) => «builder» <$> BuilderClause.parseArgs b
  | _ => unreachable!

end Clause


structure NormRuleConfig where
  penalty : Option Int
  builder : Option BuilderClause
  deriving Inhabited, BEq

namespace NormRuleConfig

instance : ToString NormRuleConfig where
  toString conf :=
    " ".joinSep
      [ match conf.penalty with | none => "" | some p => toString p,
        match conf.builder with | none => "" | some b => toString b ]

protected def addClause (conf : NormRuleConfig) :
    Clause → m NormRuleConfig
  | Clause.builder b =>
    if conf.builder.isSome
      then throwError "Duplicate builder clause."
      else pure { conf with builder := b }

protected def addClauses (clauses : Array Clause)
    (conf : NormRuleConfig) : m NormRuleConfig :=
  clauses.foldlM NormRuleConfig.addClause conf

open NormRuleBuilderResult in
protected def applyToDecl (decl : Name) (conf : NormRuleConfig) :
    MetaM RuleSetMember := do
  let builderResult ←
    match conf.builder with
    | none => RuleBuilder.normRuleDefault decl
    | some builderClause => builderClause.toRuleBuilder decl
  match builderResult with
  | regular res =>
    let penalty := conf.penalty.getD 1
    return RuleSetMember'.normRule
      { name := `norm ++ res.builderName ++ decl
        indexingMode := res.indexingMode
        extra := { penalty := penalty }
        tac := res.tac }
  | simpEntries es =>
    return RuleSetMember'.normSimpEntries es

end NormRuleConfig


structure SafeRuleConfig where
  penalty : Option Int
  builder : Option RegularBuilderClause
  deriving Inhabited

namespace SafeRuleConfig

instance : ToString SafeRuleConfig where
  toString conf :=
    " ".joinSep
      [ match conf.penalty with | none => "" | some p => toString p,
        match conf.builder with
          | none => ""
          | some b => toString (BuilderClause.regular b) ]

protected def addClause (conf : SafeRuleConfig) : Clause → m SafeRuleConfig
  | Clause.builder BuilderClause.simpLemma =>
    throwError "simp_lemma builder is not supported for safe rules."
  | Clause.builder (BuilderClause.regular b) =>
    if conf.builder.isSome
      then throwError "Duplicate builder clause."
      else pure { conf with builder := b }

protected def addClauses (clauses : Array Clause) (conf : SafeRuleConfig) :
    m SafeRuleConfig :=
  clauses.foldlM SafeRuleConfig.addClause conf

protected def applyToDecl (decl : Name) (conf : SafeRuleConfig) :
    MetaM RuleSetMember := do
  let builderResult ←
    match conf.builder with
    | none => RuleBuilder.safeRuleDefault decl
    | some builderClause => builderClause.toRuleBuilder decl
  let penalty := conf.penalty.getD 0
  return RuleSetMember'.safeRule
    { name := `safe ++ builderResult.builderName ++ decl
      indexingMode := builderResult.indexingMode,
      extra := { penalty := penalty, safety := Safety.safe }
        -- TODO support almost_safe rules
      tac := builderResult.tac }

end SafeRuleConfig


structure UnsafeRuleConfig where
  successProbability : Percent
  builder : Option RegularBuilderClause
  deriving Inhabited

namespace UnsafeRuleConfig

instance : ToString UnsafeRuleConfig where
  toString conf :=
    " ".joinSep
      [ conf.successProbability.toHumanString,
        match conf.builder with
          | none => ""
          | some b => toString (BuilderClause.regular b) ]

protected def addClause (conf : UnsafeRuleConfig) : Clause → m UnsafeRuleConfig
  | Clause.builder BuilderClause.simpLemma =>
    throwError "simp_lemma builder is not supported for unsafe rules."
  | Clause.builder (BuilderClause.regular b) =>
    if conf.builder.isSome
      then throwError "Duplicate builder clause."
      else pure { conf with builder := b }

protected def addClauses (clauses : Array Clause) (conf : UnsafeRuleConfig) :
    m UnsafeRuleConfig :=
  clauses.foldlM UnsafeRuleConfig.addClause conf

protected def applyToDecl (decl : Name) (conf : UnsafeRuleConfig) :
    MetaM RuleSetMember := do
  let builderResult ←
    match conf.builder with
    | none => RuleBuilder.unsafeRuleDefault decl
    | some builderClause => builderClause.toRuleBuilder decl
  return RuleSetMember'.unsafeRule
    { name := `unsafe ++ builderResult.builderName ++ decl
      indexingMode := builderResult.indexingMode,
      extra := { successProbability := conf.successProbability },
      tac := builderResult.tac }

end UnsafeRuleConfig


inductive AttrConfig
  | norm (conf : NormRuleConfig)
  | safe (conf : SafeRuleConfig)
  | «unsafe» (conf : UnsafeRuleConfig)
  deriving Inhabited

namespace AttrConfig

instance : ToString AttrConfig where
  toString c :=
    " ".joinSep
      [ "aesop",
        match c with
          | norm conf => toString conf
          | safe conf => toString conf
          | «unsafe» conf => toString conf ]

protected def ofKindAndClauses : RuleKind → Array Clause → m AttrConfig
  | RuleKind.norm penalty, cs => do
    let conf : NormRuleConfig := { penalty := penalty, builder := none }
    norm <$> conf.addClauses cs
  | RuleKind.safe penalty, cs => do
    let conf : SafeRuleConfig := { penalty := penalty, builder := none }
    safe <$> conf.addClauses cs
  | RuleKind.unsafe prob, cs => do
    let conf : UnsafeRuleConfig := { successProbability := prob, builder := none }
    «unsafe» <$> conf.addClauses cs

protected def parse : Syntax → m AttrConfig
  | stx@`(attr|aesop $kind:aesop_kind $clauses:aesop_clause*) => do
    let kind ← RuleKind.parse kind
    let clauses ← clauses.mapM Clause.parse
    AttrConfig.ofKindAndClauses kind clauses
  | _ => unreachable!

protected def applyToDecl (decl : Name) : AttrConfig → MetaM RuleSetMember
  | norm conf => conf.applyToDecl decl
  | safe conf => conf.applyToDecl decl
  | «unsafe» conf => conf.applyToDecl decl

end AttrConfig


private def runMetaMAsImportM (x : MetaM α) : ImportM α := do
  let ctx : Core.Context := { options := (← read).opts }
  let state : Core.State := { env := (← read).env }
  let r ← x |>.run {} {} |>.run ctx state |>.toIO'
  match r with
  | Except.ok ((a, _), _) => pure a
  | Except.error e => throw $ IO.userError (← e.toMessageData.toString)

builtin_initialize extension :
    ScopedEnvExtension (RuleSetMember' RuleTacDescr) RuleSetMember RuleSet ←
  registerScopedEnvExtension {
    name := `aesopExt
    mkInitial := return {}
    ofOLeanEntry := λ rs r => runMetaMAsImportM r.ofDescr
    toOLeanEntry := (·.toDescr)
    addEntry := λ rs r => rs.add r
  }

def getRuleSet : MetaM RuleSet := do
  extension.getState (← getEnv)

private def runMetaMAsCoreM (x : MetaM α) : CoreM α :=
  Prod.fst <$> x.run {} {}

builtin_initialize
  registerBuiltinAttribute {
    name := `aesop
    descr := "Register a declaration as an Aesop rule."
    add := λ decl stx attrKind => do
      let config ← AttrConfig.parse stx
      let rule ← runMetaMAsCoreM $ config.applyToDecl decl
      extension.add rule attrKind
    erase := λ _ =>
      throwError "aesop attribute currently cannot be removed"
  }

end Lean.Aesop
