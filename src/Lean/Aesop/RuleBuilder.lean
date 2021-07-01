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

abbrev RuleBuilder α := Name → MetaM α

namespace RuleBuilder

def normSimpUnfold : RuleBuilder NormRuleBuilderResult := λ decl => do
  let info ← getConstInfo decl
  unless info.hasValue do
    throwError "aesop: expected {decl} to be a definition to unfold"
  return NormRuleBuilderResult.simpEntries #[SimpEntry.toUnfold decl]

def normSimpLemmas : RuleBuilder NormRuleBuilderResult := λ decl => do
  let info ← getConstInfo decl
  unless (← isProp info.type) do
    throwError "aesop: tried to add {decl} as a simp lemma, but it is not a proposition"
  let simpLemmas ← mkSimpLemmasFromConst decl (post := true) (prio := 0)
    -- TODO I don't really know what the `post` and `prio` above mean.
  return NormRuleBuilderResult.simpEntries $ simpLemmas.map SimpEntry.lemma

def applyIndexingMode (decl : Name) : MetaM IndexingMode := do
  let info ← getConstInfo decl
  let path ← forallTelescope info.type λ _ conclusion =>
    DiscrTree.mkPath conclusion
  return IndexingMode.indexTarget path

def apply : RuleBuilder RegularRuleBuilderResult := λ decl =>
  return {
    builderName := `apply
    tac := (← RuleTacBuilder.apply decl)
    indexingMode := (← applyIndexingMode decl)
  }

def tactic : RuleBuilder RegularRuleBuilderResult := λ decl => do
  return {
    builderName := `tactic
    tac := (← RuleTacBuilder.tactic decl)
    indexingMode := IndexingMode.unindexed
  }

def unsafeRuleDefault : RuleBuilder RegularRuleBuilderResult := λ decl =>
  tactic decl <|> apply decl <|>
  throwError "Unable to interpret {decl} as an unsafe rule."

def safeRuleDefault : RuleBuilder RegularRuleBuilderResult := λ decl =>
  tactic decl <|> apply decl <|>
  throwError "Unable to interpret {decl} as a safe rule."

def normRuleDefault : RuleBuilder NormRuleBuilderResult := λ decl => do
  (NormRuleBuilderResult.regular <$> tactic decl) <|>
  normSimpLemmas decl <|>
  (NormRuleBuilderResult.regular <$> apply decl) <|>
  throwError "Unable to interpret {decl} as a normalization rule."

end Lean.Aesop.RuleBuilder
