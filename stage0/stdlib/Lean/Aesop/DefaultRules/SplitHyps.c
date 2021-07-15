// Lean compiler output
// Module: Lean.Aesop.DefaultRules.SplitHyps
// Imports: Init Lean.Elab.Tactic
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
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__7;
lean_object* l_Lean_Meta_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__4;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__3(lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__8;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_evalInduction___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHyp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__9;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__17;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__11;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4;
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__19;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__6;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__12;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__1(lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_Lean_Meta_getMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5;
lean_object* l_Lean_Aesop_DefaultRules_splitHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__10;
lean_object* l_Lean_Expr_headBeta(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1;
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__2(lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__20;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__1;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__1(lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__2;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__16;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__24;
lean_object* l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Cases_cases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__14;
lean_object* l_Lean_Meta_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__15;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf_match__1(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__18;
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__22;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__2___rarg(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__5;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7;
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__3;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential_match__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t l_Lean_Aesop_DefaultRules_splitHypCore___closed__1;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__2;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__21;
static uint8_t l_Lean_Aesop_DefaultRules_splitHypCore___closed__2;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__13;
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps_match__1(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___closed__23;
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_array_get_size(x_4);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_fget(x_4, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_array_fget(x_4, x_12);
lean_dec(x_4);
x_14 = lean_apply_3(x_2, x_11, x_13, x_5);
return x_14;
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fget(x_1, x_8);
lean_dec(x_1);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("And");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Prod");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("PProd");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("MProd");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Sigma");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("PSigma");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Exists");
return x_1;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 5:
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 5)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 4)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint64_t x_16; lean_object* x_17; uint64_t x_18; lean_object* x_19; uint64_t x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; uint8_t x_24; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_11, sizeof(void*)*2);
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
x_20 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
lean_dec(x_12);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
lean_dec(x_13);
x_23 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1;
x_24 = lean_string_dec_eq(x_21, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_3);
x_25 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2;
x_26 = lean_string_dec_eq(x_21, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
lean_dec(x_4);
x_27 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3;
x_28 = lean_string_dec_eq(x_21, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_5);
x_29 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4;
x_30 = lean_string_dec_eq(x_21, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_6);
x_31 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5;
x_32 = lean_string_dec_eq(x_21, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_7);
x_33 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6;
x_34 = lean_string_dec_eq(x_21, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
lean_dec(x_8);
x_35 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7;
x_36 = lean_string_dec_eq(x_21, x_35);
lean_dec(x_21);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
x_37 = lean_apply_1(x_10, x_1);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_10);
lean_dec(x_1);
x_38 = lean_box_uint64(x_20);
x_39 = lean_box_uint64(x_18);
x_40 = lean_box_uint64(x_16);
x_41 = lean_box_uint64(x_22);
x_42 = lean_apply_7(x_9, x_19, x_38, x_17, x_39, x_15, x_40, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_43 = lean_box_uint64(x_20);
x_44 = lean_box_uint64(x_18);
x_45 = lean_box_uint64(x_16);
x_46 = lean_box_uint64(x_22);
x_47 = lean_apply_7(x_8, x_19, x_43, x_17, x_44, x_15, x_45, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_48 = lean_box_uint64(x_20);
x_49 = lean_box_uint64(x_18);
x_50 = lean_box_uint64(x_16);
x_51 = lean_box_uint64(x_22);
x_52 = lean_apply_7(x_7, x_19, x_48, x_17, x_49, x_15, x_50, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_53 = lean_box_uint64(x_20);
x_54 = lean_box_uint64(x_18);
x_55 = lean_box_uint64(x_16);
x_56 = lean_box_uint64(x_22);
x_57 = lean_apply_7(x_6, x_19, x_53, x_17, x_54, x_15, x_55, x_56);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_58 = lean_box_uint64(x_20);
x_59 = lean_box_uint64(x_18);
x_60 = lean_box_uint64(x_16);
x_61 = lean_box_uint64(x_22);
x_62 = lean_apply_7(x_5, x_19, x_58, x_17, x_59, x_15, x_60, x_61);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_63 = lean_box_uint64(x_20);
x_64 = lean_box_uint64(x_18);
x_65 = lean_box_uint64(x_16);
x_66 = lean_box_uint64(x_22);
x_67 = lean_apply_7(x_4, x_19, x_63, x_17, x_64, x_15, x_65, x_66);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_68 = lean_box_uint64(x_20);
x_69 = lean_box_uint64(x_18);
x_70 = lean_box_uint64(x_16);
x_71 = lean_box_uint64(x_22);
x_72 = lean_apply_7(x_3, x_19, x_68, x_17, x_69, x_15, x_70, x_71);
return x_72;
}
}
else
{
lean_object* x_73; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_73 = lean_apply_1(x_10, x_1);
return x_73;
}
}
else
{
lean_object* x_74; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_74 = lean_apply_1(x_10, x_1);
return x_74;
}
}
else
{
lean_object* x_75; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_75 = lean_apply_1(x_10, x_1);
return x_75;
}
}
else
{
lean_object* x_76; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_76 = lean_apply_1(x_10, x_1);
return x_76;
}
}
case 7:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint64_t x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_1, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_1, 2);
lean_inc(x_79);
x_80 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_81 = lean_box_uint64(x_80);
x_82 = lean_apply_4(x_2, x_77, x_78, x_79, x_81);
return x_82;
}
default: 
{
lean_object* x_83; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_83 = lean_apply_1(x_10, x_1);
return x_83;
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_mkFVar(x_2);
x_4 = l_Lean_mkAppN(x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
if (x_5 == 0)
{
lean_inc(x_8);
x_14 = x_8;
goto block_62;
}
else
{
lean_inc(x_7);
x_14 = x_7;
goto block_62;
}
block_62:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = 0;
x_16 = 1;
lean_inc(x_9);
lean_inc(x_2);
x_17 = l_Lean_Meta_mkForallFVars(x_2, x_14, x_15, x_16, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars(x_2, x_3);
x_21 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1;
x_22 = lean_array_push(x_21, x_7);
x_23 = lean_array_push(x_22, x_8);
x_24 = lean_array_push(x_23, x_20);
x_25 = l_Lean_mkAppN(x_6, x_24);
lean_dec(x_24);
lean_inc(x_9);
x_26 = l_Lean_Meta_mkLambdaFVars(x_2, x_25, x_15, x_16, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_29 = l_Lean_Meta_assert(x_4, x_1, x_18, x_27, x_9, x_10, x_11, x_12, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_intro1Core(x_30, x_15, x_9, x_10, x_11, x_12, x_31);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_32, 0);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
lean_ctor_set(x_32, 0, x_38);
return x_32;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_32, 0);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_32);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_43 = x_39;
} else {
 lean_dec_ref(x_39);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_40);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_32);
if (x_46 == 0)
{
return x_32;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_32, 0);
x_48 = lean_ctor_get(x_32, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_32);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_50 = !lean_is_exclusive(x_29);
if (x_50 == 0)
{
return x_29;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_29, 0);
x_52 = lean_ctor_get(x_29, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_29);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_26);
if (x_54 == 0)
{
return x_26;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_26, 0);
x_56 = lean_ctor_get(x_26, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_26);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_17);
if (x_58 == 0)
{
return x_17;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_17, 0);
x_60 = lean_ctor_get(x_17, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_17);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
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
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
x_22 = lean_box(0);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
}
lean_object* l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Lean_Meta_saveState___rarg(x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = l_Lean_Meta_clear(x_2, x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_dec(x_11);
x_20 = l_Lean_Meta_SavedState_restore(x_9, x_3, x_4, x_5, x_6, x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_9);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf(x_1, x_2, x_3, x_4, x_14, x_5, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
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
x_20 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_21 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf(x_1, x_2, x_3, x_19, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_22, 0);
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_26);
lean_inc(x_3);
x_27 = l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__2(x_3, x_26, x_9, x_10, x_11, x_12, x_23);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_97; 
x_97 = lean_box(x_20);
lean_ctor_set(x_22, 1, x_97);
lean_ctor_set(x_22, 0, x_26);
x_30 = x_22;
goto block_96;
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_dec(x_26);
x_98 = lean_ctor_get(x_28, 0);
lean_inc(x_98);
lean_dec(x_28);
x_99 = lean_box(x_14);
lean_ctor_set(x_22, 1, x_99);
lean_ctor_set(x_22, 0, x_98);
x_30 = x_22;
goto block_96;
}
block_96:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_33 = l_Lean_Aesop_DefaultRules_splitHypCore(x_31, x_1, x_2, x_18, x_7, x_9, x_10, x_11, x_12, x_29);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = l_Lean_Aesop_DefaultRules_splitHypCore(x_37, x_1, x_2, x_25, x_8, x_9, x_10, x_11, x_12, x_35);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_32);
lean_dec(x_32);
if (x_40 == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_38, 0);
lean_dec(x_42);
x_43 = !lean_is_exclusive(x_39);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_39, 0);
x_45 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_46 = lean_array_push(x_45, x_3);
x_47 = l_Array_append___rarg(x_46, x_36);
lean_dec(x_36);
x_48 = l_Array_append___rarg(x_47, x_44);
lean_dec(x_44);
lean_ctor_set(x_39, 0, x_48);
return x_38;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_49 = lean_ctor_get(x_39, 0);
x_50 = lean_ctor_get(x_39, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_39);
x_51 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_52 = lean_array_push(x_51, x_3);
x_53 = l_Array_append___rarg(x_52, x_36);
lean_dec(x_36);
x_54 = l_Array_append___rarg(x_53, x_49);
lean_dec(x_49);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_50);
lean_ctor_set(x_38, 0, x_55);
return x_38;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_38, 1);
lean_inc(x_56);
lean_dec(x_38);
x_57 = lean_ctor_get(x_39, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_39, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_59 = x_39;
} else {
 lean_dec_ref(x_39);
 x_59 = lean_box(0);
}
x_60 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_61 = lean_array_push(x_60, x_3);
x_62 = l_Array_append___rarg(x_61, x_36);
lean_dec(x_36);
x_63 = l_Array_append___rarg(x_62, x_57);
lean_dec(x_57);
if (lean_is_scalar(x_59)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_59;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_58);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_56);
return x_65;
}
}
else
{
uint8_t x_66; 
lean_dec(x_3);
x_66 = !lean_is_exclusive(x_38);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_38, 0);
lean_dec(x_67);
x_68 = !lean_is_exclusive(x_39);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_39, 0);
x_70 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_71 = l_Array_append___rarg(x_70, x_36);
lean_dec(x_36);
x_72 = l_Array_append___rarg(x_71, x_69);
lean_dec(x_69);
lean_ctor_set(x_39, 0, x_72);
return x_38;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_39, 0);
x_74 = lean_ctor_get(x_39, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_39);
x_75 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_76 = l_Array_append___rarg(x_75, x_36);
lean_dec(x_36);
x_77 = l_Array_append___rarg(x_76, x_73);
lean_dec(x_73);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
lean_ctor_set(x_38, 0, x_78);
return x_38;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_79 = lean_ctor_get(x_38, 1);
lean_inc(x_79);
lean_dec(x_38);
x_80 = lean_ctor_get(x_39, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_39, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_82 = x_39;
} else {
 lean_dec_ref(x_39);
 x_82 = lean_box(0);
}
x_83 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_84 = l_Array_append___rarg(x_83, x_36);
lean_dec(x_36);
x_85 = l_Array_append___rarg(x_84, x_80);
lean_dec(x_80);
if (lean_is_scalar(x_82)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_82;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_81);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_79);
return x_87;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_36);
lean_dec(x_32);
lean_dec(x_3);
x_88 = !lean_is_exclusive(x_38);
if (x_88 == 0)
{
return x_38;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_38, 0);
x_90 = lean_ctor_get(x_38, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_38);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_32);
lean_dec(x_25);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_33);
if (x_92 == 0)
{
return x_33;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_33, 0);
x_94 = lean_ctor_get(x_33, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_33);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_100 = lean_ctor_get(x_22, 0);
x_101 = lean_ctor_get(x_22, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_22);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_101);
lean_inc(x_3);
x_102 = l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__2(x_3, x_101, x_9, x_10, x_11, x_12, x_23);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_box(x_20);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_101);
lean_ctor_set(x_147, 1, x_146);
x_105 = x_147;
goto block_145;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_101);
x_148 = lean_ctor_get(x_103, 0);
lean_inc(x_148);
lean_dec(x_103);
x_149 = lean_box(x_14);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
x_105 = x_150;
goto block_145;
}
block_145:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_108 = l_Lean_Aesop_DefaultRules_splitHypCore(x_106, x_1, x_2, x_18, x_7, x_9, x_10, x_11, x_12, x_104);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_ctor_get(x_109, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_109, 1);
lean_inc(x_112);
lean_dec(x_109);
x_113 = l_Lean_Aesop_DefaultRules_splitHypCore(x_112, x_1, x_2, x_100, x_8, x_9, x_10, x_11, x_12, x_110);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_unbox(x_107);
lean_dec(x_107);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_117 = x_113;
} else {
 lean_dec_ref(x_113);
 x_117 = lean_box(0);
}
x_118 = lean_ctor_get(x_114, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_114, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_120 = x_114;
} else {
 lean_dec_ref(x_114);
 x_120 = lean_box(0);
}
x_121 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_122 = lean_array_push(x_121, x_3);
x_123 = l_Array_append___rarg(x_122, x_111);
lean_dec(x_111);
x_124 = l_Array_append___rarg(x_123, x_118);
lean_dec(x_118);
if (lean_is_scalar(x_120)) {
 x_125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_125 = x_120;
}
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_119);
if (lean_is_scalar(x_117)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_117;
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_116);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_3);
x_127 = lean_ctor_get(x_113, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_128 = x_113;
} else {
 lean_dec_ref(x_113);
 x_128 = lean_box(0);
}
x_129 = lean_ctor_get(x_114, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_114, 1);
lean_inc(x_130);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_131 = x_114;
} else {
 lean_dec_ref(x_114);
 x_131 = lean_box(0);
}
x_132 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_133 = l_Array_append___rarg(x_132, x_111);
lean_dec(x_111);
x_134 = l_Array_append___rarg(x_133, x_129);
lean_dec(x_129);
if (lean_is_scalar(x_131)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_131;
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_130);
if (lean_is_scalar(x_128)) {
 x_136 = lean_alloc_ctor(0, 2, 0);
} else {
 x_136 = x_128;
}
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_127);
return x_136;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_111);
lean_dec(x_107);
lean_dec(x_3);
x_137 = lean_ctor_get(x_113, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_113, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_139 = x_113;
} else {
 lean_dec_ref(x_113);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_107);
lean_dec(x_100);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = lean_ctor_get(x_108, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_108, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_143 = x_108;
} else {
 lean_dec_ref(x_108);
 x_143 = lean_box(0);
}
if (lean_is_scalar(x_143)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_143;
}
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_142);
return x_144;
}
}
}
}
else
{
uint8_t x_151; 
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_151 = !lean_is_exclusive(x_21);
if (x_151 == 0)
{
return x_21;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_21, 0);
x_153 = lean_ctor_get(x_21, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_21);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
else
{
uint8_t x_155; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_155 = !lean_is_exclusive(x_15);
if (x_155 == 0)
{
return x_15;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_15, 0);
x_157 = lean_ctor_get(x_15, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_15);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___boxed), 5, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Aesop.DefaultRules.SplitHyps");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Aesop.DefaultRules.splitHypCore");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unreachable code has been reached");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__3;
x_3 = lean_unsigned_to_nat(87u);
x_4 = lean_unsigned_to_nat(8u);
x_5 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l_Lean_Meta_Cases_cases(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_array_get_size(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_10);
lean_dec(x_12);
x_17 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1;
x_18 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5;
x_19 = lean_panic_fn(x_17, x_18);
x_20 = lean_apply_5(x_19, x_4, x_5, x_6, x_7, x_13);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_array_fget(x_12, x_21);
lean_dec(x_12);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
x_25 = lean_array_get_size(x_24);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
x_28 = x_24;
x_29 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_evalInduction___spec__2(x_26, x_27, x_28);
x_30 = x_29;
x_31 = lean_ctor_get(x_23, 0);
lean_inc(x_31);
lean_dec(x_23);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_10, 0, x_32);
return x_10;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_35 = lean_array_get_size(x_33);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_33);
x_38 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1;
x_39 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5;
x_40 = lean_panic_fn(x_38, x_39);
x_41 = lean_apply_5(x_40, x_4, x_5, x_6, x_7, x_34);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; size_t x_47; size_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_array_fget(x_33, x_42);
lean_dec(x_33);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
x_46 = lean_array_get_size(x_45);
x_47 = lean_usize_of_nat(x_46);
lean_dec(x_46);
x_48 = 0;
x_49 = x_45;
x_50 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_evalInduction___spec__2(x_47, x_48, x_49);
x_51 = x_50;
x_52 = lean_ctor_get(x_44, 0);
lean_inc(x_52);
lean_dec(x_44);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_34);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = !lean_is_exclusive(x_10);
if (x_55 == 0)
{
return x_10;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_10, 0);
x_57 = lean_ctor_get(x_10, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_10);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Array_append___rarg(x_1, x_5);
x_13 = l_Lean_Aesop_DefaultRules_splitHypCore(x_2, x_3, x_12, x_4, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
static uint8_t _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("fst");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__3;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("snd");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__3;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__8;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__8;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__11;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__11;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__14;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__14;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__17;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__17;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("left");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__20;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__21;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("right");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__20;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__23;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 5:
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 5)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 4)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1;
x_20 = lean_string_dec_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2;
x_22 = lean_string_dec_eq(x_18, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3;
x_24 = lean_string_dec_eq(x_18, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4;
x_26 = lean_string_dec_eq(x_18, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5;
x_28 = lean_string_dec_eq(x_18, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6;
x_30 = lean_string_dec_eq(x_18, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_2);
x_31 = l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7;
x_32 = lean_string_dec_eq(x_18, x_31);
lean_dec(x_18);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_33 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_1);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_10);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = l_Array_isEmpty___rarg(x_3);
lean_dec(x_3);
if (x_36 == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__1;
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_box(0);
x_39 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1(x_1, x_4, x_38, x_6, x_7, x_8, x_9, x_10);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_40 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_1);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_10);
return x_42;
}
}
else
{
uint8_t x_43; 
x_43 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__2;
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_box(0);
x_45 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1(x_1, x_4, x_44, x_6, x_7, x_8, x_9, x_10);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_46 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_1);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_10);
return x_48;
}
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_18);
x_49 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__5;
lean_inc(x_17);
x_50 = l_Lean_mkConst(x_49, x_17);
x_51 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__7;
x_52 = l_Lean_mkConst(x_51, x_17);
lean_inc(x_1);
x_53 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential(x_1, x_2, x_3, x_4, x_1, x_50, x_52, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_18);
x_54 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__9;
lean_inc(x_17);
x_55 = l_Lean_mkConst(x_54, x_17);
x_56 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__10;
x_57 = l_Lean_mkConst(x_56, x_17);
lean_inc(x_1);
x_58 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential(x_1, x_2, x_3, x_4, x_1, x_55, x_57, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_18);
x_59 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__12;
lean_inc(x_17);
x_60 = l_Lean_mkConst(x_59, x_17);
x_61 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__13;
x_62 = l_Lean_mkConst(x_61, x_17);
x_63 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct(x_2, x_3, x_4, x_1, x_60, x_62, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_18);
x_64 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__15;
lean_inc(x_17);
x_65 = l_Lean_mkConst(x_64, x_17);
x_66 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__16;
x_67 = l_Lean_mkConst(x_66, x_17);
x_68 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct(x_2, x_3, x_4, x_1, x_65, x_67, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_18);
x_69 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__18;
lean_inc(x_17);
x_70 = l_Lean_mkConst(x_69, x_17);
x_71 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__19;
x_72 = l_Lean_mkConst(x_71, x_17);
x_73 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct(x_2, x_3, x_4, x_1, x_70, x_72, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_18);
x_74 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__22;
lean_inc(x_17);
x_75 = l_Lean_mkConst(x_74, x_17);
x_76 = l_Lean_Aesop_DefaultRules_splitHypCore___closed__24;
x_77 = l_Lean_mkConst(x_76, x_17);
x_78 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct(x_2, x_3, x_4, x_1, x_75, x_77, x_16, x_15, x_6, x_7, x_8, x_9, x_10);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_1);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_10);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_82 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_1);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_10);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_85 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_1);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_10);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_88 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_1);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_10);
return x_90;
}
}
case 7:
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore___lambda__2___boxed), 11, 4);
lean_closure_set(x_91, 0, x_3);
lean_closure_set(x_91, 1, x_1);
lean_closure_set(x_91, 2, x_2);
lean_closure_set(x_91, 3, x_4);
x_92 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_5, x_91, x_6, x_7, x_8, x_9, x_10);
return x_92;
}
default: 
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_93 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_1);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_10);
return x_95;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Aesop.DefaultRules.splitHypCore.splitExistential");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2;
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__2;
x_3 = lean_unsigned_to_nat(153u);
x_4 = lean_unsigned_to_nat(63u);
x_5 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar___boxed), 7, 2);
lean_closure_set(x_17, 0, x_11);
lean_closure_set(x_17, 1, x_1);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_18 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_2, x_17, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_4);
x_21 = l_Lean_Aesop_DefaultRules_splitHypCore_hypWithBinderFVars(x_3, x_4);
x_22 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1;
x_23 = lean_array_push(x_22, x_5);
lean_inc(x_6);
x_24 = lean_array_push(x_23, x_6);
x_25 = lean_array_push(x_24, x_21);
x_26 = l_Lean_mkAppN(x_7, x_25);
x_27 = 0;
x_28 = 1;
lean_inc(x_12);
lean_inc(x_3);
x_29 = l_Lean_Meta_mkLambdaFVars(x_3, x_26, x_27, x_28, x_12, x_13, x_14, x_15, x_20);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_mkAppN(x_8, x_25);
lean_dec(x_25);
lean_inc(x_12);
lean_inc(x_3);
x_33 = l_Lean_Meta_mkLambdaFVars(x_3, x_32, x_27, x_28, x_12, x_13, x_14, x_15, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1;
x_37 = lean_array_push(x_36, x_30);
x_38 = lean_array_push(x_37, x_34);
lean_inc(x_19);
x_39 = l_Lean_mkAppN(x_19, x_38);
lean_dec(x_38);
x_40 = l_Lean_Meta_assignExprMVar(x_9, x_39, x_12, x_13, x_14, x_15, x_35);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lean_Expr_mvarId_x21(x_19);
lean_dec(x_19);
x_43 = lean_box(0);
x_44 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_45 = l_Lean_Meta_introNCore(x_42, x_44, x_43, x_27, x_27, x_12, x_13, x_14, x_15, x_41);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = !lean_is_exclusive(x_46);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_46, 0);
x_50 = lean_ctor_get(x_46, 1);
x_51 = lean_array_get_size(x_49);
x_52 = lean_nat_dec_eq(x_51, x_44);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_free_object(x_46);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_53 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1;
x_54 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3;
x_55 = lean_panic_fn(x_53, x_54);
x_56 = lean_apply_5(x_55, x_12, x_13, x_14, x_15, x_47);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_array_fget(x_49, x_57);
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_array_fget(x_49, x_59);
lean_dec(x_49);
lean_inc(x_4);
lean_inc(x_50);
x_61 = lean_alloc_closure((void*)(l_Lean_Meta_clear), 7, 2);
lean_closure_set(x_61, 0, x_50);
lean_closure_set(x_61, 1, x_4);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_62 = l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1(x_61, x_12, x_13, x_14, x_15, x_47);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_121; 
x_121 = lean_box(x_27);
lean_ctor_set(x_46, 1, x_121);
lean_ctor_set(x_46, 0, x_50);
x_65 = x_46;
goto block_120;
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_50);
x_122 = lean_ctor_get(x_63, 0);
lean_inc(x_122);
lean_dec(x_63);
x_123 = lean_box(x_28);
lean_ctor_set(x_46, 1, x_123);
lean_ctor_set(x_46, 0, x_122);
x_65 = x_46;
goto block_120;
}
block_120:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_mkFVar(x_58);
x_69 = l_Lean_mkAppN(x_68, x_3);
x_70 = l_Lean_mkApp(x_6, x_69);
x_71 = l_Lean_Expr_headBeta(x_70);
x_72 = l_Lean_Aesop_DefaultRules_splitHypCore(x_66, x_10, x_3, x_60, x_71, x_12, x_13, x_14, x_15, x_64);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_unbox(x_67);
lean_dec(x_67);
if (x_74 == 0)
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_72);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_ctor_get(x_72, 0);
lean_dec(x_76);
x_77 = !lean_is_exclusive(x_73);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_73, 0);
x_79 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_80 = lean_array_push(x_79, x_4);
x_81 = l_Array_append___rarg(x_80, x_78);
lean_dec(x_78);
lean_ctor_set(x_73, 0, x_81);
return x_72;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_73, 0);
x_83 = lean_ctor_get(x_73, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_73);
x_84 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_85 = lean_array_push(x_84, x_4);
x_86 = l_Array_append___rarg(x_85, x_82);
lean_dec(x_82);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_83);
lean_ctor_set(x_72, 0, x_87);
return x_72;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_88 = lean_ctor_get(x_72, 1);
lean_inc(x_88);
lean_dec(x_72);
x_89 = lean_ctor_get(x_73, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_73, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_91 = x_73;
} else {
 lean_dec_ref(x_73);
 x_91 = lean_box(0);
}
x_92 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_93 = lean_array_push(x_92, x_4);
x_94 = l_Array_append___rarg(x_93, x_89);
lean_dec(x_89);
if (lean_is_scalar(x_91)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_91;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_90);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_88);
return x_96;
}
}
else
{
uint8_t x_97; 
lean_dec(x_4);
x_97 = !lean_is_exclusive(x_72);
if (x_97 == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = lean_ctor_get(x_72, 0);
lean_dec(x_98);
x_99 = !lean_is_exclusive(x_73);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_73, 0);
x_101 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_102 = l_Array_append___rarg(x_101, x_100);
lean_dec(x_100);
lean_ctor_set(x_73, 0, x_102);
return x_72;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_ctor_get(x_73, 0);
x_104 = lean_ctor_get(x_73, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_73);
x_105 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_106 = l_Array_append___rarg(x_105, x_103);
lean_dec(x_103);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_104);
lean_ctor_set(x_72, 0, x_107);
return x_72;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_108 = lean_ctor_get(x_72, 1);
lean_inc(x_108);
lean_dec(x_72);
x_109 = lean_ctor_get(x_73, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_73, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_111 = x_73;
} else {
 lean_dec_ref(x_73);
 x_111 = lean_box(0);
}
x_112 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_113 = l_Array_append___rarg(x_112, x_109);
lean_dec(x_109);
if (lean_is_scalar(x_111)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_111;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_110);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_108);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_67);
lean_dec(x_4);
x_116 = !lean_is_exclusive(x_72);
if (x_116 == 0)
{
return x_72;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_72, 0);
x_118 = lean_ctor_get(x_72, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_72);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_124 = lean_ctor_get(x_46, 0);
x_125 = lean_ctor_get(x_46, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_46);
x_126 = lean_array_get_size(x_124);
x_127 = lean_nat_dec_eq(x_126, x_44);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_125);
lean_dec(x_124);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_128 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1;
x_129 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3;
x_130 = lean_panic_fn(x_128, x_129);
x_131 = lean_apply_5(x_130, x_12, x_13, x_14, x_15, x_47);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_132 = lean_unsigned_to_nat(0u);
x_133 = lean_array_fget(x_124, x_132);
x_134 = lean_unsigned_to_nat(1u);
x_135 = lean_array_fget(x_124, x_134);
lean_dec(x_124);
lean_inc(x_4);
lean_inc(x_125);
x_136 = lean_alloc_closure((void*)(l_Lean_Meta_clear), 7, 2);
lean_closure_set(x_136, 0, x_125);
lean_closure_set(x_136, 1, x_4);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_137 = l_Lean_observing_x3f___at_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___spec__1(x_136, x_12, x_13, x_14, x_15, x_47);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_174; lean_object* x_175; 
x_174 = lean_box(x_27);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_125);
lean_ctor_set(x_175, 1, x_174);
x_140 = x_175;
goto block_173;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_125);
x_176 = lean_ctor_get(x_138, 0);
lean_inc(x_176);
lean_dec(x_138);
x_177 = lean_box(x_28);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
x_140 = x_178;
goto block_173;
}
block_173:
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = l_Lean_mkFVar(x_133);
x_144 = l_Lean_mkAppN(x_143, x_3);
x_145 = l_Lean_mkApp(x_6, x_144);
x_146 = l_Lean_Expr_headBeta(x_145);
x_147 = l_Lean_Aesop_DefaultRules_splitHypCore(x_141, x_10, x_3, x_135, x_146, x_12, x_13, x_14, x_15, x_139);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; uint8_t x_149; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_unbox(x_142);
lean_dec(x_142);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_150 = lean_ctor_get(x_147, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_151 = x_147;
} else {
 lean_dec_ref(x_147);
 x_151 = lean_box(0);
}
x_152 = lean_ctor_get(x_148, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_148, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_154 = x_148;
} else {
 lean_dec_ref(x_148);
 x_154 = lean_box(0);
}
x_155 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1;
x_156 = lean_array_push(x_155, x_4);
x_157 = l_Array_append___rarg(x_156, x_152);
lean_dec(x_152);
if (lean_is_scalar(x_154)) {
 x_158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_158 = x_154;
}
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_153);
if (lean_is_scalar(x_151)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_151;
}
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_150);
return x_159;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
lean_dec(x_4);
x_160 = lean_ctor_get(x_147, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_161 = x_147;
} else {
 lean_dec_ref(x_147);
 x_161 = lean_box(0);
}
x_162 = lean_ctor_get(x_148, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_148, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_164 = x_148;
} else {
 lean_dec_ref(x_148);
 x_164 = lean_box(0);
}
x_165 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_166 = l_Array_append___rarg(x_165, x_162);
lean_dec(x_162);
if (lean_is_scalar(x_164)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_164;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_163);
if (lean_is_scalar(x_161)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_161;
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_160);
return x_168;
}
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_142);
lean_dec(x_4);
x_169 = lean_ctor_get(x_147, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_147, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_171 = x_147;
} else {
 lean_dec_ref(x_147);
 x_171 = lean_box(0);
}
if (lean_is_scalar(x_171)) {
 x_172 = lean_alloc_ctor(1, 2, 0);
} else {
 x_172 = x_171;
}
lean_ctor_set(x_172, 0, x_169);
lean_ctor_set(x_172, 1, x_170);
return x_172;
}
}
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_179 = !lean_is_exclusive(x_45);
if (x_179 == 0)
{
return x_45;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_45, 0);
x_181 = lean_ctor_get(x_45, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_45);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_dec(x_30);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_183 = !lean_is_exclusive(x_33);
if (x_183 == 0)
{
return x_33;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_33, 0);
x_185 = lean_ctor_get(x_33, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_33);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
else
{
uint8_t x_187; 
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_187 = !lean_is_exclusive(x_29);
if (x_187 == 0)
{
return x_29;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_29, 0);
x_189 = lean_ctor_get(x_29, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_29);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
else
{
uint8_t x_191; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_191 = !lean_is_exclusive(x_18);
if (x_191 == 0)
{
return x_18;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_18, 0);
x_193 = lean_ctor_get(x_18, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_18);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_9 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1;
x_10 = lean_array_push(x_9, x_1);
x_11 = lean_array_push(x_10, x_3);
x_12 = 0;
x_13 = 1;
x_14 = l_Lean_Meta_mkForallFVars(x_11, x_2, x_12, x_13, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
lean_inc(x_5);
x_11 = l_Lean_mkAppN(x_5, x_1);
x_12 = l_Lean_mkApp(x_2, x_11);
x_13 = l_Lean_Expr_headBeta(x_12);
x_14 = 0;
x_15 = 1;
lean_inc(x_6);
x_16 = l_Lean_Meta_mkForallFVars(x_1, x_13, x_14, x_15, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__2___boxed), 8, 2);
lean_closure_set(x_19, 0, x_5);
lean_closure_set(x_19, 1, x_3);
x_20 = 0;
x_21 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_4, x_20, x_17, x_19, x_6, x_7, x_8, x_9, x_18);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("splitHyp");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__2;
lean_inc(x_1);
x_16 = l_Lean_Meta_checkNotAssigned(x_1, x_15, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_1);
x_18 = l_Lean_Meta_getMVarTag(x_1, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_1);
x_21 = l_Lean_Meta_getMVarType(x_1, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; uint8_t x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 0;
x_25 = 1;
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_3);
x_26 = l_Lean_Meta_mkForallFVars(x_3, x_8, x_24, x_25, x_10, x_11, x_12, x_13, x_23);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_2);
lean_inc(x_9);
lean_inc(x_3);
x_29 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__3), 10, 4);
lean_closure_set(x_29, 0, x_3);
lean_closure_set(x_29, 1, x_9);
lean_closure_set(x_29, 2, x_22);
lean_closure_set(x_29, 3, x_2);
x_30 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_31 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_2, x_30, x_27, x_29, x_10, x_11, x_12, x_13, x_28);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1(x_19, x_1, x_3, x_4, x_8, x_9, x_6, x_7, x_5, x_2, x_32, x_10, x_11, x_12, x_13, x_33);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_26);
if (x_39 == 0)
{
return x_26;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_26, 0);
x_41 = lean_ctor_get(x_26, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_26);
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
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_18);
if (x_47 == 0)
{
return x_18;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_18, 0);
x_49 = lean_ctor_get(x_18, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_18);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_16);
if (x_51 == 0)
{
return x_16;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_16, 0);
x_53 = lean_ctor_get(x_16, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_16);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Aesop_DefaultRules_splitHypCore___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHyp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Lean_Meta_getLocalDecl(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_LocalDecl_userName(x_9);
x_12 = l_Lean_LocalDecl_type(x_9);
lean_dec(x_9);
x_13 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_14 = l_Lean_Aesop_DefaultRules_splitHypCore(x_2, x_11, x_13, x_1, x_12, x_3, x_4, x_5, x_6, x_10);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHyp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHyp___lambda__1), 7, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitAllHyps_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_5 < x_4;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_array_uget(x_3, x_5);
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_ctor_get(x_6, 0);
lean_dec(x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_16);
x_18 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2(x_1, x_14, x_16, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_6, 0, x_22);
lean_ctor_set(x_18, 0, x_6);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_6, 0, x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_6);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
lean_dec(x_16);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
lean_inc(x_2);
lean_ctor_set(x_6, 1, x_27);
lean_ctor_set(x_6, 0, x_2);
x_28 = 1;
x_29 = x_5 + x_28;
x_5 = x_29;
x_11 = x_26;
goto _start;
}
}
else
{
uint8_t x_31; 
lean_free_object(x_6);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_6, 1);
lean_inc(x_35);
lean_dec(x_6);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_35);
x_36 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2(x_1, x_14, x_35, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_35);
if (lean_is_scalar(x_39)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_39;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_38);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; 
lean_dec(x_35);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_dec(x_36);
x_44 = lean_ctor_get(x_37, 0);
lean_inc(x_44);
lean_dec(x_37);
lean_inc(x_2);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_2);
lean_ctor_set(x_45, 1, x_44);
x_46 = 1;
x_47 = x_5 + x_46;
x_5 = x_47;
x_6 = x_45;
x_11 = x_43;
goto _start;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_35);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_49 = lean_ctor_get(x_36, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_36, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_51 = x_36;
} else {
 lean_dec_ref(x_36);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(1, 2, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_LocalDecl_fvarId(x_1);
x_11 = l_Lean_Aesop_DefaultRules_splitHyp(x_2, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Array_append___rarg(x_3, x_14);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_11, 0, x_18);
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_Array_append___rarg(x_3, x_21);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_20);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_11);
if (x_27 == 0)
{
return x_11;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_4 < x_3;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = lean_array_uget(x_2, x_4);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_ctor_get(x_5, 0);
lean_dec(x_15);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_16 = 1;
x_17 = x_4 + x_16;
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_dec(x_5);
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
x_21 = 1;
x_22 = x_4 + x_21;
x_4 = x_22;
x_5 = x_20;
goto _start;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_5, 1);
x_26 = lean_ctor_get(x_5, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
x_31 = l_Lean_LocalDecl_isAuxDecl(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_28, x_29, x_30, x_32, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_28);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_33, 0);
lean_dec(x_36);
lean_ctor_set(x_13, 0, x_34);
lean_ctor_set(x_5, 0, x_13);
lean_ctor_set(x_33, 0, x_5);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
lean_ctor_set(x_13, 0, x_34);
lean_ctor_set(x_5, 0, x_13);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_free_object(x_13);
lean_free_object(x_5);
x_39 = !lean_is_exclusive(x_25);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; size_t x_45; 
x_40 = lean_ctor_get(x_25, 1);
lean_dec(x_40);
x_41 = lean_ctor_get(x_25, 0);
lean_dec(x_41);
x_42 = lean_ctor_get(x_33, 1);
lean_inc(x_42);
lean_dec(x_33);
x_43 = lean_ctor_get(x_34, 0);
lean_inc(x_43);
lean_dec(x_34);
lean_inc(x_1);
lean_ctor_set(x_25, 1, x_43);
lean_ctor_set(x_25, 0, x_1);
x_44 = 1;
x_45 = x_4 + x_44;
x_4 = x_45;
x_5 = x_25;
x_10 = x_42;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; size_t x_51; 
lean_dec(x_25);
x_47 = lean_ctor_get(x_33, 1);
lean_inc(x_47);
lean_dec(x_33);
x_48 = lean_ctor_get(x_34, 0);
lean_inc(x_48);
lean_dec(x_34);
lean_inc(x_1);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_1);
lean_ctor_set(x_49, 1, x_48);
x_50 = 1;
x_51 = x_4 + x_50;
x_4 = x_51;
x_5 = x_49;
x_10 = x_47;
goto _start;
}
}
}
else
{
uint8_t x_53; 
lean_free_object(x_13);
lean_free_object(x_5);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_33);
if (x_53 == 0)
{
return x_33;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_33, 0);
x_55 = lean_ctor_get(x_33, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_33);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_free_object(x_13);
lean_dec(x_28);
x_57 = !lean_is_exclusive(x_25);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; 
x_58 = lean_ctor_get(x_25, 1);
lean_dec(x_58);
x_59 = lean_ctor_get(x_25, 0);
lean_dec(x_59);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_60 = 1;
x_61 = x_4 + x_60;
x_4 = x_61;
goto _start;
}
else
{
lean_object* x_63; size_t x_64; size_t x_65; 
lean_dec(x_25);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_29);
lean_ctor_set(x_63, 1, x_30);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_63);
lean_ctor_set(x_5, 0, x_1);
x_64 = 1;
x_65 = x_4 + x_64;
x_4 = x_65;
goto _start;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_ctor_get(x_13, 0);
lean_inc(x_67);
lean_dec(x_13);
x_68 = lean_ctor_get(x_25, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_25, 1);
lean_inc(x_69);
x_70 = l_Lean_LocalDecl_isAuxDecl(x_67);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_72 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_67, x_68, x_69, x_71, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_67);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_5, 0, x_76);
if (lean_is_scalar(x_75)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_75;
}
lean_ctor_set(x_77, 0, x_5);
lean_ctor_set(x_77, 1, x_74);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; size_t x_82; size_t x_83; 
lean_free_object(x_5);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_78 = x_25;
} else {
 lean_dec_ref(x_25);
 x_78 = lean_box(0);
}
x_79 = lean_ctor_get(x_72, 1);
lean_inc(x_79);
lean_dec(x_72);
x_80 = lean_ctor_get(x_73, 0);
lean_inc(x_80);
lean_dec(x_73);
lean_inc(x_1);
if (lean_is_scalar(x_78)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_78;
}
lean_ctor_set(x_81, 0, x_1);
lean_ctor_set(x_81, 1, x_80);
x_82 = 1;
x_83 = x_4 + x_82;
x_4 = x_83;
x_5 = x_81;
x_10 = x_79;
goto _start;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_free_object(x_5);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_85 = lean_ctor_get(x_72, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_72, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_87 = x_72;
} else {
 lean_dec_ref(x_72);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; size_t x_91; size_t x_92; 
lean_dec(x_67);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_89 = x_25;
} else {
 lean_dec_ref(x_25);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_68);
lean_ctor_set(x_90, 1, x_69);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_90);
lean_ctor_set(x_5, 0, x_1);
x_91 = 1;
x_92 = x_4 + x_91;
x_4 = x_92;
goto _start;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_94 = lean_ctor_get(x_5, 1);
lean_inc(x_94);
lean_dec(x_5);
x_95 = lean_ctor_get(x_13, 0);
lean_inc(x_95);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_96 = x_13;
} else {
 lean_dec_ref(x_13);
 x_96 = lean_box(0);
}
x_97 = lean_ctor_get(x_94, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_94, 1);
lean_inc(x_98);
x_99 = l_Lean_LocalDecl_isAuxDecl(x_95);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_101 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_95, x_97, x_98, x_100, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_95);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_104 = x_101;
} else {
 lean_dec_ref(x_101);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_105 = lean_alloc_ctor(1, 1, 0);
} else {
 x_105 = x_96;
}
lean_ctor_set(x_105, 0, x_102);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_94);
if (lean_is_scalar(x_104)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_104;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_103);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; size_t x_112; size_t x_113; 
lean_dec(x_96);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_108 = x_94;
} else {
 lean_dec_ref(x_94);
 x_108 = lean_box(0);
}
x_109 = lean_ctor_get(x_101, 1);
lean_inc(x_109);
lean_dec(x_101);
x_110 = lean_ctor_get(x_102, 0);
lean_inc(x_110);
lean_dec(x_102);
lean_inc(x_1);
if (lean_is_scalar(x_108)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_108;
}
lean_ctor_set(x_111, 0, x_1);
lean_ctor_set(x_111, 1, x_110);
x_112 = 1;
x_113 = x_4 + x_112;
x_4 = x_113;
x_5 = x_111;
x_10 = x_109;
goto _start;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_96);
lean_dec(x_94);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_115 = lean_ctor_get(x_101, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_101, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_117 = x_101;
} else {
 lean_dec_ref(x_101);
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
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; size_t x_122; size_t x_123; 
lean_dec(x_96);
lean_dec(x_95);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_119 = x_94;
} else {
 lean_dec_ref(x_94);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_97);
lean_ctor_set(x_120, 1, x_98);
lean_inc(x_1);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_1);
lean_ctor_set(x_121, 1, x_120);
x_122 = 1;
x_123 = x_4 + x_122;
x_4 = x_123;
x_5 = x_121;
goto _start;
}
}
}
}
}
}
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
x_12 = lean_array_get_size(x_9);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__3(x_1, x_10, x_9, x_13, x_14, x_11, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_21 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1(x_19, x_20, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_16);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_15, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_24);
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_dec(x_15);
x_26 = lean_ctor_get(x_17, 0);
lean_inc(x_26);
lean_dec(x_17);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
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
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_2, 0);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_3);
x_35 = lean_array_get_size(x_32);
x_36 = lean_usize_of_nat(x_35);
lean_dec(x_35);
x_37 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_38 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4(x_33, x_32, x_36, x_37, x_34, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_box(0);
x_44 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1(x_42, x_43, x_4, x_5, x_6, x_7, x_41);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_44;
}
else
{
uint8_t x_45; 
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_45 = !lean_is_exclusive(x_38);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_38, 0);
lean_dec(x_46);
x_47 = lean_ctor_get(x_40, 0);
lean_inc(x_47);
lean_dec(x_40);
lean_ctor_set(x_38, 0, x_47);
return x_38;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
lean_dec(x_38);
x_49 = lean_ctor_get(x_40, 0);
lean_inc(x_49);
lean_dec(x_40);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_51 = !lean_is_exclusive(x_38);
if (x_51 == 0)
{
return x_38;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_38, 0);
x_53 = lean_ctor_get(x_38, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_38);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_4 < x_3;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = lean_array_uget(x_2, x_4);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_5);
if (x_14 == 0)
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_ctor_get(x_5, 0);
lean_dec(x_15);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_16 = 1;
x_17 = x_4 + x_16;
x_4 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; 
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_dec(x_5);
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
x_21 = 1;
x_22 = x_4 + x_21;
x_4 = x_22;
x_5 = x_20;
goto _start;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_5, 1);
x_26 = lean_ctor_get(x_5, 0);
lean_dec(x_26);
x_27 = !lean_is_exclusive(x_13);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_13, 0);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 1);
lean_inc(x_30);
x_31 = l_Lean_LocalDecl_isAuxDecl(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_33 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_28, x_29, x_30, x_32, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_28);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_34, 0);
lean_inc(x_37);
lean_dec(x_34);
lean_ctor_set(x_13, 0, x_37);
lean_ctor_set(x_5, 0, x_13);
lean_ctor_set(x_33, 0, x_5);
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = lean_ctor_get(x_34, 0);
lean_inc(x_39);
lean_dec(x_34);
lean_ctor_set(x_13, 0, x_39);
lean_ctor_set(x_5, 0, x_13);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_5);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_free_object(x_13);
lean_free_object(x_5);
x_41 = !lean_is_exclusive(x_25);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; 
x_42 = lean_ctor_get(x_25, 1);
lean_dec(x_42);
x_43 = lean_ctor_get(x_25, 0);
lean_dec(x_43);
x_44 = lean_ctor_get(x_33, 1);
lean_inc(x_44);
lean_dec(x_33);
x_45 = lean_ctor_get(x_34, 0);
lean_inc(x_45);
lean_dec(x_34);
lean_inc(x_1);
lean_ctor_set(x_25, 1, x_45);
lean_ctor_set(x_25, 0, x_1);
x_46 = 1;
x_47 = x_4 + x_46;
x_4 = x_47;
x_5 = x_25;
x_10 = x_44;
goto _start;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; size_t x_52; size_t x_53; 
lean_dec(x_25);
x_49 = lean_ctor_get(x_33, 1);
lean_inc(x_49);
lean_dec(x_33);
x_50 = lean_ctor_get(x_34, 0);
lean_inc(x_50);
lean_dec(x_34);
lean_inc(x_1);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_50);
x_52 = 1;
x_53 = x_4 + x_52;
x_4 = x_53;
x_5 = x_51;
x_10 = x_49;
goto _start;
}
}
}
else
{
uint8_t x_55; 
lean_free_object(x_13);
lean_free_object(x_5);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_33);
if (x_55 == 0)
{
return x_33;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_33, 0);
x_57 = lean_ctor_get(x_33, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_33);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_free_object(x_13);
lean_dec(x_28);
x_59 = !lean_is_exclusive(x_25);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; size_t x_62; size_t x_63; 
x_60 = lean_ctor_get(x_25, 1);
lean_dec(x_60);
x_61 = lean_ctor_get(x_25, 0);
lean_dec(x_61);
lean_inc(x_1);
lean_ctor_set(x_5, 0, x_1);
x_62 = 1;
x_63 = x_4 + x_62;
x_4 = x_63;
goto _start;
}
else
{
lean_object* x_65; size_t x_66; size_t x_67; 
lean_dec(x_25);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_29);
lean_ctor_set(x_65, 1, x_30);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_65);
lean_ctor_set(x_5, 0, x_1);
x_66 = 1;
x_67 = x_4 + x_66;
x_4 = x_67;
goto _start;
}
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_13, 0);
lean_inc(x_69);
lean_dec(x_13);
x_70 = lean_ctor_get(x_25, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_25, 1);
lean_inc(x_71);
x_72 = l_Lean_LocalDecl_isAuxDecl(x_69);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_74 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_69, x_70, x_71, x_73, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_69);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = lean_ctor_get(x_75, 0);
lean_inc(x_78);
lean_dec(x_75);
x_79 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_5, 0, x_79);
if (lean_is_scalar(x_77)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_77;
}
lean_ctor_set(x_80, 0, x_5);
lean_ctor_set(x_80, 1, x_76);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; size_t x_85; size_t x_86; 
lean_free_object(x_5);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_81 = x_25;
} else {
 lean_dec_ref(x_25);
 x_81 = lean_box(0);
}
x_82 = lean_ctor_get(x_74, 1);
lean_inc(x_82);
lean_dec(x_74);
x_83 = lean_ctor_get(x_75, 0);
lean_inc(x_83);
lean_dec(x_75);
lean_inc(x_1);
if (lean_is_scalar(x_81)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_81;
}
lean_ctor_set(x_84, 0, x_1);
lean_ctor_set(x_84, 1, x_83);
x_85 = 1;
x_86 = x_4 + x_85;
x_4 = x_86;
x_5 = x_84;
x_10 = x_82;
goto _start;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_free_object(x_5);
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_88 = lean_ctor_get(x_74, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_74, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_90 = x_74;
} else {
 lean_dec_ref(x_74);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; size_t x_94; size_t x_95; 
lean_dec(x_69);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_92 = x_25;
} else {
 lean_dec_ref(x_25);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_70);
lean_ctor_set(x_93, 1, x_71);
lean_inc(x_1);
lean_ctor_set(x_5, 1, x_93);
lean_ctor_set(x_5, 0, x_1);
x_94 = 1;
x_95 = x_4 + x_94;
x_4 = x_95;
goto _start;
}
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_97 = lean_ctor_get(x_5, 1);
lean_inc(x_97);
lean_dec(x_5);
x_98 = lean_ctor_get(x_13, 0);
lean_inc(x_98);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 x_99 = x_13;
} else {
 lean_dec_ref(x_13);
 x_99 = lean_box(0);
}
x_100 = lean_ctor_get(x_97, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_97, 1);
lean_inc(x_101);
x_102 = l_Lean_LocalDecl_isAuxDecl(x_98);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_104 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_98, x_100, x_101, x_103, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_98);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
x_108 = lean_ctor_get(x_105, 0);
lean_inc(x_108);
lean_dec(x_105);
if (lean_is_scalar(x_99)) {
 x_109 = lean_alloc_ctor(1, 1, 0);
} else {
 x_109 = x_99;
}
lean_ctor_set(x_109, 0, x_108);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_97);
if (lean_is_scalar(x_107)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_107;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_106);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; size_t x_116; size_t x_117; 
lean_dec(x_99);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_112 = x_97;
} else {
 lean_dec_ref(x_97);
 x_112 = lean_box(0);
}
x_113 = lean_ctor_get(x_104, 1);
lean_inc(x_113);
lean_dec(x_104);
x_114 = lean_ctor_get(x_105, 0);
lean_inc(x_114);
lean_dec(x_105);
lean_inc(x_1);
if (lean_is_scalar(x_112)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_112;
}
lean_ctor_set(x_115, 0, x_1);
lean_ctor_set(x_115, 1, x_114);
x_116 = 1;
x_117 = x_4 + x_116;
x_4 = x_117;
x_5 = x_115;
x_10 = x_113;
goto _start;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_99);
lean_dec(x_97);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_119 = lean_ctor_get(x_104, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_104, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_121 = x_104;
} else {
 lean_dec_ref(x_104);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; size_t x_126; size_t x_127; 
lean_dec(x_99);
lean_dec(x_98);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_123 = x_97;
} else {
 lean_dec_ref(x_97);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_100);
lean_ctor_set(x_124, 1, x_101);
lean_inc(x_1);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_1);
lean_ctor_set(x_125, 1, x_124);
x_126 = 1;
x_127 = x_4 + x_126;
x_4 = x_127;
x_5 = x_125;
goto _start;
}
}
}
}
}
}
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_9 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2(x_2, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_array_get_size(x_19);
x_23 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_24 = 0;
x_25 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__5(x_20, x_19, x_23, x_24, x_21, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_25, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
lean_ctor_set(x_25, 0, x_30);
return x_25;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_26);
x_34 = !lean_is_exclusive(x_25);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_25, 0);
lean_dec(x_35);
x_36 = lean_ctor_get(x_27, 0);
lean_inc(x_36);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_36);
return x_25;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_dec(x_25);
x_38 = lean_ctor_get(x_27, 0);
lean_inc(x_38);
lean_dec(x_27);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
return x_39;
}
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_25);
if (x_40 == 0)
{
return x_25;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_9);
if (x_44 == 0)
{
return x_9;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_9, 0);
x_46 = lean_ctor_get(x_9, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_9);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l_Lean_Meta_getMVarDecl(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1(x_13, x_12, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_14, 0, x_19);
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_7);
if (x_30 == 0)
{
return x_7;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_7, 0);
x_32 = lean_ctor_get(x_7, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_7);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__3(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__4(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Std_PersistentArray_forInAux___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__5(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentArray_forIn___at_Lean_Aesop_DefaultRules_splitAllHyps___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Tactic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_DefaultRules_SplitHyps(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__1);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__2);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__3);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__4);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__5);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__6);
l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_match__2___rarg___closed__7);
l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitProductHalf___closed__1);
l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__1);
l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitProduct___closed__2);
l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__1);
l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__2);
l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__3 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__3);
l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__4);
l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___lambda__1___closed__5);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__1();
l_Lean_Aesop_DefaultRules_splitHypCore___closed__2 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__2();
l_Lean_Aesop_DefaultRules_splitHypCore___closed__3 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__3();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__3);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__4 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__4();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__4);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__5 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__5();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__5);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__6 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__6();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__6);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__7 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__7();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__7);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__8 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__8();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__8);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__9 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__9();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__9);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__10 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__10();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__10);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__11 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__11();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__11);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__12 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__12();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__12);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__13 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__13();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__13);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__14 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__14();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__14);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__15 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__15();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__15);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__16 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__16();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__16);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__17 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__17();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__17);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__18 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__18();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__18);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__19 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__19();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__19);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__20 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__20();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__20);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__21 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__21();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__21);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__22 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__22();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__22);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__23 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__23();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__23);
l_Lean_Aesop_DefaultRules_splitHypCore___closed__24 = _init_l_Lean_Aesop_DefaultRules_splitHypCore___closed__24();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore___closed__24);
l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__1);
l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__2 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__2);
l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___lambda__1___closed__3);
l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__1);
l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__2 = _init_l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__2();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHypCore_splitExistential___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
