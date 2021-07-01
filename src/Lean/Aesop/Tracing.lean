/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg
-/

import Lean.Util.Trace

open Lean

builtin_initialize
  registerTraceClass `Aesop.RuleSet
  registerTraceClass `Aesop.Steps
