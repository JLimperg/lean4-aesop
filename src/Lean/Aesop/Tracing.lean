/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg
-/

-- TODO Instead of tracing, I think we want to construct a couple of big
-- messages at the end: one with the ruleset, one with the final search tree,
-- one with the steps taken (displayed in a nice structured manner and hopefully
-- inspectable).

import Lean.Util.Trace

open Lean

builtin_initialize
  registerTraceClass `Aesop.RuleSet
  registerTraceClass `Aesop.Steps
  registerTraceClass `Aesop.Steps.Goals
  registerTraceClass `Aesop.Steps.UnsafeQueues
  registerTraceClass `Aesop.Steps.FailedRuleApplications
  registerTraceClass `Aesop.Steps.Proofs
  registerTraceClass `Aesop.Steps.RuleSelection
  registerTraceClass `Aesop.Steps.FinalProof
  registerTraceClass `Aesop.Tree
  registerTraceClass `Aesop.Tree.Goals
  registerTraceClass `Aesop.Tree.UnsafeQueues
  registerTraceClass `Aesop.Tree.FailedRuleApplications
  registerTraceClass `Aesop.Tree.Proofs

namespace Lean.Aesop

inductive TraceContext
  | steps
  | tree

namespace TraceContext

@[inlineIfReduce]
protected def toTraceOptionPrefix : TraceContext → Name
  | steps => `trace.Aesop.Steps
  | tree => `trace.Aesop.Tree

end TraceContext

inductive TraceOption : TraceContext → Type
  | showGoals {c} : TraceOption c
  | showUnsafeQueues {c} : TraceOption c
  | showFailedRapps {c} : TraceOption c
  | showProofs {c} : TraceOption c
  | showRuleSelection : TraceOption TraceContext.steps
  | showFinalProof : TraceOption TraceContext.steps

namespace TraceOption

@[inlineIfReduce]
protected def toTraceOptionSuffix {c} : TraceOption c → Name
  | showGoals => `Goals
  | showUnsafeQueues => `UnsafeQueues
  | showFailedRapps => `FailedRuleApplications
  | showProofs => `Proofs
  | showRuleSelection => `RuleSelection
  | showFinalProof => `FinalProof

@[inline]
protected def default {c} : TraceOption c → Bool :=
  λ _ => true

@[inline]
def get [Monad m] [MonadOptions m] (c : TraceContext) (o : TraceOption c) :
    m Bool := do
  getBoolOption (c.toTraceOptionPrefix ++ o.toTraceOptionSuffix) o.default

end TraceOption

end Lean.Aesop
