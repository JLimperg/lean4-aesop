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

instance : ToFormat GoalId where
  format n := format n.toNat

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

instance : ToFormat RappId where
  format n := format n.toNat

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


-- Invariant: if proofStatus = provenByNormalization then
-- normalizationProof ≠ none
structure GoalData : Type where
  id : GoalId
  goal : MVarId
  successProbability : Percent
  normalizationProof : Option Expr
  failedRapps : List RegularRule
  unsafeQueue : Option (List UnsafeRule)
  proofStatus : ProofStatus
  isUnprovable : Bool
  isIrrelevant : Bool
  deriving Inhabited

namespace GoalData

def isNormal (g : GoalData) : Bool :=
  g.normalizationProof.isSome

def isProven (g : GoalData) : Bool :=
  g.proofStatus.isProven

protected structure MessageInfo where
  showGoal : Bool
  showUnsafeQueue : Bool
  showFailedRapps : Bool
  deriving Inhabited

open GoalData (MessageInfo)

variable [Monad m] [MonadOptions m]

protected def getMessageInfo (traceCtx : TraceContext) : m MessageInfo := do
  return {
    showGoal := (← TraceOption.showGoals.get traceCtx)
    showUnsafeQueue := (← TraceOption.showUnsafeQueues.get traceCtx)
    showFailedRapps := (← TraceOption.showFailedRapps.get traceCtx)
  }

open MessageData in
protected def toMessageData' (minfo : MessageInfo) (g : GoalData) : MessageData :=
  let unsafeQueueLength :=
    match g.unsafeQueue with
    | none => f!"<not selected>"
    | some q => format q.length
  m!"Goal {g.id} [{g.successProbability.toHumanString}]" ++ nodeFiltering #[
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

protected def toMessageData (traceCtx : TraceContext) (g : GoalData) :
    m MessageData :=
  return g.toMessageData' (← GoalData.getMessageInfo traceCtx)

protected def mkInitial (id : GoalId) (goal : MVarId) (successProbability : Percent) :
    GoalData where
  id := id
  goal := goal
  successProbability := successProbability
  normalizationProof := none
  failedRapps := []
  unsafeQueue := none
  proofStatus := ProofStatus.unproven
  isUnprovable := false
  isIrrelevant := false

end GoalData

structure RappData : Type where
  id : RappId
  appliedRule : RegularRule
  successProbability : Percent
  proof : Expr
  proven? : Bool
  unprovable? : Bool
  irrelevant? : Bool
  deriving Inhabited

namespace RappData

protected structure MessageInfo where
  showProof : Bool

open RappData (MessageInfo)

variable [Monad m] [MonadOptions m]

protected def getMessageInfo (traceCtx : TraceContext) : m MessageInfo :=
  return {
    showProof := (← TraceOption.showProofs.get traceCtx)
  }

open MessageData in
protected def toMessageData' (minfo : MessageInfo) (r : RappData) : MessageData :=
  m!"Rule application {r.id} [{r.successProbability}]" ++ nodeFiltering #[
    toMessageData r.appliedRule,
    join
      [ m!"proven: {r.proven?.toYesNo} | ",
        m!"unprovable: {r.unprovable?.toYesNo} | ",
        m!"irrelevant: {r.irrelevant?.toYesNo}" ],
    if ¬ minfo.showProof then none else
      m!"Proof:{indentD r.proof}" ]

protected def toMessageData (traceCtx : TraceContext) (r : RappData) :
    m MessageData :=
  return r.toMessageData' (← RappData.getMessageInfo traceCtx)

protected def mkInitial (id : RappId) (appliedRule : RegularRule)
  (successProbability : Percent) (proof : Expr) : RappData where
  id := id
  appliedRule := appliedRule
  successProbability := successProbability
  proof := proof
  proven? := false
  unprovable? := false
  irrelevant? := false

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
def normalizationProof (g : Goal) : Option Expr :=
  g.payload.normalizationProof

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
def setNormalizationProof (normalizationProof : Expr) (g : Goal) : Goal :=
  g.modifyPayload λ d => { d with normalizationProof := normalizationProof }

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

/-! ### Miscellaneous -/

@[inline]
def isNormal (g : Goal) : Bool :=
  g.payload.isNormal

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
def subgoals (r : Rapp) : Array GoalRef :=
  r.children

@[inline]
def id (r : Rapp) : RappId :=
  r.payload.id

@[inline]
def appliedRule (r : Rapp) : RegularRule :=
  r.payload.appliedRule

@[inline]
def successProbability (r : Rapp) : Percent :=
  r.payload.successProbability

@[inline]
def proof (r : Rapp) : Expr :=
  r.payload.proof

@[inline]
def proven? (r : Rapp) : Bool :=
  r.payload.proven?

@[inline]
def unprovable? (r : Rapp) : Bool :=
  r.payload.unprovable?

@[inline]
def irrelevant? (r : Rapp) : Bool :=
  r.payload.irrelevant?

-- Setters

@[inline]
def setId (id : RappId) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with id := id }

@[inline]
def setAppliedRule (appliedRule : RegularRule) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with appliedRule := appliedRule }

@[inline]
def setSuccessProbability (successProbability : Percent) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with successProbability := successProbability }

@[inline]
def setProof (proof : Expr) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with proof := proof }

@[inline]
def setProven? (proven? : Bool) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with proven? := proven? }

@[inline]
def setUnprovable? (unprovable? : Bool) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with unprovable? := unprovable? }

@[inline]
def setIrrelevant? (irrelevant? : Bool) (r : Rapp) : Rapp :=
  r.modifyPayload λ r => { r with irrelevant? := irrelevant? }

/-! ### Miscellaneous -/

def allSubgoalsProven (r : Rapp) : m Bool :=
  r.subgoals.allM λ subgoal => return (← subgoal.get).isProven

end Rapp

/-! ## Formatting -/

mutual
  private partial def formatTreeGoal (goalMInfo : GoalData.MessageInfo)
      (rappMInfo : RappData.MessageInfo) (goal : Goal) : m MessageData := do
    let goalMsg := goal.payload.toMessageData' goalMInfo
    let childrenMsgs ← goal.rapps.mapM λ c => do
      formatTreeRapp goalMInfo rappMInfo (← c.get)
    return goalMsg ++ indentD (MessageData.node childrenMsgs)

  private partial def formatTreeRapp (goalMInfo : GoalData.MessageInfo)
      (rappMInfo : RappData.MessageInfo) (rapp : Rapp) : m MessageData := do
    let rappMsg := rapp.payload.toMessageData' rappMInfo
    let childrenMsgs ← rapp.subgoals.mapM λ c => do
      formatTreeGoal goalMInfo rappMInfo (← c.get)
    return rappMsg ++ indentD (MessageData.node childrenMsgs)
end

namespace Goal

def toMessageData {m} [Monad m] [MonadOptions m] (traceCtx : TraceContext)
    (g : Goal) : m MessageData := do
  g.payload.toMessageData traceCtx

@[inline]
def treeToMessageData' :
    GoalData.MessageInfo → RappData.MessageInfo → Goal → m MessageData :=
  formatTreeGoal

def treeToMessageData [MonadOptions m] (traceCtx : TraceContext) (g : Goal) :
    m MessageData := do
  treeToMessageData' (← GoalData.getMessageInfo traceCtx)
    (← RappData.getMessageInfo traceCtx) g

end Goal

namespace Rapp

def toMessageData {m} [Monad m] [MonadOptions m] (traceCtx : TraceContext)
    (r : Rapp) : m MessageData := do
  r.payload.toMessageData traceCtx

@[inline]
def treeToMessageData' :
    GoalData.MessageInfo → RappData.MessageInfo → Rapp → m MessageData :=
  formatTreeRapp

def treeToMessageData [MonadOptions m] (traceCtx : TraceContext) (r : Rapp) :
    m MessageData := do
  treeToMessageData' (← GoalData.getMessageInfo traceCtx)
    (← RappData.getMessageInfo traceCtx) r

end Rapp

/-! ## Miscellaneous Functions on Goals -/

namespace Goal

def mayHaveUnexpandedRapp (g : Goal) : m Bool := do pure $
  ¬ g.hasNoUnexpandedUnsafeRule ∧
  ¬ (← g.rapps.anyM λ r => return (← r.get : Rapp).appliedRule.isSafe)

def hasProvableRapp (g : Goal) : m Bool :=
  g.rapps.anyM λ r => return ¬ (← r.get).unprovable?

end Goal


/-! ## Proof Extraction -/

namespace GoalRef

/- May only be called *once*. The given goal must be proven. -/
partial def linkProofs (gref : GoalRef) : MetaM Unit := do
  let g ← gref.get
  match g.proofStatus with
  | ProofStatus.unproven =>
    throwError "aesop/linkProofs: internal error: goal {g.id} marked as unproven"
  | ProofStatus.provenByNormalization =>
    return ()
  | ProofStatus.provenByRuleApplication =>
    let provenRapp? ← g.rapps.findSomeM? λ r => do
      let r ← r.get
      return if r.proven? then some r else none
    let (some provenRapp) ← pure provenRapp? | throwError
      "aesop/linkProofs: internal error: goal {g.id} marked as proven but does not have a proven rule application"
    provenRapp.subgoals.forM linkProofs
    let goalMVar := g.goal
    checkNotAssigned `aesop goalMVar
    -- TODO check for type-correct assignment?
    -- let goalType ← getMVarType goalMVar
    -- let (true) ← isDefEq goalType r.proof | throwError
    --   "aesop/linkProofs: internal error: proof of rule application {r.id} did not unify with the goal of its parent node {g.id}"
    assignExprMVar goalMVar provenRapp.proof

end GoalRef

/-! ## Propagating Provability/Unprovability/Irrelevance -/

@[inline]
def Internal.setIrrelevant : Sum GoalRef RappRef → m Unit :=
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
      if r.irrelevant?
        then return false
        else do
          rref.set $ r.setIrrelevant? true
          return true)

def GoalRef.setIrrelevant : GoalRef → m Unit :=
  Internal.setIrrelevant ∘ Sum.inl

def RappRef.setIrrelevant : RappRef → m Unit :=
  Internal.setIrrelevant ∘ Sum.inr

@[inline]
def Internal.setProven : Sum GoalRef RappRef → m Unit :=
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
          rref.set $ r.setProven? true
          let siblings ← MutAltTree.siblings rref
          siblings.forM RappRef.setIrrelevant
          return true)

def GoalRef.setProven : GoalRef → m Unit :=
  Internal.setProven ∘ Sum.inl

def RappRef.setProven : RappRef → m Unit :=
  Internal.setProven ∘ Sum.inr

@[inline]
def Internal.setUnprovable : Sum GoalRef RappRef → m Unit :=
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
      rref.modify λ (r : Rapp) => r.setUnprovable? true
      return true)

def GoalRef.setUnprovable : GoalRef → m Unit :=
  Internal.setUnprovable ∘ Sum.inl

def RappRef.setUnprovable : RappRef → m Unit :=
  Internal.setUnprovable ∘ Sum.inr

end Lean.Aesop
