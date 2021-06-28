-- Removing this line makes the error go away.
import Lean.Meta

open Lean

builtin_initialize
  registerTraceClass `stuff
