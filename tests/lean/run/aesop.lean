-- TODO clean up this test case
import Lean

open Lean
open Lean.Meta
open Lean.Elab.Tactic

inductive Even : Nat → Prop
| zero : Even Nat.zero
| plus_two {n} : Even n → Even (Nat.succ (Nat.succ n))

inductive Odd : Nat → Prop
| one : Odd (Nat.succ Nat.zero)
| plus_two {n} : Odd n → Odd (Nat.succ (Nat.succ n))

inductive EvenOrOdd : Nat → Prop
| even {n} : Even n → EvenOrOdd n
| odd {n} : Odd n → EvenOrOdd n

attribute [aesop  50%] EvenOrOdd.even EvenOrOdd.odd
attribute [aesop safe] Even.zero Even.plus_two
attribute [aesop 100%] Odd.one Odd.plus_two

def EvenOrOdd' (n : Nat) : Prop := EvenOrOdd n

@[aesop norm (builder tactic)]
def testNormTactic : TacticM Unit := do
  evalTactic (← `(tactic| try simp only [EvenOrOdd']))

set_option pp.all false
set_option trace.Aesop.RuleSet false
set_option trace.Aesop.Steps false

variable (n : Nat)

example : EvenOrOdd' 3 := by
  aesop
