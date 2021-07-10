/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg
-/

import Lean.Aesop.DefaultRules.SplitHyps
import Lean.Aesop.Config

open Lean.Elab.Tactic
open Lean.Meta

namespace Lean.Aesop.DefaultRules

@[aesop safe 0]
def assumption : TacticM Unit :=
  liftMetaTactic λ goal => Meta.assumption goal *> pure []

@[aesop norm -1]
def intros : TacticM Unit := do
  evalTactic (← `(tactic|intros))

@[aesop norm 0]
def splitHyps : TacticM Unit := do
  liftMetaTactic λ goal => return [(← splitAllHyps goal).snd]

end Lean.Aesop.DefaultRules
