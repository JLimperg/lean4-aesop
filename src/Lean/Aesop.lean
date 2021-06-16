import Lean.Util.Trace
import Lean.Attributes

open Lean

builtin_initialize
  registerTraceClass `Aesop

builtin_initialize aesopAttr : ParametricAttribute Name ←
  registerParametricAttribute {
    name := `aesop
    descr := "Register a declaration as an Aesop rule"
    getParam := λ _ _ => `whatever
  }
