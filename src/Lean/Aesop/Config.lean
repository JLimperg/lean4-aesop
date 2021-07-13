/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Aesop.RuleBuilder

open Lean
open Lean.Meta (SimpEntry getSimpLemmas)

namespace Lean.Aesop

namespace AttrSyntax

declare_syntax_cat aesop_prio

syntax "-"? num "%"? : aesop_prio

declare_syntax_cat' aesop_kind force_leading_unreserved_tokens

syntax (aesop_prio)? : aesop_kind
syntax &"safe" (aesop_prio)? : aesop_kind
syntax &"unsafe" (aesop_prio)? : aesop_kind
syntax &"norm" (aesop_prio)? : aesop_kind

declare_syntax_cat' aesop_builder force_leading_unreserved_tokens

syntax &"apply" : aesop_builder
syntax &"simp" : aesop_builder
syntax &"unfold" : aesop_builder
syntax &"tactic" : aesop_builder

declare_syntax_cat' aesop_clause force_leading_unreserved_tokens

syntax "(" &"builder" aesop_builder ")" : aesop_clause

syntax (name := aesop) &"aesop" aesop_kind aesop_clause* : attr

end AttrSyntax


variable [Monad m] [MonadError m]


inductive Prio
  | successProbability (p : Percent)
  | penalty (i : Int)
  deriving Inhabited, BEq

namespace Prio

instance : ToString Prio where
  toString
    | successProbability p => p.toHumanString
    | penalty i => toString i

protected def parse : Syntax → m Prio
  | `(aesop_prio|- $n:numLit %) =>
    throwError "aesop: Percentage cannot be negative."
  | `(aesop_prio|- $n:numLit) => return penalty $ - n.toNat
  | `(aesop_prio|$n:numLit) => return penalty $ n.toNat
  | `(aesop_prio|$n:numLit %) => do
    let (some p) ← Percent.ofNat n.toNat
      | throwError "aesop: Percentage must be between 0 and 100."
    return successProbability p
  | _ => unreachable!

end Prio

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
  | `(aesop_kind|safe $[$prio:aesop_prio]?) => do
    let (some prio) ← pure prio
      | return safe defaultSafePenalty
    let (Prio.penalty penalty) ← Prio.parse prio | throwError
      "aesop: safe rules must specify an integer penalty, not a success probability."
    return safe penalty
  | `(aesop_kind|unsafe $[$prio:aesop_prio]?) => doUnsafe prio
  | `(aesop_kind|$[$prio:aesop_prio]?) => doUnsafe prio
  | `(aesop_kind|norm $[$prio:aesop_prio]?) => do
    let (some prio) ← pure prio
      | return norm defaultNormPenalty
    let (Prio.penalty penalty) ← Prio.parse prio | throwError
      "aesop: norm rules must specify an integer penalty, not a success probability."
    return norm penalty
  | _ => unreachable!
  where
    doUnsafe : Option Syntax → m RuleKind
      | none => throwError
        "aesop: unsafe rules must specify a success probability ('n%')"
      | some prio => do
        match (← Prio.parse prio) with
        | Prio.successProbability p => return «unsafe» p
        | Prio.penalty _ => throwError
          "aesop: unsafe rules must specity a success probability ('n%'), not an integer penalty"

end RuleKind


inductive RegularBuilderClause
  | apply
  | tactic
  deriving Inhabited, BEq

namespace RegularBuilderClause

instance : ToString RegularBuilderClause where
  toString
    | apply => "(builder apply)"
    | tactic => "(builder tactic)"

def toRuleBuilder : RegularBuilderClause → RuleBuilder RegularRuleBuilderResult
  | apply => RuleBuilder.apply
  | tactic => RuleBuilder.tactic

end RegularBuilderClause


inductive BuilderClause
  | regular (c : RegularBuilderClause)
  | simpLemma
  | simpUnfold
  deriving Inhabited, BEq

namespace BuilderClause

instance : ToString BuilderClause where
  toString
    | regular c => toString c
    | simpLemma => "(builder simp)"
    | simpUnfold => "(builder unfold)"

open RegularBuilderClause in
protected def parseBuilder : Syntax → BuilderClause
  | `(aesop_builder|apply) => regular apply
  | `(aesop_builder|tactic) => regular tactic
  | `(aesop_builder|simp) => simpLemma
  | `(aesop_builder|unfold) => simpUnfold
  | _ => unreachable!

def toRuleBuilder : BuilderClause → RuleBuilder NormRuleBuilderResult
  | regular c => λ decl => NormRuleBuilderResult.regular <$> c.toRuleBuilder decl
  | simpLemma => λ decl => RuleBuilder.normSimpLemmas decl
  | simpUnfold => λ decl => RuleBuilder.normSimpUnfold decl

end BuilderClause


inductive Clause
  | builder (c : BuilderClause)
  deriving Inhabited, BEq

namespace Clause

instance : ToString Clause where
  toString
    | builder c => toString c

protected def parse : Syntax → m Clause
  | `(aesop_clause|(builder $b:aesop_builder)) =>
    builder <$> BuilderClause.parseBuilder b
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
      then throwError "aesop: duplicate builder clause."
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
    throwError "aesop: 'simp' builder cannot be used with safe rules."
  | Clause.builder BuilderClause.simpUnfold =>
    throwError "aesop: 'unfold' builder cannot be used with safe rules."
  | Clause.builder (BuilderClause.regular b) =>
    if conf.builder.isSome
      then throwError "aesop: duplicate builder clause."
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
    throwError "aesop: 'simp' builder cannot be used with unsafe rules."
  | Clause.builder BuilderClause.simpUnfold =>
    throwError "aesop: 'unfold' builder cannot be used with unsafe rules."
  | Clause.builder (BuilderClause.regular b) =>
    if conf.builder.isSome
      then throwError "aesop: duplicate builder clause."
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
    "aesop " ++
    match c with
      | norm conf => " ".joinSep ["norm", toString conf]
      | safe conf => " ".joinSep ["safe", toString conf]
      | «unsafe» conf => " ".joinSep ["unsafe", toString conf]

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
  | `(attr|aesop $kind:aesop_kind $[$clauses:aesop_clause]*) => do
    let kind ← RuleKind.parse kind
    let clauses ← clauses.mapM Clause.parse
    AttrConfig.ofKindAndClauses kind clauses
  | _ => unreachable!

protected def applyToDecl (decl : Name) : AttrConfig → MetaM RuleSetMember
  | norm conf => conf.applyToDecl decl
  | safe conf => conf.applyToDecl decl
  | «unsafe» conf => conf.applyToDecl decl

end AttrConfig


builtin_initialize extension :
    ScopedEnvExtension (RuleSetMember' RuleTacDescr) RuleSetMember RuleSet ←
  registerScopedEnvExtension {
    name := `aesopExt
    mkInitial := return {}
    ofOLeanEntry := λ rs r => runMetaMAsImportM r.ofDescr
    toOLeanEntry := (·.toDescr)
    addEntry := λ rs r => rs.add r
  }

def getAttrRuleSet : CoreM RuleSet := do
  extension.getState (← getEnv)

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

def getRuleSet : MetaM RuleSet := do
  let defaultSimpLemmas ← getSimpLemmas
  let rs ← getAttrRuleSet
  return { rs with normSimpLemmas := defaultSimpLemmas.merge rs.normSimpLemmas }

end Lean.Aesop
