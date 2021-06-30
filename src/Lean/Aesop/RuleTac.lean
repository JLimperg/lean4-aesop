/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg
-/

import Lean.Meta

open Lean.Meta

namespace Lean.Aesop

/- A `RuleTacDescr` is a 'recipe' for constructing the tactic used by a rule.
When we serialise the rule set to an olean file, we serialise `RuleTacDescr`s
because we can't (currently?) serialise the actual tactics. -/
inductive RuleTacDescr
  | applyConst (decl : Name)
  | tactic (decl : Name)
  deriving Inhabited, BEq

/- A `RuleTac` bundles a `RuleTacDescr` and the tactic that was computed from
the description. -/
structure RuleTac where
  tac : MVarId → MetaM (List MVarId)
  descr : RuleTacDescr
  deriving Inhabited

abbrev RuleTacBuilder := MetaM RuleTac

namespace RuleTacBuilder

/- Convenience for evalTacticUnsafe. -/
private abbrev TacticType := MVarId → MetaM (List MVarId)

unsafe def evalTacticUnsafe (decl : Name) :
    MetaM (MVarId → MetaM (List MVarId)) := do
  let env ← getEnv
  match env.find? decl with
  | none => throwError "aesop: unknown constant {decl}"
  | some info =>
    if (← isDefEq info.type (mkConst ``TacticType))
      then ofExcept $ env.evalConst TacticType (← getOptions) decl
      else throwError "aesop: {decl} was expected to have type\n  MVarId → MetaM (List MVarId)\nbut has type\n  {info.type}"

@[implementedBy evalTacticUnsafe]
constant evalTactic : Name → MetaM (MVarId → MetaM (List MVarId))
-- I think the above use of `evalConst` is safe because we call it at a concrete
-- type, making sure that the constant actually has that type.

def tactic (decl : Name) : RuleTacBuilder := do
  let tac ← evalTactic decl
  return { tac := tac, descr := RuleTacDescr.tactic decl }

def apply (decl : Name) : RuleTacBuilder := return {
  tac := λ goal => do Lean.Meta.apply goal (← mkConstWithFreshMVarLevels decl)
  descr := RuleTacDescr.applyConst decl
}

end RuleTacBuilder

namespace RuleTacDescr

def toRuleTac : RuleTacDescr → MetaM RuleTac
  | applyConst decl => RuleTacBuilder.apply decl
  | tactic decl => RuleTacBuilder.tactic decl

end RuleTacDescr

end Lean.Aesop
