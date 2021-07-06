/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Aesop.BestFirstSearch
import Lean.Aesop.Config
import Lean.Elab.Tactic

namespace Lean.Aesop

open Lean.Elab.Tactic

syntax (name := aesop) "aesop" : tactic

@[tactic aesop]
def evalAesop : Tactic := λ stx => do
  liftMetaMAtMain $ search (← getRuleSet)

end Lean.Aesop
