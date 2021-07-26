/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Aesop.MutAltTree
import Lean.Aesop.Rule
import Lean.Aesop.Util
import Lean.Aesop.Tracing

open Lean
open Lean.Meta

@[inlineIfReduce]
private def Bool.toYesNo : Bool → Format
  | true => "yes"
  | false => "no "

namespace Lean.Aesop

/-! ## Node IDs -/

structure GoalId where
  toNat : Nat
  deriving Inhabited, DecidableEq

namespace GoalId

protected def zero : GoalId :=
  ⟨0⟩

protected def one : GoalId :=
  ⟨1⟩

protected def succ : GoalId → GoalId
  | ⟨n⟩ => ⟨n + 1⟩

def dummy : GoalId :=
  ⟨1000000000000000⟩

instance : LT GoalId where
  lt n m := n.toNat < m.toNat

instance : DecidableRel (α := GoalId) (· < ·) :=
  λ n m => inferInstanceAs (Decidable (n.toNat < m.toNat))

instance : ToString GoalId where
  toString n := toString n.toNat

end GoalId


/-! ## Rule Application IDs -/

structure RappId where
  toNat : Nat
  deriving Inhabited, DecidableEq

namespace RappId

protected def zero : RappId :=
  ⟨0⟩

protected def succ : RappId → RappId
  | ⟨n⟩ => ⟨n + 1⟩

protected def one : RappId :=
  ⟨1⟩

def dummy : RappId :=
  ⟨1000000000000000⟩

instance : LT RappId where
  lt n m := n.toNat < m.toNat

instance : DecidableRel (α := RappId) (· < ·) :=
  λ n m => inferInstanceAs $ Decidable (n.toNat < m.toNat)

instance : ToString RappId where
  toString n := toString n.toNat

end RappId


/-! ## Goal Nodes and Rule Applications -/

inductive ProofStatus
  | unproven
  | provenByRuleApplication
  | provenByNormalization
  deriving Inhabited, BEq

namespace ProofStatus

def isProven : ProofStatus → Bool
  | unproven => false
  | provenByRuleApplication => true
  | provenByNormalization => true

end ProofStatus


-- Invariant: if proofStatus = provenByNormalization then isNormal = true
structure GoalData : Type where
  id : GoalId
  goal : MVarId
  successProbability : Percent
  failedRapps : List RegularRule
  unsafeQueue : Option (List UnsafeRule)
  proofStatus : ProofStatus
  isUnprovable : Bool
  isIrrelevant : Bool
  isNormal : Bool
  deriving Inhabited

namespace GoalData

def isProven (g : GoalData) : Bool :=
  g.proofStatus.isProven

protected structure MessageInfo where
  showGoal : Bool
  showUnsafeQueue : Bool
  showFailedRapps : Bool
  deriving Inhabited

open GoalData (MessageInfo)

protected def getMessageInfo [Monad m] [MonadOptions m]
    (traceCtx : TraceContext) : m MessageInfo := do
  return {
    showGoal := (← TraceOption.showGoals.get traceCtx)
    showUnsafeQueue := (← TraceOption.showUnsafeQueues.get traceCtx)
    showFailedRapps := (← TraceOption.showFailedRapps.get traceCtx)
  }

open MessageData in
protected def toMessageData (traceCtx : TraceContext) (g : GoalData) :
    MetaM MessageData := do
  let minfo ← GoalData.getMessageInfo traceCtx
  let unsafeQueueLength :=
    match g.unsafeQueue with
    | none => f!"<not selected>"
    | some q => format q.length
  return m!"Goal {g.id} [{g.successProbability.toHumanString}]" ++ nodeFiltering #[
    m!"Unsafe rules in queue: {unsafeQueueLength}, failed: {g.failedRapps.length}",
    join
      [ m!"normal: {g.isNormal.toYesNo} | ",
        m!"proven: {g.isProven.toYesNo} | ",
        m!"unprovable: {g.isUnprovable.toYesNo} | ",
        m!"irrelevant: {g.isIrrelevant.toYesNo}" ],
    if ¬ minfo.showGoal then none else
      m!"Goal:{indentD $ ofGoal g.goal}",
    if ¬ minfo.showUnsafeQueue || g.unsafeQueue.isNone then none else
      m!"Unsafe queue:{indentDUnlines $ g.unsafeQueue.get!.map toMessageData}",
    if ¬ minfo.showFailedRapps then none else
      m!"Failed rule applications:{indentDUnlines $ g.failedRapps.map toMessageData}" ]

protected def mkInitial (id : GoalId) (goal : MVarId)
    (successProbability : Percent) : GoalData where
  id := id
  goal := goal
  successProbability := successProbability
  failedRapps := []
  unsafeQueue := none
  proofStatus := ProofStatus.unproven
  isUnprovable := false
  isIrrelevant := false
  isNormal := false

end GoalData

structure RappData : Type where
  id : RappId
  state : Meta.SavedState
    -- This is the state *after* the rule was successfully applied, so the goal
    -- mvar is assigned in this state.
  appliedRule : RegularRule
  successProbability : Percent
  isProven : Bool
  isUnprovable : Bool
  isIrrelevant : Bool
  deriving Inhabited

namespace RappData

protected structure MessageInfo where

open RappData (MessageInfo)

open MessageData in
protected def toMessageData [Monad m] [MonadOptions m] (traceCtx : TraceContext)
    (r : RappData) : m MessageData := do
  return m!"Rapp {r.id} [{r.successProbability.toHumanString}]" ++
    nodeFiltering #[
      toMessageData r.appliedRule,
      join
        [ m!"proven: {r.isProven.toYesNo} | ",
          m!"unprovable: {r.isUnprovable.toYesNo} | ",
          m!"irrelevant: {r.isIrrelevant.toYesNo}" ] ]

protected def mkInitial (id : RappId) (state : Meta.SavedState)
    (appliedRule : RegularRule) (successProbability : Percent) : RappData where
  id := id
  state := state
  appliedRule := appliedRule
  successProbability := successProbability
  isProven := false
  isUnprovable := false
  isIrrelevant := false

end RappData

abbrev Goal    := MutAltTree IO.RealWorld GoalData RappData
abbrev GoalRef := IO.Ref Goal

abbrev Rapp    := MutAltTree IO.RealWorld RappData GoalData
abbrev RappRef := IO.Ref Rapp

variable [Monad m] [MonadLiftT (ST IO.RealWorld) m]


/-! ## Functions on Goals -/

namespace Goal

/-! ### Constructors -/

@[inline]
protected def mk (parent : Option RappRef) (rapps : Array RappRef)
    (data : GoalData) : Goal :=
  MutAltTree.mk data parent rapps

/-! ### Getters -/

@[inline]
def rapps (g : Goal) : Array RappRef :=
  g.children

@[inline]
def id (g : Goal) : GoalId :=
  g.payload.id

@[inline]
def goal (g : Goal) : MVarId :=
  g.payload.goal

@[inline]
def successProbability (g : Goal) : Percent :=
  g.payload.successProbability

@[inline]
def failedRapps (g : Goal) : List RegularRule :=
  g.payload.failedRapps

@[inline]
def unsafeQueue (g : Goal) : Option (List UnsafeRule) :=
  g.payload.unsafeQueue

@[inline]
def proofStatus (g : Goal) : ProofStatus :=
  g.payload.proofStatus

@[inline]
def isProven (g : Goal) : Bool :=
  g.payload.isProven

@[inline]
def isUnprovable (g : Goal) : Bool :=
  g.payload.isUnprovable

@[inline]
def isIrrelevant (g : Goal) : Bool :=
  g.payload.isIrrelevant

@[inline]
def isNormal (g : Goal) : Bool :=
  g.payload.isNormal

/-! ### Setters -/

@[inline]
def setId (id : GoalId) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with id := id }

@[inline]
def setGoal (goal : MVarId) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with goal := goal }

@[inline]
def setSuccessProbability (successProbability : Percent) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with successProbability := successProbability }

@[inline]
def setFailedRapps (failedRapps : List RegularRule) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with failedRapps := failedRapps }

@[inline]
def setUnsafeQueue (unsafeQueue : Option (List UnsafeRule)) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with unsafeQueue := unsafeQueue }

@[inline]
def setProofStatus (proven? : ProofStatus) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with proofStatus := proven? }

@[inline]
def setUnprovable (unprovable? : Bool) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with isUnprovable := unprovable? }

@[inline]
def setIrrelevant (irrelevant? : Bool) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with isIrrelevant := irrelevant? }

@[inline]
def setNormal (normal? : Bool) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with isNormal := normal? }

/-! ### Miscellaneous -/

def hasNoUnexpandedUnsafeRule (g : Goal) : Bool :=
  match g.unsafeQueue with
  | none => false
  | some q => q.isEmpty

end Goal


/-! ## Functions on Rule Applications -/

namespace Rapp

/-! ### Constructors -/

@[inline]
protected def mk (parent : Option GoalRef) (subgoals : Array GoalRef)
    (data : RappData) : Rapp :=
  MutAltTree.mk data parent subgoals

/-! ### Getters -/

@[inline]
def parent! (r : Rapp) : GoalRef :=
  match r.parent with
  | some p => p
  | none => panic! s!"aesop/Rapp.parent!: rapp {r.payload.id} "

@[inline]
def subgoals (r : Rapp) : Array GoalRef :=
  r.children

@[inline]
def id (r : Rapp) : RappId :=
  r.payload.id

@[inline]
def state (r : Rapp) : Meta.SavedState :=
  r.payload.state

@[inline]
def appliedRule (r : Rapp) : RegularRule :=
  r.payload.appliedRule

@[inline]
def successProbability (r : Rapp) : Percent :=
  r.payload.successProbability

@[inline]
def isProven (r : Rapp) : Bool :=
  r.payload.isProven

@[inline]
def isUnprovable (r : Rapp) : Bool :=
  r.payload.isUnprovable

@[inline]
def isIrrelevant (r : Rapp) : Bool :=
  r.payload.isIrrelevant

-- Setters

@[inline]
def setId (id : RappId) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with id := id }

@[inline]
def setState (state : Meta.SavedState) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with state := state }

@[inline]
def setAppliedRule (appliedRule : RegularRule) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with appliedRule := appliedRule }

@[inline]
def setSuccessProbability (successProbability : Percent) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with successProbability := successProbability }

@[inline]
def setProven (proven? : Bool) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with isProven := proven? }

@[inline]
def setUnprovable (unprovable? : Bool) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with isUnprovable := unprovable? }

@[inline]
def setIrrelevant (irrelevant? : Bool) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with isIrrelevant := irrelevant? }

/-! ### Miscellaneous -/

def allSubgoalsProven (r : Rapp) : m Bool :=
  r.subgoals.allM λ subgoal => return (← subgoal.get).isProven

end Rapp


/-! ## Formatting -/

mutual
  private partial def formatTreeGoal (traceCtx : TraceContext) (goal : Goal) :
      MetaM MessageData := do
    let goalMsg ← goal.payload.toMessageData traceCtx
    let childrenMsgs ← goal.rapps.mapM λ c => do
      formatTreeRapp traceCtx (← c.get)
    return goalMsg ++ indentD (MessageData.node childrenMsgs)

  private partial def formatTreeRapp (traceCtx : TraceContext) (rapp : Rapp) :
      MetaM MessageData := do
    let rappMsg ← rapp.payload.toMessageData TraceContext.tree
    let childrenMsgs ← rapp.subgoals.mapM λ c => do
      formatTreeGoal traceCtx (← c.get)
    return rappMsg ++ indentD (MessageData.node childrenMsgs)
end

namespace Goal

def toMessageData (traceCtx : TraceContext) (g : Goal) : MetaM MessageData :=
  g.payload.toMessageData traceCtx

def treeToMessageData (traceCtx : TraceContext) (g : Goal) : MetaM MessageData :=
  formatTreeGoal traceCtx g

end Goal

namespace Rapp

def toMessageData (traceCtx : TraceContext) (r : Rapp) : MetaM MessageData :=
  r.payload.toMessageData traceCtx

def treeToMessageData (traceCtx : TraceContext) (r : Rapp) :
    MetaM MessageData := do
  formatTreeRapp traceCtx r

end Rapp


/-! ## Miscellaneous Functions on Goals -/

namespace Goal

def mayHaveUnexpandedRapp (g : Goal) : m Bool := do pure $
  ¬ g.hasNoUnexpandedUnsafeRule ∧
  ¬ (← g.rapps.anyM λ r => return (← r.get : Rapp).appliedRule.isSafe)

def hasProvableRapp (g : Goal) : m Bool :=
  g.rapps.anyM λ r => return ¬ (← r.get).isUnprovable

def firstProvenRapp? (g : Goal) : m (Option RappRef) :=
  g.rapps.findSomeM? λ rref =>
    return if (← rref.get).isProven then some rref else none

end Goal


/-! ## Propagating Provability/Unprovability/Irrelevance -/

@[inline]
def setIrrelevantImpl : Sum GoalRef RappRef → m Unit :=
  MutAltTree.visitDown'
    (λ gref => do
      let g : Goal ← gref.get
      if g.isIrrelevant
        then return false -- Subtree should already be marked as irrelevant.
        else do
          gref.set $ g.setIrrelevant true
          return true)
    (λ rref => do
      let r : Rapp ← rref.get
      if r.isIrrelevant
        then return false
        else do
          rref.set $ r.setIrrelevant true
          return true)

def GoalRef.setIrrelevant : GoalRef → m Unit :=
  setIrrelevantImpl ∘ Sum.inl

def RappRef.setIrrelevant : RappRef → m Unit :=
  setIrrelevantImpl ∘ Sum.inr

@[inline]
private def setProvenImpl : Sum GoalRef RappRef → m Unit :=
  MutAltTree.visitUp'
    -- Goals are unconditionally marked as proven.
    (λ gref => do
      gref.modify λ (g : Goal) =>
        g.setProofStatus ProofStatus.provenByRuleApplication
      return true)
    -- Rapps are marked as proven only if they are in fact proven, i.e. if all
    -- their subgoals are (marked as) proven. In this case, we also need to
    -- mark siblings of the rapp (and their descendants) as irrelevant.
    (λ rref => do
      let r : Rapp ← rref.get
      if ¬ (← r.allSubgoalsProven)
        then return false
        else do
          rref.set $ r.setProven true
          let siblings ← MutAltTree.siblings rref
          siblings.forM RappRef.setIrrelevant
          return true)

def GoalRef.setProven : GoalRef → m Unit :=
  setProvenImpl ∘ Sum.inl

def RappRef.setProven : RappRef → m Unit :=
  setProvenImpl ∘ Sum.inr

@[inline]
private def setUnprovableImpl : Sum GoalRef RappRef → m Unit :=
  MutAltTree.visitUp'
    -- Goals are marked as unprovable only if they are in fact unprovable, i.e.
    -- if all their rule applications are unprovable and they do not have
    -- unexpanded rule applications. In this case, we also need to mark
    -- siblings of the goal (and their descendants) as irrelevant.
    (λ gref => do
      let g : Goal ← gref.get
      if (← g.mayHaveUnexpandedRapp <||> g.hasProvableRapp)
        then return false
        else do
          gref.set $ g.setUnprovable true
          let siblings ← MutAltTree.siblings gref
          siblings.forM GoalRef.setIrrelevant
          return true)
    -- Rapps are unconditionally marked as unprovable.
    (λ rref => do
      rref.modify λ (r : Rapp) => r.setUnprovable true
      return true)

def GoalRef.setUnprovable : GoalRef → m Unit :=
  setUnprovableImpl ∘ Sum.inl

def RappRef.setUnprovable : RappRef → m Unit :=
  setUnprovableImpl ∘ Sum.inr

end Lean.Aesop
