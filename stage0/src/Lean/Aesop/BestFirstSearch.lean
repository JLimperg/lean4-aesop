/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Aesop.Rule
import Lean.Aesop.Tree
import Lean.Aesop.Util

open Lean
open Lean.Meta
open Lean.Elab
open Lean.Elab.Tactic
open Std (BinomialHeap)

namespace Lean.Aesop.Search

structure ActiveGoal where
  goal : GoalRef
  successProbability : Percent

namespace ActiveGoal

instance : LT ActiveGoal where
  lt g h := g.successProbability < h.successProbability

instance : DecidableRel (α := ActiveGoal) (· < ·) :=
  λ g h =>
    inferInstanceAs (Decidable (g.successProbability < h.successProbability))

def ofGoalRef [Monad m] [MonadLiftT (ST IO.RealWorld) m] (gref : GoalRef) :
    m ActiveGoal :=
  return {
    goal := gref
    successProbability := (← gref.get).successProbability
  }

end ActiveGoal

abbrev ActiveGoalQueue := BinomialHeap ActiveGoal (· > ·)
  -- ActiveGoals are ordered by success probability. Here we want highest
  -- success probability first.

structure Context where
  ruleSet : RuleSet
  mainGoal : MVarId
  rootGoal : GoalRef

structure State where
  activeGoals : ActiveGoalQueue
  nextGoalId : GoalId
  nextRappId : RappId

def mkInitialContextAndState (rs : RuleSet) (mainGoal : MVarId) :
    MetaM (Context × State) := do
  let rootGoalMVar ← copyMVar mainGoal
  let rootGoal :=
    Goal.mk none #[] $ GoalData.mkInitial GoalId.zero rootGoalMVar
      Percent.hundred
  let rootGoalRef ← ST.mkRef rootGoal
  let ctx := {
    ruleSet := rs,
    mainGoal := mainGoal,
    rootGoal := rootGoalRef }
  let state := {
    activeGoals := BinomialHeap.empty.insert
      { goal := rootGoalRef, successProbability := Percent.hundred }
    nextGoalId := GoalId.one
    nextRappId := RappId.zero }
  return (ctx, state)

abbrev SearchM := ReaderT Context $ StateRefT State MetaM

-- Make the compiler generate specialized `pure`/`bind` so we do not have to optimize through the
-- whole monad stack at every use site. May eventually be covered by `deriving`.
instance : Monad SearchM := { inferInstanceAs (Monad SearchM) with }

namespace SearchM

def run (ctx : Context) (state : State) (x : SearchM α) : MetaM (α × State) :=
  StateRefT'.run (ReaderT.run x ctx) state

def run' (ctx : Context) (state : State) (x : SearchM α) : MetaM α :=
  Prod.fst <$> run ctx state x

end SearchM

instance (priority := low) : MonadReaderOf RuleSet SearchM where
  read := Context.ruleSet <$> read

instance (priority := low) : MonadStateOf GoalId SearchM :=
  MonadStateOf.ofLens State.nextGoalId (λ id s => { s with nextGoalId := id })

instance (priority := low) : MonadStateOf RappId SearchM :=
  MonadStateOf.ofLens State.nextRappId (λ id s => { s with nextRappId := id })

instance (priority := low) : MonadStateOf ActiveGoalQueue SearchM :=
  MonadStateOf.ofLens State.activeGoals (λ an s => { s with activeGoals := an })

def readMainGoal : SearchM MVarId :=
  Context.mainGoal <$> read

def readRootGoal : SearchM GoalRef :=
  Context.rootGoal <$> read

def getAndIncrementNextGoalId : SearchM GoalId := do
  let id ← getThe GoalId
  setThe GoalId id.succ
  return id

def getAndIncrementNextRappId : SearchM RappId := do
  let id ← getThe RappId
  setThe RappId id.succ
  return id

/- Overwrites the goal ID from `g`. -/
def addGoal (g : GoalData) (parent : RappRef) : SearchM GoalRef := do
  let id ← getAndIncrementNextGoalId
  let g := { g with id := id }
  let gref ← ST.mkRef $ Goal.mk (some parent) #[] g
  parent.modify λ r => r.addChild gref
  modifyThe ActiveGoalQueue λ q => q.insert
    { goal := gref
      successProbability := g.successProbability }
  return gref

def addGoals [ForIn SearchM γ GoalData] (goals : γ) (parent : RappRef) :
    SearchM (Array GoalRef) := do
  let mut grefs := #[]
  for goal in goals do
    let gref ← addGoal goal parent
    grefs := grefs.push gref
  return grefs

def addGoals' (goals : List MVarId) (successProbability : Percent)
    (parent : RappRef) : SearchM (Array GoalRef) := do
  let goals ← goals.mapM λ g =>
    GoalData.mkInitial GoalId.dummy g successProbability
  addGoals goals parent

/- Overwrites the rapp ID from `r`. -/
def addRapp (r : RappData) (parent : GoalRef) : SearchM RappRef := do
  let id ← getAndIncrementNextRappId
  let r := { r with id := id }
  let rref ← ST.mkRef $ Rapp.mk (some parent) #[] r
  parent.modify λ g => g.addChild rref
  return rref

def runNormRule (goal : MVarId) (r : NormRule) : SearchM MVarId := do
  let subgoals ←
    try runTacticMAsMetaM r.tac.tac goal
    catch e => throwError
      "aesop: normalization rule {r.name} failed with error:\n{e.toMessageData}"
      -- TODO show error context
  match subgoals with
  | [g] => return g
  | _ => throwError "aesop: normalization rule {r.name} did not produce exactly one subgoal"

def runNormalizationSimp (goal : MVarId) (ctx : Simp.Context) : SearchM MVarId := do
  let (some goal) ← simpAll goal ctx | throwError
    "aesop: normalization simp rule solved the goal"
  return goal

def normalizeGoalMVar (goal : MVarId) : SearchM MVarId := do
  let rs ← readThe RuleSet
  let rules ← rs.applicableNormalizationRules goal
  let (preSimpRules, postSimpRules) :=
    rules.partition λ r => r.extra.penalty < (0 : Int)
  let goal ← preSimpRules.foldlM (init := goal) runNormRule
  let simpCtx :=
    { (← Simp.Context.mkDefault) with simpLemmas := rs.normSimpLemmas }
  let goal ← runNormalizationSimp goal simpCtx
  let goal ← postSimpRules.foldlM (init := goal) runNormRule
  return goal

def normalizeGoalIfNecessary (gref : GoalRef) : SearchM Unit :=
  gref.modifyM λ g => do
    let (false) ← pure g.normal? | return g
    trace[Aesop.Steps] "Normalising the goal"
    trace[Aesop.Steps] "Goal before normalisation:{indentD $ MessageData.ofGoal g.goal}"
    let newGoal ← normalizeGoalMVar g.goal
    trace[Aesop.Steps] "Goal after normalisation:{indentD $ MessageData.ofGoal newGoal}"
    return g.setGoal newGoal

def runRule (goal : MVarId) (r : TacticM Unit) :
    SearchM (Option (MVarId × List MVarId)) := do
  let proofMVar ← copyMVar goal
  let subgoals ← (observing? $ runTacticMAsMetaM r proofMVar : MetaM _)
  return subgoals.map (proofMVar, ·)

inductive RuleResult
| proven
| failed
| succeeded

namespace RuleResult

def failed? : RuleResult → Bool
  | failed => true
  | _ => false

end RuleResult

def applyRegularRule (parentRef : GoalRef) (rule : RegularRule) :
    SearchM RuleResult := do
  let state ← getThe State
  let parent ← parentRef.get
  let result ← runRule parent.goal rule.tac.tac
  let successProbability :=
    parent.successProbability * rule.successProbability
  match result with
  | some (proofMVar, []) => do
    -- Rule succeeded and did not generate subgoals, meaning the parent
    -- node is proved.
    trace[Aesop.Steps] "Rule succeeded without subgoals. Goal is proved."
    let r :=
      { RappData.mkInitial RappId.dummy rule successProbability
          (mkMVar proofMVar) with
        proven? := true }
    let _ ← addRapp r parentRef
    parentRef.setProven
    return RuleResult.proven
  | some (proofMVar, subgoals) => do
    -- Rule succeeded and generated subgoals.
    let r :=
      RappData.mkInitial RappId.dummy rule successProbability (mkMVar proofMVar)
    let rappRef ← addRapp r parentRef
    let newGoals ← addGoals' subgoals successProbability rappRef
    trace[Aesop.Steps] m!"Rule succeeded. New goals:" ++ MessageData.node
      (← newGoals.mapM λ g => do (← g.get).toMessageData TraceContext.steps)
      -- TODO performance gotcha: monadic expression gets lifted outside trace
      -- TODO compress goal display
    return RuleResult.succeeded
  | none => do
    -- Rule did not succeed.
    parentRef.modify λ (g : Goal) => g.setFailedRapps $ rule :: g.failedRapps
    parentRef.setUnprovable
    return RuleResult.failed

def applyFirstSafeRule (gref : GoalRef) : SearchM RuleResult := do
  let g ← gref.get
  let rules ← (← readThe RuleSet).applicableSafeRules g.goal
  trace[Aesop.Steps] m!"Selected safe rules:" ++ MessageData.node #[]
  trace[Aesop.Steps] "Trying safe rules"
  let mut result := RuleResult.failed
  for r in rules do
    trace[Aesop.Steps] "Trying {r}"
    result ← applyRegularRule gref $ RegularRule'.safe r
    if result.failed? then continue else break
  return result

def selectRules (gref : GoalRef) : SearchM (List UnsafeRule) := do
  let g ← gref.get
  match g.unsafeQueue with
  | some rules => return rules
  | none => do
    let rs ← readThe RuleSet
    let rules := (← rs.applicableUnsafeRules g.goal).toList
    gref.set $ g.setUnsafeQueue rules
    trace[Aesop.Steps] m!"Selected unsafe rules:" ++
      MessageData.node (rules.map toMessageData |>.toArray)
    return rules

def applyFirstUnsafeRule (gref : GoalRef) : SearchM Bool := do
  let rules ← selectRules gref
  trace[Aesop.Steps] "Trying unsafe rules"
  let mut result := RuleResult.failed
  let mut remainingRules := rules
  for r in rules do
    trace[Aesop.Steps] "Trying {r}"
    remainingRules := remainingRules.tail!
    result ← applyRegularRule gref (RegularRule'.unsafe r)
    if result.failed? then continue else break
  gref.modify λ g => g.setUnsafeQueue remainingRules
  trace[Aesop.Steps] m!"Remaining unsafe rules:" ++ MessageData.node
    (remainingRules.map toMessageData |>.toArray)
  if result.failed? && remainingRules.isEmpty then
    trace[Aesop.Steps] "Goal is unprovable"
    gref.setUnprovable
  return ¬ remainingRules.isEmpty

def expandGoal (gref : GoalRef) : SearchM Bool := do
  normalizeGoalIfNecessary gref
  let result ← applyFirstSafeRule gref
  if result.failed?
    then applyFirstUnsafeRule gref
    else pure false

def expandNextGoal : SearchM Unit := do
  let some (activeGoal, activeGoals) ← pure (← getThe ActiveGoalQueue).removeMin
    | throwError "aesop/expandNextGoal: internal error: no active goals left"
  setThe ActiveGoalQueue activeGoals
  let gref := activeGoal.goal
  let g ← gref.get
  trace[Aesop.Steps] m!"Expanding {← g.payload.toMessageData TraceContext.steps}"
    -- TODO possible performance problem due to non-lazy trace:
    -- https://leanprover.zulipchat.com/#narrow/stream/270676-lean4/topic/.5Brfc.5D.20make.20trace.5B.2E.2E.2E.5D.20lazy
  unless g.proven? ∨ g.unprovable? ∨ g.irrelevant? do
    let hasMoreRules ← expandGoal gref
    if hasMoreRules then do
      let ag ← ActiveGoal.ofGoalRef gref
      modifyThe ActiveGoalQueue λ q => q.insert ag

def finishIfProven : SearchM Bool := do
  let root ← readRootGoal
  let (true) ← pure (← root.get).proven?
    | return false
  root.linkProofs
  let prf ← root.extractProof
  assignExprMVar (← readMainGoal) prf
  return true

partial def search : SearchM Unit := do
  let root ← readRootGoal
  let (false) ← pure (← root.get).unprovable?
    | throwError "aesop: failed to prove the goal"
  let done ← finishIfProven
  if ¬ done then
    expandNextGoal
    search

end Search

def search' (rs : RuleSet) (mainGoal : MVarId) : TermElabM Unit := do
  let (ctx, state) ← Search.mkInitialContextAndState rs mainGoal
  let _ ← Search.search.run ctx state

def search (rs : RuleSet) : TacticM Unit := do
  search' rs (← getMainGoal)

end Lean.Aesop
