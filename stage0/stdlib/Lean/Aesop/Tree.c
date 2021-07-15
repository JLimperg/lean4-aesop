// Lean compiler output
// Module: Lean.Aesop.Tree
// Imports: Init Lean.Aesop.MutAltTree Lean.Aesop.Rule Lean.Aesop.Util Lean.Aesop.Tracing
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
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__13;
lean_object* l_Lean_getBoolOption___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__41;
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__10;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__23;
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_unprovable_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__2(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, uint8_t);
lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2(lean_object*);
static lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__4;
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RappData_toMessageData_x27___closed__3;
lean_object* l_Lean_Aesop_Rapp_setSuccessProbability___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_setIrrelevant_x3f(uint8_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Aesop_Goal_normalizationProof(lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__24;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Aesop_RappId_one;
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_Goal_setUnprovable_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_instInhabitedRappData___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RappData_toMessageData_x27___closed__5;
lean_object* l_Lean_Aesop_GoalRef_linkProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Aesop_Rapp_proof(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_toMessageData___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3(lean_object*);
lean_object* l_Lean_Aesop_RappId_succ___boxed(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_GoalId_instToFormatGoalId(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData_x27___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6;
lean_object* l_Lean_Aesop_RappData_getMessageInfo(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2(lean_object*);
uint8_t l_Lean_Aesop_Goal_proven_x3f(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__2;
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__25;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__4;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_setProven_x3f(uint8_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__21;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Aesop_GoalRef_linkProofs_match__1(lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_proven_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix(uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Aesop_GoalData_normal_x3f(lean_object*);
static lean_object* l_Lean_Aesop_Goal_rapps___closed__1;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__6;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__2;
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1(lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8;
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
uint8_t l_Lean_Aesop_RegularRule_x27_isSafe___rarg(lean_object*);
lean_object* l_Lean_Aesop_RappId_dummy;
lean_object* l_Std_fmt___at_Lean_Aesop_instToFormatNormRule_x27___spec__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_extractProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213_(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RappData_toMessageData_x27___closed__4;
uint8_t l_USize_decLt(size_t, size_t);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__34;
lean_object* l_Lean_Aesop_GoalRef_setUnprovable(lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalId_dummy;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__29;
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1(lean_object*);
lean_object* l_Lean_Aesop_RappRef_setIrrelevant___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalId_succ_match__1(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__3;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_MessageData_join___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_failedRapps(lean_object*);
lean_object* l_Lean_MessageData_nodeFiltering(lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_setGoal(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___lambda__1(lean_object*, uint8_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_unprovable_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27_match__1(lean_object*);
lean_object* l_Lean_Aesop_Goal_toMessageData___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__12;
lean_object* l_Lean_Aesop_RappData_mkInitial(lean_object*, lean_object*, double, lean_object*);
lean_object* l_Lean_Aesop_RappData_toMessageData_x27___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__7;
static lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__2;
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_Rapp_proven_x3f(lean_object*);
lean_object* l_Lean_Aesop_RappId_instLTRappId;
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44__match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_instDecidableEqRappId___boxed(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_id(lean_object*);
static lean_object* l_Lean_Aesop_RappData_toMessageData_x27___closed__1;
lean_object* l_Lean_Aesop_Rapp_setIrrelevant_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_setIrrelevant_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_instInhabitedGoalId;
lean_object* l_Lean_Aesop_Goal_goal(lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1(lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_linkProofs___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_instInhabitedRappId;
uint8_t l_Lean_Aesop_instDecidableEqRappId(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3(lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2(lean_object*);
lean_object* l_Lean_Aesop_Goal_setIrrelevant_x3f(uint8_t, lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalId_succ_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_instInhabitedGoalData;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__15;
lean_object* l_Lean_Aesop_Goal_mk(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__16;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_mkInitial___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__18;
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappData_toMessageData(lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_RappId_instDecidableRelRappIdLt(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_subgoals(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__30;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal(lean_object*);
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213__match__1(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__5;
lean_object* l_Lean_Aesop_Internal_setUnprovable(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__7;
uint8_t l_Lean_Aesop_Goal_normal_x3f(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__14;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__28;
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f(lean_object*);
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg___lambda__1(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_float_to_string(double);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_Rapp_setProven_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_successProbability(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_linkProofs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_Rapp_setSuccessProbability(double, lean_object*);
lean_object* l_Lean_Aesop_GoalId_instLTGoalId;
lean_object* l_Lean_Aesop_Goal_setNormalizationProof(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__22;
uint8_t l_Lean_Aesop_GoalId_instDecidableRelGoalIdLt(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_linkProofs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4(lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44__match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_setUnprovable_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RappData_toMessageData_x27___closed__2;
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo(uint8_t);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__37;
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_Rapp_setAppliedRule(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__6;
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo___boxed(lean_object*);
static lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__1;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__42;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__2(size_t, lean_object*, lean_object*, lean_object*, size_t, uint8_t);
lean_object* l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__3(lean_object*);
static lean_object* l_Lean_Aesop_Goal_setId___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1(lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__1(lean_object*);
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__1;
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyUnsafe___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_siblings___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_linkProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__4;
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__3;
lean_object* l_Lean_Aesop_Goal_setSuccessProbability___boxed(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(lean_object*);
lean_object* l_Lean_Aesop_RappData_mkInitial___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_mkInitial(lean_object*, lean_object*, double);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_fmt___at_Lean_Aesop_instToFormatSafeRule_x27___spec__1(uint8_t);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__5;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__9;
lean_object* l_Lean_Aesop_Goal_setUnprovable_x3f(uint8_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__27;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2(lean_object*);
uint8_t l_Lean_Aesop_Rapp_irrelevant_x3f(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__40;
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__6;
lean_object* l_Lean_Aesop_GoalRef_linkProofs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_GoalRef_linkProofs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_normal_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_Goal_hasProvableRapp___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__43;
lean_object* l_Lean_Aesop_Rapp_appliedRule(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__5(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__4;
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp(lean_object*);
lean_object* l_Lean_Aesop_GoalId_succ(lean_object*);
uint8_t l_Lean_Aesop_Goal_unprovable_x3f(lean_object*);
uint8_t l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44_(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_GoalId_zero;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_instInhabitedRappData___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappId_zero;
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1(lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__1;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__1;
lean_object* l_Lean_Aesop_Goal_toMessageData(lean_object*);
lean_object* l_Lean_Aesop_RappId_succ(lean_object*);
lean_object* l_Lean_Aesop_Rapp_setProof(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_instDecidableEqGoalId___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule___boxed(lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__2;
lean_object* l_Lean_Aesop_Goal_treeToMessageData_x27(lean_object*);
lean_object* l_Lean_Aesop_Rapp_toMessageData___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
static uint64_t l_Lean_Aesop_instInhabitedRappData___closed__8;
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Aesop_Goal_successProbability(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven(lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__26;
lean_object* l_Lean_Aesop_GoalRef_extractProof_match__1(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_instDecidableEqGoalId(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_setSuccessProbability(double, lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven(lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_rapps(lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2(lean_object*);
lean_object* l_Lean_Aesop_Percent_toHumanString(double);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__1(lean_object*, uint8_t, uint8_t, uint8_t);
lean_object* l_Lean_Meta_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44____boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_id(lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_unsafeQueue(lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__3(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, uint8_t);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_linkProofs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1(lean_object*);
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg___lambda__1(lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__20;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__3;
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp(lean_object*);
lean_object* l_Lean_Aesop_Rapp_mk(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__4;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__32;
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__10;
lean_object* l_Lean_Aesop_Rapp_toMessageData___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData_x27___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__5;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2(lean_object*);
lean_object* l_Lean_Aesop_GoalId_one;
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo(lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalRef_linkProofs___closed__7;
lean_object* l_Lean_Aesop_GoalId_instDecidableRelGoalIdLt___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__1;
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__1;
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__2;
static lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__1;
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_RuleSet_instToMessageDataRuleSet___spec__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Rapp_proven_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_GoalId_succ___boxed(lean_object*);
lean_object* l_Lean_Aesop_RappId_succ_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__19;
lean_object* l_Lean_Aesop_RappData_toMessageData_x27(uint8_t, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2;
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__2(lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1(lean_object*);
lean_object* l_Lean_Aesop_Goal_setFailedRapps(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__2;
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213__match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappId_instDecidableRelRappIdLt___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_treeToMessageData(lean_object*);
lean_object* l_Lean_Aesop_Goal_irrelevant_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__9;
lean_object* l_Lean_Aesop_Rapp_toMessageData(lean_object*);
lean_object* l_Lean_Aesop_Goal_setProven_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData_x27(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_Goal_setUnsafeQueue(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1(lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_normal_x3f___boxed(lean_object*);
lean_object* l_Lean_Aesop_RappId_instToFormatRappId(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2(lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData(lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__1___closed__1;
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_instInhabitedMessageInfo___closed__1;
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2(lean_object*, uint8_t);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__2;
lean_object* l_Lean_Aesop_RappId_succ_match__1(lean_object*);
lean_object* l_Lean_Aesop_Rapp_setUnprovable_x3f(uint8_t, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__33;
lean_object* l_Lean_Aesop_Rapp_irrelevant_x3f___boxed(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_GoalRef_linkProofs___spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__2___boxed(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_GoalData_instInhabitedMessageInfo;
uint8_t l_Lean_Aesop_Goal_irrelevant_x3f(lean_object*);
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__17;
uint8_t l_Lean_Aesop_Rapp_unprovable_x3f(lean_object*);
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Goal_id___closed__1;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3(lean_object*);
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_instInhabitedRappData;
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__2(double);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_instInhabitedRappData___closed__5;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MessageData_isEmptyShallow(lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__11;
lean_object* l_Lean_Aesop_Rapp_setId(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Lean_Aesop_instInhabitedGoalData___closed__2;
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Goal_setId(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__2;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__31;
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__5(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_GoalRef_extractProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2(lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__36;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Rapp_setProven_x3f(uint8_t, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__1;
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__35;
static lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7___closed__1;
lean_object* l_Lean_Aesop_RappRef_setIrrelevant(lean_object*);
lean_object* l_Lean_Aesop_Goal_hasProvableRapp(lean_object*);
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__1;
static lean_object* l_Lean_Aesop_instInhabitedGoalData___closed__1;
lean_object* l_Lean_Aesop_GoalRef_extractProof_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
static uint8_t l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___closed__8;
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
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
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("no ");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("yes");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__2;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__4;
return x_3;
}
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Bool_toYesNo___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedGoalId() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44__match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44_(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqGoalId____x40_Lean_Aesop_Tree___hyg_44_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_Aesop_instDecidableEqGoalId(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_instDecidableEqGoalId___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Aesop_instDecidableEqGoalId(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_GoalId_zero() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalId_one() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
lean_object* l_Lean_Aesop_GoalId_succ_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalId_succ_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalId_succ_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalId_succ(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalId_succ___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_GoalId_succ(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalId_dummy() {
_start:
{
lean_object* x_1; 
x_1 = lean_cstr_to_nat("1000000000000000");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalId_instLTGoalId() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l_Lean_Aesop_GoalId_instDecidableRelGoalIdLt(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalId_instDecidableRelGoalIdLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Aesop_GoalId_instDecidableRelGoalIdLt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_GoalId_instToFormatGoalId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_repr(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappId() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213__match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213_(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_decEqRappId____x40_Lean_Aesop_Tree___hyg_213_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_Aesop_instDecidableEqRappId(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_instDecidableEqRappId___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Aesop_instDecidableEqRappId(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_RappId_zero() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l_Lean_Aesop_RappId_succ_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Aesop_RappId_succ_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_RappId_succ_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappId_succ(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_RappId_succ___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_RappId_succ(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RappId_one() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RappId_dummy() {
_start:
{
lean_object* x_1; 
x_1 = lean_cstr_to_nat("1000000000000000");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RappId_instLTRappId() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l_Lean_Aesop_RappId_instDecidableRelRappIdLt(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_lt(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_RappId_instDecidableRelRappIdLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Aesop_RappId_instDecidableRelRappIdLt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_RappId_instToFormatRappId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_repr(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedGoalData___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedGoalData___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_box(0);
x_5 = l_Lean_Aesop_instInhabitedGoalData___closed__1;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_2);
lean_ctor_set(x_7, 5, x_1);
lean_ctor_set_uint8(x_7, sizeof(void*)*6, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*6 + 1, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*6 + 2, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedGoalData() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_instInhabitedGoalData___closed__2;
return x_1;
}
}
uint8_t l_Lean_Aesop_GoalData_normal_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
}
lean_object* l_Lean_Aesop_GoalData_normal_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_GoalData_normal_x3f(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_instInhabitedMessageInfo___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_instInhabitedMessageInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_GoalData_instInhabitedMessageInfo___closed__1;
return x_1;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_7, 0, x_2);
lean_ctor_set_uint8(x_7, 1, x_3);
lean_ctor_set_uint8(x_7, 2, x_4);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("FailedRuleApplications");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__2;
x_8 = l_Lean_Name_append(x_1, x_7);
x_9 = 1;
lean_inc(x_2);
x_10 = l_Lean_getBoolOption___rarg(x_2, x_3, x_8, x_9);
x_11 = lean_box(x_4);
x_12 = lean_box(x_6);
x_13 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_11);
lean_closure_set(x_13, 2, x_12);
x_14 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("UnsafeQueues");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__2;
x_7 = l_Lean_Name_append(x_1, x_6);
x_8 = 1;
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Lean_getBoolOption___rarg(x_2, x_3, x_7, x_8);
x_10 = lean_box(x_5);
lean_inc(x_4);
x_11 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_2);
lean_closure_set(x_11, 2, x_3);
lean_closure_set(x_11, 3, x_10);
lean_closure_set(x_11, 4, x_4);
x_12 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_9, x_11);
return x_12;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goals");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix(x_3);
x_6 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__2;
x_7 = l_Lean_Name_append(x_5, x_6);
x_8 = 1;
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_getBoolOption___rarg(x_1, x_2, x_7, x_8);
lean_inc(x_4);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_10, 0, x_5);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_4);
x_11 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_getMessageInfo___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__1(x_1, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = lean_unbox(x_6);
lean_dec(x_6);
x_9 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2(x_1, x_2, x_3, x_7, x_5, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_GoalData_getMessageInfo___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Aesop_GoalData_getMessageInfo___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_toMessageData_x27_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_repr(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("/");
return x_1;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("] ");
return x_1;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Std_fmt___at_Lean_Aesop_instToFormatNormRule_x27___spec__1(x_4);
lean_dec(x_4);
x_6 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2;
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__4;
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
lean_dec(x_3);
x_11 = l_Std_fmt___at_Lean_Aesop_instToFormatSafeRule_x27___spec__1(x_10);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6;
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8;
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; double x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 2);
lean_inc(x_21);
x_22 = lean_unbox_float(x_21);
lean_dec(x_21);
x_23 = l_Lean_Aesop_Percent_toHumanString(x_22);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2;
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6;
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec(x_20);
x_30 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8;
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
lean_object* l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__3(lean_object* x_1) {
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__3(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__3(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(lean_object* x_1) {
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Std_fmt___at_Lean_Aesop_RuleSet_instToMessageDataRuleSet___spec__1(x_4);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Std_fmt___at_Lean_Aesop_RuleSet_instToMessageDataRuleSet___spec__1(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goal ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" [");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Unsafe rules in queue: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", failed: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("normal: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__12;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" | ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__14;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("proven: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__16;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unprovable: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__18;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("irrelevant: ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__20;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Failed rule applications:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__23;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__24;
x_2 = l_Lean_MessageData_nil;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__26;
x_2 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__11;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__27;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Unsafe queue:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__29;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Init.Data.Option.BasicAux");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Option.get!");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("value is none");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__34() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__31;
x_2 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__32;
x_3 = lean_unsigned_to_nat(16u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__33;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__35() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__30;
x_2 = l_Lean_MessageData_nil;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__35;
x_2 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__11;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__36;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__38() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__39() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goal:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__40;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__42() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("<not selected>");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__42;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; double x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_58; uint8_t x_59; lean_object* x_60; 
x_3 = lean_ctor_get(x_2, 5);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__1(x_4);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__2;
x_8 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__4;
x_10 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_unbox_float(x_11);
lean_dec(x_11);
x_13 = l_Lean_Aesop_Percent_toHumanString(x_12);
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__6;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_ctor_get(x_2, 4);
lean_inc(x_18);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_List_lengthAux___rarg(x_18, x_19);
x_21 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__2(x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Lean_Aesop_GoalData_normal_x3f(x_2);
x_24 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__13;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__15;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
x_31 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_30);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__17;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_28);
x_36 = lean_ctor_get_uint8(x_2, sizeof(void*)*6 + 1);
x_37 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_36);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__19;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_28);
x_42 = lean_ctor_get_uint8(x_2, sizeof(void*)*6 + 2);
x_43 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_42);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__21;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__11;
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_41);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_35);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_29);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_MessageData_nil;
x_55 = l_List_foldl___at_Lean_MessageData_join___spec__1(x_54, x_53);
lean_dec(x_53);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_ctor_get_uint8(x_1, 0);
x_58 = lean_ctor_get_uint8(x_1, 1);
x_59 = lean_ctor_get_uint8(x_1, 2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_166; 
x_166 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__43;
x_60 = x_166;
goto block_165;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_167 = lean_ctor_get(x_3, 0);
lean_inc(x_167);
x_168 = l_List_lengthAux___rarg(x_167, x_19);
lean_dec(x_167);
x_169 = l_Nat_repr(x_168);
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_60 = x_170;
goto block_165;
}
block_165:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__8;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__10;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_22);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_47);
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__22;
x_70 = lean_array_push(x_69, x_68);
x_71 = lean_array_push(x_70, x_56);
if (x_57 == 0)
{
uint8_t x_147; 
x_147 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_148 = lean_ctor_get(x_2, 1);
lean_inc(x_148);
lean_dec(x_2);
x_149 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_150 = l_Lean_indentD(x_149);
x_151 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__41;
x_152 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_47);
x_154 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_154, 0, x_153);
x_72 = x_154;
goto block_146;
}
else
{
lean_object* x_155; 
lean_dec(x_2);
x_155 = lean_box(0);
x_72 = x_155;
goto block_146;
}
}
else
{
uint8_t x_156; 
x_156 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_157 = lean_ctor_get(x_2, 1);
lean_inc(x_157);
lean_dec(x_2);
x_158 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_159 = l_Lean_indentD(x_158);
x_160 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__41;
x_161 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
x_162 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_47);
x_163 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_163, 0, x_162);
x_72 = x_163;
goto block_146;
}
else
{
lean_object* x_164; 
lean_dec(x_2);
x_164 = lean_box(0);
x_72 = x_164;
goto block_146;
}
}
block_146:
{
lean_object* x_73; lean_object* x_74; lean_object* x_102; 
x_73 = lean_array_push(x_71, x_72);
if (x_58 == 0)
{
uint8_t x_138; 
x_138 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
if (x_138 == 0)
{
lean_object* x_139; 
x_139 = lean_box(0);
x_102 = x_139;
goto block_137;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_140; 
x_140 = lean_box(0);
x_102 = x_140;
goto block_137;
}
else
{
lean_object* x_141; 
lean_dec(x_3);
x_141 = lean_box(0);
x_74 = x_141;
goto block_101;
}
}
}
else
{
uint8_t x_142; 
x_142 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
if (x_142 == 0)
{
lean_object* x_143; 
x_143 = lean_box(0);
x_102 = x_143;
goto block_137;
}
else
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_144; 
x_144 = lean_box(0);
x_102 = x_144;
goto block_137;
}
else
{
lean_object* x_145; 
lean_dec(x_3);
x_145 = lean_box(0);
x_74 = x_145;
goto block_101;
}
}
}
block_101:
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_array_push(x_73, x_74);
if (x_59 == 0)
{
uint8_t x_99; 
x_99 = 0;
x_76 = x_99;
goto block_98;
}
else
{
uint8_t x_100; 
x_100 = 1;
x_76 = x_100;
goto block_98;
}
block_98:
{
uint8_t x_77; 
x_77 = l_instDecidableNot___rarg(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__3(x_18);
x_79 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__25;
x_80 = l_Lean_MessageData_joinSep(x_78, x_79);
lean_dec(x_78);
x_81 = l_Lean_MessageData_isEmptyShallow(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_82 = l_Lean_indentD(x_80);
x_83 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__24;
x_84 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_47);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = lean_array_push(x_75, x_86);
x_88 = l_Lean_MessageData_nodeFiltering(x_87);
lean_dec(x_87);
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_17);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_80);
x_90 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__28;
x_91 = lean_array_push(x_75, x_90);
x_92 = l_Lean_MessageData_nodeFiltering(x_91);
lean_dec(x_91);
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_17);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_18);
x_94 = lean_box(0);
x_95 = lean_array_push(x_75, x_94);
x_96 = l_Lean_MessageData_nodeFiltering(x_95);
lean_dec(x_95);
x_97 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_97, 0, x_17);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
block_137:
{
lean_dec(x_102);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_103 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__34;
x_104 = lean_panic_fn(x_49, x_103);
x_105 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_104);
x_106 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__25;
x_107 = l_Lean_MessageData_joinSep(x_105, x_106);
lean_dec(x_105);
x_108 = l_Lean_MessageData_isEmptyShallow(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_109 = l_Lean_indentD(x_107);
x_110 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__30;
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_47);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_74 = x_113;
goto block_101;
}
else
{
lean_object* x_114; 
lean_dec(x_107);
x_114 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__37;
x_74 = x_114;
goto block_101;
}
}
else
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_3);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_116 = lean_ctor_get(x_3, 0);
x_117 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_116);
x_118 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__25;
x_119 = l_Lean_MessageData_joinSep(x_117, x_118);
lean_dec(x_117);
x_120 = l_Lean_MessageData_isEmptyShallow(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = l_Lean_indentD(x_119);
x_122 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__30;
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_47);
lean_ctor_set(x_3, 0, x_124);
x_74 = x_3;
goto block_101;
}
else
{
lean_object* x_125; 
lean_dec(x_119);
lean_free_object(x_3);
x_125 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__37;
x_74 = x_125;
goto block_101;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_126 = lean_ctor_get(x_3, 0);
lean_inc(x_126);
lean_dec(x_3);
x_127 = l_List_map___at_Lean_Aesop_GoalData_toMessageData_x27___spec__4(x_126);
x_128 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__25;
x_129 = l_Lean_MessageData_joinSep(x_127, x_128);
lean_dec(x_127);
x_130 = l_Lean_MessageData_isEmptyShallow(x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_131 = l_Lean_indentD(x_129);
x_132 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__30;
x_133 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
x_134 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_47);
x_135 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_74 = x_135;
goto block_101;
}
else
{
lean_object* x_136; 
lean_dec(x_129);
x_136 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__37;
x_74 = x_136;
goto block_101;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Aesop_GoalData_toMessageData_x27(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_Aesop_GoalData_toMessageData_x27(x_3, x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_Aesop_GoalData_getMessageInfo___rarg(x_1, x_2, x_3);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_toMessageData___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalData_toMessageData___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Aesop_GoalData_toMessageData___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_GoalData_toMessageData___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Aesop_GoalData_toMessageData___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_GoalData_mkInitial(lean_object* x_1, lean_object* x_2, double x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_box(0);
x_5 = lean_box(0);
x_6 = 0;
x_7 = lean_box_float(x_3);
x_8 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set(x_8, 3, x_4);
lean_ctor_set(x_8, 4, x_5);
lean_ctor_set(x_8, 5, x_4);
lean_ctor_set_uint8(x_8, sizeof(void*)*6, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*6 + 1, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*6 + 2, x_6);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalData_mkInitial___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
double x_4; lean_object* x_5; 
x_4 = lean_unbox_float(x_3);
lean_dec(x_3);
x_5 = l_Lean_Aesop_GoalData_mkInitial(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_instInhabitedRappData___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_instInhabitedRappData___closed__1;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_instInhabitedRappData___lambda__1___boxed), 9, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_instInhabitedRappData___closed__4;
x_2 = l_Lean_Aesop_instInhabitedRappData___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_Aesop_instInhabitedRappData___closed__2;
x_4 = l_Lean_Aesop_instInhabitedRappData___closed__5;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_instInhabitedRappData___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static uint64_t _init_l_Lean_Aesop_instInhabitedRappData___closed__8() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__9() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Aesop_instInhabitedRappData___closed__8;
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Aesop_instInhabitedRappData___closed__7;
x_3 = l_Lean_Aesop_instInhabitedGoalData___closed__1;
x_4 = l_Lean_Aesop_instInhabitedRappData___closed__9;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_3);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*4, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*4 + 1, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*4 + 2, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedRappData() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_instInhabitedRappData___closed__10;
return x_1;
}
}
lean_object* l_Lean_Aesop_instInhabitedRappData___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_instInhabitedRappData___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___lambda__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(x_2);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Proofs");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix(x_3);
x_6 = l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__2;
x_7 = l_Lean_Name_append(x_5, x_6);
lean_dec(x_5);
x_8 = 1;
lean_inc(x_1);
x_9 = l_Lean_getBoolOption___rarg(x_1, x_2, x_7, x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_RappData_getMessageInfo___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_RappData_getMessageInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_RappData_getMessageInfo___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Aesop_RappData_getMessageInfo___rarg___lambda__1(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_RappData_getMessageInfo___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Aesop_RappData_getMessageInfo___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_repr(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__2(double x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_float_to_string(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Rule application ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RappData_toMessageData_x27___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Proof:");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RappData_toMessageData_x27___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData_x27(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; double x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__1(x_3);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Lean_Aesop_RappData_toMessageData_x27___closed__2;
x_7 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__4;
x_9 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
x_11 = lean_unbox_float(x_10);
lean_dec(x_10);
x_12 = l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__2(x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__6;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
x_18 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2(x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
x_22 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__17;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__15;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_ctor_get_uint8(x_2, sizeof(void*)*4 + 1);
x_29 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__19;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_26);
x_34 = lean_ctor_get_uint8(x_2, sizeof(void*)*4 + 2);
x_35 = l___private_Lean_Aesop_Tree_0__Bool_toYesNo(x_34);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__21;
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__11;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_33);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_27);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_MessageData_nil;
x_46 = l_List_foldl___at_Lean_MessageData_join___spec__1(x_45, x_44);
lean_dec(x_44);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = l_Lean_Aesop_RappData_toMessageData_x27___closed__3;
x_49 = lean_array_push(x_48, x_20);
x_50 = lean_array_push(x_49, x_47);
if (x_1 == 0)
{
uint8_t x_51; 
x_51 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_52 = lean_ctor_get(x_2, 3);
lean_inc(x_52);
lean_dec(x_2);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = l_Lean_indentD(x_53);
x_55 = l_Lean_Aesop_RappData_toMessageData_x27___closed__5;
x_56 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_39);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_array_push(x_50, x_58);
x_60 = l_Lean_MessageData_nodeFiltering(x_59);
lean_dec(x_59);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_16);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_2);
x_62 = lean_box(0);
x_63 = lean_array_push(x_50, x_62);
x_64 = l_Lean_MessageData_nodeFiltering(x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_16);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_67 = lean_ctor_get(x_2, 3);
lean_inc(x_67);
lean_dec(x_2);
x_68 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = l_Lean_indentD(x_68);
x_70 = l_Lean_Aesop_RappData_toMessageData_x27___closed__5;
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_39);
x_73 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_array_push(x_50, x_73);
x_75 = l_Lean_MessageData_nodeFiltering(x_74);
lean_dec(x_74);
x_76 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_76, 0, x_16);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_2);
x_77 = lean_box(0);
x_78 = lean_array_push(x_50, x_77);
x_79 = l_Lean_MessageData_nodeFiltering(x_78);
lean_dec(x_78);
x_80 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_80, 0, x_16);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__2___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_Std_fmt___at_Lean_Aesop_RappData_toMessageData_x27___spec__2(x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_RappData_toMessageData_x27(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_Aesop_RappData_toMessageData_x27(x_3, x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_Aesop_RappData_getMessageInfo___rarg(x_1, x_2, x_3);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_RappData_toMessageData___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_RappData_toMessageData___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Aesop_RappData_toMessageData___rarg___lambda__1(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_RappData_toMessageData___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Aesop_RappData_toMessageData___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_RappData_mkInitial(lean_object* x_1, lean_object* x_2, double x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = 0;
x_6 = lean_box_float(x_3);
x_7 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set_uint8(x_7, sizeof(void*)*4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*4 + 1, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*4 + 2, x_5);
return x_7;
}
}
lean_object* l_Lean_Aesop_RappData_mkInitial___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
double x_5; lean_object* x_6; 
x_5 = lean_unbox_float(x_3);
lean_dec(x_3);
x_6 = l_Lean_Aesop_RappData_mkInitial(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_Goal_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_Goal_rapps___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__1___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_Goal_rapps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_rapps___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_Goal_id___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__3___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_Goal_id(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_goal(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_successProbability(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_normalizationProof(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_failedRapps(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 4);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_unsafeQueue(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 5);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
uint8_t l_Lean_Aesop_Goal_proven_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get_uint8(x_3, sizeof(void*)*6);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_proven_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_proven_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Aesop_Goal_unprovable_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get_uint8(x_3, sizeof(void*)*6 + 1);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_unprovable_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_unprovable_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Aesop_Goal_irrelevant_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get_uint8(x_3, sizeof(void*)*6 + 2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_irrelevant_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_irrelevant_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_Goal_setId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp___elambda__2___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_Goal_setId(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get(x_4, 4);
x_16 = lean_ctor_get(x_4, 5);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_20 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_12);
lean_ctor_set(x_20, 2, x_13);
lean_ctor_set(x_20, 3, x_14);
lean_ctor_set(x_20, 4, x_15);
lean_ctor_set(x_20, 5, x_16);
lean_ctor_set_uint8(x_20, sizeof(void*)*6, x_17);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 1, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 2, x_19);
x_21 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = l_Lean_Aesop_Goal_rapps___closed__1;
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Aesop_Goal_setGoal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
lean_ctor_set(x_4, 1, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get(x_4, 4);
x_16 = lean_ctor_get(x_4, 5);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_20 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_1);
lean_ctor_set(x_20, 2, x_13);
lean_ctor_set(x_20, 3, x_14);
lean_ctor_set(x_20, 4, x_15);
lean_ctor_set(x_20, 5, x_16);
lean_ctor_set_uint8(x_20, sizeof(void*)*6, x_17);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 1, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 2, x_19);
x_21 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = l_Lean_Aesop_Goal_rapps___closed__1;
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Aesop_Goal_setSuccessProbability(double x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 2);
lean_dec(x_6);
x_7 = lean_box_float(x_1);
lean_ctor_set(x_4, 2, x_7);
x_8 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = l_Lean_Aesop_Goal_rapps___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 3);
x_16 = lean_ctor_get(x_4, 4);
x_17 = lean_ctor_get(x_4, 5);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_20 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_21 = lean_box_float(x_1);
x_22 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_21);
lean_ctor_set(x_22, 3, x_15);
lean_ctor_set(x_22, 4, x_16);
lean_ctor_set(x_22, 5, x_17);
lean_ctor_set_uint8(x_22, sizeof(void*)*6, x_18);
lean_ctor_set_uint8(x_22, sizeof(void*)*6 + 1, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*6 + 2, x_20);
x_23 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = l_Lean_Aesop_Goal_rapps___closed__1;
x_26 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_25);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_26);
return x_27;
}
}
}
lean_object* l_Lean_Aesop_Goal_setSuccessProbability___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Goal_setSuccessProbability(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_setNormalizationProof(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 3);
lean_dec(x_6);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_4, 3, x_7);
x_8 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = l_Lean_Aesop_Goal_rapps___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 2);
x_16 = lean_ctor_get(x_4, 4);
x_17 = lean_ctor_get(x_4, 5);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_20 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_1);
x_22 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_14);
lean_ctor_set(x_22, 2, x_15);
lean_ctor_set(x_22, 3, x_21);
lean_ctor_set(x_22, 4, x_16);
lean_ctor_set(x_22, 5, x_17);
lean_ctor_set_uint8(x_22, sizeof(void*)*6, x_18);
lean_ctor_set_uint8(x_22, sizeof(void*)*6 + 1, x_19);
lean_ctor_set_uint8(x_22, sizeof(void*)*6 + 2, x_20);
x_23 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = l_Lean_Aesop_Goal_rapps___closed__1;
x_26 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_25);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_24);
lean_ctor_set(x_27, 2, x_26);
return x_27;
}
}
}
lean_object* l_Lean_Aesop_Goal_setFailedRapps(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 4);
lean_dec(x_6);
lean_ctor_set(x_4, 4, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
x_14 = lean_ctor_get(x_4, 2);
x_15 = lean_ctor_get(x_4, 3);
x_16 = lean_ctor_get(x_4, 5);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_20 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_13);
lean_ctor_set(x_20, 2, x_14);
lean_ctor_set(x_20, 3, x_15);
lean_ctor_set(x_20, 4, x_1);
lean_ctor_set(x_20, 5, x_16);
lean_ctor_set_uint8(x_20, sizeof(void*)*6, x_17);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 1, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 2, x_19);
x_21 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = l_Lean_Aesop_Goal_rapps___closed__1;
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Aesop_Goal_setUnsafeQueue(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 5);
lean_dec(x_6);
lean_ctor_set(x_4, 5, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
x_14 = lean_ctor_get(x_4, 2);
x_15 = lean_ctor_get(x_4, 3);
x_16 = lean_ctor_get(x_4, 4);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_19 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_20 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_13);
lean_ctor_set(x_20, 2, x_14);
lean_ctor_set(x_20, 3, x_15);
lean_ctor_set(x_20, 4, x_16);
lean_ctor_set(x_20, 5, x_1);
lean_ctor_set_uint8(x_20, sizeof(void*)*6, x_17);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 1, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*6 + 2, x_19);
x_21 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = l_Lean_Aesop_Goal_rapps___closed__1;
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Aesop_Goal_setProven_x3f(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_ctor_set_uint8(x_4, sizeof(void*)*6, x_1);
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_6);
x_8 = l_Lean_Aesop_Goal_rapps___closed__1;
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get(x_4, 4);
x_16 = lean_ctor_get(x_4, 5);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_19 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_12);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_14);
lean_ctor_set(x_19, 4, x_15);
lean_ctor_set(x_19, 5, x_16);
lean_ctor_set_uint8(x_19, sizeof(void*)*6, x_1);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 1, x_17);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 2, x_18);
x_20 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_20);
x_22 = l_Lean_Aesop_Goal_rapps___closed__1;
x_23 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_Goal_setProven_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Goal_setProven_x3f(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_setUnprovable_x3f(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_ctor_set_uint8(x_4, sizeof(void*)*6 + 1, x_1);
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_6);
x_8 = l_Lean_Aesop_Goal_rapps___closed__1;
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get(x_4, 4);
x_16 = lean_ctor_get(x_4, 5);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_19 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_12);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_14);
lean_ctor_set(x_19, 4, x_15);
lean_ctor_set(x_19, 5, x_16);
lean_ctor_set_uint8(x_19, sizeof(void*)*6, x_17);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 1, x_1);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 2, x_18);
x_20 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_20);
x_22 = l_Lean_Aesop_Goal_rapps___closed__1;
x_23 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_Goal_setUnprovable_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Goal_setUnprovable_x3f(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_setIrrelevant_x3f(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_ctor_set_uint8(x_4, sizeof(void*)*6 + 2, x_1);
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_6);
x_8 = l_Lean_Aesop_Goal_rapps___closed__1;
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get(x_4, 4);
x_16 = lean_ctor_get(x_4, 5);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*6);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*6 + 1);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_19 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_12);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_14);
lean_ctor_set(x_19, 4, x_15);
lean_ctor_set(x_19, 5, x_16);
lean_ctor_set_uint8(x_19, sizeof(void*)*6, x_17);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 1, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*6 + 2, x_1);
x_20 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_20);
x_22 = l_Lean_Aesop_Goal_rapps___closed__1;
x_23 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_22);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_Goal_setIrrelevant_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Goal_setIrrelevant_x3f(x_3, x_2);
return x_4;
}
}
uint8_t l_Lean_Aesop_Goal_normal_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = l_Lean_Aesop_GoalData_normal_x3f(x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Goal_normal_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_normal_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 5);
lean_inc(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_List_isEmpty___rarg(x_6);
lean_dec(x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Rapp_mk(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_subgoals(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Goal_rapps___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Rapp_id(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_appliedRule(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_successProbability(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_proof(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
uint8_t l_Lean_Aesop_Rapp_proven_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get_uint8(x_3, sizeof(void*)*4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_proven_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Rapp_proven_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Aesop_Rapp_unprovable_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get_uint8(x_3, sizeof(void*)*4 + 1);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_unprovable_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Rapp_unprovable_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Aesop_Rapp_irrelevant_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Aesop_Goal_id___closed__1;
x_3 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_2);
x_4 = lean_ctor_get_uint8(x_3, sizeof(void*)*4 + 2);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_irrelevant_x3f___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Aesop_Rapp_irrelevant_x3f(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Rapp_setId(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 0);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_18 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_12);
lean_ctor_set(x_18, 2, x_13);
lean_ctor_set(x_18, 3, x_14);
lean_ctor_set_uint8(x_18, sizeof(void*)*4, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 2, x_17);
x_19 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_19);
x_21 = l_Lean_Aesop_Goal_rapps___closed__1;
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
return x_23;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setAppliedRule(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 1);
lean_dec(x_6);
lean_ctor_set(x_4, 1, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_18 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_1);
lean_ctor_set(x_18, 2, x_13);
lean_ctor_set(x_18, 3, x_14);
lean_ctor_set_uint8(x_18, sizeof(void*)*4, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 2, x_17);
x_19 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_19);
x_21 = l_Lean_Aesop_Goal_rapps___closed__1;
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
return x_23;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setSuccessProbability(double x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 2);
lean_dec(x_6);
x_7 = lean_box_float(x_1);
lean_ctor_set(x_4, 2, x_7);
x_8 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = l_Lean_Aesop_Goal_rapps___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_10);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
x_15 = lean_ctor_get(x_4, 3);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
x_18 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_19 = lean_box_float(x_1);
x_20 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_20, 0, x_13);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_20, 2, x_19);
lean_ctor_set(x_20, 3, x_15);
lean_ctor_set_uint8(x_20, sizeof(void*)*4, x_16);
lean_ctor_set_uint8(x_20, sizeof(void*)*4 + 1, x_17);
lean_ctor_set_uint8(x_20, sizeof(void*)*4 + 2, x_18);
x_21 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = l_Lean_Aesop_Goal_rapps___closed__1;
x_24 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_23);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
return x_25;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setSuccessProbability___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Rapp_setSuccessProbability(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_setProof(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 3);
lean_dec(x_6);
lean_ctor_set(x_4, 3, x_1);
x_7 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_7);
x_9 = l_Lean_Aesop_Goal_rapps___closed__1;
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
x_14 = lean_ctor_get(x_4, 2);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
x_17 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_18 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_1);
lean_ctor_set_uint8(x_18, sizeof(void*)*4, x_15);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*4 + 2, x_17);
x_19 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_20 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_19);
x_21 = l_Lean_Aesop_Goal_rapps___closed__1;
x_22 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_21);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
return x_23;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setProven_x3f(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_ctor_set_uint8(x_4, sizeof(void*)*4, x_1);
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_6);
x_8 = l_Lean_Aesop_Goal_rapps___closed__1;
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_17 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*4, x_1);
lean_ctor_set_uint8(x_17, sizeof(void*)*4 + 1, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*4 + 2, x_16);
x_18 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_19 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_18);
x_20 = l_Lean_Aesop_Goal_rapps___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setProven_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Rapp_setProven_x3f(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_setUnprovable_x3f(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_ctor_set_uint8(x_4, sizeof(void*)*4 + 1, x_1);
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_6);
x_8 = l_Lean_Aesop_Goal_rapps___closed__1;
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_17 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*4, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*4 + 1, x_1);
lean_ctor_set_uint8(x_17, sizeof(void*)*4 + 2, x_16);
x_18 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_19 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_18);
x_20 = l_Lean_Aesop_Goal_rapps___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setUnprovable_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Rapp_setUnprovable_x3f(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Aesop_Rapp_setIrrelevant_x3f(uint8_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_2);
x_4 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_ctor_set_uint8(x_4, sizeof(void*)*4 + 2, x_1);
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_6);
x_8 = l_Lean_Aesop_Goal_rapps___closed__1;
x_9 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_8);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
x_15 = lean_ctor_get_uint8(x_4, sizeof(void*)*4);
x_16 = lean_ctor_get_uint8(x_4, sizeof(void*)*4 + 1);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_17 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_13);
lean_ctor_set(x_17, 3, x_14);
lean_ctor_set_uint8(x_17, sizeof(void*)*4, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*4 + 1, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*4 + 2, x_1);
x_18 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_2);
x_19 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_18);
x_20 = l_Lean_Aesop_Goal_rapps___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Aesop_Rapp_setIrrelevant_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_Rapp_setIrrelevant_x3f(x_3, x_2);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Aesop_Goal_id___closed__1;
x_6 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*6);
lean_dec(x_6);
x_8 = lean_box(x_7);
x_9 = lean_apply_2(x_4, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 1;
x_6 = lean_box(x_5);
x_7 = lean_apply_2(x_4, lean_box(0), x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = 0;
x_11 = lean_box(x_10);
x_12 = lean_apply_2(x_9, lean_box(0), x_11);
return x_12;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__3(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg(x_2, x_3, x_4, x_5, x_9, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = lean_box(x_13);
x_15 = lean_apply_2(x_12, lean_box(0), x_14);
return x_15;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 == x_6;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_4, x_5);
x_10 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_10, 0, lean_box(0));
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_9);
lean_inc(x_2);
x_11 = lean_apply_2(x_2, lean_box(0), x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_12, 0, x_1);
lean_inc(x_3);
x_13 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_11, x_12);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_14, 0, x_1);
lean_inc(x_3);
x_15 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_13, x_14);
x_16 = lean_box_usize(x_5);
x_17 = lean_box_usize(x_6);
x_18 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__3___boxed), 7, 6);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_3);
lean_closure_set(x_18, 4, x_4);
lean_closure_set(x_18, 5, x_17);
x_19 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_apply_2(x_21, lean_box(0), x_23);
return x_24;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_4 = l_Lean_Aesop_Goal_rapps___closed__1;
x_5 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_3, x_4);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
if (x_9 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_apply_2(x_12, lean_box(0), x_14);
x_16 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_15, x_10);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_7, x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_apply_2(x_19, lean_box(0), x_21);
x_23 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_22, x_10);
return x_23;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 0;
x_25 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_6);
x_26 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg(x_1, x_2, x_6, x_5, x_24, x_25);
x_27 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_26, x_10);
return x_27;
}
}
}
}
lean_object* l_Lean_Aesop_Rapp_subgoalsProven_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_subgoalsProven_x3f___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__2(x_1, x_3);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___lambda__3(x_8, x_2, x_3, x_4, x_5, x_9, x_10);
return x_11;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Rapp_subgoalsProven_x3f___spec__1___rarg(x_1, x_2, x_3, x_4, x_7, x_8);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, size_t x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = 1;
x_11 = x_1 + x_10;
x_12 = x_9;
x_13 = lean_array_uset(x_2, x_1, x_12);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_13);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_7 < x_6;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = x_8;
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_14 = lean_array_uget(x_8, x_7);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_8, x_7, x_15);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = x_14;
x_19 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_19, 0, lean_box(0));
lean_closure_set(x_19, 1, lean_box(0));
lean_closure_set(x_19, 2, x_18);
lean_inc(x_2);
x_20 = lean_apply_2(x_2, lean_box(0), x_19);
x_21 = lean_box(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg___boxed), 5, 4);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_2);
lean_closure_set(x_22, 2, x_3);
lean_closure_set(x_22, 3, x_21);
lean_inc(x_5);
x_23 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_20, x_22);
x_24 = lean_box_usize(x_7);
x_25 = lean_box(x_4);
x_26 = lean_box_usize(x_6);
x_27 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___lambda__1___boxed), 9, 8);
lean_closure_set(x_27, 0, x_24);
lean_closure_set(x_27, 1, x_16);
lean_closure_set(x_27, 2, x_1);
lean_closure_set(x_27, 3, x_2);
lean_closure_set(x_27, 4, x_3);
lean_closure_set(x_27, 5, x_25);
lean_closure_set(x_27, 6, x_5);
lean_closure_set(x_27, 7, x_26);
x_28 = lean_apply_4(x_17, lean_box(0), lean_box(0), x_23, x_27);
return x_28;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_6, 0, x_3);
x_7 = l_Lean_indentD(x_6);
x_8 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_apply_2(x_5, lean_box(0), x_8);
return x_9;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_6 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_5);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = l_Lean_Aesop_GoalData_toMessageData_x27(x_3, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = l_Lean_Aesop_Goal_rapps___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = x_11;
lean_inc(x_9);
lean_inc(x_1);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg(x_1, x_2, x_3, x_4, x_9, x_13, x_14, x_15);
x_17 = x_16;
x_18 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___lambda__1), 3, 2);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_8);
x_19 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, size_t x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = 1;
x_11 = x_1 + x_10;
x_12 = x_9;
x_13 = lean_array_uset(x_2, x_1, x_12);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_11, x_13);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_7 < x_6;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = x_8;
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_14 = lean_array_uget(x_8, x_7);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_8, x_7, x_15);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = x_14;
x_19 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_19, 0, lean_box(0));
lean_closure_set(x_19, 1, lean_box(0));
lean_closure_set(x_19, 2, x_18);
lean_inc(x_2);
x_20 = lean_apply_2(x_2, lean_box(0), x_19);
x_21 = lean_box(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___boxed), 5, 4);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_2);
lean_closure_set(x_22, 2, x_3);
lean_closure_set(x_22, 3, x_21);
lean_inc(x_5);
x_23 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_20, x_22);
x_24 = lean_box_usize(x_7);
x_25 = lean_box(x_4);
x_26 = lean_box_usize(x_6);
x_27 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___lambda__1___boxed), 9, 8);
lean_closure_set(x_27, 0, x_24);
lean_closure_set(x_27, 1, x_16);
lean_closure_set(x_27, 2, x_1);
lean_closure_set(x_27, 3, x_2);
lean_closure_set(x_27, 4, x_3);
lean_closure_set(x_27, 5, x_25);
lean_closure_set(x_27, 6, x_5);
lean_closure_set(x_27, 7, x_26);
x_28 = lean_apply_4(x_17, lean_box(0), lean_box(0), x_23, x_27);
return x_28;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_6 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_5);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = l_Lean_Aesop_RappData_toMessageData_x27(x_4, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = l_Lean_Aesop_Goal_rapps___closed__1;
x_11 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_10);
x_12 = lean_array_get_size(x_11);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = x_11;
lean_inc(x_9);
lean_inc(x_1);
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg(x_1, x_2, x_3, x_4, x_9, x_13, x_14, x_15);
x_17 = x_16;
x_18 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___lambda__1), 3, 2);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_8);
x_19 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; uint8_t x_11; size_t x_12; lean_object* x_13; 
x_10 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___lambda__1(x_10, x_2, x_3, x_4, x_5, x_11, x_7, x_12, x_9);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_12 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___spec__1___rarg(x_1, x_2, x_3, x_9, x_5, x_10, x_11, x_8);
return x_12;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; uint8_t x_11; size_t x_12; lean_object* x_13; 
x_10 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___lambda__1(x_10, x_2, x_3, x_4, x_5, x_11, x_7, x_12, x_9);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_12 = l_Array_mapMUnsafe_map___at___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___spec__1___rarg(x_1, x_2, x_3, x_9, x_5, x_10, x_11, x_8);
return x_12;
}
}
lean_object* l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Aesop_Goal_toMessageData___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Aesop_Goal_id___closed__1;
x_6 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_4, x_5);
x_7 = l_Lean_Aesop_GoalData_toMessageData___rarg(x_1, x_2, x_3, x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_Goal_toMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_toMessageData___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Goal_toMessageData___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Aesop_Goal_toMessageData___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_treeToMessageData_x27___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Aesop_Goal_treeToMessageData_x27___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeGoal___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_8 = l_Lean_Aesop_RappData_getMessageInfo___rarg(x_1, x_2, x_3);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_7);
lean_closure_set(x_9, 3, x_5);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_Lean_Aesop_GoalData_getMessageInfo___rarg(x_1, x_3, x_4);
x_8 = lean_box(x_4);
lean_inc(x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_2);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_treeToMessageData___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_Aesop_Goal_treeToMessageData___rarg___lambda__2(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Aesop_Goal_treeToMessageData___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Aesop_Goal_treeToMessageData___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Aesop_Rapp_toMessageData___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Aesop_Goal_id___closed__1;
x_6 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_4, x_5);
x_7 = l_Lean_Aesop_RappData_toMessageData___rarg(x_1, x_2, x_3, x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_Rapp_toMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_toMessageData___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Rapp_toMessageData___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Aesop_Rapp_toMessageData___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_treeToMessageData_x27___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Aesop_Rapp_treeToMessageData_x27___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Aesop_Tree_0__Lean_Aesop_formatTreeRapp___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_8 = l_Lean_Aesop_RappData_getMessageInfo___rarg(x_1, x_2, x_3);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_7);
lean_closure_set(x_9, 3, x_5);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_Lean_Aesop_GoalData_getMessageInfo___rarg(x_1, x_3, x_4);
x_8 = lean_box(x_4);
lean_inc(x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
lean_closure_set(x_9, 2, x_8);
lean_closure_set(x_9, 3, x_2);
lean_closure_set(x_9, 4, x_5);
lean_closure_set(x_9, 5, x_6);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_treeToMessageData___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__1(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_Aesop_Rapp_treeToMessageData___rarg___lambda__2(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Aesop_Rapp_treeToMessageData___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Aesop_Rapp_treeToMessageData___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Aesop_Goal_id___closed__1;
x_6 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Aesop_RegularRule_x27_isSafe___rarg(x_7);
lean_dec(x_7);
x_9 = lean_box(x_8);
x_10 = lean_apply_2(x_4, lean_box(0), x_9);
return x_10;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__2(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg(x_2, x_3, x_4, x_5, x_9, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = lean_box(x_13);
x_15 = lean_apply_2(x_12, lean_box(0), x_14);
return x_15;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 == x_6;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_4, x_5);
x_10 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_10, 0, lean_box(0));
lean_closure_set(x_10, 1, lean_box(0));
lean_closure_set(x_10, 2, x_9);
lean_inc(x_2);
x_11 = lean_apply_2(x_2, lean_box(0), x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_12, 0, x_1);
lean_inc(x_3);
x_13 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_11, x_12);
x_14 = lean_box_usize(x_5);
x_15 = lean_box_usize(x_6);
x_16 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
lean_closure_set(x_16, 5, x_15);
x_17 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_13, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_apply_2(x_19, lean_box(0), x_21);
return x_22;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_Aesop_Goal_hasNoUnexpandedUnsafeRule(x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_apply_2(x_5, lean_box(0), x_9);
return x_10;
}
else
{
if (x_3 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 1;
x_12 = lean_box(x_11);
x_13 = lean_apply_2(x_5, lean_box(0), x_12);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_apply_2(x_5, lean_box(0), x_16);
return x_17;
}
else
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_18 = 1;
x_19 = lean_box(x_18);
x_20 = lean_apply_2(x_5, lean_box(0), x_19);
return x_20;
}
}
}
}
else
{
uint8_t x_21; 
x_21 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
if (x_21 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_apply_2(x_5, lean_box(0), x_23);
return x_24;
}
else
{
if (x_3 == 0)
{
uint8_t x_25; 
x_25 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_apply_2(x_5, lean_box(0), x_27);
return x_28;
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_29 = 1;
x_30 = lean_box(x_29);
x_31 = lean_apply_2(x_5, lean_box(0), x_30);
return x_31;
}
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_32 = 1;
x_33 = lean_box(x_32);
x_34 = lean_apply_2(x_5, lean_box(0), x_33);
return x_34;
}
}
}
}
}
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_Aesop_Goal_rapps___closed__1;
lean_inc(x_3);
x_6 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_3, x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_3);
if (x_9 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_apply_2(x_12, lean_box(0), x_14);
x_16 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_15, x_10);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_7, x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_apply_2(x_19, lean_box(0), x_21);
x_23 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_22, x_10);
return x_23;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 0;
x_25 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_4);
x_26 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg(x_1, x_2, x_4, x_6, x_24, x_25);
x_27 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_26, x_10);
return x_27;
}
}
}
}
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; uint8_t x_10; lean_object* x_11; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___lambda__2(x_8, x_2, x_3, x_4, x_5, x_9, x_10);
return x_11;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_mayHaveUnexpandedRapp___spec__1___rarg(x_1, x_2, x_3, x_4, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg___lambda__1(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Aesop_Goal_id___closed__1;
x_6 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_2, x_5);
x_7 = lean_ctor_get_uint8(x_6, sizeof(void*)*4 + 1);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__38;
x_9 = lean_box(x_8);
x_10 = lean_apply_2(x_4, lean_box(0), x_9);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_Aesop_GoalData_toMessageData_x27___closed__39;
x_12 = lean_box(x_11);
x_13 = lean_apply_2(x_4, lean_box(0), x_12);
return x_13;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__2(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg(x_2, x_3, x_4, x_8, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = 1;
x_13 = lean_box(x_12);
x_14 = lean_apply_2(x_11, lean_box(0), x_13);
return x_14;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 == x_5;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_array_uget(x_3, x_4);
x_9 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_9, 0, lean_box(0));
lean_closure_set(x_9, 1, lean_box(0));
lean_closure_set(x_9, 2, x_8);
lean_inc(x_2);
x_10 = lean_apply_2(x_2, lean_box(0), x_9);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__1), 2, 1);
lean_closure_set(x_11, 0, x_1);
lean_inc(x_7);
x_12 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_10, x_11);
x_13 = lean_box_usize(x_4);
x_14 = lean_box_usize(x_5);
x_15 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_3);
lean_closure_set(x_15, 4, x_14);
x_16 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_12, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = 0;
x_20 = lean_box(x_19);
x_21 = lean_apply_2(x_18, lean_box(0), x_20);
return x_21;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Goal_hasProvableRapp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = l_Lean_Aesop_Goal_rapps___closed__1;
x_5 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_3, x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_apply_2(x_10, lean_box(0), x_12);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_6, x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = 0;
x_18 = lean_box(x_17);
x_19 = lean_apply_2(x_16, lean_box(0), x_18);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_22 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg(x_1, x_2, x_5, x_20, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Aesop_Goal_hasProvableRapp(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_hasProvableRapp___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___lambda__2(x_7, x_2, x_3, x_4, x_8, x_9);
return x_10;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_8 = l_Array_anyMUnsafe_any___at_Lean_Aesop_Goal_hasProvableRapp___spec__1___rarg(x_1, x_2, x_3, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_linkProofs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Aesop_GoalRef_linkProofs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_linkProofs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_linkProofs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_2 == x_3;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_11 = lean_array_uget(x_1, x_2);
x_12 = l_Lean_Aesop_GoalRef_linkProofs(x_11, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; size_t x_15; size_t x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
x_16 = x_2 + x_15;
x_2 = x_16;
x_4 = x_13;
x_9 = x_14;
goto _start;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_4);
lean_ctor_set(x_22, 1, x_9);
return x_22;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_GoalRef_linkProofs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 < x_4;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_6);
x_14 = lean_array_uget(x_3, x_5);
x_30 = lean_st_ref_get(x_10, x_11);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_st_ref_get(x_14, x_31);
lean_dec(x_14);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_33);
x_36 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_33, x_35);
x_37 = lean_ctor_get_uint8(x_36, sizeof(void*)*4);
lean_dec(x_36);
if (x_37 == 0)
{
lean_dec(x_33);
lean_inc(x_1);
x_15 = x_1;
x_16 = x_34;
goto block_29;
}
else
{
lean_object* x_38; 
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_33);
x_15 = x_38;
x_16 = x_34;
goto block_29;
}
block_29:
{
if (lean_obj_tag(x_15) == 0)
{
size_t x_17; size_t x_18; 
x_17 = 1;
x_18 = x_5 + x_17;
lean_inc(x_2);
{
size_t _tmp_4 = x_18;
lean_object* _tmp_5 = x_2;
lean_object* _tmp_10 = x_16;
x_5 = _tmp_4;
x_6 = _tmp_5;
x_11 = _tmp_10;
}
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_16);
return x_28;
}
}
}
}
}
}
lean_object* l_Lean_Aesop_GoalRef_linkProofs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop/linkProofs: internal error: node ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalRef_linkProofs___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" not proven");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_GoalRef_linkProofs___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_GoalRef_linkProofs___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_GoalRef_linkProofs___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_GoalRef_linkProofs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
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
x_12 = l_Lean_Aesop_Goal_rapps___closed__1;
lean_inc(x_10);
x_13 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_12);
x_14 = lean_box(0);
x_15 = lean_array_get_size(x_13);
x_16 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_17 = 0;
x_84 = l_Lean_Aesop_GoalRef_linkProofs___closed__1;
x_85 = l_Array_forInUnsafe_loop___at_Lean_Aesop_GoalRef_linkProofs___spec__2(x_14, x_84, x_13, x_16, x_17, x_84, x_2, x_3, x_4, x_5, x_11);
lean_dec(x_13);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
lean_dec(x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
lean_dec(x_85);
x_18 = x_14;
x_19 = x_88;
goto block_83;
}
else
{
lean_object* x_89; uint8_t x_90; 
x_89 = lean_ctor_get(x_85, 1);
lean_inc(x_89);
lean_dec(x_85);
x_90 = !lean_is_exclusive(x_87);
if (x_90 == 0)
{
x_18 = x_87;
x_19 = x_89;
goto block_83;
}
else
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_87, 0);
lean_inc(x_91);
lean_dec(x_87);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_18 = x_92;
x_19 = x_89;
goto block_83;
}
}
block_83:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = l_Lean_Aesop_Goal_id___closed__1;
x_21 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__1(x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_Aesop_GoalRef_linkProofs___closed__3;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Aesop_GoalRef_linkProofs___closed__5;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_28, x_2, x_3, x_4, x_5, x_19);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_18, 0);
lean_inc(x_30);
lean_dec(x_18);
lean_inc(x_30);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_12);
x_32 = lean_array_get_size(x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_lt(x_33, x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_32);
lean_dec(x_31);
x_35 = l_Lean_Aesop_Goal_id___closed__1;
x_36 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_Aesop_GoalRef_linkProofs___closed__7;
lean_inc(x_37);
x_39 = l_Lean_Meta_checkNotAssigned(x_38, x_37, x_2, x_3, x_4, x_5, x_19);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_35);
x_42 = lean_ctor_get(x_41, 3);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_Meta_assignExprMVar(x_37, x_42, x_2, x_3, x_4, x_5, x_40);
return x_43;
}
else
{
uint8_t x_44; 
lean_dec(x_37);
lean_dec(x_30);
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
else
{
uint8_t x_48; 
x_48 = lean_nat_dec_le(x_32, x_32);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_32);
lean_dec(x_31);
x_49 = l_Lean_Aesop_Goal_id___closed__1;
x_50 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_Aesop_GoalRef_linkProofs___closed__7;
lean_inc(x_51);
x_53 = l_Lean_Meta_checkNotAssigned(x_52, x_51, x_2, x_3, x_4, x_5, x_19);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_49);
x_56 = lean_ctor_get(x_55, 3);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Lean_Meta_assignExprMVar(x_51, x_56, x_2, x_3, x_4, x_5, x_54);
return x_57;
}
else
{
uint8_t x_58; 
lean_dec(x_51);
lean_dec(x_30);
x_58 = !lean_is_exclusive(x_53);
if (x_58 == 0)
{
return x_53;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_53, 0);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_53);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
size_t x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_63 = lean_box(0);
x_64 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_linkProofs___spec__1(x_31, x_17, x_62, x_63, x_2, x_3, x_4, x_5, x_19);
lean_dec(x_31);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_Lean_Aesop_Goal_id___closed__1;
x_67 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_66);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = l_Lean_Aesop_GoalRef_linkProofs___closed__7;
lean_inc(x_68);
x_70 = l_Lean_Meta_checkNotAssigned(x_69, x_68, x_2, x_3, x_4, x_5, x_65);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_30, x_66);
x_73 = lean_ctor_get(x_72, 3);
lean_inc(x_73);
lean_dec(x_72);
x_74 = l_Lean_Meta_assignExprMVar(x_68, x_73, x_2, x_3, x_4, x_5, x_71);
return x_74;
}
else
{
uint8_t x_75; 
lean_dec(x_68);
lean_dec(x_30);
x_75 = !lean_is_exclusive(x_70);
if (x_75 == 0)
{
return x_70;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_70, 0);
x_77 = lean_ctor_get(x_70, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_70);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_30);
lean_dec(x_10);
x_79 = !lean_is_exclusive(x_64);
if (x_79 == 0)
{
return x_64;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_64, 0);
x_81 = lean_ctor_get(x_64, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_64);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_linkProofs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_linkProofs___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_GoalRef_linkProofs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Aesop_GoalRef_linkProofs___spec__2(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Lean_Aesop_GoalRef_linkProofs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Aesop_GoalRef_linkProofs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_linkProofs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Aesop_GoalRef_linkProofs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Aesop_GoalRef_extractProof_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_GoalRef_extractProof_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_extractProof_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalRef_extractProof(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
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
x_12 = l_Lean_Aesop_Goal_id___closed__1;
x_13 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_10, x_12);
x_14 = lean_ctor_get(x_13, 3);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_mkMVar(x_15);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_2, x_3, x_4, x_5, x_11);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_13);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Lean_Meta_instantiateMVars(x_18, x_2, x_3, x_4, x_5, x_11);
return x_19;
}
}
}
lean_object* l_Lean_Aesop_GoalRef_extractProof___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Aesop_GoalRef_extractProof(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 1;
x_10 = x_1 + x_9;
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg(x_2, x_3, lean_box(0), lean_box(0), x_4, x_5, x_6, x_10, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_8 == x_9;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_uget(x_7, x_8);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_6, x_5, x_13);
x_15 = lean_box_usize(x_8);
x_16 = lean_box_usize(x_9);
x_17 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_6);
lean_closure_set(x_17, 5, x_7);
lean_closure_set(x_17, 6, x_16);
x_18 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_2(x_20, lean_box(0), x_10);
return x_21;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Aesop_Goal_rapps___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = lean_apply_2(x_12, lean_box(0), x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_8, x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_7, x_20, x_21, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 1;
x_10 = x_1 + x_9;
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg(x_2, x_3, lean_box(0), lean_box(0), x_4, x_5, x_6, x_10, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_8 == x_9;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_uget(x_7, x_8);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), x_6, x_5, x_13);
x_15 = lean_box_usize(x_8);
x_16 = lean_box_usize(x_9);
x_17 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_6);
lean_closure_set(x_17, 5, x_7);
lean_closure_set(x_17, 6, x_16);
x_18 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_2(x_20, lean_box(0), x_10);
return x_21;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Aesop_Goal_rapps___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = lean_apply_2(x_12, lean_box(0), x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_8, x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_7, x_20, x_21, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 1;
x_6 = lean_box(x_5);
x_7 = lean_apply_2(x_4, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_5);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = lean_ctor_get_uint8(x_7, sizeof(void*)*6 + 2);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = 1;
lean_ctor_set_uint8(x_7, sizeof(void*)*6 + 2, x_10);
x_11 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_5);
x_12 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_11);
x_13 = l_Lean_Aesop_Goal_rapps___closed__1;
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_16, 0, lean_box(0));
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_1);
lean_closure_set(x_16, 3, x_15);
x_17 = lean_apply_2(x_2, lean_box(0), x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_18, 0, x_3);
x_19 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
x_24 = lean_ctor_get(x_7, 4);
x_25 = lean_ctor_get(x_7, 5);
x_26 = lean_ctor_get_uint8(x_7, sizeof(void*)*6);
x_27 = lean_ctor_get_uint8(x_7, sizeof(void*)*6 + 1);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_23);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*6, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 1, x_27);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 2, x_28);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_5);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_1);
lean_closure_set(x_35, 3, x_34);
x_36 = lean_apply_2(x_2, lean_box(0), x_35);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_37, 0, x_3);
x_38 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
lean_dec(x_3);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__2), 5, 4);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_5);
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = lean_ctor_get_uint8(x_7, sizeof(void*)*4 + 2);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = 1;
lean_ctor_set_uint8(x_7, sizeof(void*)*4 + 2, x_10);
x_11 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_5);
x_12 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_11);
x_13 = l_Lean_Aesop_Goal_rapps___closed__1;
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_16, 0, lean_box(0));
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_1);
lean_closure_set(x_16, 3, x_15);
x_17 = lean_apply_2(x_2, lean_box(0), x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_18, 0, x_3);
x_19 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
x_22 = lean_ctor_get(x_7, 2);
x_23 = lean_ctor_get(x_7, 3);
x_24 = lean_ctor_get_uint8(x_7, sizeof(void*)*4);
x_25 = lean_ctor_get_uint8(x_7, sizeof(void*)*4 + 1);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_26 = 1;
x_27 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_21);
lean_ctor_set(x_27, 2, x_22);
lean_ctor_set(x_27, 3, x_23);
lean_ctor_set_uint8(x_27, sizeof(void*)*4, x_24);
lean_ctor_set_uint8(x_27, sizeof(void*)*4 + 1, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*4 + 2, x_26);
x_28 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_5);
x_29 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_28);
x_30 = l_Lean_Aesop_Goal_rapps___closed__1;
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 2, x_31);
x_33 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_33, 0, lean_box(0));
lean_closure_set(x_33, 1, lean_box(0));
lean_closure_set(x_33, 2, x_1);
lean_closure_set(x_33, 3, x_32);
x_34 = lean_apply_2(x_2, lean_box(0), x_33);
x_35 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_35, 0, x_3);
x_36 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_34, x_35);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_37 = lean_ctor_get(x_3, 0);
lean_inc(x_37);
lean_dec(x_3);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = 0;
x_40 = lean_box(x_39);
x_41 = lean_apply_2(x_38, lean_box(0), x_40);
return x_41;
}
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__4), 5, 4);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__3), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__5), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_4, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_4, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_10, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_10);
return x_13;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_10, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setIrrelevant___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_10);
return x_13;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_Internal_setIrrelevant___spec__3___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 1;
x_10 = x_1 + x_9;
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg(x_2, x_3, lean_box(0), lean_box(0), x_4, x_5, x_6, x_10, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_8 == x_9;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_uget(x_7, x_8);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_6, x_5, x_13);
x_15 = lean_box_usize(x_8);
x_16 = lean_box_usize(x_9);
x_17 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_6);
lean_closure_set(x_17, 5, x_7);
lean_closure_set(x_17, 6, x_16);
x_18 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_2(x_20, lean_box(0), x_10);
return x_21;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Aesop_Goal_rapps___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = lean_apply_2(x_12, lean_box(0), x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_8, x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_7, x_20, x_21, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__3), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__5), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Aesop_GoalRef_setIrrelevant(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setIrrelevant___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_10, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setIrrelevant___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_10);
return x_13;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_GoalRef_setIrrelevant___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 1;
x_10 = x_1 + x_9;
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg(x_2, x_3, lean_box(0), lean_box(0), x_4, x_5, x_6, x_10, x_7, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_8 == x_9;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_array_uget(x_7, x_8);
lean_inc(x_5);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_6, x_5, x_13);
x_15 = lean_box_usize(x_8);
x_16 = lean_box_usize(x_9);
x_17 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_1);
lean_closure_set(x_17, 2, x_2);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_6);
lean_closure_set(x_17, 5, x_7);
lean_closure_set(x_17, 6, x_16);
x_18 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_14, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_2(x_20, lean_box(0), x_10);
return x_21;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Aesop_Goal_rapps___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = lean_apply_2(x_12, lean_box(0), x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_8, x_8);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_7, x_20, x_21, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_6);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappRef_setIrrelevant___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__3), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__5), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_4, x_3);
return x_6;
}
}
lean_object* l_Lean_Aesop_RappRef_setIrrelevant(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setIrrelevant___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___lambda__1(x_9, x_2, x_3, x_4, x_5, x_6, x_10, x_8);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setIrrelevant___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_10);
return x_13;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitDown___at_Lean_Aesop_RappRef_setIrrelevant___spec__1___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Aesop_RappRef_setIrrelevant___rarg(x_1, x_2, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg), 7, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Internal_setProven___rarg___lambda__1___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Aesop_Goal_setProven_x3f___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_Aesop_Internal_setProven___rarg___lambda__1___closed__1;
x_6 = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyUnsafe___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_2(x_2, lean_box(0), x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
x_13 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_5, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg(x_1, x_3, x_4, x_20, x_21, x_22);
x_24 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_23, x_8);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_MutAltTree_siblings___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__2), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
uint8_t x_7; 
if (x_6 == 0)
{
uint8_t x_45; 
x_45 = 0;
x_7 = x_45;
goto block_44;
}
else
{
uint8_t x_46; 
x_46 = 1;
x_7 = x_46;
goto block_44;
}
block_44:
{
uint8_t x_8; 
x_8 = l_instDecidableNot___rarg(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_1);
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*4, x_12);
x_13 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_13);
x_15 = l_Lean_Aesop_Goal_rapps___closed__1;
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_16);
lean_inc(x_2);
x_18 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_18, 0, lean_box(0));
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_17);
lean_inc(x_3);
x_19 = lean_apply_2(x_3, lean_box(0), x_18);
lean_inc(x_5);
x_20 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_20, 0, x_4);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_2);
lean_closure_set(x_20, 3, x_5);
x_21 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
x_24 = lean_ctor_get(x_10, 2);
x_25 = lean_ctor_get(x_10, 3);
x_26 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 1);
x_27 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 2, x_27);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
lean_inc(x_2);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_2);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_3);
x_36 = lean_apply_2(x_3, lean_box(0), x_35);
lean_inc(x_5);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_37, 0, x_4);
lean_closure_set(x_37, 1, x_3);
lean_closure_set(x_37, 2, x_2);
lean_closure_set(x_37, 3, x_5);
x_38 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
lean_dec(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_Rapp_subgoalsProven_x3f___rarg(x_1, x_2, x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__4___boxed), 6, 5);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_1);
lean_closure_set(x_7, 4, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__5), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__6), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_4, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_4, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Aesop_Internal_setProven(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setProven___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setProven___spec__3___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_Internal_setProven___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_Internal_setProven___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Lean_Aesop_Internal_setProven___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Aesop_RappRef_setIrrelevant___rarg(x_1, x_2, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
x_13 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_5, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg(x_1, x_3, x_4, x_20, x_21, x_22);
x_24 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_23, x_8);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_MutAltTree_siblings___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg___lambda__1), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
uint8_t x_7; 
if (x_6 == 0)
{
uint8_t x_45; 
x_45 = 0;
x_7 = x_45;
goto block_44;
}
else
{
uint8_t x_46; 
x_46 = 1;
x_7 = x_46;
goto block_44;
}
block_44:
{
uint8_t x_8; 
x_8 = l_instDecidableNot___rarg(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_1);
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*4, x_12);
x_13 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_13);
x_15 = l_Lean_Aesop_Goal_rapps___closed__1;
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_16);
lean_inc(x_2);
x_18 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_18, 0, lean_box(0));
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_17);
lean_inc(x_3);
x_19 = lean_apply_2(x_3, lean_box(0), x_18);
lean_inc(x_5);
x_20 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_20, 0, x_4);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_2);
lean_closure_set(x_20, 3, x_5);
x_21 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
x_24 = lean_ctor_get(x_10, 2);
x_25 = lean_ctor_get(x_10, 3);
x_26 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 1);
x_27 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 2, x_27);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
lean_inc(x_2);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_2);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_3);
x_36 = lean_apply_2(x_3, lean_box(0), x_35);
lean_inc(x_5);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_37, 0, x_4);
lean_closure_set(x_37, 1, x_3);
lean_closure_set(x_37, 2, x_2);
lean_closure_set(x_37, 3, x_5);
x_38 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
lean_dec(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_Rapp_subgoalsProven_x3f___rarg(x_1, x_2, x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg___lambda__3___boxed), 6, 5);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_1);
lean_closure_set(x_7, 4, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg___lambda__4), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg___lambda__5), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setProven___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setProven___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setProven___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_GoalRef_setProven___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_GoalRef_setProven___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Lean_Aesop_GoalRef_setProven___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Aesop_RappRef_setIrrelevant___rarg(x_1, x_2, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
x_13 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_5, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg(x_1, x_3, x_4, x_20, x_21, x_22);
x_24 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_23, x_8);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_MutAltTree_siblings___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg___lambda__1), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
uint8_t x_7; 
if (x_6 == 0)
{
uint8_t x_45; 
x_45 = 0;
x_7 = x_45;
goto block_44;
}
else
{
uint8_t x_46; 
x_46 = 1;
x_7 = x_46;
goto block_44;
}
block_44:
{
uint8_t x_8; 
x_8 = l_instDecidableNot___rarg(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_1);
x_10 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = 1;
lean_ctor_set_uint8(x_10, sizeof(void*)*4, x_12);
x_13 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_13);
x_15 = l_Lean_Aesop_Goal_rapps___closed__1;
x_16 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_16);
lean_inc(x_2);
x_18 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_18, 0, lean_box(0));
lean_closure_set(x_18, 1, lean_box(0));
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_17);
lean_inc(x_3);
x_19 = lean_apply_2(x_3, lean_box(0), x_18);
lean_inc(x_5);
x_20 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_20, 0, x_4);
lean_closure_set(x_20, 1, x_3);
lean_closure_set(x_20, 2, x_2);
lean_closure_set(x_20, 3, x_5);
x_21 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
x_24 = lean_ctor_get(x_10, 2);
x_25 = lean_ctor_get(x_10, 3);
x_26 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 1);
x_27 = lean_ctor_get_uint8(x_10, sizeof(void*)*4 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 4, 3);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*4, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 1, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*4 + 2, x_27);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
lean_inc(x_2);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_2);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_3);
x_36 = lean_apply_2(x_3, lean_box(0), x_35);
lean_inc(x_5);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_37, 0, x_4);
lean_closure_set(x_37, 1, x_3);
lean_closure_set(x_37, 2, x_2);
lean_closure_set(x_37, 3, x_5);
x_38 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
lean_dec(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_Rapp_subgoalsProven_x3f___rarg(x_1, x_2, x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg___lambda__3___boxed), 6, 5);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_1);
lean_closure_set(x_7, 4, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg___lambda__4), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setProven___rarg___lambda__1), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg___lambda__5), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_4, x_3);
return x_6;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setProven___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setProven___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setProven___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_RappRef_setProven___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_RappRef_setProven___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Lean_Aesop_RappRef_setProven___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Aesop_GoalRef_setIrrelevant___rarg(x_1, x_2, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_Aesop_Goal_hasProvableRapp___rarg(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_box(x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
x_13 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_5, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg(x_1, x_3, x_4, x_20, x_21, x_22);
x_24 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_23, x_8);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_MutAltTree_siblings___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__2), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_1);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = 1;
lean_ctor_set_uint8(x_8, sizeof(void*)*6 + 1, x_10);
x_11 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_12 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_11);
x_13 = l_Lean_Aesop_Goal_rapps___closed__1;
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_16, 0, lean_box(0));
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_15);
lean_inc(x_3);
x_17 = lean_apply_2(x_3, lean_box(0), x_16);
lean_inc(x_5);
x_18 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_3);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_5);
x_19 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
x_24 = lean_ctor_get(x_8, 4);
x_25 = lean_ctor_get(x_8, 5);
x_26 = lean_ctor_get_uint8(x_8, sizeof(void*)*6);
x_27 = lean_ctor_get_uint8(x_8, sizeof(void*)*6 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_23);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*6, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 1, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 2, x_27);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
lean_inc(x_2);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_2);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_3);
x_36 = lean_apply_2(x_3, lean_box(0), x_35);
lean_inc(x_5);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_37, 0, x_4);
lean_closure_set(x_37, 1, x_3);
lean_closure_set(x_37, 2, x_2);
lean_closure_set(x_37, 3, x_5);
x_38 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
lean_dec(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg(x_1, x_2, x_5);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_5);
lean_inc(x_3);
x_8 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_6, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__4___boxed), 6, 5);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_1);
lean_closure_set(x_9, 4, x_3);
x_10 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__5), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 1;
x_2 = lean_box(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Aesop_Rapp_setUnprovable_x3f___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7___closed__1;
x_6 = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyUnsafe___rarg___boxed), 3, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_2(x_2, lean_box(0), x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__6), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_4, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_4, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_Internal_setUnprovable___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_Internal_setUnprovable___spec__3___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__4(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Aesop_GoalRef_setIrrelevant___rarg(x_1, x_2, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
x_13 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_5, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg(x_1, x_3, x_4, x_20, x_21, x_22);
x_24 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_23, x_8);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_MutAltTree_siblings___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__1), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_1);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = 1;
lean_ctor_set_uint8(x_8, sizeof(void*)*6 + 1, x_10);
x_11 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_12 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_11);
x_13 = l_Lean_Aesop_Goal_rapps___closed__1;
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_16, 0, lean_box(0));
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_15);
lean_inc(x_3);
x_17 = lean_apply_2(x_3, lean_box(0), x_16);
lean_inc(x_5);
x_18 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_3);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_5);
x_19 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
x_24 = lean_ctor_get(x_8, 4);
x_25 = lean_ctor_get(x_8, 5);
x_26 = lean_ctor_get_uint8(x_8, sizeof(void*)*6);
x_27 = lean_ctor_get_uint8(x_8, sizeof(void*)*6 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_23);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*6, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 1, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 2, x_27);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
lean_inc(x_2);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_2);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_3);
x_36 = lean_apply_2(x_3, lean_box(0), x_35);
lean_inc(x_5);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_37, 0, x_4);
lean_closure_set(x_37, 1, x_3);
lean_closure_set(x_37, 2, x_2);
lean_closure_set(x_37, 3, x_5);
x_38 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
lean_dec(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg(x_1, x_2, x_5);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_5);
lean_inc(x_3);
x_8 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_6, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__3___boxed), 6, 5);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_1);
lean_closure_set(x_9, 4, x_3);
x_10 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__4), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__5), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_GoalRef_setUnprovable___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_GoalRef_setUnprovable___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_GoalRef_setUnprovable___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Lean_Aesop_GoalRef_setUnprovable___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Aesop_GoalRef_setIrrelevant___rarg(x_1, x_2, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Aesop_Goal_setId___closed__1;
x_7 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3, x_4, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_12, 0, lean_box(0));
lean_closure_set(x_12, 1, lean_box(0));
lean_closure_set(x_12, 2, x_2);
lean_inc(x_3);
x_13 = lean_apply_2(x_3, lean_box(0), x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__1), 5, 4);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_3);
lean_closure_set(x_14, 2, x_4);
lean_closure_set(x_14, 3, x_5);
x_15 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_5);
lean_inc(x_7);
x_9 = lean_apply_1(x_5, x_7);
lean_inc(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_7);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_6);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setIrrelevant___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_8, 0, x_1);
if (x_7 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
x_13 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_12, x_8);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_5, x_5);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_apply_2(x_16, lean_box(0), x_17);
x_19 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_22 = lean_box(0);
x_23 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg(x_1, x_3, x_4, x_20, x_21, x_22);
x_24 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_23, x_8);
return x_24;
}
}
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_MutAltTree_siblings___rarg(x_1, x_2, lean_box(0), lean_box(0), x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__1), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = l_Lean_Aesop_Goal_id___closed__1;
lean_inc(x_1);
x_8 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = 1;
lean_ctor_set_uint8(x_8, sizeof(void*)*6 + 1, x_10);
x_11 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_12 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_11);
x_13 = l_Lean_Aesop_Goal_rapps___closed__1;
x_14 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_13);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_16, 0, lean_box(0));
lean_closure_set(x_16, 1, lean_box(0));
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_15);
lean_inc(x_3);
x_17 = lean_apply_2(x_3, lean_box(0), x_16);
lean_inc(x_5);
x_18 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_18, 0, x_4);
lean_closure_set(x_18, 1, x_3);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_5);
x_19 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
x_22 = lean_ctor_get(x_8, 2);
x_23 = lean_ctor_get(x_8, 3);
x_24 = lean_ctor_get(x_8, 4);
x_25 = lean_ctor_get(x_8, 5);
x_26 = lean_ctor_get_uint8(x_8, sizeof(void*)*6);
x_27 = lean_ctor_get_uint8(x_8, sizeof(void*)*6 + 2);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
x_28 = 1;
x_29 = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_21);
lean_ctor_set(x_29, 2, x_22);
lean_ctor_set(x_29, 3, x_23);
lean_ctor_set(x_29, 4, x_24);
lean_ctor_set(x_29, 5, x_25);
lean_ctor_set_uint8(x_29, sizeof(void*)*6, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 1, x_28);
lean_ctor_set_uint8(x_29, sizeof(void*)*6 + 2, x_27);
x_30 = l_Lean_Aesop_Goal_setId___closed__1;
lean_inc(x_1);
x_31 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_30);
x_32 = l_Lean_Aesop_Goal_rapps___closed__1;
x_33 = l_Lean_Aesop_MutAltTree_Internal_MutAltTreeSpecImp_match__1___rarg(x_1, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_31);
lean_ctor_set(x_34, 2, x_33);
lean_inc(x_2);
x_35 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, lean_box(0));
lean_closure_set(x_35, 2, x_2);
lean_closure_set(x_35, 3, x_34);
lean_inc(x_3);
x_36 = lean_apply_2(x_3, lean_box(0), x_35);
lean_inc(x_5);
x_37 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_37, 0, x_4);
lean_closure_set(x_37, 1, x_3);
lean_closure_set(x_37, 2, x_2);
lean_closure_set(x_37, 3, x_5);
x_38 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_ctor_get(x_4, 0);
lean_inc(x_39);
lean_dec(x_4);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_apply_2(x_40, lean_box(0), x_42);
return x_43;
}
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Aesop_Goal_mayHaveUnexpandedRapp___rarg(x_1, x_2, x_5);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_5);
lean_inc(x_3);
x_8 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_6, x_7);
lean_inc(x_3);
x_9 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__3___boxed), 6, 5);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_1);
lean_closure_set(x_9, 4, x_3);
x_10 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_inc(x_2);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__4), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__5), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
x_6 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg(x_1, x_2, lean_box(0), lean_box(0), x_5, x_4, x_3);
return x_6;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_RappRef_setUnprovable___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_RappRef_setUnprovable___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_Aesop_MutAltTree_visitUp___at_Lean_Aesop_RappRef_setUnprovable___spec__2___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_Lean_Aesop_RappRef_setUnprovable___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Aesop_MutAltTree(lean_object*);
lean_object* initialize_Lean_Aesop_Rule(lean_object*);
lean_object* initialize_Lean_Aesop_Util(lean_object*);
lean_object* initialize_Lean_Aesop_Tracing(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_Tree(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_MutAltTree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Rule(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Tracing(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__1 = _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__1();
lean_mark_persistent(l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__1);
l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__2 = _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__2();
lean_mark_persistent(l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__2);
l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__3 = _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__3();
lean_mark_persistent(l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__3);
l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__4 = _init_l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__4();
lean_mark_persistent(l___private_Lean_Aesop_Tree_0__Bool_toYesNo___closed__4);
l_Lean_Aesop_instInhabitedGoalId = _init_l_Lean_Aesop_instInhabitedGoalId();
lean_mark_persistent(l_Lean_Aesop_instInhabitedGoalId);
l_Lean_Aesop_GoalId_zero = _init_l_Lean_Aesop_GoalId_zero();
lean_mark_persistent(l_Lean_Aesop_GoalId_zero);
l_Lean_Aesop_GoalId_one = _init_l_Lean_Aesop_GoalId_one();
lean_mark_persistent(l_Lean_Aesop_GoalId_one);
l_Lean_Aesop_GoalId_dummy = _init_l_Lean_Aesop_GoalId_dummy();
lean_mark_persistent(l_Lean_Aesop_GoalId_dummy);
l_Lean_Aesop_GoalId_instLTGoalId = _init_l_Lean_Aesop_GoalId_instLTGoalId();
lean_mark_persistent(l_Lean_Aesop_GoalId_instLTGoalId);
l_Lean_Aesop_instInhabitedRappId = _init_l_Lean_Aesop_instInhabitedRappId();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappId);
l_Lean_Aesop_RappId_zero = _init_l_Lean_Aesop_RappId_zero();
lean_mark_persistent(l_Lean_Aesop_RappId_zero);
l_Lean_Aesop_RappId_one = _init_l_Lean_Aesop_RappId_one();
lean_mark_persistent(l_Lean_Aesop_RappId_one);
l_Lean_Aesop_RappId_dummy = _init_l_Lean_Aesop_RappId_dummy();
lean_mark_persistent(l_Lean_Aesop_RappId_dummy);
l_Lean_Aesop_RappId_instLTRappId = _init_l_Lean_Aesop_RappId_instLTRappId();
lean_mark_persistent(l_Lean_Aesop_RappId_instLTRappId);
l_Lean_Aesop_instInhabitedGoalData___closed__1 = _init_l_Lean_Aesop_instInhabitedGoalData___closed__1();
lean_mark_persistent(l_Lean_Aesop_instInhabitedGoalData___closed__1);
l_Lean_Aesop_instInhabitedGoalData___closed__2 = _init_l_Lean_Aesop_instInhabitedGoalData___closed__2();
lean_mark_persistent(l_Lean_Aesop_instInhabitedGoalData___closed__2);
l_Lean_Aesop_instInhabitedGoalData = _init_l_Lean_Aesop_instInhabitedGoalData();
lean_mark_persistent(l_Lean_Aesop_instInhabitedGoalData);
l_Lean_Aesop_GoalData_instInhabitedMessageInfo___closed__1 = _init_l_Lean_Aesop_GoalData_instInhabitedMessageInfo___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalData_instInhabitedMessageInfo___closed__1);
l_Lean_Aesop_GoalData_instInhabitedMessageInfo = _init_l_Lean_Aesop_GoalData_instInhabitedMessageInfo();
lean_mark_persistent(l_Lean_Aesop_GoalData_instInhabitedMessageInfo);
l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__1 = _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__1);
l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__2 = _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__2___closed__2);
l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__1 = _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__1);
l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__2 = _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___rarg___lambda__3___closed__2);
l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__1 = _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__1);
l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__2 = _init_l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalData_getMessageInfo___rarg___closed__2);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__1 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__1();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__1);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__2);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__3 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__3();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__3);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__4 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__4();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__4);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__5 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__5();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__5);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__6);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__7);
l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8 = _init_l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8();
lean_mark_persistent(l_Std_fmt___at_Lean_Aesop_GoalData_toMessageData_x27___spec__2___closed__8);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__1 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__1);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__2 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__2);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__3 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__3();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__3);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__4 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__4();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__4);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__5 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__5();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__5);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__6 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__6();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__6);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__7 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__7();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__7);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__8 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__8();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__8);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__9 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__9();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__9);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__10 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__10();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__10);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__11 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__11();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__11);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__12 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__12();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__12);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__13 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__13();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__13);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__14 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__14();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__14);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__15 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__15();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__15);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__16 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__16();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__16);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__17 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__17();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__17);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__18 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__18();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__18);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__19 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__19();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__19);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__20 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__20();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__20);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__21 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__21();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__21);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__22 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__22();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__22);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__23 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__23();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__23);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__24 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__24();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__24);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__25 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__25();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__25);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__26 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__26();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__26);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__27 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__27();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__27);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__28 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__28();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__28);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__29 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__29();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__29);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__30 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__30();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__30);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__31 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__31();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__31);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__32 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__32();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__32);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__33 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__33();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__33);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__34 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__34();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__34);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__35 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__35();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__35);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__36 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__36();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__36);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__37 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__37();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__37);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__38 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__38();
l_Lean_Aesop_GoalData_toMessageData_x27___closed__39 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__39();
l_Lean_Aesop_GoalData_toMessageData_x27___closed__40 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__40();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__40);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__41 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__41();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__41);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__42 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__42();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__42);
l_Lean_Aesop_GoalData_toMessageData_x27___closed__43 = _init_l_Lean_Aesop_GoalData_toMessageData_x27___closed__43();
lean_mark_persistent(l_Lean_Aesop_GoalData_toMessageData_x27___closed__43);
l_Lean_Aesop_instInhabitedRappData___closed__1 = _init_l_Lean_Aesop_instInhabitedRappData___closed__1();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__1);
l_Lean_Aesop_instInhabitedRappData___closed__2 = _init_l_Lean_Aesop_instInhabitedRappData___closed__2();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__2);
l_Lean_Aesop_instInhabitedRappData___closed__3 = _init_l_Lean_Aesop_instInhabitedRappData___closed__3();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__3);
l_Lean_Aesop_instInhabitedRappData___closed__4 = _init_l_Lean_Aesop_instInhabitedRappData___closed__4();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__4);
l_Lean_Aesop_instInhabitedRappData___closed__5 = _init_l_Lean_Aesop_instInhabitedRappData___closed__5();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__5);
l_Lean_Aesop_instInhabitedRappData___closed__6 = _init_l_Lean_Aesop_instInhabitedRappData___closed__6();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__6);
l_Lean_Aesop_instInhabitedRappData___closed__7 = _init_l_Lean_Aesop_instInhabitedRappData___closed__7();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__7);
l_Lean_Aesop_instInhabitedRappData___closed__8 = _init_l_Lean_Aesop_instInhabitedRappData___closed__8();
l_Lean_Aesop_instInhabitedRappData___closed__9 = _init_l_Lean_Aesop_instInhabitedRappData___closed__9();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__9);
l_Lean_Aesop_instInhabitedRappData___closed__10 = _init_l_Lean_Aesop_instInhabitedRappData___closed__10();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData___closed__10);
l_Lean_Aesop_instInhabitedRappData = _init_l_Lean_Aesop_instInhabitedRappData();
lean_mark_persistent(l_Lean_Aesop_instInhabitedRappData);
l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__1 = _init_l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__1();
lean_mark_persistent(l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__1);
l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__2 = _init_l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__2();
lean_mark_persistent(l_Lean_Aesop_RappData_getMessageInfo___rarg___closed__2);
l_Lean_Aesop_RappData_toMessageData_x27___closed__1 = _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__1();
lean_mark_persistent(l_Lean_Aesop_RappData_toMessageData_x27___closed__1);
l_Lean_Aesop_RappData_toMessageData_x27___closed__2 = _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__2();
lean_mark_persistent(l_Lean_Aesop_RappData_toMessageData_x27___closed__2);
l_Lean_Aesop_RappData_toMessageData_x27___closed__3 = _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__3();
lean_mark_persistent(l_Lean_Aesop_RappData_toMessageData_x27___closed__3);
l_Lean_Aesop_RappData_toMessageData_x27___closed__4 = _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__4();
lean_mark_persistent(l_Lean_Aesop_RappData_toMessageData_x27___closed__4);
l_Lean_Aesop_RappData_toMessageData_x27___closed__5 = _init_l_Lean_Aesop_RappData_toMessageData_x27___closed__5();
lean_mark_persistent(l_Lean_Aesop_RappData_toMessageData_x27___closed__5);
l_Lean_Aesop_Goal_rapps___closed__1 = _init_l_Lean_Aesop_Goal_rapps___closed__1();
lean_mark_persistent(l_Lean_Aesop_Goal_rapps___closed__1);
l_Lean_Aesop_Goal_id___closed__1 = _init_l_Lean_Aesop_Goal_id___closed__1();
lean_mark_persistent(l_Lean_Aesop_Goal_id___closed__1);
l_Lean_Aesop_Goal_setId___closed__1 = _init_l_Lean_Aesop_Goal_setId___closed__1();
lean_mark_persistent(l_Lean_Aesop_Goal_setId___closed__1);
l_Lean_Aesop_GoalRef_linkProofs___closed__1 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__1();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__1);
l_Lean_Aesop_GoalRef_linkProofs___closed__2 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__2();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__2);
l_Lean_Aesop_GoalRef_linkProofs___closed__3 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__3();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__3);
l_Lean_Aesop_GoalRef_linkProofs___closed__4 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__4();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__4);
l_Lean_Aesop_GoalRef_linkProofs___closed__5 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__5();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__5);
l_Lean_Aesop_GoalRef_linkProofs___closed__6 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__6();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__6);
l_Lean_Aesop_GoalRef_linkProofs___closed__7 = _init_l_Lean_Aesop_GoalRef_linkProofs___closed__7();
lean_mark_persistent(l_Lean_Aesop_GoalRef_linkProofs___closed__7);
l_Lean_Aesop_Internal_setProven___rarg___lambda__1___closed__1 = _init_l_Lean_Aesop_Internal_setProven___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_Internal_setProven___rarg___lambda__1___closed__1);
l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7___closed__1 = _init_l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7___closed__1();
lean_mark_persistent(l_Lean_Aesop_Internal_setUnprovable___rarg___lambda__7___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
