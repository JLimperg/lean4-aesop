import Lean.Aesop

@[aesop (builder tactic)]
def test₁ : Unit := ()

@[aesop (builder apply)]
def test₂ : Unit := ()

attribute [-aesop] test₁

open Lean in
def check : AttrM Unit := do
  let rs ← Aesop.getRules
  trace[debug] "{rs.toList}"

set_option trace.debug true

#eval check
