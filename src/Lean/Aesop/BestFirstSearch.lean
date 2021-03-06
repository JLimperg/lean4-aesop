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

namespace Lean.Aesop

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
  let rootGoal := Goal.mk none #[] $
    GoalData.mkInitial GoalId.zero mainGoal Percent.hundred
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

namespace SearchM

-- Make the compiler generate specialized `pure`/`bind` so we do not have to
-- optimize through the whole monad stack at every use site.
instance : Monad SearchM := { inferInstanceAs (Monad SearchM) with }

instance (priority := low) : MonadReaderOf RuleSet SearchM where
  read := return (← read).ruleSet

instance (priority := low) : MonadWithReaderOf RuleSet SearchM where
  withReader f := withReader (λ ctx => { ctx with ruleSet := f ctx.ruleSet })

instance (priority := low) : MonadStateOf GoalId SearchM :=
  MonadStateOf.ofLens State.nextGoalId (λ id s => { s with nextGoalId := id })

instance (priority := low) : MonadStateOf RappId SearchM :=
  MonadStateOf.ofLens State.nextRappId (λ id s => { s with nextRappId := id })

instance (priority := low) : MonadStateOf ActiveGoalQueue SearchM :=
  MonadStateOf.ofLens State.activeGoals (λ x s => { s with activeGoals := x })

protected def run (ctx : Context) (state : State) (x : SearchM α) :
    MetaM (α × State) :=
  StateRefT'.run (ReaderT.run x ctx) state

protected def run' (ctx : Context) (state : State) (x : SearchM α) :
    MetaM α :=
  return (← SearchM.run ctx state x).fst

end SearchM

-- The following functions let us run MetaM actions in the context of a rapp or
-- goal. Rapps save the metavariable context in which they were run by storing a
-- `Meta.SavedState`. When we, for example, apply a rule to a goal, we run the
-- rule's action in the metavariable context of the goal (which is the
-- metavariable context of the goal's parent rapp). The resulting metavariable
-- context, in which the goal mvar is assigned to an expression generated by the
-- rule, then becomes the metavariable context of the rule's rapp.
--
-- To save and restore metavariable contexts, we use the `MonadBacktrack MetaM`
-- instance. This means that some elements of the state are persistent, notably
-- caches and trace messages. These become part of the global state.
--
-- The environment is not persistent. This means that modifications of the
-- environment made by a rule are not visible in the global state and are reset
-- once the tactic exits. As a result, rules which modify the environment are
-- likely to fail.

def runMetaM (s : Meta.SavedState) (x : MetaM α) :
    MetaM (α × Meta.SavedState) :=
  withoutModifyingState do
    restoreState s
    let result ← x
    let finalState ← saveState
    return (result, finalState)

@[inline]
def runMetaMInGlobalState (x : MetaM α) : MetaM (α × Meta.SavedState) :=
  withoutModifyingState do
    let result ← x
    let finalState ← saveState
    return (result, finalState)

@[inline]
def runMetaMModifyingGlobalState (x : MetaM α) : MetaM α :=
  x

@[inline]
def Rapp.runMetaM (x : MetaM α) (r : Rapp) : MetaM (α × Meta.SavedState) :=
  Lean.Aesop.runMetaM r.state x

@[inline]
def Rapp.runMetaMModifying (x : MetaM α) (r : Rapp) : MetaM (α × Rapp) := do
  let (result, finalState) ← r.runMetaM x
  return (result, r |>.setState finalState)

@[inline]
def RappRef.runMetaM (x : MetaM α) (rref : RappRef) :
    MetaM (α × Meta.SavedState) := do
  (← rref.get).runMetaM x

@[inline]
def RappRef.runMetaMModifying (x : MetaM α) (rref : RappRef) : MetaM α := do
  let (result, r) ← (← rref.get).runMetaMModifying x
  rref.set r
  return result

@[inline]
def Goal.runMetaMInParentState (x : MetaM α) (g : Goal) :
    MetaM (α × Meta.SavedState) :=
  match g.parent with
  | none => runMetaMInGlobalState x
  | some rref => RappRef.runMetaM x rref

@[inline]
def Goal.runMetaMModifyingParentState (x : MetaM α) (g : Goal) :
    MetaM α :=
  match g.parent with
  | none => runMetaMModifyingGlobalState x
  | some rref => RappRef.runMetaMModifying x rref

@[inline]
def GoalRef.runMetaMInParentState (x : MetaM α) (gref : GoalRef) :
    MetaM (α × Meta.SavedState) := do
  (← gref.get).runMetaMInParentState x

@[inline]
def GoalRef.runMetaMModifyingParentState (x : MetaM α) (gref : GoalRef) :
    MetaM α := do
  (← gref.get).runMetaMModifyingParentState x

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

def runNormRule (goal : MVarId) (r : NormRule) : MetaM (Option MVarId) := do
  let subgoals ←
    try runTacticMAsMetaM r.tac.tac goal
    catch e => throwError
      m!"aesop: normalization rule {r.name} failed with error:\n  {e.toMessageData}\nIt was run on this goal:" ++
      MessageData.node #[MessageData.ofGoal goal]
  match subgoals with
  | [] => return none
  | [g] => return some g
  | _ => throwError
    m!"aesop: normalization rule {r.name} produced more than one subgoal when run on this goal:" ++
    MessageData.node #[MessageData.ofGoal goal]

def runNormalizationSimp (goal : MVarId) (ctx : Simp.Context) :
    MetaM (Option MVarId) := do
  let (some goal) ← simpAll goal ctx | return none
  return some goal

def runNormRules (goal : MVarId) (rules : Array NormRule) :
    MetaM (Option MVarId) := do
  let mut goal := goal
  for r in rules do
    trace[Aesop.Steps.Normalization] "Running {r}"
    let (some goal') ← runNormRule goal r | return none
    goal := goal'
    trace[Aesop.Steps.Normalization] "Goal after {r}:{indentD $ MessageData.ofGoal goal}"
  return goal

def normalizeGoalMVar (rs : RuleSet) (goal : MVarId) : MetaM (Option MVarId) := do
  let rules ← rs.applicableNormalizationRules goal
  let (preSimpRules, postSimpRules) :=
    rules.partition λ r => r.extra.penalty < (0 : Int)
  let (some goal) ← runNormRules goal preSimpRules | return none
  let simpCtx :=
    { (← Simp.Context.mkDefault) with simpLemmas := rs.normSimpLemmas }
  trace[Aesop.Steps.Normalization] "Running normalization simp"
  let (some goal) ← runNormalizationSimp goal simpCtx | return none
  trace[Aesop.Steps.Normalization]
    "Goal after normalization simp:{indentD $ MessageData.ofGoal goal}"
  runNormRules goal postSimpRules

-- Returns true if the goal was solved by normalisation.
def normalizeGoalIfNecessary (gref : GoalRef) : SearchM Bool := do
  let g ← gref.get
  let (false) ← pure g.isNormal | return false
  trace[Aesop.Steps] "Normalising the goal"
  let rs ← readThe RuleSet
  let newGoal? ← gref.runMetaMModifyingParentState do
    trace[Aesop.Steps] "Goal before normalisation:{indentD $ MessageData.ofGoal g.goal}"
    let newGoal? ← normalizeGoalMVar rs g.goal
    match newGoal? with
    | some newGoal =>
      trace[Aesop.Steps] "Goal after normalisation:{indentD $ MessageData.ofGoal newGoal}"
    | none =>
      trace[Aesop.Steps] "Normalisation solved the goal"
    return newGoal?
  match newGoal? with
  | some newGoal =>
    let g := g.setGoal newGoal
    let g := g.setNormal true
    gref.set g
    return false
  | none =>
    let g := g.setProofStatus ProofStatus.provenByNormalization
    let g := g.setNormal true
    gref.set g
    -- Propagate the fact that g was proven up the tree. We start with the
    -- parent rule application of g (if any). If we were to start with g,
    -- setProven would set the proof status of g to provenByRuleApplication.
    let (some parentRef) ← g.parent | return true
    RappRef.setProven parentRef
    return true

inductive RuleResult
| proven
| failed
| succeeded

namespace RuleResult

def failed? : RuleResult → Bool
  | failed => true
  | _ => false

end RuleResult

def runRule (g : Goal) (rule : TacticM Unit) :
    SearchM (Option (List MVarId × Meta.SavedState)) := do
  let (result, finalState) ← g.runMetaMInParentState $
    observing? $ runTacticMAsMetaM rule g.goal
  return result.map (·, finalState)

def applyRegularRule (parentRef : GoalRef) (rule : RegularRule) :
    SearchM RuleResult := do
  let parent ← parentRef.get
  let successProbability :=
    parent.successProbability * rule.successProbability
  let result? ← runRule parent rule.tac.tac
  match result? with
  | some ([], finalState) => do
    -- Rule succeeded and did not generate subgoals, meaning the parent
    -- node is proved.
    trace[Aesop.Steps] "Rule succeeded without subgoals. Goal is proven."
    let r :=
      { RappData.mkInitial RappId.dummy finalState rule successProbability with
        isProven := true }
    let _ ← addRapp r parentRef
    parentRef.setProven
    return RuleResult.proven
  | some (subgoals, finalState) => do
    -- Rule succeeded and generated subgoals.
    let r :=
      RappData.mkInitial RappId.dummy finalState rule successProbability
    let rappRef ← addRapp r parentRef
    let newGoals ← addGoals' subgoals successProbability rappRef
    if (← isTracingEnabledFor `Aesop.Steps) then
      _ ← rappRef.runMetaM do
        trace[Aesop.Steps] m!"Rule succeeded. New rapp:" ++ MessageData.node
          #[← (← rappRef.get).payload.toMessageData TraceContext.steps]
        trace[Aesop.Steps] m!"New goals:" ++ MessageData.node
          (← newGoals.mapM λ g => do (← g.get).toMessageData TraceContext.steps)
      -- TODO compress goal display
    return RuleResult.succeeded
  | none => do
    -- Rule did not succeed.
    parentRef.modify λ (g : Goal) => g.setFailedRapps $ rule :: g.failedRapps
    parentRef.setUnprovable
    return RuleResult.failed

def applyFirstSafeRule (gref : GoalRef) : SearchM RuleResult := do
  let g ← gref.get
  let (none) ← g.unsafeQueue
    | return RuleResult.failed
    -- If the unsafe rules have been selected, we have already tried all the
    -- safe rules.
  let ruleSet ← readThe RuleSet
  let (rules, _) ← g.runMetaMInParentState $ ruleSet.applicableSafeRules g.goal
  trace[Aesop.Steps] m!"Selected safe rules:" ++ MessageData.node
    (rules.map toMessageData)
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
    let ruleSet ← readThe RuleSet
    let (rules, _) ← g.runMetaMInParentState $
      ruleSet.applicableUnsafeRules g.goal
    let rules := rules.toList
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

-- Returns true if the goal should be reinserted into the goal queue.
def expandGoal (gref : GoalRef) : SearchM Bool := do
  let (false) ← normalizeGoalIfNecessary gref |
    -- Goal was already proven by normalisation.
    return false
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
  if (← isTracingEnabledFor `Aesop.Steps) then
    _ ← g.runMetaMInParentState do
      trace[Aesop.Steps] "Expanding {← g.payload.toMessageData TraceContext.steps}"
  if g.isProven ∨ g.isUnprovable ∨ g.isIrrelevant then
    trace[Aesop.Steps] "Skipping goal since it is already proven, unprovable or irrelevant."
  else do
    let hasMoreRules ← expandGoal gref
    if hasMoreRules then do
      let ag ← ActiveGoal.ofGoalRef gref
      modifyThe ActiveGoalQueue λ q => q.insert ag

mutual
  -- Let g be the goal in gref. Assuming that we are in the meta context of g's
  -- parent and that g was proven by a rule application, this function retrieves
  -- a proof p of g from the first proven rule application and assigns g.goal :=
  -- p.
  --
  -- If g was proven by normalisation, this function does nothing. (g.goal
  -- should then already be assigned to a proof in the meta context of g's
  -- parent.)
  private partial def linkProofsGoal (gref : GoalRef) : MetaM Unit := do
    let g ← gref.get
    match g.proofStatus with
    | ProofStatus.unproven => throwError
      "aesop/linkProofs: internal error: goal {g.id} marked as unproven"
    | ProofStatus.provenByNormalization =>
      return ()
    | ProofStatus.provenByRuleApplication => do
      let (some provenRapp) ← g.firstProvenRapp? | throwError
        "aesop/linkProofs: internal error: goal {g.id} marked as proven but does not have a proven rule application"
      let proof ← linkProofsRapp provenRapp
      if (← isExprMVarAssigned g.goal) then do throwError
        "aesop/linkProofs: internal error: goal metavariable of goal {g.id} already assigned.\nPrevious assignment:{indentExpr (← getExprMVarAssignment? g.goal).get!}"
      let goalMVar := g.goal
      -- TODO provide flag to omit these checks
      withMVarContext goalMVar do
        check proof <|> throwError
          "aesop/linkProofs: internal error: reconstructed proof of goal {g.id} is type-incorrect"
        let (true) ← isDefEq (← getMVarType goalMVar) (← inferType proof)
          | throwError "aesop/linkProofs: internal error: reconstructed proof of goal {g.id} has the wrong type"
      assignExprMVar goalMVar proof

  -- Let r be the rapp in rref. This function assigns the goal metavariables of
  -- the subgoals of r (in the meta context of r). Then it returns r's parent
  -- goal with metavariables instantiated. The result is a guaranteed
  -- metavariable-free proof of r's parent goal.
  private partial def linkProofsRapp (rref : RappRef) : MetaM Expr :=
    rref.runMetaMModifying do
      let r ← rref.get
      r.subgoals.forM linkProofsGoal
      let proof ← instantiateMVars $ mkMVar (← r.parent!.get).goal
      if proof.hasMVar then throwError
        "aesop/linkProofs: internal error: proof extracted from rapp {r.id} contains unassigned metavariables"
      return proof
end

-- Let g be the goal in gref. Assuming that g is proven, this function assigns
-- the goal metavariable of g to a proof of g. In the process, various
-- metavariables in the tree are also assigned, so this function can only be
-- called once.
def GoalRef.linkProofs (gref : GoalRef) : MetaM Unit := linkProofsGoal gref

def finishIfProven : SearchM Bool := do
  let root ← readRootGoal
  let (true) ← pure (← root.get).isProven
    | return false
  trace[Aesop.Steps] "Root node is proven. Linking proofs."
  runMetaMModifyingGlobalState root.linkProofs
  if (← isTracingEnabledFor `Aesop.Steps.FinalProof) then do
    let mainGoal ← readMainGoal
    _ ← runMetaMInGlobalState $ withMVarContext mainGoal do
      trace[Aesop.Steps.FinalProof]
        "Final proof:{indentExpr (← instantiateMVars $ mkMVar mainGoal)}"
  return true

partial def search' : SearchM Unit := do
  let root ← readRootGoal
  let (false) ← pure (← root.get).isUnprovable
    | throwError "aesop: failed to prove the goal"
  let done ← finishIfProven
  if ¬ done then
    expandNextGoal
    search'

def search (rs : RuleSet) (mainGoal : MVarId) : MetaM Unit := do
  let (ctx, state) ← mkInitialContextAndState rs mainGoal
  search'.run' ctx state

def searchTactic (rs : RuleSet) : TacticM Unit :=
  liftMetaTactic λ goal => search rs goal *> pure []

end Lean.Aesop
