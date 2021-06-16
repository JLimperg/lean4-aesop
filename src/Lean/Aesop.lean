import Lean.ScopedEnvExtension

-- Removing this line makes the error go away.
import Lean.Meta

open Lean

builtin_initialize extension :
    ScopedEnvExtension Name Name (List Name) ←
  registerScopedEnvExtension {
    name := `aesopExt
    mkInitial := return []
    ofOLeanEntry := λ rs r => return r
    toOLeanEntry := λ r => return r
    addEntry := λ rs r => r :: rs
  }
