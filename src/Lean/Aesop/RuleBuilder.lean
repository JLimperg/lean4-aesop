/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg
-/

import Lean.Aesop.Rule
import Lean.Aesop.RuleTac

open Lean.Meta

namespace Lean.Aesop

structure RegularRuleBuilderResult where
  builderName : Name
  tac : RuleTac
  indexingMode : IndexingMode
  deriving Inhabited

inductive NormRuleBuilderResult
  | regular (r : RegularRuleBuilderResult)
  | simpEntries (es : Array SimpEntry)
  deriving Inhabited

inductive RuleIdent
  | const (decl : Name)
  | fvar (userName : Name)
  deriving Inhabited

namespace RuleIdent

instance : ToFormat RuleIdent where
  format
    | const decl => format decl
    | fvar userName => format userName

protected def type : RuleIdent → MetaM Expr
  | const c => return (← getConstInfo c).type
  | fvar userName => return (← getLocalDeclFromUserName userName).type

protected def ruleName : RuleIdent → Name
  | const c => `global ++ c
  | fvar userName => `local ++ userName

protected def ofName (n : Name) : MetaM RuleIdent := do
  try
    let _ ← getLocalDeclFromUserName n
    pure $ fvar n
  catch _ =>
    pure $ const n

end RuleIdent

abbrev RuleBuilder α := RuleIdent → MetaM α

namespace RuleBuilder

def normSimpUnfold : RuleBuilder NormRuleBuilderResult
  | RuleIdent.const decl => do
    let info ← getConstInfo decl
    unless info.hasValue do
      throwError "aesop: expected {decl} to be a definition to unfold"
    return NormRuleBuilderResult.simpEntries #[SimpEntry.toUnfold decl]
  | RuleIdent.fvar _ =>
    throwError "aesop: local hypotheses cannot be added as simp lemmas"

def normSimpLemmas : RuleBuilder NormRuleBuilderResult
  | RuleIdent.const decl => do
    let info ← getConstInfo decl
    unless (← isProp info.type) do
      throwError "aesop: tried to add {decl} as a simp lemma, but it is not a proposition"
    let simpLemmas ← mkSimpLemmasFromConst decl (post := true) (prio := 0)
      -- TODO I don't really know what the `post` and `prio` above mean.
    return NormRuleBuilderResult.simpEntries $ simpLemmas.map SimpEntry.lemma
  | RuleIdent.fvar _ => do
    throwError "aesop: local hypotheses cannot be added as simp lemmas"

def applyIndexingMode (type : Expr) : MetaM IndexingMode := do
  let savedState ← saveState
  let path ←
    try
      let (_, _, conclusion) ← forallMetaTelescope type
      DiscrTree.mkPath conclusion
    finally
      restoreState savedState
  -- We use a meta telescope because `DiscrTree.mkPath` ignores metas (they
  -- turn into `Key.star`) but not fvars.
  return IndexingMode.indexTarget path

def apply : RuleBuilder RegularRuleBuilderResult := λ ruleIdent => do
  let type := (← ruleIdent.type)
  let tac ←
    match ruleIdent with
    | RuleIdent.const decl => RuleTacBuilder.apply decl
    | RuleIdent.fvar userName => RuleTacBuilder.applyFVar userName
  return {
    builderName := `apply
    tac := tac
    indexingMode := (← applyIndexingMode type)
  }

def tactic : RuleBuilder RegularRuleBuilderResult
  | RuleIdent.const decl =>
    return {
      builderName := `tactic
      tac := (← RuleTacBuilder.tactic decl)
      indexingMode := IndexingMode.unindexed
    }
  | RuleIdent.fvar _ =>
    throwError "aesop: tactic builder does not support local hypotheses."

-- TODO In the default builders below, we should distinguish between fatal and
-- nonfatal errors. E.g. if the `tactic` builder finds a declaration that is not
-- of tactic type, this is a nonfatal error and we should continue with the next
-- builder. But if the simp builder finds an equation that cannot be interpreted
-- as a simp lemma for some reason, this is a fatal error. Continuing with the
-- next builder is more confusing than anything because the user probably
-- intended to add a simp lemma.

def unsafeRuleDefault : RuleBuilder RegularRuleBuilderResult
  | i@(RuleIdent.const _) => tactic i <|> apply i <|> err i
  | i@(RuleIdent.fvar _) => apply i <|> err i
  where
    err i := throwError "aesop: Unable to interpret {i} as an unsafe rule."

def safeRuleDefault : RuleBuilder RegularRuleBuilderResult
  | i@(RuleIdent.const _) => tactic i <|> apply i <|> err i
  | i@(RuleIdent.fvar _) => apply i <|> err i
  where
    err i := throwError "aesop: Unable to interpret {i} as a safe rule."

def normRuleDefault : RuleBuilder NormRuleBuilderResult
  | i@(RuleIdent.const _) =>
    (NormRuleBuilderResult.regular <$> tactic i) <|>
    normSimpLemmas i <|>
    (NormRuleBuilderResult.regular <$> apply i) <|>
    throwError "aesop: Unable to interpret {i} as a normalization rule."
  | i@(RuleIdent.fvar _) =>
    throwError "aesop: Please specify a builder for norm rule {i}."

end Lean.Aesop.RuleBuilder
