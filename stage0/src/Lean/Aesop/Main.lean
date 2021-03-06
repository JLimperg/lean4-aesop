/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg
-/

import Lean.Aesop.BestFirstSearch
import Lean.Aesop.Config
import Lean.Aesop.DefaultRules
import Lean.Elab.Tactic

namespace Lean.Aesop

open Lean.Elab.Tactic

syntax (name := aesop) "aesop" : tactic

@[tactic aesop]
def evalAesop : Tactic := λ stx => do
  let rs ← getRuleSet
  let rs := rs.addArray (← defaultRules)
  trace[Aesop.RuleSet] m!"{rs}"
  search rs

end Lean.Aesop
