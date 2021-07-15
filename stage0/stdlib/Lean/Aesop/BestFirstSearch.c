// Lean compiler output
// Module: Lean.Aesop.BestFirstSearch
// Imports: Init Lean.Aesop.Rule Lean.Aesop.Tree Lean.Aesop.Util
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Aesop_Search_expandNextGoal___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormRule___closed__3;
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__2;
lean_object* l_Lean_Aesop_Search_selectRules___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addRapp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_hRank___rarg(lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__2;
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__1;
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__1;
static lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___closed__1;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__3;
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__1;
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_linkProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Aesop_Search_applyRegularRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar_match__1(lean_object*);
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__1(lean_object*);
lean_object* l_Lean_Aesop_Search_addGoals___at_Lean_Aesop_Search_addGoals_x27___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_selectRules___closed__2;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleSet_applicableSafeRules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2;
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addGoals_x27(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_SearchM_run(lean_object*);
lean_object* l_Lean_Aesop_Search_selectRules___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_finishIfProven_match__1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleSet_applicableNormalizationRules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1___closed__1;
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__5;
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_mkDefault___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM;
static lean_object* l_Lean_Aesop_Search_runNormRule___closed__4;
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_hasProvableRapp___at_Lean_Aesop_Search_applyRegularRule___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__2;
lean_object* l_Lean_Aesop_Search_expandGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_mkInitialContextAndState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix(uint8_t);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_expandNextGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Aesop_GoalData_normal_x3f(lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4;
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId___boxed(lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__1;
lean_object* l_Lean_Aesop_search_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__3;
uint8_t l_Lean_Aesop_RegularRule_x27_isSafe___rarg(lean_object*);
extern lean_object* l_Lean_Aesop_RappId_dummy;
static lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__4;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_instToFormatNormRule_x27___spec__1(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_search_x27___closed__1;
lean_object* l_Lean_Aesop_GoalRef_extractProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_selectRules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5;
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1(lean_object*);
static uint8_t l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_SearchM_run_x27(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__8;
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Aesop_Search_mkInitialContextAndState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleSet_applicableUnsafeRules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__2;
static lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3;
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__6;
static lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___closed__4;
extern lean_object* l_Lean_Aesop_GoalId_dummy;
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___closed__2;
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormRule_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId___boxed(lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__1;
lean_object* l_Lean_Aesop_Search_SearchM_run_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule_match__1(lean_object*);
lean_object* l_Lean_Aesop_Search_SearchM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormalizationSimp___closed__2;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_addGoals_x27___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__2;
static lean_object* l_Lean_Aesop_Search_runNormRule___closed__2;
static lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1___closed__3;
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__3;
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_addGoals_x27___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId(lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadReaderOfRuleSetSearchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__5;
static lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__1;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_Search_applyRegularRule___spec__22(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormRule___closed__1;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_search_x27_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_expandNextGoal___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_runNormalizationSimp___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Float_decLt(double, double);
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__3;
lean_object* l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormalizationSimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addGoals_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_KVMap_getBool(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__1;
static lean_object* l_Lean_Aesop_Search_addGoal___closed__2;
lean_object* l_Lean_Aesop_Search_addGoals___at_Lean_Aesop_Search_addGoals_x27___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addGoals___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2;
lean_object* l_Lean_Aesop_Search_runNormRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_expandNextGoal___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__2;
lean_object* l_Lean_Aesop_Search_runNormalizationSimp_match__1(lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormRule_match__1(lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_selectRules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_selectRules___closed__1;
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_runTacticMAsMetaM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1;
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__2(lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_expandNextGoal___closed__3;
lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Goal_hasProvableRapp___at_Lean_Aesop_Search_applyRegularRule___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__9;
static lean_object* l_Lean_Aesop_Search_addGoal___closed__1;
static lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__1;
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__3;
lean_object* l_Lean_Aesop_Search_search(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2;
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__4;
static lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1;
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___at_Lean_Aesop_Search_expandNextGoal___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1;
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__4;
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f___at_Lean_Aesop_Search_applyRegularRule___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
lean_object* l_Std_BinomialHeapImp_head_x3f___at_Lean_Aesop_Search_expandNextGoal___spec__1(lean_object*);
lean_object* l_Lean_Aesop_GoalData_mkInitial(lean_object*, lean_object*, double);
static lean_object* l_Lean_Aesop_Search_applyRegularRule___closed__1;
lean_object* l_Std_fmt___at_Lean_Aesop_instToFormatSafeRule_x27___spec__1(uint8_t);
lean_object* l_Lean_Aesop_Search_addGoals(lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2;
lean_object* l_Lean_Aesop_Search_ActiveGoal_instLTActiveGoal;
lean_object* l_Lean_Aesop_Search_runRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__2;
static lean_object* l_Lean_Aesop_Search_applyRegularRule___closed__2;
static lean_object* l_Lean_Aesop_Search_expandNextGoal___closed__4;
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1___boxed(lean_object**);
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormalizationSimp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_search_x27_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Aesop_search(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2;
extern lean_object* l_Lean_Aesop_GoalId_zero;
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar_match__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Aesop_RappId_zero;
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule___boxed__const__1;
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_Search_expandNextGoal___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__18(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_Search_RuleResult_failed_x3f(uint8_t);
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f___boxed(lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RegularRule_x27_tac___rarg(lean_object*);
lean_object* l_Lean_Aesop_Search_finishIfProven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1;
static lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__2;
lean_object* l_Lean_Aesop_Search_readMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Percent_toHumanString(double);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__1;
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__10;
static lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4;
lean_object* l_Lean_Aesop_Search_finishIfProven_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addGoals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__6;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_readRootGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__6;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyRegularRule___closed__5;
lean_object* l_Lean_Aesop_Search_expandNextGoal_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__2;
lean_object* l_Lean_Meta_simpAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_selectRules_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyRegularRule___closed__3;
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Aesop_GoalId_one;
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_finishIfProven_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadReaderOfRuleSetSearchM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__4;
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_Search_applyRegularRule___spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_selectRules_match__1(lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_expandNextGoal_match__1(lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__2;
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef(lean_object*);
lean_object* l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1(lean_object*);
lean_object* l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1(double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_search___closed__1;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__1;
lean_object* l_Lean_Aesop_search_x27_match__2(lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_copyMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_combine___at_Lean_Aesop_Search_mkInitialContextAndState___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__1;
lean_object* l_Lean_Aesop_Search_readRootGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RegularRule_x27_successProbability___rarg(lean_object*);
lean_object* l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1;
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Aesop_Search_expandNextGoal___spec__2(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__2;
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyRegularRule___closed__4;
extern double l_Lean_Aesop_Percent_hundred;
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_ptr_eq(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_runNormalizationSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___closed__3;
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadSearchM;
lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__1(lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_normalizeGoalMVar___closed__1;
static lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__2;
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4;
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_expandNextGoal___closed__5;
static lean_object* l_Lean_Aesop_Search_search___closed__2;
static lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__4;
lean_object* l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Aesop_Search_addGoals___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_search_x27_match__1(lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_search___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__2;
lean_object* l_Lean_Aesop_Search_readMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM;
lean_object* l_Std_BinomialHeapImp_tail___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__1;
static lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Search_expandNextGoal___closed__1;
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__3;
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_singleton___rarg(lean_object*);
static lean_object* l_Lean_Aesop_Search_instMonadSearchM___closed__7;
static lean_object* l_Lean_Aesop_Search_expandNextGoal___closed__2;
static lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___at_Lean_Aesop_Search_expandNextGoal___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f___at_Lean_Aesop_Search_applyRegularRule___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId(lean_object*);
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__1(lean_object*, lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__5;
lean_object* l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_addRapp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Aesop_search_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double l_Float_mul(double, double);
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_finishIfProven___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1(lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Aesop_Search_ActiveGoal_instLTActiveGoal() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; double x_5; double x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_unbox_float(x_3);
lean_dec(x_3);
x_6 = lean_unbox_float(x_4);
lean_dec(x_4);
x_7 = x_5 < x_6;
return x_7;
}
}
lean_object* l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__3___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_3, x_6);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_apply_2(x_5, lean_box(0), x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, lean_box(0));
lean_closure_set(x_5, 2, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_BinomialHeapImp_combine___at_Lean_Aesop_Search_mkInitialContextAndState___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_inc(x_3);
lean_inc(x_6);
x_9 = l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(x_6, x_3);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_ctor_get(x_1, 2);
lean_dec(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_1, 0);
lean_dec(x_13);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_7, x_14);
lean_dec(x_7);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
x_20 = l_List_append___rarg(x_8, x_19);
lean_ctor_set(x_1, 2, x_20);
lean_ctor_set(x_1, 1, x_15);
return x_1;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_7, x_21);
lean_dec(x_7);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_2);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
x_27 = l_List_append___rarg(x_8, x_26);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_6);
lean_ctor_set(x_28, 1, x_22);
lean_ctor_set(x_28, 2, x_27);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_29 = !lean_is_exclusive(x_2);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_30 = lean_ctor_get(x_2, 2);
lean_dec(x_30);
x_31 = lean_ctor_get(x_2, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_2, 0);
lean_dec(x_32);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_4, x_33);
lean_dec(x_4);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
x_39 = l_List_append___rarg(x_5, x_38);
lean_ctor_set(x_2, 2, x_39);
lean_ctor_set(x_2, 1, x_34);
return x_2;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_2);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_add(x_4, x_40);
lean_dec(x_4);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_42);
x_46 = l_List_append___rarg(x_5, x_45);
x_47 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_47, 0, x_3);
lean_ctor_set(x_47, 1, x_41);
lean_ctor_set(x_47, 2, x_46);
return x_47;
}
}
}
}
lean_object* l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
x_9 = lean_nat_dec_lt(x_7, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_2, 1);
lean_dec(x_11);
x_12 = lean_ctor_get(x_2, 0);
lean_dec(x_12);
x_13 = lean_nat_dec_lt(x_8, x_7);
lean_dec(x_7);
lean_dec(x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_1);
x_14 = l_Std_BinomialHeapImp_combine___at_Lean_Aesop_Search_mkInitialContextAndState___spec__3(x_3, x_5);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = l_Std_BinomialHeapImp_hRank___rarg(x_4);
x_17 = lean_nat_dec_eq(x_15, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Std_BinomialHeapImp_hRank___rarg(x_6);
x_19 = lean_nat_dec_eq(x_15, x_18);
lean_dec(x_18);
lean_dec(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_4, x_6);
lean_ctor_set(x_2, 1, x_20);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
else
{
lean_ctor_set(x_2, 1, x_4);
lean_ctor_set(x_2, 0, x_14);
x_1 = x_2;
x_2 = x_6;
goto _start;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_Std_BinomialHeapImp_hRank___rarg(x_6);
x_23 = lean_nat_dec_eq(x_15, x_22);
lean_dec(x_22);
lean_dec(x_15);
if (x_23 == 0)
{
lean_ctor_set(x_2, 0, x_14);
x_1 = x_4;
goto _start;
}
else
{
lean_object* x_25; 
x_25 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_4, x_6);
lean_ctor_set(x_2, 1, x_25);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_4);
lean_dec(x_3);
x_26 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_6, x_1);
lean_ctor_set(x_2, 1, x_26);
return x_2;
}
}
else
{
uint8_t x_27; 
lean_dec(x_2);
x_27 = lean_nat_dec_lt(x_8, x_7);
lean_dec(x_7);
lean_dec(x_8);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_1);
x_28 = l_Std_BinomialHeapImp_combine___at_Lean_Aesop_Search_mkInitialContextAndState___spec__3(x_3, x_5);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
x_30 = l_Std_BinomialHeapImp_hRank___rarg(x_4);
x_31 = lean_nat_dec_eq(x_29, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = l_Std_BinomialHeapImp_hRank___rarg(x_6);
x_33 = lean_nat_dec_eq(x_29, x_32);
lean_dec(x_32);
lean_dec(x_29);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_4, x_6);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
else
{
lean_object* x_36; 
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_28);
lean_ctor_set(x_36, 1, x_4);
x_1 = x_36;
x_2 = x_6;
goto _start;
}
}
else
{
lean_object* x_38; uint8_t x_39; 
x_38 = l_Std_BinomialHeapImp_hRank___rarg(x_6);
x_39 = lean_nat_dec_eq(x_29, x_38);
lean_dec(x_38);
lean_dec(x_29);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_6);
x_1 = x_4;
x_2 = x_40;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_4, x_6);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_28);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_4);
lean_dec(x_3);
x_44 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_6, x_1);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_5);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_inc(x_2);
x_46 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_4, x_2);
x_47 = !lean_is_exclusive(x_2);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_2, 1);
lean_dec(x_48);
x_49 = lean_ctor_get(x_2, 0);
lean_dec(x_49);
lean_ctor_set(x_2, 1, x_46);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
lean_object* x_50; 
lean_dec(x_2);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_3);
lean_ctor_set(x_50, 1, x_46);
return x_50;
}
}
}
}
}
}
lean_object* l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
return x_2;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_3, x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Std_BinomialHeapImp_mergeNodes___at_Lean_Aesop_Search_mkInitialContextAndState___spec__2(x_3, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_mkInitialContextAndState___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1() {
_start:
{
double x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Percent_hundred;
x_2 = lean_box_float(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_mkInitialContextAndState(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_2);
x_8 = l_Lean_Meta_copyMVar(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; double x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = l_Lean_Aesop_GoalId_zero;
x_13 = l_Lean_Aesop_Percent_hundred;
x_14 = l_Lean_Aesop_GoalData_mkInitial(x_12, x_9, x_13);
x_15 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_st_ref_get(x_6, x_10);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_mk_ref(x_16, x_18);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_21);
x_23 = l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1;
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_box(0);
x_26 = l_Std_BinomialHeapImp_singleton___rarg(x_24);
x_27 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_26, x_25);
x_28 = l_Lean_Aesop_GoalId_one;
x_29 = l_Lean_Aesop_RappId_zero;
x_30 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_22);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_19, 0, x_31);
return x_19;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_32 = lean_ctor_get(x_19, 0);
x_33 = lean_ctor_get(x_19, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_19);
lean_inc(x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_2);
lean_ctor_set(x_34, 2, x_32);
x_35 = l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1;
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_box(0);
x_38 = l_Std_BinomialHeapImp_singleton___rarg(x_36);
x_39 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_38, x_37);
x_40 = l_Lean_Aesop_GoalId_one;
x_41 = l_Lean_Aesop_RappId_zero;
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_33);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_8);
if (x_45 == 0)
{
return x_8;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_8, 0);
x_47 = lean_ctor_get(x_8, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_8);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Lean_Aesop_Search_mkInitialContextAndState___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_mkInitialContextAndState(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_7(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_apply_1(x_3, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_apply_1(x_3, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_3);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_7(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_3);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = lean_apply_7(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_apply_7(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_apply_1(x_13, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_apply_1(x_13, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_13);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_27 = !lean_is_exclusive(x_12);
if (x_27 == 0)
{
return x_12;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_12, 0);
x_29 = lean_ctor_get(x_12, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_12);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = lean_apply_7(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_apply_7(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_13);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_13);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_12);
if (x_24 == 0)
{
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_12, 0);
x_26 = lean_ctor_get(x_12, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = lean_apply_7(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_7(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = lean_apply_7(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_apply_8(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__1), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__2), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_Search_instMonadSearchM___closed__1;
x_2 = l_Lean_Aesop_Search_instMonadSearchM___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__3___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__4), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__5), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__6), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Aesop_Search_instMonadSearchM___closed__3;
x_2 = l_Lean_Aesop_Search_instMonadSearchM___closed__4;
x_3 = l_Lean_Aesop_Search_instMonadSearchM___closed__5;
x_4 = l_Lean_Aesop_Search_instMonadSearchM___closed__6;
x_5 = l_Lean_Aesop_Search_instMonadSearchM___closed__7;
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadSearchM___lambda__7), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_Search_instMonadSearchM___closed__8;
x_2 = l_Lean_Aesop_Search_instMonadSearchM___closed__9;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadSearchM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_Search_instMonadSearchM___closed__10;
return x_1;
}
}
lean_object* l_Lean_Aesop_Search_instMonadSearchM___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_instMonadSearchM___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_SearchM_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_mk_ref(x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_7);
lean_inc(x_12);
x_14 = lean_apply_7(x_3, x_1, x_12, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_7, x_16);
lean_dec(x_7);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_get(x_12, x_18);
lean_dec(x_12);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_15);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_12);
lean_dec(x_7);
x_27 = !lean_is_exclusive(x_14);
if (x_27 == 0)
{
return x_14;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Aesop_Search_SearchM_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_SearchM_run___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_SearchM_run_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_SearchM_run___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Aesop_Search_SearchM_run_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_SearchM_run_x27___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_instMonadReaderOfRuleSetSearchM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_instMonadReaderOfRuleSetSearchM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_instMonadReaderOfRuleSetSearchM(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 1);
lean_dec(x_15);
lean_ctor_set(x_12, 1, x_1);
x_16 = lean_st_ref_set(x_3, x_12, x_13);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_1);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_st_ref_set(x_3, x_25, x_13);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_4, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_apply_1(x_2, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_ctor_set(x_13, 1, x_19);
x_20 = lean_st_ref_set(x_4, x_13, x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
x_27 = lean_ctor_get(x_13, 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_28 = lean_apply_1(x_2, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_31, 2, x_27);
x_32 = lean_st_ref_set(x_4, x_31, x_14);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__1___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__2___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__3___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__1;
x_2 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__2;
x_3 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__4;
return x_1;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 2);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 2);
lean_dec(x_15);
lean_ctor_set(x_12, 2, x_1);
x_16 = lean_st_ref_set(x_3, x_12, x_13);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_1);
x_26 = lean_st_ref_set(x_3, x_25, x_13);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_4, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 2);
x_17 = lean_apply_1(x_2, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_ctor_set(x_13, 2, x_19);
x_20 = lean_st_ref_set(x_4, x_13, x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
x_27 = lean_ctor_get(x_13, 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_28 = lean_apply_1(x_2, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_26);
lean_ctor_set(x_31, 2, x_30);
x_32 = lean_st_ref_set(x_4, x_31, x_14);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__1___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__2___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__3___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__1;
x_2 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__2;
x_3 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__4;
return x_1;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
lean_ctor_set(x_12, 0, x_1);
x_16 = lean_st_ref_set(x_3, x_12, x_13);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_12, 1);
x_24 = lean_ctor_get(x_12, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_st_ref_set(x_3, x_25, x_13);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
x_29 = lean_box(0);
if (lean_is_scalar(x_28)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_28;
}
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_4, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = lean_apply_1(x_2, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_ctor_set(x_13, 0, x_19);
x_20 = lean_st_ref_set(x_4, x_13, x_14);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
x_27 = lean_ctor_get(x_13, 2);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_28 = lean_apply_1(x_2, x_25);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
lean_ctor_set(x_31, 2, x_27);
x_32 = lean_st_ref_set(x_4, x_31, x_14);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(0, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__1___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__2___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__3___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__1;
x_2 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__2;
x_3 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__4;
return x_1;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_readMainGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_readMainGoal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_readMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_readRootGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_readRootGoal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_readRootGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_12, x_13);
x_15 = lean_st_ref_get(x_5, x_11);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_1, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_18, 1);
lean_dec(x_21);
lean_ctor_set(x_18, 1, x_14);
x_22 = lean_st_ref_set(x_1, x_18, x_19);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_12);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_12);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 2);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_14);
lean_ctor_set(x_29, 2, x_28);
x_30 = lean_st_ref_set(x_1, x_29, x_19);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextGoalId___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_Search_getAndIncrementNextGoalId(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_12, x_13);
x_15 = lean_st_ref_get(x_5, x_11);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_1, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_18, 2);
lean_dec(x_21);
lean_ctor_set(x_18, 2, x_14);
x_22 = lean_st_ref_set(x_1, x_18, x_19);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_12);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_12);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_14);
x_30 = lean_st_ref_set(x_1, x_29, x_19);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_32 = x_30;
} else {
 lean_dec_ref(x_30);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_12);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Aesop_Search_getAndIncrementNextRappId___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_Search_getAndIncrementNextRappId(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_addGoal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__1___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_addGoal___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__2___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_Search_addGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_Aesop_Search_getAndIncrementNextGoalId___rarg(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_14 = lean_ctor_get(x_1, 2);
x_15 = lean_ctor_get(x_1, 0);
lean_dec(x_15);
lean_inc(x_14);
lean_ctor_set(x_1, 0, x_11);
lean_inc(x_2);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_st_ref_get(x_8, x_12);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_mk_ref(x_18, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_8, x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_st_ref_take(x_2, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Aesop_Search_addGoal___closed__1;
lean_inc(x_27);
x_30 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_27, x_29);
lean_inc(x_22);
x_31 = lean_array_push(x_30, x_22);
x_32 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_27);
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_27, x_32);
x_34 = l_Lean_Aesop_Search_addGoal___closed__2;
x_35 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_27, x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_36, 2, x_31);
x_37 = lean_st_ref_set(x_2, x_36, x_28);
lean_dec(x_2);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_st_ref_get(x_8, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_st_ref_take(x_4, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = !lean_is_exclusive(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_22);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_22);
lean_ctor_set(x_46, 1, x_14);
x_47 = l_Std_BinomialHeapImp_singleton___rarg(x_46);
x_48 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_47, x_45);
lean_ctor_set(x_42, 0, x_48);
x_49 = lean_st_ref_set(x_4, x_42, x_43);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set(x_49, 0, x_22);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_22);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_54 = lean_ctor_get(x_42, 0);
x_55 = lean_ctor_get(x_42, 1);
x_56 = lean_ctor_get(x_42, 2);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_42);
lean_inc(x_22);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_22);
lean_ctor_set(x_57, 1, x_14);
x_58 = l_Std_BinomialHeapImp_singleton___rarg(x_57);
x_59 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_58, x_54);
x_60 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
lean_ctor_set(x_60, 2, x_56);
x_61 = lean_st_ref_set(x_4, x_60, x_43);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_22);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_65 = lean_ctor_get(x_1, 1);
x_66 = lean_ctor_get(x_1, 2);
x_67 = lean_ctor_get(x_1, 3);
x_68 = lean_ctor_get(x_1, 4);
x_69 = lean_ctor_get(x_1, 5);
x_70 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_71 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 1);
x_72 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 2);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_1);
lean_inc(x_66);
x_73 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_73, 0, x_11);
lean_ctor_set(x_73, 1, x_65);
lean_ctor_set(x_73, 2, x_66);
lean_ctor_set(x_73, 3, x_67);
lean_ctor_set(x_73, 4, x_68);
lean_ctor_set(x_73, 5, x_69);
lean_ctor_set_uint8(x_73, sizeof(void*)*6, x_70);
lean_ctor_set_uint8(x_73, sizeof(void*)*6 + 1, x_71);
lean_ctor_set_uint8(x_73, sizeof(void*)*6 + 2, x_72);
lean_inc(x_2);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_2);
x_75 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
lean_ctor_set(x_76, 2, x_75);
x_77 = lean_st_ref_get(x_8, x_12);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_st_mk_ref(x_76, x_78);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_st_ref_get(x_8, x_81);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_st_ref_take(x_2, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l_Lean_Aesop_Search_addGoal___closed__1;
lean_inc(x_85);
x_88 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_85, x_87);
lean_inc(x_80);
x_89 = lean_array_push(x_88, x_80);
x_90 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_85);
x_91 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_85, x_90);
x_92 = l_Lean_Aesop_Search_addGoal___closed__2;
x_93 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_85, x_92);
x_94 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_94, 2, x_89);
x_95 = lean_st_ref_set(x_2, x_94, x_86);
lean_dec(x_2);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_st_ref_get(x_8, x_96);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = lean_st_ref_take(x_4, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_ctor_get(x_100, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
x_104 = lean_ctor_get(x_100, 2);
lean_inc(x_104);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 lean_ctor_release(x_100, 2);
 x_105 = x_100;
} else {
 lean_dec_ref(x_100);
 x_105 = lean_box(0);
}
lean_inc(x_80);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_80);
lean_ctor_set(x_106, 1, x_66);
x_107 = l_Std_BinomialHeapImp_singleton___rarg(x_106);
x_108 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_107, x_102);
if (lean_is_scalar(x_105)) {
 x_109 = lean_alloc_ctor(0, 3, 0);
} else {
 x_109 = x_105;
}
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_103);
lean_ctor_set(x_109, 2, x_104);
x_110 = lean_st_ref_set(x_4, x_109, x_101);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_112 = x_110;
} else {
 lean_dec_ref(x_110);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_112)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_112;
}
lean_ctor_set(x_113, 0, x_80);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
}
lean_object* l_Lean_Aesop_Search_addGoal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_addGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_addGoals___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Aesop_Search_addGoal(x_2, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_array_push(x_3, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_11, 0, x_15);
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_array_push(x_3, x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
lean_object* l_Lean_Aesop_Search_addGoals___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_addGoals___rarg___lambda__1___boxed), 10, 1);
lean_closure_set(x_11, 0, x_3);
x_12 = l_Lean_Aesop_Search_instMonadSearchM;
x_13 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_14 = lean_apply_12(x_1, lean_box(0), x_12, x_2, x_13, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Aesop_Search_addGoals(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_addGoals___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_addGoals___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Aesop_Search_addGoals___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1(double x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = l_Lean_Aesop_GoalId_dummy;
x_16 = l_Lean_Aesop_GoalData_mkInitial(x_15, x_13, x_1);
x_17 = l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_16);
lean_ctor_set(x_17, 0, x_2);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
lean_ctor_set(x_2, 1, x_20);
lean_ctor_set(x_2, 0, x_16);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_2, 0);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_2);
x_25 = l_Lean_Aesop_GoalId_dummy;
x_26 = l_Lean_Aesop_GoalData_mkInitial(x_25, x_23, x_1);
x_27 = l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1(x_1, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_30 = x_27;
} else {
 lean_dec_ref(x_27);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_28);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_addGoals_x27___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
lean_inc(x_1);
x_14 = l_Lean_Aesop_Search_addGoal(x_12, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_push(x_3, x_15);
x_2 = x_13;
x_3 = x_17;
x_10 = x_16;
goto _start;
}
}
}
lean_object* l_Lean_Aesop_Search_addGoals___at_Lean_Aesop_Search_addGoals_x27___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_11 = l_List_forIn_loop___at_Lean_Aesop_Search_addGoals_x27___spec__3(x_2, x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_Search_addGoals_x27(lean_object* x_1, double x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1(x_2, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Aesop_Search_addGoals___at_Lean_Aesop_Search_addGoals_x27___spec__2(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
}
lean_object* l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
double x_10; lean_object* x_11; 
x_10 = lean_unbox_float(x_1);
lean_dec(x_1);
x_11 = l_List_mapM___at_Lean_Aesop_Search_addGoals_x27___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_addGoals_x27___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forIn_loop___at_Lean_Aesop_Search_addGoals_x27___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Aesop_Search_addGoals___at_Lean_Aesop_Search_addGoals_x27___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_addGoals___at_Lean_Aesop_Search_addGoals_x27___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_addGoals_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
double x_11; lean_object* x_12; 
x_11 = lean_unbox_float(x_2);
lean_dec(x_2);
x_12 = l_Lean_Aesop_Search_addGoals_x27(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_addRapp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_Aesop_Search_getAndIncrementNextRappId___rarg(x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_14 = lean_ctor_get(x_1, 0);
lean_dec(x_14);
lean_ctor_set(x_1, 0, x_11);
lean_inc(x_2);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_2);
x_16 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_st_ref_get(x_8, x_12);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_mk_ref(x_17, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_8, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_st_ref_take(x_2, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Aesop_Search_addGoal___closed__1;
lean_inc(x_26);
x_29 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_26, x_28);
lean_inc(x_21);
x_30 = lean_array_push(x_29, x_21);
x_31 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_26);
x_32 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_26, x_31);
x_33 = l_Lean_Aesop_Search_addGoal___closed__2;
x_34 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_26, x_33);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_30);
x_36 = lean_st_ref_set(x_2, x_35, x_27);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set(x_36, 0, x_21);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_21);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_41 = lean_ctor_get(x_1, 1);
x_42 = lean_ctor_get(x_1, 2);
x_43 = lean_ctor_get(x_1, 3);
x_44 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_45 = lean_ctor_get_uint8(x_1, sizeof(void*)*4 + 1);
x_46 = lean_ctor_get_uint8(x_1, sizeof(void*)*4 + 2);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_1);
x_47 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_47, 0, x_11);
lean_ctor_set(x_47, 1, x_41);
lean_ctor_set(x_47, 2, x_42);
lean_ctor_set(x_47, 3, x_43);
lean_ctor_set_uint8(x_47, sizeof(void*)*4, x_44);
lean_ctor_set_uint8(x_47, sizeof(void*)*4 + 1, x_45);
lean_ctor_set_uint8(x_47, sizeof(void*)*4 + 2, x_46);
lean_inc(x_2);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_2);
x_49 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
lean_ctor_set(x_50, 2, x_49);
x_51 = lean_st_ref_get(x_8, x_12);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_mk_ref(x_50, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_st_ref_get(x_8, x_55);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_st_ref_take(x_2, x_57);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_Aesop_Search_addGoal___closed__1;
lean_inc(x_59);
x_62 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_59, x_61);
lean_inc(x_54);
x_63 = lean_array_push(x_62, x_54);
x_64 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_59);
x_65 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_59, x_64);
x_66 = l_Lean_Aesop_Search_addGoal___closed__2;
x_67 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_59, x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_63);
x_69 = lean_st_ref_set(x_2, x_68, x_60);
lean_dec(x_2);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_71 = x_69;
} else {
 lean_dec_ref(x_69);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_54);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
lean_object* l_Lean_Aesop_Search_addRapp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_addRapp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_runNormRule_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_Aesop_Search_runNormRule_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_runNormRule_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
lean_inc(x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
lean_inc(x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: normalization rule ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" did not produce exactly one subgoal");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_9);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" failed with error:\n");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_runNormRule___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormRule___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_runNormRule___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_runNormRule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_runTacticMAsMetaM(x_12, x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Aesop_Search_runNormRule___lambda__1(x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_14);
lean_dec(x_2);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_2);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_10);
x_20 = l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Lean_Aesop_Search_runNormRule___closed__2;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Exception_toMessageData(x_17);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__2(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
return x_28;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_runNormRule___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_runNormRule___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_runNormRule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_runNormRule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_runNormalizationSimp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Aesop_Search_runNormalizationSimp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_runNormalizationSimp_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormalizationSimp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: normalization simp rule solved the goal");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_runNormalizationSimp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_runNormalizationSimp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_runNormalizationSimp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_simpAll(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Aesop_Search_runNormalizationSimp___closed__2;
x_14 = l_Lean_throwError___at_Lean_Aesop_Search_runNormRule___spec__1(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_11, 0);
lean_inc(x_17);
lean_dec(x_11);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_21 = !lean_is_exclusive(x_10);
if (x_21 == 0)
{
return x_10;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_Search_runNormalizationSimp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_runNormalizationSimp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_normalizeGoalMVar_match__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_1, x_3);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_ctor_get(x_6, 2);
lean_inc(x_10);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1;
x_12 = lean_int_dec_lt(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; size_t x_14; size_t x_15; 
x_13 = lean_array_push(x_9, x_6);
lean_ctor_set(x_4, 1, x_13);
x_14 = 1;
x_15 = x_3 + x_14;
x_3 = x_15;
goto _start;
}
else
{
lean_object* x_17; size_t x_18; size_t x_19; 
x_17 = lean_array_push(x_8, x_6);
lean_ctor_set(x_4, 0, x_17);
x_18 = 1;
x_19 = x_3 + x_18;
x_3 = x_19;
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = lean_ctor_get(x_6, 2);
lean_inc(x_23);
x_24 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1;
x_25 = lean_int_dec_lt(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_array_push(x_22, x_6);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
x_28 = 1;
x_29 = x_3 + x_28;
x_3 = x_29;
x_4 = x_27;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; size_t x_33; size_t x_34; 
x_31 = lean_array_push(x_21, x_6);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_22);
x_33 = 1;
x_34 = x_3 + x_33;
x_3 = x_34;
x_4 = x_32;
goto _start;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l_Lean_Aesop_Search_runNormRule(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalMVar___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_9);
x_10 = l_Lean_Aesop_RuleSet_applicableNormalizationRules(x_9, x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_array_get_size(x_11);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = l_Lean_Aesop_Search_normalizeGoalMVar___closed__1;
x_17 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1(x_11, x_14, x_15, x_16);
lean_dec(x_11);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_array_get_size(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
if (x_22 == 0)
{
lean_dec(x_20);
lean_dec(x_18);
x_23 = x_1;
x_24 = x_12;
goto block_98;
}
else
{
uint8_t x_99; 
x_99 = lean_nat_dec_le(x_20, x_20);
if (x_99 == 0)
{
lean_dec(x_20);
lean_dec(x_18);
x_23 = x_1;
x_24 = x_12;
goto block_98;
}
else
{
size_t x_100; lean_object* x_101; 
x_100 = lean_usize_of_nat(x_20);
lean_dec(x_20);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_101 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(x_18, x_15, x_100, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_18);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_23 = x_102;
x_24 = x_103;
goto block_98;
}
else
{
uint8_t x_104; 
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_104 = !lean_is_exclusive(x_101);
if (x_104 == 0)
{
return x_101;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_101, 0);
x_106 = lean_ctor_get(x_101, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_101);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
block_98:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = l_Lean_Meta_Simp_Context_mkDefault___rarg(x_7, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_dec(x_9);
lean_ctor_set(x_26, 1, x_30);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Aesop_Search_runNormalizationSimp(x_23, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
x_35 = lean_array_get_size(x_19);
x_36 = lean_nat_dec_lt(x_21, x_35);
if (x_36 == 0)
{
lean_dec(x_35);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_31;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_35, x_35);
if (x_37 == 0)
{
lean_dec(x_35);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_31;
}
else
{
size_t x_38; lean_object* x_39; 
lean_free_object(x_31);
x_38 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_39 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(x_19, x_15, x_38, x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_34);
lean_dec(x_2);
lean_dec(x_19);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_39);
if (x_44 == 0)
{
return x_39;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_39, 0);
x_46 = lean_ctor_get(x_39, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_39);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_31, 0);
x_49 = lean_ctor_get(x_31, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_31);
x_50 = lean_array_get_size(x_19);
x_51 = lean_nat_dec_lt(x_21, x_50);
if (x_51 == 0)
{
lean_object* x_52; 
lean_dec(x_50);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
else
{
uint8_t x_53; 
x_53 = lean_nat_dec_le(x_50, x_50);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_50);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_49);
return x_54;
}
else
{
size_t x_55; lean_object* x_56; 
x_55 = lean_usize_of_nat(x_50);
lean_dec(x_50);
x_56 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(x_19, x_15, x_55, x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_49);
lean_dec(x_2);
lean_dec(x_19);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_56, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_63 = x_56;
} else {
 lean_dec_ref(x_56);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_31);
if (x_65 == 0)
{
return x_31;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_31, 0);
x_67 = lean_ctor_get(x_31, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_31);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_69 = lean_ctor_get(x_26, 0);
x_70 = lean_ctor_get(x_26, 2);
x_71 = lean_ctor_get(x_26, 3);
x_72 = lean_ctor_get(x_26, 4);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_26);
x_73 = lean_ctor_get(x_9, 1);
lean_inc(x_73);
lean_dec(x_9);
x_74 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_74, 0, x_69);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_74, 2, x_70);
lean_ctor_set(x_74, 3, x_71);
lean_ctor_set(x_74, 4, x_72);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_75 = l_Lean_Aesop_Search_runNormalizationSimp(x_23, x_74, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_78 = x_75;
} else {
 lean_dec_ref(x_75);
 x_78 = lean_box(0);
}
x_79 = lean_array_get_size(x_19);
x_80 = lean_nat_dec_lt(x_21, x_79);
if (x_80 == 0)
{
lean_object* x_81; 
lean_dec(x_79);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_78)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_78;
}
lean_ctor_set(x_81, 0, x_76);
lean_ctor_set(x_81, 1, x_77);
return x_81;
}
else
{
uint8_t x_82; 
x_82 = lean_nat_dec_le(x_79, x_79);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_79);
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_78)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_78;
}
lean_ctor_set(x_83, 0, x_76);
lean_ctor_set(x_83, 1, x_77);
return x_83;
}
else
{
size_t x_84; lean_object* x_85; 
lean_dec(x_78);
x_84 = lean_usize_of_nat(x_79);
lean_dec(x_79);
x_85 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(x_19, x_15, x_84, x_76, x_2, x_3, x_4, x_5, x_6, x_7, x_77);
lean_dec(x_2);
lean_dec(x_19);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_85, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_92 = x_85;
} else {
 lean_dec_ref(x_85);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_19);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_94 = lean_ctor_get(x_75, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_75, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 x_96 = x_75;
} else {
 lean_dec_ref(x_75);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_108 = !lean_is_exclusive(x_10);
if (x_108 == 0)
{
return x_10;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_10, 0);
x_110 = lean_ctor_get(x_10, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_10);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_normalizeGoalMVar___spec__2(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_normalizeGoalMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Aesop_Search_normalizeGoalIfNecessary_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("] ");
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_5, x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 3);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_1);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_1);
x_23 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_12);
x_28 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_29);
lean_inc(x_10);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_10);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Std_PersistentArray_push___rarg(x_21, x_31);
lean_ctor_set(x_16, 0, x_32);
x_33 = lean_st_ref_set(x_8, x_15, x_17);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
x_36 = lean_box(0);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_40 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_41 = lean_ctor_get(x_16, 0);
lean_inc(x_41);
lean_dec(x_16);
lean_inc(x_1);
x_42 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_42, 0, x_1);
x_43 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_12);
x_48 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_49);
lean_inc(x_10);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_10);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Std_PersistentArray_push___rarg(x_41, x_51);
x_53 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set_uint8(x_53, sizeof(void*)*1, x_40);
lean_ctor_set(x_15, 3, x_53);
x_54 = lean_st_ref_set(x_8, x_15, x_17);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_59 = lean_ctor_get(x_15, 0);
x_60 = lean_ctor_get(x_15, 1);
x_61 = lean_ctor_get(x_15, 2);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_15);
x_62 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_63 = lean_ctor_get(x_16, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_64 = x_16;
} else {
 lean_dec_ref(x_16);
 x_64 = lean_box(0);
}
lean_inc(x_1);
x_65 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_65, 0, x_1);
x_66 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2;
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_12);
x_71 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_73, 0, x_1);
lean_ctor_set(x_73, 1, x_72);
lean_inc(x_10);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_10);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Std_PersistentArray_push___rarg(x_63, x_74);
if (lean_is_scalar(x_64)) {
 x_76 = lean_alloc_ctor(0, 1, 1);
} else {
 x_76 = x_64;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set_uint8(x_76, sizeof(void*)*1, x_62);
x_77 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_77, 0, x_59);
lean_ctor_set(x_77, 1, x_60);
lean_ctor_set(x_77, 2, x_61);
lean_ctor_set(x_77, 3, x_76);
x_78 = lean_st_ref_set(x_8, x_77, x_17);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_80 = x_78;
} else {
 lean_dec_ref(x_78);
 x_80 = lean_box(0);
}
x_81 = lean_box(0);
if (lean_is_scalar(x_80)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_80;
}
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_79);
return x_82;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = l_Lean_checkTraceOption(x_9, x_1);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_2);
lean_ctor_set(x_19, 2, x_3);
lean_ctor_set(x_19, 3, x_4);
lean_ctor_set(x_19, 4, x_5);
lean_ctor_set(x_19, 5, x_6);
lean_ctor_set_uint8(x_19, sizeof(void*)*6, x_7);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 1, x_8);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 2, x_9);
x_20 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_10);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_20);
x_22 = l_Lean_Aesop_Search_addGoal___closed__1;
x_23 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goal after normalisation:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 5);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_1, sizeof(void*)*6);
x_19 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 1);
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*6 + 2);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_5);
x_21 = l_Lean_Aesop_Search_normalizeGoalMVar(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_39 = lean_st_ref_get(x_10, x_23);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_40, 3);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_ctor_get_uint8(x_41, sizeof(void*)*1);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_39, 1);
lean_inc(x_43);
lean_dec(x_39);
x_44 = 0;
x_24 = x_44;
x_25 = x_43;
goto block_38;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_45 = lean_ctor_get(x_39, 1);
lean_inc(x_45);
lean_dec(x_39);
lean_inc(x_3);
x_46 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_unbox(x_47);
lean_dec(x_47);
x_24 = x_49;
x_25 = x_48;
goto block_38;
}
block_38:
{
if (x_24 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_3);
x_26 = lean_box(0);
x_27 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1(x_12, x_22, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_2, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_inc(x_22);
x_28 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_28, 0, x_22);
x_29 = l_Lean_indentD(x_28);
x_30 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__2;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_3, x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1(x_12, x_22, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_2, x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_35);
return x_37;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_21);
if (x_50 == 0)
{
return x_21;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_21, 0);
x_52 = lean_ctor_get(x_21, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_21);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goal before normalisation:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_st_ref_get(x_10, x_11);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 3);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_ctor_get_uint8(x_30, sizeof(void*)*1);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = 0;
x_12 = x_33;
x_13 = x_32;
goto block_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
lean_inc(x_3);
x_35 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_unbox(x_36);
lean_dec(x_36);
x_12 = x_38;
x_13 = x_37;
goto block_27;
}
block_27:
{
if (x_12 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = l_Lean_indentD(x_17);
x_19 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_inc(x_3);
x_23 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_3, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2(x_1, x_2, x_3, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_24);
return x_26;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Aesop");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Steps");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__2;
x_2 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Normalising the goal");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_12);
x_15 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_14);
x_16 = l_Lean_Aesop_GoalData_normal_x3f(x_15);
if (x_16 == 0)
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_27 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_50 = lean_st_ref_get(x_7, x_13);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 3);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get_uint8(x_52, sizeof(void*)*1);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_55 = 0;
x_28 = x_55;
x_29 = x_54;
goto block_49;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_unbox(x_58);
lean_dec(x_58);
x_28 = x_60;
x_29 = x_59;
goto block_49;
}
block_49:
{
if (x_28 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_box(0);
lean_inc(x_7);
x_31 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3(x_15, x_12, x_27, x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_17 = x_32;
x_18 = x_33;
goto block_26;
}
else
{
uint8_t x_34; 
lean_dec(x_7);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__6;
x_39 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_27, x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_7);
x_42 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3(x_15, x_12, x_27, x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_17 = x_43;
x_18 = x_44;
goto block_26;
}
else
{
uint8_t x_45; 
lean_dec(x_7);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
else
{
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = x_12;
x_18 = x_13;
goto block_26;
}
block_26:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_st_ref_get(x_7, x_18);
lean_dec(x_7);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_set(x_1, x_17, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; 
x_19 = lean_unbox(x_7);
lean_dec(x_7);
x_20 = lean_unbox(x_8);
lean_dec(x_8);
x_21 = lean_unbox(x_9);
lean_dec(x_9);
x_22 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_19, x_20, x_21, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_22;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_normalizeGoalIfNecessary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_normalizeGoalIfNecessary(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_runRule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_copyMVar(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_runTacticMAsMetaM), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_11);
x_14 = l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1(x_13, x_5, x_6, x_7, x_8, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_11);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_14, 0);
lean_dec(x_23);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_11);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_15, 0, x_26);
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 0);
lean_inc(x_27);
lean_dec(x_15);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_11);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_14, 0, x_29);
return x_14;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_dec(x_14);
x_31 = lean_ctor_get(x_15, 0);
lean_inc(x_31);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 x_32 = x_15;
} else {
 lean_dec_ref(x_15);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_11);
lean_ctor_set(x_33, 1, x_31);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(1, 1, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_30);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_10);
if (x_36 == 0)
{
return x_10;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_10, 0);
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_10);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Aesop_Search_runRule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_runRule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Aesop_Search_RuleResult_failed_x3f_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_Lean_Aesop_Search_RuleResult_failed_x3f(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(x_1);
if (lean_obj_tag(x_2) == 1)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 0;
return x_4;
}
}
}
lean_object* l_Lean_Aesop_Search_RuleResult_failed_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_applyRegularRule_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_apply_2(x_3, x_11, x_8);
return x_12;
}
}
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_applyRegularRule_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_3 == x_4;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_array_uget(x_2, x_3);
x_15 = lean_st_ref_get(x_11, x_12);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_ptr_eq(x_14, x_1, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_array_push(x_5, x_14);
x_22 = 1;
x_23 = x_3 + x_22;
x_3 = x_23;
x_5 = x_21;
x_12 = x_20;
goto _start;
}
else
{
lean_object* x_25; size_t x_26; size_t x_27; 
lean_dec(x_14);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = 1;
x_27 = x_3 + x_26;
x_3 = x_27;
x_12 = x_25;
goto _start;
}
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_5);
lean_ctor_set(x_29, 1, x_12);
return x_29;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg___boxed), 12, 0);
return x_3;
}
}
lean_object* l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_Aesop_Search_addGoal___closed__2;
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_free_object(x_11);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_7, x_14);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_18, x_20);
lean_dec(x_18);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
x_25 = l_Lean_Aesop_Search_addGoal___closed__1;
x_26 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_23, x_25);
x_27 = lean_array_get_size(x_26);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_28, x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_27);
lean_dec(x_26);
x_30 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
lean_ctor_set(x_21, 0, x_30);
return x_21;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_le(x_27, x_27);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
lean_ctor_set(x_21, 0, x_32);
return x_21;
}
else
{
size_t x_33; size_t x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_free_object(x_21);
x_33 = 0;
x_34 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_35 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_36 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg(x_1, x_26, x_33, x_34, x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_24);
lean_dec(x_26);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_41 = lean_ctor_get(x_21, 0);
x_42 = lean_ctor_get(x_21, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_21);
x_43 = l_Lean_Aesop_Search_addGoal___closed__1;
x_44 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_41, x_43);
x_45 = lean_array_get_size(x_44);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_nat_dec_lt(x_46, x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_45);
lean_dec(x_44);
x_48 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_42);
return x_49;
}
else
{
uint8_t x_50; 
x_50 = lean_nat_dec_le(x_45, x_45);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_45);
lean_dec(x_44);
x_51 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_42);
return x_52;
}
else
{
size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_53 = 0;
x_54 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_55 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_56 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg(x_1, x_44, x_53, x_54, x_55, x_2, x_3, x_4, x_5, x_6, x_7, x_42);
lean_dec(x_44);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_59 = x_56;
} else {
 lean_dec_ref(x_56);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_11, 0);
x_62 = lean_ctor_get(x_11, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_11);
x_63 = l_Lean_Aesop_Search_addGoal___closed__2;
x_64 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_61, x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_67 = lean_ctor_get(x_64, 0);
lean_inc(x_67);
lean_dec(x_64);
x_68 = lean_st_ref_get(x_7, x_62);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_st_ref_get(x_67, x_69);
lean_dec(x_67);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_73 = x_70;
} else {
 lean_dec_ref(x_70);
 x_73 = lean_box(0);
}
x_74 = l_Lean_Aesop_Search_addGoal___closed__1;
x_75 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_71, x_74);
x_76 = lean_array_get_size(x_75);
x_77 = lean_unsigned_to_nat(0u);
x_78 = lean_nat_dec_lt(x_77, x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_76);
lean_dec(x_75);
x_79 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
if (lean_is_scalar(x_73)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_73;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_72);
return x_80;
}
else
{
uint8_t x_81; 
x_81 = lean_nat_dec_le(x_76, x_76);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
lean_dec(x_76);
lean_dec(x_75);
x_82 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
if (lean_is_scalar(x_73)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_73;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_72);
return x_83;
}
else
{
size_t x_84; size_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_73);
x_84 = 0;
x_85 = lean_usize_of_nat(x_76);
lean_dec(x_76);
x_86 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_87 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg(x_1, x_75, x_84, x_85, x_86, x_2, x_3, x_4, x_5, x_6, x_7, x_72);
lean_dec(x_75);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_90 = x_87;
} else {
 lean_dec_ref(x_87);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg___boxed), 8, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_4 == x_5;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
x_15 = lean_array_uget(x_3, x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_2);
x_16 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(x_2, x_1, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_4 + x_19;
x_4 = x_20;
x_6 = x_17;
x_13 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_6);
lean_ctor_set(x_26, 1, x_13);
return x_26;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg___boxed), 13, 0);
return x_3;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_st_ref_get(x_9, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_st_ref_get(x_3, x_22);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
x_27 = l_Lean_Aesop_Search_addGoal___closed__1;
x_28 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_25, x_27);
x_29 = lean_array_get_size(x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_dec_lt(x_30, x_29);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_box(0);
lean_ctor_set(x_23, 0, x_32);
return x_23;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_29, x_29);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_box(0);
lean_ctor_set(x_23, 0, x_34);
return x_23;
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; 
lean_free_object(x_23);
x_35 = 0;
x_36 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_37 = lean_box(0);
x_38 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg(x_1, x_2, x_28, x_35, x_36, x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
lean_dec(x_28);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_39 = lean_ctor_get(x_23, 0);
x_40 = lean_ctor_get(x_23, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_23);
x_41 = l_Lean_Aesop_Search_addGoal___closed__1;
x_42 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_39, x_41);
x_43 = lean_array_get_size(x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_nat_dec_lt(x_44, x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_40);
return x_47;
}
else
{
uint8_t x_48; 
x_48 = lean_nat_dec_le(x_43, x_43);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_40);
return x_50;
}
else
{
size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = 0;
x_52 = lean_usize_of_nat(x_43);
lean_dec(x_43);
x_53 = lean_box(0);
x_54 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg(x_1, x_2, x_42, x_51, x_52, x_53, x_4, x_5, x_6, x_7, x_8, x_9, x_40);
lean_dec(x_42);
return x_54;
}
}
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_11);
if (x_55 == 0)
{
return x_11;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_11, 0);
x_57 = lean_ctor_get(x_11, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_11);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg), 10, 0);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_13);
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_15);
x_17 = lean_ctor_get_uint8(x_16, sizeof(void*)*6 + 2);
if (x_17 == 0)
{
uint8_t x_18; 
lean_free_object(x_11);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_19 = 1;
lean_ctor_set_uint8(x_16, sizeof(void*)*6 + 2, x_19);
x_20 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_13);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_20);
x_22 = l_Lean_Aesop_Search_addGoal___closed__1;
x_23 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_st_ref_get(x_7, x_14);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_st_ref_set(x_1, x_24, x_26);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_box(x_19);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_box(x_19);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
x_36 = lean_ctor_get(x_16, 2);
x_37 = lean_ctor_get(x_16, 3);
x_38 = lean_ctor_get(x_16, 4);
x_39 = lean_ctor_get(x_16, 5);
x_40 = lean_ctor_get_uint8(x_16, sizeof(void*)*6);
x_41 = lean_ctor_get_uint8(x_16, sizeof(void*)*6 + 1);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_42 = 1;
x_43 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_35);
lean_ctor_set(x_43, 2, x_36);
lean_ctor_set(x_43, 3, x_37);
lean_ctor_set(x_43, 4, x_38);
lean_ctor_set(x_43, 5, x_39);
lean_ctor_set_uint8(x_43, sizeof(void*)*6, x_40);
lean_ctor_set_uint8(x_43, sizeof(void*)*6 + 1, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*6 + 2, x_42);
x_44 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_13);
x_45 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_44);
x_46 = l_Lean_Aesop_Search_addGoal___closed__1;
x_47 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_46);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_45);
lean_ctor_set(x_48, 2, x_47);
x_49 = lean_st_ref_get(x_7, x_14);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_st_ref_set(x_1, x_48, x_50);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
x_54 = lean_box(x_42);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
}
else
{
uint8_t x_56; lean_object* x_57; 
lean_dec(x_16);
lean_dec(x_13);
x_56 = 0;
x_57 = lean_box(x_56);
lean_ctor_set(x_11, 0, x_57);
return x_11;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_11, 0);
x_59 = lean_ctor_get(x_11, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_11);
x_60 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_58);
x_61 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_58, x_60);
x_62 = lean_ctor_get_uint8(x_61, sizeof(void*)*6 + 2);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_63 = lean_ctor_get(x_61, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_61, 2);
lean_inc(x_65);
x_66 = lean_ctor_get(x_61, 3);
lean_inc(x_66);
x_67 = lean_ctor_get(x_61, 4);
lean_inc(x_67);
x_68 = lean_ctor_get(x_61, 5);
lean_inc(x_68);
x_69 = lean_ctor_get_uint8(x_61, sizeof(void*)*6);
x_70 = lean_ctor_get_uint8(x_61, sizeof(void*)*6 + 1);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 lean_ctor_release(x_61, 2);
 lean_ctor_release(x_61, 3);
 lean_ctor_release(x_61, 4);
 lean_ctor_release(x_61, 5);
 x_71 = x_61;
} else {
 lean_dec_ref(x_61);
 x_71 = lean_box(0);
}
x_72 = 1;
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 6, 3);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_63);
lean_ctor_set(x_73, 1, x_64);
lean_ctor_set(x_73, 2, x_65);
lean_ctor_set(x_73, 3, x_66);
lean_ctor_set(x_73, 4, x_67);
lean_ctor_set(x_73, 5, x_68);
lean_ctor_set_uint8(x_73, sizeof(void*)*6, x_69);
lean_ctor_set_uint8(x_73, sizeof(void*)*6 + 1, x_70);
lean_ctor_set_uint8(x_73, sizeof(void*)*6 + 2, x_72);
x_74 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_58);
x_75 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_58, x_74);
x_76 = l_Lean_Aesop_Search_addGoal___closed__1;
x_77 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_58, x_76);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_73);
lean_ctor_set(x_78, 1, x_75);
lean_ctor_set(x_78, 2, x_77);
x_79 = lean_st_ref_get(x_7, x_59);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_st_ref_set(x_1, x_78, x_80);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_83 = x_81;
} else {
 lean_dec_ref(x_81);
 x_83 = lean_box(0);
}
x_84 = lean_box(x_72);
if (lean_is_scalar(x_83)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_83;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
else
{
uint8_t x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_61);
lean_dec(x_58);
x_86 = 0;
x_87 = lean_box(x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_59);
return x_88;
}
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_13);
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_15);
x_17 = lean_ctor_get_uint8(x_16, sizeof(void*)*4 + 2);
if (x_17 == 0)
{
uint8_t x_18; 
lean_free_object(x_11);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_19 = 1;
lean_ctor_set_uint8(x_16, sizeof(void*)*4 + 2, x_19);
x_20 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_13);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_20);
x_22 = l_Lean_Aesop_Search_addGoal___closed__1;
x_23 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_16);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_st_ref_get(x_7, x_14);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_st_ref_set(x_1, x_24, x_26);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_box(x_19);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_box(x_19);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; uint8_t x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
x_36 = lean_ctor_get(x_16, 2);
x_37 = lean_ctor_get(x_16, 3);
x_38 = lean_ctor_get_uint8(x_16, sizeof(void*)*4);
x_39 = lean_ctor_get_uint8(x_16, sizeof(void*)*4 + 1);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_40 = 1;
x_41 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_41, 0, x_34);
lean_ctor_set(x_41, 1, x_35);
lean_ctor_set(x_41, 2, x_36);
lean_ctor_set(x_41, 3, x_37);
lean_ctor_set_uint8(x_41, sizeof(void*)*4, x_38);
lean_ctor_set_uint8(x_41, sizeof(void*)*4 + 1, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*4 + 2, x_40);
x_42 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_13);
x_43 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_42);
x_44 = l_Lean_Aesop_Search_addGoal___closed__1;
x_45 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_43);
lean_ctor_set(x_46, 2, x_45);
x_47 = lean_st_ref_get(x_7, x_14);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_st_ref_set(x_1, x_46, x_48);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_51 = x_49;
} else {
 lean_dec_ref(x_49);
 x_51 = lean_box(0);
}
x_52 = lean_box(x_40);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
return x_53;
}
}
else
{
uint8_t x_54; lean_object* x_55; 
lean_dec(x_16);
lean_dec(x_13);
x_54 = 0;
x_55 = lean_box(x_54);
lean_ctor_set(x_11, 0, x_55);
return x_11;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_11, 0);
x_57 = lean_ctor_get(x_11, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_11);
x_58 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_56);
x_59 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_56, x_58);
x_60 = lean_ctor_get_uint8(x_59, sizeof(void*)*4 + 2);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; uint8_t x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 2);
lean_inc(x_63);
x_64 = lean_ctor_get(x_59, 3);
lean_inc(x_64);
x_65 = lean_ctor_get_uint8(x_59, sizeof(void*)*4);
x_66 = lean_ctor_get_uint8(x_59, sizeof(void*)*4 + 1);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 lean_ctor_release(x_59, 2);
 lean_ctor_release(x_59, 3);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
x_68 = 1;
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 4, 3);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_61);
lean_ctor_set(x_69, 1, x_62);
lean_ctor_set(x_69, 2, x_63);
lean_ctor_set(x_69, 3, x_64);
lean_ctor_set_uint8(x_69, sizeof(void*)*4, x_65);
lean_ctor_set_uint8(x_69, sizeof(void*)*4 + 1, x_66);
lean_ctor_set_uint8(x_69, sizeof(void*)*4 + 2, x_68);
x_70 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_56);
x_71 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_56, x_70);
x_72 = l_Lean_Aesop_Search_addGoal___closed__1;
x_73 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_56, x_72);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_69);
lean_ctor_set(x_74, 1, x_71);
lean_ctor_set(x_74, 2, x_73);
x_75 = lean_st_ref_get(x_7, x_57);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_st_ref_set(x_1, x_74, x_76);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_79 = x_77;
} else {
 lean_dec_ref(x_77);
 x_79 = lean_box(0);
}
x_80 = lean_box(x_68);
if (lean_is_scalar(x_79)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_79;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
else
{
uint8_t x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_59);
lean_dec(x_56);
x_82 = 0;
x_83 = lean_box(x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_57);
return x_84;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1;
x_10 = l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2;
x_11 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1___boxed), 8, 0);
x_15 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2___boxed), 8, 0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(x_14, x_15, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_2 + x_19;
x_2 = x_20;
x_4 = x_17;
x_11 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_11);
return x_26;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 == x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_array_uget(x_1, x_2);
x_13 = lean_st_ref_get(x_9, x_10);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_12, x_14);
lean_dec(x_12);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_17, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Aesop_RegularRule_x27_isSafe___rarg(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
size_t x_23; size_t x_24; 
lean_free_object(x_15);
x_23 = 1;
x_24 = x_2 + x_23;
x_2 = x_24;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_15, 0, x_27);
return x_15;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_28, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Aesop_RegularRule_x27_isSafe___rarg(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
size_t x_34; size_t x_35; 
x_34 = 1;
x_35 = x_2 + x_34;
x_2 = x_35;
x_10 = x_29;
goto _start;
}
else
{
uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_37 = 1;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_29);
return x_39;
}
}
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 0;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_10);
return x_42;
}
}
}
static uint8_t _init_l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_Aesop_Search_addGoal___closed__1;
lean_inc(x_1);
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_11);
lean_dec(x_10);
x_14 = l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(x_1);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_8);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_22 == 0)
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_23 = 0;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_27 = 0;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_8);
return x_29;
}
else
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_30 = 1;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_8);
return x_32;
}
}
}
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_11, x_11);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_11);
lean_dec(x_10);
x_34 = l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(x_1);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_36 = 0;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_8);
return x_38;
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_39 = 1;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_8);
return x_41;
}
}
else
{
uint8_t x_42; 
x_42 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_42 == 0)
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; 
x_43 = 0;
x_44 = lean_box(x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_8);
return x_45;
}
else
{
uint8_t x_46; 
x_46 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_46 == 0)
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_8);
return x_49;
}
else
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_50 = 1;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_8);
return x_52;
}
}
}
}
else
{
size_t x_53; size_t x_54; lean_object* x_55; uint8_t x_56; 
x_53 = 0;
x_54 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_55 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__9(x_10, x_53, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(x_1);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_59 == 0)
{
uint8_t x_60; lean_object* x_61; 
lean_dec(x_57);
x_60 = 0;
x_61 = lean_box(x_60);
lean_ctor_set(x_55, 0, x_61);
return x_55;
}
else
{
uint8_t x_62; 
x_62 = lean_unbox(x_57);
lean_dec(x_57);
if (x_62 == 0)
{
uint8_t x_63; lean_object* x_64; 
x_63 = 1;
x_64 = lean_box(x_63);
lean_ctor_set(x_55, 0, x_64);
return x_55;
}
else
{
uint8_t x_65; 
x_65 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_65 == 0)
{
uint8_t x_66; lean_object* x_67; 
x_66 = 0;
x_67 = lean_box(x_66);
lean_ctor_set(x_55, 0, x_67);
return x_55;
}
else
{
uint8_t x_68; lean_object* x_69; 
x_68 = 1;
x_69 = lean_box(x_68);
lean_ctor_set(x_55, 0, x_69);
return x_55;
}
}
}
}
else
{
uint8_t x_70; 
x_70 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_70 == 0)
{
uint8_t x_71; lean_object* x_72; 
lean_dec(x_57);
x_71 = 0;
x_72 = lean_box(x_71);
lean_ctor_set(x_55, 0, x_72);
return x_55;
}
else
{
uint8_t x_73; 
x_73 = lean_unbox(x_57);
lean_dec(x_57);
if (x_73 == 0)
{
uint8_t x_74; 
x_74 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_74 == 0)
{
uint8_t x_75; lean_object* x_76; 
x_75 = 0;
x_76 = lean_box(x_75);
lean_ctor_set(x_55, 0, x_76);
return x_55;
}
else
{
uint8_t x_77; lean_object* x_78; 
x_77 = 1;
x_78 = lean_box(x_77);
lean_ctor_set(x_55, 0, x_78);
return x_55;
}
}
else
{
uint8_t x_79; lean_object* x_80; 
x_79 = 1;
x_80 = lean_box(x_79);
lean_ctor_set(x_55, 0, x_80);
return x_55;
}
}
}
}
else
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_81 = lean_ctor_get(x_55, 0);
x_82 = lean_ctor_get(x_55, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_55);
x_83 = l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(x_1);
if (x_83 == 0)
{
uint8_t x_84; 
x_84 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_84 == 0)
{
uint8_t x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_81);
x_85 = 0;
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_82);
return x_87;
}
else
{
uint8_t x_88; 
x_88 = lean_unbox(x_81);
lean_dec(x_81);
if (x_88 == 0)
{
uint8_t x_89; lean_object* x_90; lean_object* x_91; 
x_89 = 1;
x_90 = lean_box(x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_82);
return x_91;
}
else
{
uint8_t x_92; 
x_92 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_92 == 0)
{
uint8_t x_93; lean_object* x_94; lean_object* x_95; 
x_93 = 0;
x_94 = lean_box(x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_82);
return x_95;
}
else
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; 
x_96 = 1;
x_97 = lean_box(x_96);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_82);
return x_98;
}
}
}
}
else
{
uint8_t x_99; 
x_99 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_99 == 0)
{
uint8_t x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_81);
x_100 = 0;
x_101 = lean_box(x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_82);
return x_102;
}
else
{
uint8_t x_103; 
x_103 = lean_unbox(x_81);
lean_dec(x_81);
if (x_103 == 0)
{
uint8_t x_104; 
x_104 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_104 == 0)
{
uint8_t x_105; lean_object* x_106; lean_object* x_107; 
x_105 = 0;
x_106 = lean_box(x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_82);
return x_107;
}
else
{
uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_108 = 1;
x_109 = lean_box(x_108);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_82);
return x_110;
}
}
else
{
uint8_t x_111; lean_object* x_112; lean_object* x_113; 
x_111 = 1;
x_112 = lean_box(x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_82);
return x_113;
}
}
}
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__11(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 == x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_array_uget(x_1, x_2);
x_13 = lean_st_ref_get(x_9, x_10);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_12, x_14);
lean_dec(x_12);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_17, x_19);
x_21 = lean_ctor_get_uint8(x_20, sizeof(void*)*4 + 1);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_22 == 0)
{
size_t x_23; size_t x_24; 
lean_free_object(x_15);
x_23 = 1;
x_24 = x_2 + x_23;
x_2 = x_24;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_15, 0, x_27);
return x_15;
}
}
else
{
uint8_t x_28; 
x_28 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_28 == 0)
{
size_t x_29; size_t x_30; 
lean_free_object(x_15);
x_29 = 1;
x_30 = x_2 + x_29;
x_2 = x_30;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_32; lean_object* x_33; 
x_32 = 1;
x_33 = lean_box(x_32);
lean_ctor_set(x_15, 0, x_33);
return x_15;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_15, 0);
x_35 = lean_ctor_get(x_15, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_15);
x_36 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_37 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_34, x_36);
x_38 = lean_ctor_get_uint8(x_37, sizeof(void*)*4 + 1);
lean_dec(x_37);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_39 == 0)
{
size_t x_40; size_t x_41; 
x_40 = 1;
x_41 = x_2 + x_40;
x_2 = x_41;
x_10 = x_35;
goto _start;
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; 
x_43 = 1;
x_44 = lean_box(x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_35);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_46 == 0)
{
size_t x_47; size_t x_48; 
x_47 = 1;
x_48 = x_2 + x_47;
x_2 = x_48;
x_10 = x_35;
goto _start;
}
else
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; 
x_50 = 1;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_35);
return x_52;
}
}
}
}
else
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
x_53 = 0;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_10);
return x_55;
}
}
}
lean_object* l_Lean_Aesop_Goal_hasProvableRapp___at_Lean_Aesop_Search_applyRegularRule___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_Aesop_Search_addGoal___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_11, x_11);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_10);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_8);
return x_20;
}
else
{
size_t x_21; size_t x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_23 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__11(x_10, x_21, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
return x_23;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = lean_apply_8(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
uint8_t x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_st_ref_get(x_9, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_st_ref_get(x_3, x_22);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
x_27 = l_Lean_Aesop_Search_addGoal___closed__2;
x_28 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_25, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_29 = lean_box(0);
lean_ctor_set(x_23, 0, x_29);
return x_23;
}
else
{
lean_object* x_30; 
lean_free_object(x_23);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
{
lean_object* _tmp_0 = x_2;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_2 = x_30;
lean_object* _tmp_9 = x_26;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_10 = _tmp_9;
}
goto _start;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_23, 0);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_23);
x_34 = l_Lean_Aesop_Search_addGoal___closed__2;
x_35 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_32, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_33);
return x_37;
}
else
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
lean_dec(x_35);
{
lean_object* _tmp_0 = x_2;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_2 = x_38;
lean_object* _tmp_9 = x_33;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_3 = _tmp_2;
x_10 = _tmp_9;
}
goto _start;
}
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_11);
if (x_40 == 0)
{
return x_11;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_11, 0);
x_42 = lean_ctor_get(x_11, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_11);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg), 10, 0);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_14 = x_11;
} else {
 lean_dec_ref(x_11);
 x_14 = lean_box(0);
}
lean_inc(x_12);
x_123 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_unbox(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
lean_dec(x_124);
x_126 = lean_ctor_get(x_123, 1);
lean_inc(x_126);
lean_dec(x_123);
lean_inc(x_12);
x_127 = l_Lean_Aesop_Goal_hasProvableRapp___at_Lean_Aesop_Search_applyRegularRule___spec__10(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_126);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_unbox(x_128);
lean_dec(x_128);
x_15 = x_130;
x_16 = x_129;
goto block_122;
}
else
{
lean_object* x_131; uint8_t x_132; 
x_131 = lean_ctor_get(x_123, 1);
lean_inc(x_131);
lean_dec(x_123);
x_132 = lean_unbox(x_124);
lean_dec(x_124);
x_15 = x_132;
x_16 = x_131;
goto block_122;
}
block_122:
{
if (x_15 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_14);
x_17 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_12);
x_18 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_17);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_20 = 1;
lean_ctor_set_uint8(x_18, sizeof(void*)*6 + 1, x_20);
x_21 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_21);
x_23 = l_Lean_Aesop_Search_addGoal___closed__1;
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_st_ref_get(x_7, x_16);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_st_ref_set(x_1, x_25, x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
x_34 = lean_array_get_size(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_lt(x_35, x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = lean_box(x_20);
lean_ctor_set(x_30, 0, x_37);
return x_30;
}
else
{
uint8_t x_38; 
x_38 = lean_nat_dec_le(x_34, x_34);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_box(x_20);
lean_ctor_set(x_30, 0, x_39);
return x_30;
}
else
{
size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
lean_free_object(x_30);
x_40 = 0;
x_41 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_42 = lean_box(0);
x_43 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7(x_32, x_40, x_41, x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_33);
lean_dec(x_32);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
x_46 = lean_box(x_20);
lean_ctor_set(x_43, 0, x_46);
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
x_48 = lean_box(x_20);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_43);
if (x_50 == 0)
{
return x_43;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_43, 0);
x_52 = lean_ctor_get(x_43, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_43);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_54 = lean_ctor_get(x_30, 0);
x_55 = lean_ctor_get(x_30, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_30);
x_56 = lean_array_get_size(x_54);
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_nat_dec_lt(x_57, x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = lean_box(x_20);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
else
{
uint8_t x_61; 
x_61 = lean_nat_dec_le(x_56, x_56);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_62 = lean_box(x_20);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_55);
return x_63;
}
else
{
size_t x_64; size_t x_65; lean_object* x_66; lean_object* x_67; 
x_64 = 0;
x_65 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_66 = lean_box(0);
x_67 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7(x_54, x_64, x_65, x_66, x_2, x_3, x_4, x_5, x_6, x_7, x_55);
lean_dec(x_54);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
x_70 = lean_box(x_20);
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_68);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_67, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_74 = x_67;
} else {
 lean_dec_ref(x_67);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_76 = lean_ctor_get(x_18, 0);
x_77 = lean_ctor_get(x_18, 1);
x_78 = lean_ctor_get(x_18, 2);
x_79 = lean_ctor_get(x_18, 3);
x_80 = lean_ctor_get(x_18, 4);
x_81 = lean_ctor_get(x_18, 5);
x_82 = lean_ctor_get_uint8(x_18, sizeof(void*)*6);
x_83 = lean_ctor_get_uint8(x_18, sizeof(void*)*6 + 2);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_18);
x_84 = 1;
x_85 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_85, 0, x_76);
lean_ctor_set(x_85, 1, x_77);
lean_ctor_set(x_85, 2, x_78);
lean_ctor_set(x_85, 3, x_79);
lean_ctor_set(x_85, 4, x_80);
lean_ctor_set(x_85, 5, x_81);
lean_ctor_set_uint8(x_85, sizeof(void*)*6, x_82);
lean_ctor_set_uint8(x_85, sizeof(void*)*6 + 1, x_84);
lean_ctor_set_uint8(x_85, sizeof(void*)*6 + 2, x_83);
x_86 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_87 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_86);
x_88 = l_Lean_Aesop_Search_addGoal___closed__1;
x_89 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_88);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_87);
lean_ctor_set(x_90, 2, x_89);
x_91 = lean_st_ref_get(x_7, x_16);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = lean_st_ref_set(x_1, x_90, x_92);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_94);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_array_get_size(x_96);
x_100 = lean_unsigned_to_nat(0u);
x_101 = lean_nat_dec_lt(x_100, x_99);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_99);
lean_dec(x_96);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_102 = lean_box(x_84);
if (lean_is_scalar(x_98)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_98;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_97);
return x_103;
}
else
{
uint8_t x_104; 
x_104 = lean_nat_dec_le(x_99, x_99);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_99);
lean_dec(x_96);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = lean_box(x_84);
if (lean_is_scalar(x_98)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_98;
}
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_97);
return x_106;
}
else
{
size_t x_107; size_t x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_98);
x_107 = 0;
x_108 = lean_usize_of_nat(x_99);
lean_dec(x_99);
x_109 = lean_box(0);
x_110 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7(x_96, x_107, x_108, x_109, x_2, x_3, x_4, x_5, x_6, x_7, x_97);
lean_dec(x_96);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_112 = x_110;
} else {
 lean_dec_ref(x_110);
 x_112 = lean_box(0);
}
x_113 = lean_box(x_84);
if (lean_is_scalar(x_112)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_112;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_111);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_110, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_110, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_110)) {
 lean_ctor_release(x_110, 0);
 lean_ctor_release(x_110, 1);
 x_117 = x_110;
} else {
 lean_dec_ref(x_110);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
}
}
}
else
{
uint8_t x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_119 = 0;
x_120 = lean_box(x_119);
if (lean_is_scalar(x_14)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_14;
}
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_16);
return x_121;
}
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_12);
x_15 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_17 = 1;
lean_ctor_set_uint8(x_15, sizeof(void*)*4 + 1, x_17);
x_18 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_19 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_18);
x_20 = l_Lean_Aesop_Search_addGoal___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_st_ref_set(x_1, x_22, x_13);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(x_17);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_box(x_17);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
x_32 = lean_ctor_get(x_15, 2);
x_33 = lean_ctor_get(x_15, 3);
x_34 = lean_ctor_get_uint8(x_15, sizeof(void*)*4);
x_35 = lean_ctor_get_uint8(x_15, sizeof(void*)*4 + 2);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
x_36 = 1;
x_37 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_31);
lean_ctor_set(x_37, 2, x_32);
lean_ctor_set(x_37, 3, x_33);
lean_ctor_set_uint8(x_37, sizeof(void*)*4, x_34);
lean_ctor_set_uint8(x_37, sizeof(void*)*4 + 1, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*4 + 2, x_35);
x_38 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_39 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_38);
x_40 = l_Lean_Aesop_Search_addGoal___closed__1;
x_41 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_39);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_st_ref_set(x_1, x_42, x_13);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
x_46 = lean_box(x_36);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1;
x_10 = l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2;
x_11 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__15(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 == x_3;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_array_uget(x_1, x_2);
x_13 = lean_st_ref_get(x_9, x_10);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_12, x_14);
lean_dec(x_12);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_17, x_19);
x_21 = lean_ctor_get_uint8(x_20, sizeof(void*)*6);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; 
x_22 = 1;
x_23 = lean_box(x_22);
lean_ctor_set(x_15, 0, x_23);
return x_15;
}
else
{
size_t x_24; size_t x_25; 
lean_free_object(x_15);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
x_10 = x_18;
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_29 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_30 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_27, x_29);
x_31 = lean_ctor_get_uint8(x_30, sizeof(void*)*6);
lean_dec(x_30);
if (x_31 == 0)
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_32 = 1;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_28);
return x_34;
}
else
{
size_t x_35; size_t x_36; 
x_35 = 1;
x_36 = x_2 + x_35;
x_2 = x_36;
x_10 = x_28;
goto _start;
}
}
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_38 = 0;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_10);
return x_40;
}
}
}
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f___at_Lean_Aesop_Search_applyRegularRule___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_Aesop_Search_addGoal___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_14 = 1;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_11, x_11);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_10);
x_18 = 1;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_8);
return x_20;
}
else
{
size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = 0;
x_22 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_23 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__15(x_10, x_21, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 0);
lean_dec(x_27);
x_28 = 1;
x_29 = lean_box(x_28);
lean_ctor_set(x_23, 0, x_29);
return x_23;
}
else
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_dec(x_23);
x_31 = 1;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_23);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_23, 0);
lean_dec(x_35);
x_36 = 0;
x_37 = lean_box(x_36);
lean_ctor_set(x_23, 0, x_37);
return x_23;
}
else
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_23, 1);
lean_inc(x_38);
lean_dec(x_23);
x_39 = 0;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
return x_41;
}
}
}
}
}
}
lean_object* l_Lean_Aesop_RappRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2;
x_10 = l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2___boxed), 8, 0);
x_15 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1___boxed), 8, 0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Search_applyRegularRule___spec__5___rarg(x_14, x_15, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_2 + x_19;
x_2 = x_20;
x_4 = x_17;
x_11 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_11);
return x_26;
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_12);
x_15 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_17 = 1;
lean_ctor_set_uint8(x_15, sizeof(void*)*6, x_17);
x_18 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_19 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_18);
x_20 = l_Lean_Aesop_Search_addGoal___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_st_ref_set(x_1, x_22, x_13);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(x_17);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_box(x_17);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_30 = lean_ctor_get(x_15, 0);
x_31 = lean_ctor_get(x_15, 1);
x_32 = lean_ctor_get(x_15, 2);
x_33 = lean_ctor_get(x_15, 3);
x_34 = lean_ctor_get(x_15, 4);
x_35 = lean_ctor_get(x_15, 5);
x_36 = lean_ctor_get_uint8(x_15, sizeof(void*)*6 + 1);
x_37 = lean_ctor_get_uint8(x_15, sizeof(void*)*6 + 2);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_15);
x_38 = 1;
x_39 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_31);
lean_ctor_set(x_39, 2, x_32);
lean_ctor_set(x_39, 3, x_33);
lean_ctor_set(x_39, 4, x_34);
lean_ctor_set(x_39, 5, x_35);
lean_ctor_set_uint8(x_39, sizeof(void*)*6, x_38);
lean_ctor_set_uint8(x_39, sizeof(void*)*6 + 1, x_36);
lean_ctor_set_uint8(x_39, sizeof(void*)*6 + 2, x_37);
x_40 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_41 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_40);
x_42 = l_Lean_Aesop_Search_addGoal___closed__1;
x_43 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_st_ref_set(x_1, x_44, x_13);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = lean_box(x_38);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_124; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_12);
x_14 = l_Lean_Aesop_Rapp_subgoalsProven_x3f___at_Lean_Aesop_Search_applyRegularRule___spec__14(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 x_17 = x_14;
} else {
 lean_dec_ref(x_14);
 x_17 = lean_box(0);
}
x_124 = lean_unbox(x_15);
lean_dec(x_15);
if (x_124 == 0)
{
uint8_t x_125; 
x_125 = 0;
x_18 = x_125;
goto block_123;
}
else
{
uint8_t x_126; 
x_126 = 1;
x_18 = x_126;
goto block_123;
}
block_123:
{
uint8_t x_19; 
x_19 = l_instDecidableNot___rarg(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_17);
x_20 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_12);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_23 = 1;
lean_ctor_set_uint8(x_21, sizeof(void*)*4, x_23);
x_24 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_25 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_24);
x_26 = l_Lean_Aesop_Search_addGoal___closed__1;
x_27 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_26);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_21);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_28, 2, x_27);
x_29 = lean_st_ref_get(x_7, x_16);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_st_ref_set(x_1, x_28, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_32);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
x_37 = lean_array_get_size(x_35);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_nat_dec_lt(x_38, x_37);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_box(x_23);
lean_ctor_set(x_33, 0, x_40);
return x_33;
}
else
{
uint8_t x_41; 
x_41 = lean_nat_dec_le(x_37, x_37);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_42 = lean_box(x_23);
lean_ctor_set(x_33, 0, x_42);
return x_33;
}
else
{
size_t x_43; size_t x_44; lean_object* x_45; lean_object* x_46; 
lean_free_object(x_33);
x_43 = 0;
x_44 = lean_usize_of_nat(x_37);
lean_dec(x_37);
x_45 = lean_box(0);
x_46 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17(x_35, x_43, x_44, x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_36);
lean_dec(x_35);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
x_49 = lean_box(x_23);
lean_ctor_set(x_46, 0, x_49);
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_dec(x_46);
x_51 = lean_box(x_23);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_46);
if (x_53 == 0)
{
return x_46;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_46, 0);
x_55 = lean_ctor_get(x_46, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_46);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_57 = lean_ctor_get(x_33, 0);
x_58 = lean_ctor_get(x_33, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_33);
x_59 = lean_array_get_size(x_57);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_nat_dec_lt(x_60, x_59);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_59);
lean_dec(x_57);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_62 = lean_box(x_23);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_58);
return x_63;
}
else
{
uint8_t x_64; 
x_64 = lean_nat_dec_le(x_59, x_59);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_59);
lean_dec(x_57);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_65 = lean_box(x_23);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_58);
return x_66;
}
else
{
size_t x_67; size_t x_68; lean_object* x_69; lean_object* x_70; 
x_67 = 0;
x_68 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_69 = lean_box(0);
x_70 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17(x_57, x_67, x_68, x_69, x_2, x_3, x_4, x_5, x_6, x_7, x_58);
lean_dec(x_57);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_72 = x_70;
} else {
 lean_dec_ref(x_70);
 x_72 = lean_box(0);
}
x_73 = lean_box(x_23);
if (lean_is_scalar(x_72)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_72;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_71);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_70, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_70, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_77 = x_70;
} else {
 lean_dec_ref(x_70);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_79 = lean_ctor_get(x_21, 0);
x_80 = lean_ctor_get(x_21, 1);
x_81 = lean_ctor_get(x_21, 2);
x_82 = lean_ctor_get(x_21, 3);
x_83 = lean_ctor_get_uint8(x_21, sizeof(void*)*4 + 1);
x_84 = lean_ctor_get_uint8(x_21, sizeof(void*)*4 + 2);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_21);
x_85 = 1;
x_86 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_86, 0, x_79);
lean_ctor_set(x_86, 1, x_80);
lean_ctor_set(x_86, 2, x_81);
lean_ctor_set(x_86, 3, x_82);
lean_ctor_set_uint8(x_86, sizeof(void*)*4, x_85);
lean_ctor_set_uint8(x_86, sizeof(void*)*4 + 1, x_83);
lean_ctor_set_uint8(x_86, sizeof(void*)*4 + 2, x_84);
x_87 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_12);
x_88 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_87);
x_89 = l_Lean_Aesop_Search_addGoal___closed__1;
x_90 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_89);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_86);
lean_ctor_set(x_91, 1, x_88);
lean_ctor_set(x_91, 2, x_90);
x_92 = lean_st_ref_get(x_7, x_16);
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = lean_st_ref_set(x_1, x_91, x_93);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_96 = l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_99 = x_96;
} else {
 lean_dec_ref(x_96);
 x_99 = lean_box(0);
}
x_100 = lean_array_get_size(x_97);
x_101 = lean_unsigned_to_nat(0u);
x_102 = lean_nat_dec_lt(x_101, x_100);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_100);
lean_dec(x_97);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_103 = lean_box(x_85);
if (lean_is_scalar(x_99)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_99;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_98);
return x_104;
}
else
{
uint8_t x_105; 
x_105 = lean_nat_dec_le(x_100, x_100);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_100);
lean_dec(x_97);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_106 = lean_box(x_85);
if (lean_is_scalar(x_99)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_99;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_98);
return x_107;
}
else
{
size_t x_108; size_t x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_99);
x_108 = 0;
x_109 = lean_usize_of_nat(x_100);
lean_dec(x_100);
x_110 = lean_box(0);
x_111 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17(x_97, x_108, x_109, x_110, x_2, x_3, x_4, x_5, x_6, x_7, x_98);
lean_dec(x_97);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_113 = x_111;
} else {
 lean_dec_ref(x_111);
 x_113 = lean_box(0);
}
x_114 = lean_box(x_85);
if (lean_is_scalar(x_113)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_113;
}
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_112);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_116 = lean_ctor_get(x_111, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_111, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_118 = x_111;
} else {
 lean_dec_ref(x_111);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
}
}
else
{
uint8_t x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_120 = 0;
x_121 = lean_box(x_120);
if (lean_is_scalar(x_17)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_17;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_16);
return x_122;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2___boxed), 8, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__1;
x_10 = l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__2;
x_11 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(x_9, x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = l_Lean_KVMap_getBool(x_10, x_1, x_2);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goals");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("UnsafeQueues");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("FailedRuleApplications");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_9 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix(x_1);
x_10 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__2;
x_11 = l_Lean_Name_append(x_9, x_10);
x_12 = 1;
x_13 = l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21(x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__4;
x_17 = l_Lean_Name_append(x_9, x_16);
x_18 = l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21(x_17, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__6;
x_22 = l_Lean_Name_append(x_9, x_21);
lean_dec(x_9);
x_23 = l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21(x_22, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
lean_dec(x_22);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_alloc_ctor(0, 0, 3);
x_27 = lean_unbox(x_14);
lean_dec(x_14);
lean_ctor_set_uint8(x_26, 0, x_27);
x_28 = lean_unbox(x_19);
lean_dec(x_19);
lean_ctor_set_uint8(x_26, 1, x_28);
x_29 = lean_unbox(x_25);
lean_dec(x_25);
lean_ctor_set_uint8(x_26, 2, x_29);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_23, 0);
x_31 = lean_ctor_get(x_23, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_23);
x_32 = lean_alloc_ctor(0, 0, 3);
x_33 = lean_unbox(x_14);
lean_dec(x_14);
lean_ctor_set_uint8(x_32, 0, x_33);
x_34 = lean_unbox(x_19);
lean_dec(x_19);
lean_ctor_set_uint8(x_32, 1, x_34);
x_35 = lean_unbox(x_30);
lean_dec(x_30);
lean_ctor_set_uint8(x_32, 2, x_35);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_31);
return x_36;
}
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_Aesop_GoalData_toMessageData_x27(x_12, x_2);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Lean_Aesop_GoalData_toMessageData_x27(x_14, x_2);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_Aesop_Goal_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__18(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_10);
x_12 = l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_Search_applyRegularRule___spec__22(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; lean_object* x_30; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = lean_st_ref_get(x_9, x_10);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_17, x_19);
lean_dec(x_17);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 0;
x_24 = l_Lean_Aesop_Goal_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__18(x_23, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_2 + x_27;
x_29 = x_25;
x_30 = lean_array_uset(x_16, x_2, x_29);
x_2 = x_28;
x_3 = x_30;
x_10 = x_26;
goto _start;
}
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__1(lean_object* x_1, lean_object* x_2, double x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_13 = l_Lean_mkMVar(x_1);
x_14 = l_Lean_Aesop_RappId_dummy;
x_15 = 1;
x_16 = 0;
x_17 = lean_box_float(x_3);
x_18 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_2);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_13);
lean_ctor_set_uint8(x_18, sizeof(void*)*4, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 2, x_16);
lean_inc(x_4);
x_19 = l_Lean_Aesop_Search_addRapp(x_18, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1___boxed), 8, 0);
x_22 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2___boxed), 8, 0);
x_23 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(x_21, x_22, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = 0;
x_27 = lean_box(x_26);
lean_ctor_set(x_23, 0, x_27);
return x_23;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_23, 1);
lean_inc(x_28);
lean_dec(x_23);
x_29 = 0;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_23);
if (x_32 == 0)
{
return x_23;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 2;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyRegularRule___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Rule succeeded without subgoals. Goal is proved.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyRegularRule___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyRegularRule___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyRegularRule___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_applyRegularRule___lambda__2___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyRegularRule___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Rule succeeded. New goals:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyRegularRule___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyRegularRule___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyRegularRule___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_4, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_st_ref_get(x_8, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_1, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_17, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = l_Lean_Aesop_RegularRule_x27_tac___rarg(x_2);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_24 = l_Lean_Aesop_Search_runRule(x_21, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_20);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_st_ref_get(x_8, x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_st_ref_take(x_1, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_30);
x_32 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_19);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_34 = lean_ctor_get(x_32, 4);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_2);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_32, 4, x_35);
x_36 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_30);
x_37 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_36);
x_38 = l_Lean_Aesop_Search_addGoal___closed__1;
x_39 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_38);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_32);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set(x_40, 2, x_39);
x_41 = lean_st_ref_set(x_1, x_40, x_31);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1___boxed), 8, 0);
x_44 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2___boxed), 8, 0);
x_45 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(x_43, x_44, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_42);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_45, 0);
lean_dec(x_47);
x_48 = 1;
x_49 = lean_box(x_48);
lean_ctor_set(x_45, 0, x_49);
return x_45;
}
else
{
lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_dec(x_45);
x_51 = 1;
x_52 = lean_box(x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
return x_53;
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_45);
if (x_54 == 0)
{
return x_45;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_45, 0);
x_56 = lean_ctor_get(x_45, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_45);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; uint8_t x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_58 = lean_ctor_get(x_32, 0);
x_59 = lean_ctor_get(x_32, 1);
x_60 = lean_ctor_get(x_32, 2);
x_61 = lean_ctor_get(x_32, 3);
x_62 = lean_ctor_get(x_32, 4);
x_63 = lean_ctor_get(x_32, 5);
x_64 = lean_ctor_get_uint8(x_32, sizeof(void*)*6);
x_65 = lean_ctor_get_uint8(x_32, sizeof(void*)*6 + 1);
x_66 = lean_ctor_get_uint8(x_32, sizeof(void*)*6 + 2);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_32);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_2);
lean_ctor_set(x_67, 1, x_62);
x_68 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_59);
lean_ctor_set(x_68, 2, x_60);
lean_ctor_set(x_68, 3, x_61);
lean_ctor_set(x_68, 4, x_67);
lean_ctor_set(x_68, 5, x_63);
lean_ctor_set_uint8(x_68, sizeof(void*)*6, x_64);
lean_ctor_set_uint8(x_68, sizeof(void*)*6 + 1, x_65);
lean_ctor_set_uint8(x_68, sizeof(void*)*6 + 2, x_66);
x_69 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_30);
x_70 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_69);
x_71 = l_Lean_Aesop_Search_addGoal___closed__1;
x_72 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_71);
x_73 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_70);
lean_ctor_set(x_73, 2, x_72);
x_74 = lean_st_ref_set(x_1, x_73, x_31);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1___boxed), 8, 0);
x_77 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2___boxed), 8, 0);
x_78 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(x_76, x_77, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; 
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_80 = x_78;
} else {
 lean_dec_ref(x_78);
 x_80 = lean_box(0);
}
x_81 = 1;
x_82 = lean_box(x_81);
if (lean_is_scalar(x_80)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_80;
}
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_79);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_78, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_78, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_86 = x_78;
} else {
 lean_dec_ref(x_78);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; double x_92; double x_93; double x_94; lean_object* x_95; 
x_88 = lean_ctor_get(x_24, 1);
lean_inc(x_88);
lean_dec(x_24);
x_89 = lean_ctor_get(x_25, 0);
lean_inc(x_89);
lean_dec(x_25);
x_90 = lean_ctor_get(x_20, 2);
lean_inc(x_90);
lean_dec(x_20);
x_91 = l_Lean_Aesop_RegularRule_x27_successProbability___rarg(x_2);
x_92 = lean_unbox_float(x_91);
lean_dec(x_91);
x_93 = lean_unbox_float(x_90);
lean_dec(x_90);
x_94 = x_93 * x_92;
x_95 = lean_ctor_get(x_89, 1);
lean_inc(x_95);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_96 = lean_ctor_get(x_89, 0);
lean_inc(x_96);
lean_dec(x_89);
x_97 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_108 = lean_st_ref_get(x_8, x_88);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_109, 3);
lean_inc(x_110);
lean_dec(x_109);
x_111 = lean_ctor_get_uint8(x_110, sizeof(void*)*1);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; uint8_t x_113; 
x_112 = lean_ctor_get(x_108, 1);
lean_inc(x_112);
lean_dec(x_108);
x_113 = 0;
x_98 = x_113;
x_99 = x_112;
goto block_107;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_114 = lean_ctor_get(x_108, 1);
lean_inc(x_114);
lean_dec(x_108);
x_115 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_97, x_3, x_4, x_5, x_6, x_7, x_8, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = lean_unbox(x_116);
lean_dec(x_116);
x_98 = x_118;
x_99 = x_117;
goto block_107;
}
block_107:
{
if (x_98 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_box(0);
x_101 = l_Lean_Aesop_Search_applyRegularRule___lambda__1(x_96, x_2, x_94, x_1, x_100, x_3, x_4, x_5, x_6, x_7, x_8, x_99);
return x_101;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = l_Lean_Aesop_Search_applyRegularRule___closed__2;
x_103 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_97, x_102, x_3, x_4, x_5, x_6, x_7, x_8, x_99);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Lean_Aesop_Search_applyRegularRule___lambda__1(x_96, x_2, x_94, x_1, x_104, x_3, x_4, x_5, x_6, x_7, x_8, x_105);
lean_dec(x_104);
return x_106;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; lean_object* x_133; lean_object* x_159; lean_object* x_160; lean_object* x_161; uint8_t x_162; 
x_119 = lean_ctor_get(x_89, 0);
lean_inc(x_119);
lean_dec(x_89);
x_120 = l_Lean_mkMVar(x_119);
x_121 = l_Lean_Aesop_RappId_dummy;
x_122 = 0;
x_123 = lean_box_float(x_94);
x_124 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_2);
lean_ctor_set(x_124, 2, x_123);
lean_ctor_set(x_124, 3, x_120);
lean_ctor_set_uint8(x_124, sizeof(void*)*4, x_122);
lean_ctor_set_uint8(x_124, sizeof(void*)*4 + 1, x_122);
lean_ctor_set_uint8(x_124, sizeof(void*)*4 + 2, x_122);
x_125 = l_Lean_Aesop_Search_addRapp(x_124, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_88);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = l_Lean_Aesop_Search_addGoals_x27(x_95, x_94, x_126, x_3, x_4, x_5, x_6, x_7, x_8, x_127);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_159 = lean_st_ref_get(x_8, x_130);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_160, 3);
lean_inc(x_161);
lean_dec(x_160);
x_162 = lean_ctor_get_uint8(x_161, sizeof(void*)*1);
lean_dec(x_161);
if (x_162 == 0)
{
lean_object* x_163; 
x_163 = lean_ctor_get(x_159, 1);
lean_inc(x_163);
lean_dec(x_159);
x_132 = x_122;
x_133 = x_163;
goto block_158;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; 
x_164 = lean_ctor_get(x_159, 1);
lean_inc(x_164);
lean_dec(x_159);
x_165 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_131, x_3, x_4, x_5, x_6, x_7, x_8, x_164);
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_168 = lean_unbox(x_166);
lean_dec(x_166);
x_132 = x_168;
x_133 = x_167;
goto block_158;
}
block_158:
{
lean_object* x_134; 
x_134 = l_Lean_Aesop_Search_applyRegularRule___closed__3;
if (x_132 == 0)
{
lean_object* x_135; lean_object* x_136; 
lean_dec(x_129);
x_135 = lean_box(0);
x_136 = lean_apply_8(x_134, x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_133);
return x_136;
}
else
{
lean_object* x_137; size_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_137 = lean_array_get_size(x_129);
x_138 = lean_usize_of_nat(x_137);
lean_dec(x_137);
x_139 = x_129;
x_140 = lean_box_usize(x_138);
x_141 = l_Lean_Aesop_Search_applyRegularRule___boxed__const__1;
x_142 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Aesop_Search_applyRegularRule___spec__22___boxed), 10, 3);
lean_closure_set(x_142, 0, x_140);
lean_closure_set(x_142, 1, x_141);
lean_closure_set(x_142, 2, x_139);
x_143 = x_142;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_144 = lean_apply_7(x_143, x_3, x_4, x_5, x_6, x_7, x_8, x_133);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_147, 0, x_145);
x_148 = l_Lean_Aesop_Search_applyRegularRule___closed__5;
x_149 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_131, x_149, x_3, x_4, x_5, x_6, x_7, x_8, x_146);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_153 = lean_apply_8(x_134, x_151, x_3, x_4, x_5, x_6, x_7, x_8, x_152);
return x_153;
}
else
{
uint8_t x_154; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_154 = !lean_is_exclusive(x_144);
if (x_154 == 0)
{
return x_144;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_144, 0);
x_156 = lean_ctor_get(x_144, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_144);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
}
}
}
}
else
{
uint8_t x_169; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_169 = !lean_is_exclusive(x_24);
if (x_169 == 0)
{
return x_24;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_24, 0);
x_171 = lean_ctor_get(x_24, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_24);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__3___rarg(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_MutAltTree_siblings___at_Lean_Aesop_Search_applyRegularRule___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__6___rarg(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
return x_16;
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__7(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__9(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__11(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Aesop_Goal_hasProvableRapp___at_Lean_Aesop_Search_applyRegularRule___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Goal_hasProvableRapp___at_Lean_Aesop_Search_applyRegularRule___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Search_applyRegularRule___spec__15(x_1, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f___at_Lean_Aesop_Search_applyRegularRule___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Rapp_subgoalsProven_x3f___at_Lean_Aesop_Search_applyRegularRule___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Search_applyRegularRule___spec__17(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_getBoolOption___at_Lean_Aesop_Search_applyRegularRule___spec__21(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_1);
lean_dec(x_1);
x_10 = l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Aesop_Goal_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = l_Lean_Aesop_Goal_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__18(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_Search_applyRegularRule___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Aesop_Search_applyRegularRule___spec__22(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
double x_13; lean_object* x_14; 
x_13 = lean_unbox_float(x_3);
lean_dec(x_3);
x_14 = l_Lean_Aesop_Search_applyRegularRule___lambda__1(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Lean_Aesop_Search_applyRegularRule___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_applyRegularRule___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("/");
return x_1;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_runNormRule___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Std_fmt___at_Lean_Aesop_instToFormatNormRule_x27___spec__1(x_3);
lean_dec(x_3);
x_5 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1;
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__3;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_10 = l_Std_fmt___at_Lean_Aesop_instToFormatSafeRule_x27___spec__1(x_9);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4;
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5;
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_1);
x_13 = l_Lean_Aesop_Search_applyRegularRule(x_2, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_unbox(x_15);
x_17 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_13, 0);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_13);
x_22 = lean_unbox(x_20);
x_23 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_20);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_21);
return x_27;
}
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Trying ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_5 < x_4;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_box(x_6);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_17 = lean_array_uget(x_3, x_5);
x_67 = lean_st_ref_get(x_12, x_13);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_68, 3);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_ctor_get_uint8(x_69, sizeof(void*)*1);
lean_dec(x_69);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_67, 1);
lean_inc(x_71);
lean_dec(x_67);
x_72 = 0;
x_18 = x_72;
x_19 = x_71;
goto block_66;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
lean_dec(x_67);
lean_inc(x_2);
x_74 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_2, x_7, x_8, x_9, x_10, x_11, x_12, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_unbox(x_75);
lean_dec(x_75);
x_18 = x_77;
x_19 = x_76;
goto block_66;
}
block_66:
{
if (x_18 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_21 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1(x_17, x_1, x_6, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_ctor_get(x_22, 0);
lean_inc(x_27);
lean_dec(x_22);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_dec(x_21);
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
lean_dec(x_22);
x_31 = 1;
x_32 = x_5 + x_31;
x_33 = lean_unbox(x_30);
lean_dec(x_30);
x_5 = x_32;
x_6 = x_33;
x_13 = x_29;
goto _start;
}
}
else
{
uint8_t x_35; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_21);
if (x_35 == 0)
{
return x_21;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_21, 0);
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_21);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_inc(x_17);
x_39 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1(x_17);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
lean_inc(x_2);
x_45 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_2, x_44, x_7, x_8, x_9, x_10, x_11, x_12, x_19);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_48 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1(x_17, x_1, x_6, x_46, x_7, x_8, x_9, x_10, x_11, x_12, x_47);
lean_dec(x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 0);
lean_dec(x_51);
x_52 = lean_ctor_get(x_49, 0);
lean_inc(x_52);
lean_dec(x_49);
lean_ctor_set(x_48, 0, x_52);
return x_48;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_48, 1);
lean_inc(x_53);
lean_dec(x_48);
x_54 = lean_ctor_get(x_49, 0);
lean_inc(x_54);
lean_dec(x_49);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; size_t x_58; size_t x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_dec(x_48);
x_57 = lean_ctor_get(x_49, 0);
lean_inc(x_57);
lean_dec(x_49);
x_58 = 1;
x_59 = x_5 + x_58;
x_60 = lean_unbox(x_57);
lean_dec(x_57);
x_5 = x_59;
x_6 = x_60;
x_13 = x_56;
goto _start;
}
}
else
{
uint8_t x_62; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_48);
if (x_62 == 0)
{
return x_48;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_48, 0);
x_64 = lean_ctor_get(x_48, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_48);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
}
}
}
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; size_t x_13; size_t x_14; uint8_t x_15; lean_object* x_16; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = 1;
x_16 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2(x_2, x_3, x_1, x_13, x_14, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_16);
if (x_21 == 0)
{
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 0);
x_23 = lean_ctor_get(x_16, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_16);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Trying safe rules");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_st_ref_get(x_10, x_11);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_23, 3);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_ctor_get_uint8(x_24, sizeof(void*)*1);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = 0;
x_12 = x_27;
x_13 = x_26;
goto block_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
lean_dec(x_22);
lean_inc(x_3);
x_29 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_unbox(x_30);
lean_dec(x_30);
x_12 = x_32;
x_13 = x_31;
goto block_21;
}
block_21:
{
if (x_12 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1(x_1, x_2, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__2;
lean_inc(x_3);
x_17 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_3, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_13);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1(x_1, x_2, x_3, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_19);
lean_dec(x_18);
return x_20;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Selected safe rules:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyFirstSafeRule___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_mkInitialContextAndState___closed__1;
x_2 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_Search_applyFirstSafeRule___closed__2;
x_2 = l_Lean_Aesop_Search_applyFirstSafeRule___closed__3;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_12, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Aesop_RuleSet_applicableSafeRules(x_14, x_17, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_32 = lean_st_ref_get(x_7, x_20);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 3);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get_uint8(x_34, sizeof(void*)*1);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = 0;
x_22 = x_37;
x_23 = x_36;
goto block_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unbox(x_40);
lean_dec(x_40);
x_22 = x_42;
x_23 = x_41;
goto block_31;
}
block_31:
{
if (x_22 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_box(0);
x_25 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2(x_19, x_1, x_21, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
lean_dec(x_19);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = l_Lean_Aesop_Search_applyFirstSafeRule___closed__4;
x_27 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_21, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_23);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2(x_19, x_1, x_21, x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
lean_dec(x_28);
lean_dec(x_19);
return x_30;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_18);
if (x_43 == 0)
{
return x_18;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_18, 0);
x_45 = lean_ctor_get(x_18, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_18);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___lambda__1(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = lean_unbox(x_6);
lean_dec(x_6);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2(x_1, x_2, x_3, x_14, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
return x_17;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_selectRules_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_Search_selectRules_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_selectRules_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_selectRules___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Aesop_Search_selectRules___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Selected unsafe rules:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_selectRules___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_selectRules___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_selectRules(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_13);
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_15);
x_17 = lean_ctor_get(x_16, 5);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_free_object(x_11);
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_16, 0);
x_20 = lean_ctor_get(x_16, 1);
x_21 = lean_ctor_get(x_16, 2);
x_22 = lean_ctor_get(x_16, 3);
x_23 = lean_ctor_get(x_16, 4);
x_24 = lean_ctor_get(x_16, 5);
lean_dec(x_24);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_20);
x_26 = l_Lean_Aesop_RuleSet_applicableUnsafeRules(x_25, x_20, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_array_to_list(lean_box(0), x_27);
lean_inc(x_29);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_16, 5, x_30);
x_31 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_13);
x_32 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_31);
x_33 = l_Lean_Aesop_Search_addGoal___closed__1;
x_34 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_33);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_16);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_st_ref_get(x_7, x_28);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_st_ref_set(x_1, x_35, x_37);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_58 = lean_st_ref_get(x_7, x_39);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_59, 3);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_ctor_get_uint8(x_60, sizeof(void*)*1);
lean_dec(x_60);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
lean_dec(x_58);
x_63 = 0;
x_42 = x_63;
x_43 = x_62;
goto block_57;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_64 = lean_ctor_get(x_58, 1);
lean_inc(x_64);
lean_dec(x_58);
x_65 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_41, x_2, x_3, x_4, x_5, x_6, x_7, x_64);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_unbox(x_66);
lean_dec(x_66);
x_42 = x_68;
x_43 = x_67;
goto block_57;
}
block_57:
{
if (x_42 == 0)
{
lean_object* x_44; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_40;
}
lean_ctor_set(x_44, 0, x_29);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_dec(x_40);
lean_inc(x_29);
x_45 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_29);
x_46 = l_List_redLength___rarg(x_45);
x_47 = lean_mk_empty_array_with_capacity(x_46);
lean_dec(x_46);
x_48 = l_List_toArrayAux___rarg(x_45, x_47);
x_49 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Lean_Aesop_Search_selectRules___closed__2;
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_41, x_51, x_2, x_3, x_4, x_5, x_6, x_7, x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_52, 0);
lean_dec(x_54);
lean_ctor_set(x_52, 0, x_29);
return x_52;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_dec(x_52);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_29);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
else
{
uint8_t x_69; 
lean_free_object(x_16);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_26);
if (x_69 == 0)
{
return x_26;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_26, 0);
x_71 = lean_ctor_get(x_26, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_26);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; 
x_73 = lean_ctor_get(x_16, 0);
x_74 = lean_ctor_get(x_16, 1);
x_75 = lean_ctor_get(x_16, 2);
x_76 = lean_ctor_get(x_16, 3);
x_77 = lean_ctor_get(x_16, 4);
x_78 = lean_ctor_get_uint8(x_16, sizeof(void*)*6);
x_79 = lean_ctor_get_uint8(x_16, sizeof(void*)*6 + 1);
x_80 = lean_ctor_get_uint8(x_16, sizeof(void*)*6 + 2);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_16);
x_81 = lean_ctor_get(x_2, 0);
lean_inc(x_81);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_74);
x_82 = l_Lean_Aesop_RuleSet_applicableUnsafeRules(x_81, x_74, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_array_to_list(lean_box(0), x_83);
lean_inc(x_85);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_87, 0, x_73);
lean_ctor_set(x_87, 1, x_74);
lean_ctor_set(x_87, 2, x_75);
lean_ctor_set(x_87, 3, x_76);
lean_ctor_set(x_87, 4, x_77);
lean_ctor_set(x_87, 5, x_86);
lean_ctor_set_uint8(x_87, sizeof(void*)*6, x_78);
lean_ctor_set_uint8(x_87, sizeof(void*)*6 + 1, x_79);
lean_ctor_set_uint8(x_87, sizeof(void*)*6 + 2, x_80);
x_88 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_13);
x_89 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_88);
x_90 = l_Lean_Aesop_Search_addGoal___closed__1;
x_91 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_90);
x_92 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_92, 0, x_87);
lean_ctor_set(x_92, 1, x_89);
lean_ctor_set(x_92, 2, x_91);
x_93 = lean_st_ref_get(x_7, x_84);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_st_ref_set(x_1, x_92, x_94);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_97 = x_95;
} else {
 lean_dec_ref(x_95);
 x_97 = lean_box(0);
}
x_98 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_114 = lean_st_ref_get(x_7, x_96);
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_115, 3);
lean_inc(x_116);
lean_dec(x_115);
x_117 = lean_ctor_get_uint8(x_116, sizeof(void*)*1);
lean_dec(x_116);
if (x_117 == 0)
{
lean_object* x_118; uint8_t x_119; 
x_118 = lean_ctor_get(x_114, 1);
lean_inc(x_118);
lean_dec(x_114);
x_119 = 0;
x_99 = x_119;
x_100 = x_118;
goto block_113;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_120 = lean_ctor_get(x_114, 1);
lean_inc(x_120);
lean_dec(x_114);
x_121 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_98, x_2, x_3, x_4, x_5, x_6, x_7, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_unbox(x_122);
lean_dec(x_122);
x_99 = x_124;
x_100 = x_123;
goto block_113;
}
block_113:
{
if (x_99 == 0)
{
lean_object* x_101; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_97)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_97;
}
lean_ctor_set(x_101, 0, x_85);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_97);
lean_inc(x_85);
x_102 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_85);
x_103 = l_List_redLength___rarg(x_102);
x_104 = lean_mk_empty_array_with_capacity(x_103);
lean_dec(x_103);
x_105 = l_List_toArrayAux___rarg(x_102, x_104);
x_106 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_106, 0, x_105);
x_107 = l_Lean_Aesop_Search_selectRules___closed__2;
x_108 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_98, x_108, x_2, x_3, x_4, x_5, x_6, x_7, x_100);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_111 = x_109;
} else {
 lean_dec_ref(x_109);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(0, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_85);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_125 = lean_ctor_get(x_82, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_82, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_127 = x_82;
} else {
 lean_dec_ref(x_82);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
}
else
{
lean_object* x_129; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_129 = lean_ctor_get(x_17, 0);
lean_inc(x_129);
lean_dec(x_17);
lean_ctor_set(x_11, 0, x_129);
return x_11;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_130 = lean_ctor_get(x_11, 0);
x_131 = lean_ctor_get(x_11, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_11);
x_132 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_130);
x_133 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_130, x_132);
x_134 = lean_ctor_get(x_133, 5);
lean_inc(x_134);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint8_t x_140; uint8_t x_141; uint8_t x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_135 = lean_ctor_get(x_133, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_136);
x_137 = lean_ctor_get(x_133, 2);
lean_inc(x_137);
x_138 = lean_ctor_get(x_133, 3);
lean_inc(x_138);
x_139 = lean_ctor_get(x_133, 4);
lean_inc(x_139);
x_140 = lean_ctor_get_uint8(x_133, sizeof(void*)*6);
x_141 = lean_ctor_get_uint8(x_133, sizeof(void*)*6 + 1);
x_142 = lean_ctor_get_uint8(x_133, sizeof(void*)*6 + 2);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 lean_ctor_release(x_133, 2);
 lean_ctor_release(x_133, 3);
 lean_ctor_release(x_133, 4);
 lean_ctor_release(x_133, 5);
 x_143 = x_133;
} else {
 lean_dec_ref(x_133);
 x_143 = lean_box(0);
}
x_144 = lean_ctor_get(x_2, 0);
lean_inc(x_144);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_136);
x_145 = l_Lean_Aesop_RuleSet_applicableUnsafeRules(x_144, x_136, x_4, x_5, x_6, x_7, x_131);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; uint8_t x_162; lean_object* x_163; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_array_to_list(lean_box(0), x_146);
lean_inc(x_148);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
if (lean_is_scalar(x_143)) {
 x_150 = lean_alloc_ctor(0, 6, 3);
} else {
 x_150 = x_143;
}
lean_ctor_set(x_150, 0, x_135);
lean_ctor_set(x_150, 1, x_136);
lean_ctor_set(x_150, 2, x_137);
lean_ctor_set(x_150, 3, x_138);
lean_ctor_set(x_150, 4, x_139);
lean_ctor_set(x_150, 5, x_149);
lean_ctor_set_uint8(x_150, sizeof(void*)*6, x_140);
lean_ctor_set_uint8(x_150, sizeof(void*)*6 + 1, x_141);
lean_ctor_set_uint8(x_150, sizeof(void*)*6 + 2, x_142);
x_151 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_130);
x_152 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_130, x_151);
x_153 = l_Lean_Aesop_Search_addGoal___closed__1;
x_154 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_130, x_153);
x_155 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_155, 0, x_150);
lean_ctor_set(x_155, 1, x_152);
lean_ctor_set(x_155, 2, x_154);
x_156 = lean_st_ref_get(x_7, x_147);
x_157 = lean_ctor_get(x_156, 1);
lean_inc(x_157);
lean_dec(x_156);
x_158 = lean_st_ref_set(x_1, x_155, x_157);
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_160 = x_158;
} else {
 lean_dec_ref(x_158);
 x_160 = lean_box(0);
}
x_161 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_177 = lean_st_ref_get(x_7, x_159);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_178, 3);
lean_inc(x_179);
lean_dec(x_178);
x_180 = lean_ctor_get_uint8(x_179, sizeof(void*)*1);
lean_dec(x_179);
if (x_180 == 0)
{
lean_object* x_181; uint8_t x_182; 
x_181 = lean_ctor_get(x_177, 1);
lean_inc(x_181);
lean_dec(x_177);
x_182 = 0;
x_162 = x_182;
x_163 = x_181;
goto block_176;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_183 = lean_ctor_get(x_177, 1);
lean_inc(x_183);
lean_dec(x_177);
x_184 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_161, x_2, x_3, x_4, x_5, x_6, x_7, x_183);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_unbox(x_185);
lean_dec(x_185);
x_162 = x_187;
x_163 = x_186;
goto block_176;
}
block_176:
{
if (x_162 == 0)
{
lean_object* x_164; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_160)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_160;
}
lean_ctor_set(x_164, 0, x_148);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_160);
lean_inc(x_148);
x_165 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_148);
x_166 = l_List_redLength___rarg(x_165);
x_167 = lean_mk_empty_array_with_capacity(x_166);
lean_dec(x_166);
x_168 = l_List_toArrayAux___rarg(x_165, x_167);
x_169 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_169, 0, x_168);
x_170 = l_Lean_Aesop_Search_selectRules___closed__2;
x_171 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
x_172 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_161, x_171, x_2, x_3, x_4, x_5, x_6, x_7, x_163);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_173 = lean_ctor_get(x_172, 1);
lean_inc(x_173);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_174 = x_172;
} else {
 lean_dec_ref(x_172);
 x_174 = lean_box(0);
}
if (lean_is_scalar(x_174)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_174;
}
lean_ctor_set(x_175, 0, x_148);
lean_ctor_set(x_175, 1, x_173);
return x_175;
}
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_143);
lean_dec(x_139);
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_136);
lean_dec(x_135);
lean_dec(x_130);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_188 = lean_ctor_get(x_145, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_145, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_190 = x_145;
} else {
 lean_dec_ref(x_145);
 x_190 = lean_box(0);
}
if (lean_is_scalar(x_190)) {
 x_191 = lean_alloc_ctor(1, 2, 0);
} else {
 x_191 = x_190;
}
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set(x_191, 1, x_189);
return x_191;
}
}
else
{
lean_object* x_192; lean_object* x_193; 
lean_dec(x_133);
lean_dec(x_130);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_192 = lean_ctor_get(x_134, 0);
lean_inc(x_192);
lean_dec(x_134);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_131);
return x_193;
}
}
}
}
lean_object* l_Lean_Aesop_Search_selectRules___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_selectRules___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_selectRules___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_selectRules(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_applyFirstUnsafeRule_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; double x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_unbox_float(x_2);
lean_dec(x_2);
x_4 = l_Lean_Aesop_Percent_toHumanString(x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4;
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_10);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = l_List_tail_x21___rarg(x_3);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_1);
x_15 = l_Lean_Aesop_Search_applyRegularRule(x_2, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_unbox(x_17);
x_19 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_17);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_17);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_15, 0, x_23);
return x_15;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_unbox(x_24);
x_27 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_13);
lean_ctor_set(x_28, 1, x_24);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_13);
lean_ctor_set(x_31, 1, x_24);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_13);
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
return x_15;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_ctor_get(x_15, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_15);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_62 = lean_st_ref_get(x_10, x_11);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_63, 3);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_ctor_get_uint8(x_64, sizeof(void*)*1);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
lean_dec(x_62);
x_67 = 0;
x_17 = x_67;
x_18 = x_66;
goto block_61;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
lean_dec(x_62);
lean_inc(x_2);
x_69 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_unbox(x_70);
lean_dec(x_70);
x_17 = x_72;
x_18 = x_71;
goto block_61;
}
block_61:
{
if (x_17 == 0)
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_box(0);
x_20 = lean_unbox(x_16);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_21 = l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1(x_13, x_1, x_15, x_20, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_15);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_ctor_get(x_22, 0);
lean_inc(x_27);
lean_dec(x_22);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_dec(x_21);
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
lean_dec(x_22);
x_3 = x_14;
x_4 = x_30;
x_11 = x_29;
goto _start;
}
}
else
{
uint8_t x_32; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_21);
if (x_32 == 0)
{
return x_21;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_21, 0);
x_34 = lean_ctor_get(x_21, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_21);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; 
lean_inc(x_13);
x_36 = l_Std_fmt___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__1(x_13);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2;
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
lean_inc(x_2);
x_42 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_2, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_unbox(x_16);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_46 = l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1(x_13, x_1, x_15, x_45, x_43, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
lean_dec(x_43);
lean_dec(x_15);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
uint8_t x_48; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_46);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 0);
lean_dec(x_49);
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
lean_dec(x_47);
lean_ctor_set(x_46, 0, x_50);
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_dec(x_46);
x_52 = lean_ctor_get(x_47, 0);
lean_inc(x_52);
lean_dec(x_47);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_46, 1);
lean_inc(x_54);
lean_dec(x_46);
x_55 = lean_ctor_get(x_47, 0);
lean_inc(x_55);
lean_dec(x_47);
x_3 = x_14;
x_4 = x_55;
x_11 = x_54;
goto _start;
}
}
else
{
uint8_t x_57; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_46);
if (x_57 == 0)
{
return x_46;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_46, 0);
x_59 = lean_ctor_get(x_46, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_46);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
}
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_List_isEmpty___rarg(x_1);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1;
x_12 = l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Search_applyRegularRule___spec__12___rarg(x_11, x_12, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_apply_8(x_2, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goal is unprovable");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1___boxed), 9, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_box(0);
x_16 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1(x_1, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = l_List_isEmpty___rarg(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_3);
x_18 = lean_box(0);
x_19 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1(x_1, x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_19;
}
else
{
uint8_t x_20; lean_object* x_21; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_1);
x_30 = lean_st_ref_get(x_11, x_12);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_31, 3);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_ctor_get_uint8(x_32, sizeof(void*)*1);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = 0;
x_20 = x_35;
x_21 = x_34;
goto block_29;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_30, 1);
lean_inc(x_36);
lean_dec(x_30);
lean_inc(x_4);
x_37 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_unbox(x_38);
lean_dec(x_38);
x_20 = x_40;
x_21 = x_39;
goto block_29;
}
block_29:
{
if (x_20 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
x_22 = lean_box(0);
x_23 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2(x_3, x_13, x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__2;
x_25 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_4, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2(x_3, x_13, x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
lean_dec(x_26);
return x_28;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Remaining unsafe rules:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = 1;
x_13 = lean_box(x_12);
lean_inc(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2(x_2, x_3, x_1, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_st_ref_get(x_10, x_17);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_take(x_2, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_18);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_18);
x_26 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_23);
x_27 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_23, x_26);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_29 = lean_ctor_get(x_27, 5);
lean_dec(x_29);
lean_ctor_set(x_27, 5, x_25);
x_30 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_23);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_23, x_30);
x_32 = l_Lean_Aesop_Search_addGoal___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_23, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_27);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_st_ref_set(x_2, x_34, x_24);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_55 = lean_st_ref_get(x_10, x_36);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_56, 3);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_ctor_get_uint8(x_57, sizeof(void*)*1);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_55, 1);
lean_inc(x_59);
lean_dec(x_55);
x_60 = 0;
x_37 = x_60;
x_38 = x_59;
goto block_54;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
lean_dec(x_55);
lean_inc(x_3);
x_62 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_61);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unbox(x_63);
lean_dec(x_63);
x_37 = x_65;
x_38 = x_64;
goto block_54;
}
block_54:
{
if (x_37 == 0)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_39 = lean_box(0);
x_40 = lean_unbox(x_19);
lean_dec(x_19);
x_41 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(x_18, x_40, x_2, x_3, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_38);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; 
lean_inc(x_18);
x_42 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_18);
x_43 = l_List_redLength___rarg(x_42);
x_44 = lean_mk_empty_array_with_capacity(x_43);
lean_dec(x_43);
x_45 = l_List_toArrayAux___rarg(x_42, x_44);
x_46 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
lean_inc(x_3);
x_49 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_3, x_48, x_5, x_6, x_7, x_8, x_9, x_10, x_38);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_unbox(x_19);
lean_dec(x_19);
x_53 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(x_18, x_52, x_2, x_3, x_50, x_5, x_6, x_7, x_8, x_9, x_10, x_51);
lean_dec(x_50);
return x_53;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; uint8_t x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_66 = lean_ctor_get(x_27, 0);
x_67 = lean_ctor_get(x_27, 1);
x_68 = lean_ctor_get(x_27, 2);
x_69 = lean_ctor_get(x_27, 3);
x_70 = lean_ctor_get(x_27, 4);
x_71 = lean_ctor_get_uint8(x_27, sizeof(void*)*6);
x_72 = lean_ctor_get_uint8(x_27, sizeof(void*)*6 + 1);
x_73 = lean_ctor_get_uint8(x_27, sizeof(void*)*6 + 2);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_27);
x_74 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_74, 0, x_66);
lean_ctor_set(x_74, 1, x_67);
lean_ctor_set(x_74, 2, x_68);
lean_ctor_set(x_74, 3, x_69);
lean_ctor_set(x_74, 4, x_70);
lean_ctor_set(x_74, 5, x_25);
lean_ctor_set_uint8(x_74, sizeof(void*)*6, x_71);
lean_ctor_set_uint8(x_74, sizeof(void*)*6 + 1, x_72);
lean_ctor_set_uint8(x_74, sizeof(void*)*6 + 2, x_73);
x_75 = l_Lean_Aesop_Search_addGoal___closed__2;
lean_inc(x_23);
x_76 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_23, x_75);
x_77 = l_Lean_Aesop_Search_addGoal___closed__1;
x_78 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_23, x_77);
x_79 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_79, 0, x_74);
lean_ctor_set(x_79, 1, x_76);
lean_ctor_set(x_79, 2, x_78);
x_80 = lean_st_ref_set(x_2, x_79, x_24);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_100 = lean_st_ref_get(x_10, x_81);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_101, 3);
lean_inc(x_102);
lean_dec(x_101);
x_103 = lean_ctor_get_uint8(x_102, sizeof(void*)*1);
lean_dec(x_102);
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; 
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_dec(x_100);
x_105 = 0;
x_82 = x_105;
x_83 = x_104;
goto block_99;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_106 = lean_ctor_get(x_100, 1);
lean_inc(x_106);
lean_dec(x_100);
lean_inc(x_3);
x_107 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_106);
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_unbox(x_108);
lean_dec(x_108);
x_82 = x_110;
x_83 = x_109;
goto block_99;
}
block_99:
{
if (x_82 == 0)
{
lean_object* x_84; uint8_t x_85; lean_object* x_86; 
x_84 = lean_box(0);
x_85 = lean_unbox(x_19);
lean_dec(x_19);
x_86 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(x_18, x_85, x_2, x_3, x_84, x_5, x_6, x_7, x_8, x_9, x_10, x_83);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; 
lean_inc(x_18);
x_87 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_18);
x_88 = l_List_redLength___rarg(x_87);
x_89 = lean_mk_empty_array_with_capacity(x_88);
lean_dec(x_88);
x_90 = l_List_toArrayAux___rarg(x_87, x_89);
x_91 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_91, 0, x_90);
x_92 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2;
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
lean_inc(x_3);
x_94 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_3, x_93, x_5, x_6, x_7, x_8, x_9, x_10, x_83);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lean_unbox(x_19);
lean_dec(x_19);
x_98 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(x_18, x_97, x_2, x_3, x_95, x_5, x_6, x_7, x_8, x_9, x_10, x_96);
lean_dec(x_95);
return x_98;
}
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_111 = !lean_is_exclusive(x_15);
if (x_111 == 0)
{
return x_15;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_15, 0);
x_113 = lean_ctor_get(x_15, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_15);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Trying unsafe rules");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_9 = l_Lean_Aesop_Search_selectRules(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_23 = lean_st_ref_get(x_7, x_11);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_24, 3);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_ctor_get_uint8(x_25, sizeof(void*)*1);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = 0;
x_13 = x_28;
x_14 = x_27;
goto block_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_dec(x_23);
x_30 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_unbox(x_31);
lean_dec(x_31);
x_13 = x_33;
x_14 = x_32;
goto block_22;
}
block_22:
{
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4(x_10, x_1, x_12, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__2;
x_18 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_12, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4(x_10, x_1, x_12, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
lean_dec(x_19);
return x_21;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_9);
if (x_34 == 0)
{
return x_9;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_9, 0);
x_36 = lean_ctor_get(x_9, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_9);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_4);
lean_dec(x_4);
x_14 = l_List_forIn_loop___at_Lean_Aesop_Search_applyFirstUnsafeRule___spec__2___lambda__1(x_1, x_2, x_3, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Aesop_Search_expandGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_9 = l_Lean_Aesop_Search_normalizeGoalIfNecessary(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Aesop_Search_applyFirstSafeRule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_unbox(x_13);
lean_dec(x_13);
x_16 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_15);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = 0;
x_18 = lean_box(x_17);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; 
lean_free_object(x_11);
x_19 = l_Lean_Aesop_Search_applyFirstUnsafeRule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_unbox(x_20);
lean_dec(x_20);
x_23 = l_Lean_Aesop_Search_RuleResult_failed_x3f(x_22);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_21);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Aesop_Search_applyFirstUnsafeRule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_21);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
return x_11;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_11, 0);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_11);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_9);
if (x_32 == 0)
{
return x_9;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_9, 0);
x_34 = lean_ctor_get(x_9, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_9);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Aesop_Search_expandNextGoal_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Aesop_Search_expandNextGoal_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_expandNextGoal_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_foldl___at_Lean_Aesop_Search_expandNextGoal___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_1 = x_6;
x_2 = x_4;
goto _start;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_11);
lean_inc(x_12);
x_13 = l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(x_12, x_11);
if (x_13 == 0)
{
lean_dec(x_11);
lean_ctor_set(x_1, 0, x_12);
x_2 = x_9;
goto _start;
}
else
{
lean_dec(x_12);
x_2 = x_9;
goto _start;
}
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_8, 0);
lean_inc(x_17);
lean_dec(x_8);
lean_inc(x_16);
lean_inc(x_17);
x_18 = l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(x_17, x_16);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_1 = x_19;
x_2 = x_9;
goto _start;
}
else
{
lean_object* x_21; 
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_16);
x_1 = x_21;
x_2 = x_9;
goto _start;
}
}
}
}
}
}
lean_object* l_Std_BinomialHeapImp_head_x3f___at_Lean_Aesop_Search_expandNextGoal___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = l_List_foldl___at_Lean_Aesop_Search_expandNextGoal___spec__2(x_4, x_3);
return x_5;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set_tag(x_10, 1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
lean_inc(x_9);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___at_Lean_Aesop_Search_expandNextGoal___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_15 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_13, x_14);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_18, x_20);
x_22 = lean_ctor_get(x_21, 2);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
}
uint8_t l_Lean_Aesop_Search_expandNextGoal___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Aesop_Search_ActiveGoal_instDecidableRelActiveGoalLt(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Aesop_Search_expandNextGoal___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_12 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_11);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*6);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = lean_ctor_get_uint8(x_12, sizeof(void*)*6 + 1);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_ctor_get_uint8(x_12, sizeof(void*)*6 + 2);
lean_dec(x_12);
if (x_15 == 0)
{
lean_object* x_16; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_16 = l_Lean_Aesop_Search_expandGoal(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_16, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_16, 0, x_21);
return x_16;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___at_Lean_Aesop_Search_expandNextGoal___spec__4(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_st_ref_get(x_9, x_28);
lean_dec(x_9);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_st_ref_take(x_5, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = l_Std_BinomialHeapImp_singleton___rarg(x_27);
x_37 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_36, x_35);
lean_ctor_set(x_32, 0, x_37);
x_38 = lean_st_ref_set(x_5, x_32, x_33);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_45 = lean_ctor_get(x_32, 0);
x_46 = lean_ctor_get(x_32, 1);
x_47 = lean_ctor_get(x_32, 2);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_32);
x_48 = l_Std_BinomialHeapImp_singleton___rarg(x_27);
x_49 = l_Std_BinomialHeapImp_merge___at_Lean_Aesop_Search_mkInitialContextAndState___spec__1(x_48, x_45);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_46);
lean_ctor_set(x_50, 2, x_47);
x_51 = lean_st_ref_set(x_5, x_50, x_33);
lean_dec(x_5);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
x_54 = lean_box(0);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_16);
if (x_56 == 0)
{
return x_16;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_16, 0);
x_58 = lean_ctor_get(x_16, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_16);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_10);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_10);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_10);
return x_65;
}
}
}
static lean_object* _init_l_Lean_Aesop_Search_expandNextGoal___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop/expandNextGoal: internal error: no active goals left");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_expandNextGoal___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_expandNextGoal___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Search_expandNextGoal___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_expandNextGoal___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_expandNextGoal___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Expanding ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_expandNextGoal___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_expandNextGoal___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_expandNextGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_13);
x_14 = l_Std_BinomialHeapImp_head_x3f___at_Lean_Aesop_Search_expandNextGoal___spec__1(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
x_15 = l_Lean_Aesop_Search_expandNextGoal___closed__2;
x_16 = l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3(x_15, x_1, x_2, x_3, x_4, x_5, x_6, x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Aesop_Search_expandNextGoal___closed__3;
x_19 = l_Std_BinomialHeapImp_tail___rarg(x_18, x_13);
x_20 = lean_st_ref_get(x_6, x_12);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_take(x_2, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_26 = lean_ctor_get(x_23, 0);
lean_dec(x_26);
lean_ctor_set(x_23, 0, x_19);
x_27 = lean_st_ref_set(x_2, x_23, x_24);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
lean_dec(x_17);
x_30 = lean_st_ref_get(x_6, x_28);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_get(x_29, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_55 = lean_st_ref_get(x_6, x_34);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_56, 3);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_ctor_get_uint8(x_57, sizeof(void*)*1);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_55, 1);
lean_inc(x_59);
lean_dec(x_55);
x_60 = 0;
x_36 = x_60;
x_37 = x_59;
goto block_54;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
lean_dec(x_55);
x_62 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_35, x_1, x_2, x_3, x_4, x_5, x_6, x_61);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unbox(x_63);
lean_dec(x_63);
x_36 = x_65;
x_37 = x_64;
goto block_54;
}
block_54:
{
if (x_36 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_box(0);
x_39 = l_Lean_Aesop_Search_expandNextGoal___lambda__2(x_33, x_29, x_38, x_1, x_2, x_3, x_4, x_5, x_6, x_37);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_40 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_33);
x_41 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_33, x_40);
x_42 = 0;
x_43 = l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19(x_42, x_41, x_1, x_2, x_3, x_4, x_5, x_6, x_37);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Aesop_Search_expandNextGoal___closed__5;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
x_48 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_35, x_49, x_1, x_2, x_3, x_4, x_5, x_6, x_45);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Aesop_Search_expandNextGoal___lambda__2(x_33, x_29, x_51, x_1, x_2, x_3, x_4, x_5, x_6, x_52);
lean_dec(x_51);
return x_53;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_66 = lean_ctor_get(x_23, 1);
x_67 = lean_ctor_get(x_23, 2);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_23);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_19);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_67);
x_69 = lean_st_ref_set(x_2, x_68, x_24);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_ctor_get(x_17, 0);
lean_inc(x_71);
lean_dec(x_17);
x_72 = lean_st_ref_get(x_6, x_70);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_st_ref_get(x_71, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4;
x_97 = lean_st_ref_get(x_6, x_76);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_98, 3);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_ctor_get_uint8(x_99, sizeof(void*)*1);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_97, 1);
lean_inc(x_101);
lean_dec(x_97);
x_102 = 0;
x_78 = x_102;
x_79 = x_101;
goto block_96;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_103 = lean_ctor_get(x_97, 1);
lean_inc(x_103);
lean_dec(x_97);
x_104 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__2(x_77, x_1, x_2, x_3, x_4, x_5, x_6, x_103);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_107 = lean_unbox(x_105);
lean_dec(x_105);
x_78 = x_107;
x_79 = x_106;
goto block_96;
}
block_96:
{
if (x_78 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_box(0);
x_81 = l_Lean_Aesop_Search_expandNextGoal___lambda__2(x_75, x_71, x_80, x_1, x_2, x_3, x_4, x_5, x_6, x_79);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_82 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
lean_inc(x_75);
x_83 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_75, x_82);
x_84 = 0;
x_85 = l_Lean_Aesop_GoalData_toMessageData___at_Lean_Aesop_Search_applyRegularRule___spec__19(x_84, x_83, x_1, x_2, x_3, x_4, x_5, x_6, x_79);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lean_Aesop_Search_expandNextGoal___closed__5;
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
x_90 = l_Lean_Aesop_Search_runNormRule___closed__4;
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1(x_77, x_91, x_1, x_2, x_3, x_4, x_5, x_6, x_87);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_Aesop_Search_expandNextGoal___lambda__2(x_75, x_71, x_93, x_1, x_2, x_3, x_4, x_5, x_6, x_94);
lean_dec(x_93);
return x_95;
}
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___at_Lean_Aesop_Search_expandNextGoal___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___at_Lean_Aesop_Search_expandNextGoal___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_Search_expandNextGoal___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Aesop_Search_expandNextGoal___lambda__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Search_expandNextGoal___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Aesop_Search_expandNextGoal___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Aesop_Search_finishIfProven_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(x_1);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_Search_finishIfProven_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_finishIfProven_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_finishIfProven_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Aesop_Search_finishIfProven_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Aesop_Search_finishIfProven(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = l_Lean_Aesop_Search_readRootGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_6, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_9, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_18 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_15, x_17);
x_19 = lean_ctor_get_uint8(x_18, sizeof(void*)*6);
lean_dec(x_18);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_20 = 0;
x_21 = lean_box(x_20);
lean_ctor_set(x_13, 0, x_21);
return x_13;
}
else
{
lean_object* x_22; 
lean_free_object(x_13);
x_22 = l_Lean_Aesop_GoalRef_linkProofs(x_9, x_3, x_4, x_5, x_6, x_16);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_24 = l_Lean_Aesop_GoalRef_extractProof(x_9, x_3, x_4, x_5, x_6, x_23);
lean_dec(x_9);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Aesop_Search_readMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Meta_assignExprMVar(x_28, x_25, x_3, x_4, x_5, x_6, x_29);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = 1;
x_34 = lean_box(x_33);
lean_ctor_set(x_30, 0, x_34);
return x_30;
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_dec(x_30);
x_36 = 1;
x_37 = lean_box(x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_24);
if (x_39 == 0)
{
return x_24;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_24, 0);
x_41 = lean_ctor_get(x_24, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_24);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_22);
if (x_43 == 0)
{
return x_22;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_22, 0);
x_45 = lean_ctor_get(x_22, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_22);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_13, 0);
x_48 = lean_ctor_get(x_13, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_13);
x_49 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_50 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_47, x_49);
x_51 = lean_ctor_get_uint8(x_50, sizeof(void*)*6);
lean_dec(x_50);
if (x_51 == 0)
{
uint8_t x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_52 = 0;
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_48);
return x_54;
}
else
{
lean_object* x_55; 
x_55 = l_Lean_Aesop_GoalRef_linkProofs(x_9, x_3, x_4, x_5, x_6, x_48);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_57 = l_Lean_Aesop_GoalRef_extractProof(x_9, x_3, x_4, x_5, x_6, x_56);
lean_dec(x_9);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Aesop_Search_readMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Lean_Meta_assignExprMVar(x_61, x_58, x_3, x_4, x_5, x_6, x_62);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_65 = x_63;
} else {
 lean_dec_ref(x_63);
 x_65 = lean_box(0);
}
x_66 = 1;
x_67 = lean_box(x_66);
if (lean_is_scalar(x_65)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_65;
}
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_64);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_69 = lean_ctor_get(x_57, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_57, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_71 = x_57;
} else {
 lean_dec_ref(x_57);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_73 = lean_ctor_get(x_55, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_55, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_75 = x_55;
} else {
 lean_dec_ref(x_55);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
}
lean_object* l_Lean_Aesop_Search_finishIfProven___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_Search_finishIfProven(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Lean_Aesop_Search_search___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: failed to prove the goal");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Search_search___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Search_search___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Search_search(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_8 = l_Lean_Aesop_Search_readRootGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_st_ref_get(x_6, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_9, x_12);
lean_dec(x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1;
x_17 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_14, x_16);
x_18 = lean_ctor_get_uint8(x_17, sizeof(void*)*6 + 1);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Lean_Aesop_Search_finishIfProven(x_1, x_2, x_3, x_4, x_5, x_6, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_19, 1);
x_24 = lean_ctor_get(x_19, 0);
lean_dec(x_24);
x_25 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = lean_box(0);
lean_ctor_set(x_19, 0, x_26);
return x_19;
}
else
{
lean_object* x_27; 
lean_free_object(x_19);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Lean_Aesop_Search_expandNextGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_7 = x_28;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_27);
if (x_30 == 0)
{
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_19, 1);
lean_inc(x_34);
lean_dec(x_19);
x_35 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1;
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
else
{
lean_object* x_38; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_38 = l_Lean_Aesop_Search_expandNextGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_34);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_7 = x_39;
goto _start;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_43 = x_38;
} else {
 lean_dec_ref(x_38);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_19);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_19, 1);
x_47 = lean_ctor_get(x_19, 0);
lean_dec(x_47);
x_48 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_box(0);
lean_ctor_set(x_19, 0, x_49);
return x_19;
}
else
{
lean_object* x_50; 
lean_free_object(x_19);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_50 = l_Lean_Aesop_Search_expandNextGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_46);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_7 = x_51;
goto _start;
}
else
{
uint8_t x_53; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
else
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_19, 1);
lean_inc(x_57);
lean_dec(x_19);
x_58 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2;
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
else
{
lean_object* x_61; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_61 = l_Lean_Aesop_Search_expandNextGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_57);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_7 = x_62;
goto _start;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = lean_ctor_get(x_61, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_61, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_66 = x_61;
} else {
 lean_dec_ref(x_61);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_19);
if (x_68 == 0)
{
return x_19;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_19, 0);
x_70 = lean_ctor_get(x_19, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_19);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = l_Lean_Aesop_Search_search___closed__2;
x_73 = l_Lean_throwError___at_Lean_Aesop_Search_expandNextGoal___spec__3(x_72, x_1, x_2, x_3, x_4, x_5, x_6, x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_73;
}
}
}
lean_object* l_Lean_Aesop_search_x27_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Aesop_search_x27_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_search_x27_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_search_x27_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_search_x27_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_search_x27_match__2___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_search_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Search_search), 7, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_search_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Search_mkInitialContextAndState(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_Aesop_search_x27___closed__1;
x_16 = l_Lean_Aesop_Search_SearchM_run___rarg(x_13, x_14, x_15, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
return x_10;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_10);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Aesop_search_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_search_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Aesop_search(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Aesop_search_x27(x_1, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Aesop_search___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Aesop_search(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Aesop_Rule(lean_object*);
lean_object* initialize_Lean_Aesop_Tree(lean_object*);
lean_object* initialize_Lean_Aesop_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_BestFirstSearch(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Rule(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Tree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Aesop_Search_ActiveGoal_instLTActiveGoal = _init_l_Lean_Aesop_Search_ActiveGoal_instLTActiveGoal();
lean_mark_persistent(l_Lean_Aesop_Search_ActiveGoal_instLTActiveGoal);
l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1 = _init_l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_ActiveGoal_ofGoalRef___rarg___lambda__1___closed__1);
l_Lean_Aesop_Search_mkInitialContextAndState___closed__1 = _init_l_Lean_Aesop_Search_mkInitialContextAndState___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_mkInitialContextAndState___closed__1);
l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1 = _init_l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1();
lean_mark_persistent(l_Lean_Aesop_Search_mkInitialContextAndState___boxed__const__1);
l_Lean_Aesop_Search_instMonadSearchM___closed__1 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__1);
l_Lean_Aesop_Search_instMonadSearchM___closed__2 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__2);
l_Lean_Aesop_Search_instMonadSearchM___closed__3 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__3);
l_Lean_Aesop_Search_instMonadSearchM___closed__4 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__4);
l_Lean_Aesop_Search_instMonadSearchM___closed__5 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__5();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__5);
l_Lean_Aesop_Search_instMonadSearchM___closed__6 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__6();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__6);
l_Lean_Aesop_Search_instMonadSearchM___closed__7 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__7();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__7);
l_Lean_Aesop_Search_instMonadSearchM___closed__8 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__8();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__8);
l_Lean_Aesop_Search_instMonadSearchM___closed__9 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__9();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__9);
l_Lean_Aesop_Search_instMonadSearchM___closed__10 = _init_l_Lean_Aesop_Search_instMonadSearchM___closed__10();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM___closed__10);
l_Lean_Aesop_Search_instMonadSearchM = _init_l_Lean_Aesop_Search_instMonadSearchM();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadSearchM);
l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__1 = _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__1);
l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__2 = _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__2);
l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__3 = _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__3);
l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__4 = _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM___closed__4);
l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM = _init_l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfGoalIdSearchM);
l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__1 = _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__1);
l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__2 = _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__2);
l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__3 = _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__3);
l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__4 = _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM___closed__4);
l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM = _init_l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfRappIdSearchM);
l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__1 = _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__1);
l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__2 = _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__2);
l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__3 = _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__3);
l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__4 = _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM___closed__4);
l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM = _init_l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM();
lean_mark_persistent(l_Lean_Aesop_Search_instMonadStateOfActiveGoalQueueSearchM);
l_Lean_Aesop_Search_addGoal___closed__1 = _init_l_Lean_Aesop_Search_addGoal___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_addGoal___closed__1);
l_Lean_Aesop_Search_addGoal___closed__2 = _init_l_Lean_Aesop_Search_addGoal___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_addGoal___closed__2);
l_Lean_Aesop_Search_runNormRule___lambda__1___closed__1 = _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___lambda__1___closed__1);
l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2 = _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___lambda__1___closed__2);
l_Lean_Aesop_Search_runNormRule___lambda__1___closed__3 = _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___lambda__1___closed__3);
l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4 = _init_l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___lambda__1___closed__4);
l_Lean_Aesop_Search_runNormRule___closed__1 = _init_l_Lean_Aesop_Search_runNormRule___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___closed__1);
l_Lean_Aesop_Search_runNormRule___closed__2 = _init_l_Lean_Aesop_Search_runNormRule___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___closed__2);
l_Lean_Aesop_Search_runNormRule___closed__3 = _init_l_Lean_Aesop_Search_runNormRule___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___closed__3);
l_Lean_Aesop_Search_runNormRule___closed__4 = _init_l_Lean_Aesop_Search_runNormRule___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_runNormRule___closed__4);
l_Lean_Aesop_Search_runNormalizationSimp___closed__1 = _init_l_Lean_Aesop_Search_runNormalizationSimp___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_runNormalizationSimp___closed__1);
l_Lean_Aesop_Search_runNormalizationSimp___closed__2 = _init_l_Lean_Aesop_Search_runNormalizationSimp___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_runNormalizationSimp___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_normalizeGoalMVar___spec__1___closed__1);
l_Lean_Aesop_Search_normalizeGoalMVar___closed__1 = _init_l_Lean_Aesop_Search_normalizeGoalMVar___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalMVar___closed__1);
l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1 = _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__1);
l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2 = _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__2);
l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3 = _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__3);
l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4 = _init_l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Aesop_Search_normalizeGoalIfNecessary___spec__1___closed__4);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__1 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__1);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__2 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__2___closed__2);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__1 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__1);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__2 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___lambda__3___closed__2);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__1 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__1);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__2 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__2);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__3 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__3);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__4);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__5 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__5();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__5);
l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__6 = _init_l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__6();
lean_mark_persistent(l_Lean_Aesop_Search_normalizeGoalIfNecessary___closed__6);
l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1 = _init_l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__1);
l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2 = _init_l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalRef_setIrrelevant___at_Lean_Aesop_Search_applyRegularRule___spec__4___closed__2);
l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1 = _init_l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__1();
l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2 = _init_l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___at_Lean_Aesop_Search_applyRegularRule___spec__8___closed__2();
l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1 = _init_l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__1);
l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2 = _init_l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalRef_setUnprovable___at_Lean_Aesop_Search_applyRegularRule___spec__1___closed__2);
l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__1 = _init_l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__1);
l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__2 = _init_l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalRef_setProven___at_Lean_Aesop_Search_applyRegularRule___spec__13___closed__2);
l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__1 = _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__1);
l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__2 = _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__2);
l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__3 = _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__3();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__3);
l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__4 = _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__4();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__4);
l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__5 = _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__5();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__5);
l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__6 = _init_l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__6();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___at_Lean_Aesop_Search_applyRegularRule___spec__20___closed__6);
l_Lean_Aesop_Search_applyRegularRule___closed__1 = _init_l_Lean_Aesop_Search_applyRegularRule___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyRegularRule___closed__1);
l_Lean_Aesop_Search_applyRegularRule___closed__2 = _init_l_Lean_Aesop_Search_applyRegularRule___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_applyRegularRule___closed__2);
l_Lean_Aesop_Search_applyRegularRule___closed__3 = _init_l_Lean_Aesop_Search_applyRegularRule___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_applyRegularRule___closed__3);
l_Lean_Aesop_Search_applyRegularRule___closed__4 = _init_l_Lean_Aesop_Search_applyRegularRule___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_applyRegularRule___closed__4);
l_Lean_Aesop_Search_applyRegularRule___closed__5 = _init_l_Lean_Aesop_Search_applyRegularRule___closed__5();
lean_mark_persistent(l_Lean_Aesop_Search_applyRegularRule___closed__5);
l_Lean_Aesop_Search_applyRegularRule___boxed__const__1 = _init_l_Lean_Aesop_Search_applyRegularRule___boxed__const__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyRegularRule___boxed__const__1);
l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1 = _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__1);
l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__2 = _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__2();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__2);
l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__3 = _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__3();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__3);
l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4 = _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__4);
l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5 = _init_l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_Search_applyFirstSafeRule___spec__1___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Aesop_Search_applyFirstSafeRule___spec__2___closed__2);
l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__1 = _init_l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__1);
l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__2 = _init_l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstSafeRule___lambda__2___closed__2);
l_Lean_Aesop_Search_applyFirstSafeRule___closed__1 = _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstSafeRule___closed__1);
l_Lean_Aesop_Search_applyFirstSafeRule___closed__2 = _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstSafeRule___closed__2);
l_Lean_Aesop_Search_applyFirstSafeRule___closed__3 = _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstSafeRule___closed__3);
l_Lean_Aesop_Search_applyFirstSafeRule___closed__4 = _init_l_Lean_Aesop_Search_applyFirstSafeRule___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstSafeRule___closed__4);
l_Lean_Aesop_Search_selectRules___closed__1 = _init_l_Lean_Aesop_Search_selectRules___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_selectRules___closed__1);
l_Lean_Aesop_Search_selectRules___closed__2 = _init_l_Lean_Aesop_Search_selectRules___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_selectRules___closed__2);
l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__1 = _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__1);
l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__2 = _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__3___closed__2);
l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__1 = _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__1);
l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2 = _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstUnsafeRule___lambda__4___closed__2);
l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__1 = _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__1);
l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__2 = _init_l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_applyFirstUnsafeRule___closed__2);
l_Lean_Aesop_Search_expandNextGoal___closed__1 = _init_l_Lean_Aesop_Search_expandNextGoal___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_expandNextGoal___closed__1);
l_Lean_Aesop_Search_expandNextGoal___closed__2 = _init_l_Lean_Aesop_Search_expandNextGoal___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_expandNextGoal___closed__2);
l_Lean_Aesop_Search_expandNextGoal___closed__3 = _init_l_Lean_Aesop_Search_expandNextGoal___closed__3();
lean_mark_persistent(l_Lean_Aesop_Search_expandNextGoal___closed__3);
l_Lean_Aesop_Search_expandNextGoal___closed__4 = _init_l_Lean_Aesop_Search_expandNextGoal___closed__4();
lean_mark_persistent(l_Lean_Aesop_Search_expandNextGoal___closed__4);
l_Lean_Aesop_Search_expandNextGoal___closed__5 = _init_l_Lean_Aesop_Search_expandNextGoal___closed__5();
lean_mark_persistent(l_Lean_Aesop_Search_expandNextGoal___closed__5);
l_Lean_Aesop_Search_search___closed__1 = _init_l_Lean_Aesop_Search_search___closed__1();
lean_mark_persistent(l_Lean_Aesop_Search_search___closed__1);
l_Lean_Aesop_Search_search___closed__2 = _init_l_Lean_Aesop_Search_search___closed__2();
lean_mark_persistent(l_Lean_Aesop_Search_search___closed__2);
l_Lean_Aesop_search_x27___closed__1 = _init_l_Lean_Aesop_search_x27___closed__1();
lean_mark_persistent(l_Lean_Aesop_search_x27___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
