import Lean.Util.Trace

-- Removing this line makes the error go away.
import Lean.Meta

open Lean (registerTraceClass)

builtin_initialize
  registerTraceClass `stuff
