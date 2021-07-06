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

open NormRuleBuilderResult (simpEntries) in
def normSimpLemmas : RuleBuilder NormRuleBuilderResult := λ decl => do
  -- This is basically copied from Meta.Tactic.Simp.SimpLemmas, specifically
  -- the attribute registration there.
  let info ← getConstInfo decl
  if (← isProp info.type) then
     let simpLemmas ← mkSimpLemmasFromConst decl (post := true) (prio := 0)
       -- TODO I don't really know what the `post` and `prio` above mean.
     return simpEntries $ simpLemmas.map SimpEntry.lemma
  else if info.hasValue then
    return simpEntries #[SimpEntry.toUnfold decl]
  else
    throwError "Not a valid simp lemma: {decl}\n(should be a proposition or a definition to unfold)."

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
