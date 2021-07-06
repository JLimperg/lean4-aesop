// Lean compiler output
// Module: Lean.Aesop.Main
// Imports: Init Lean.Aesop.BestFirstSearch Lean.Aesop.Config Lean.Elab.Tactic
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
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_getRuleSet___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_aesop___closed__1;
static lean_object* l_Lean_Aesop_aesop___closed__4;
static lean_object* l_Lean_Aesop_aesop___closed__2;
lean_object* l_Lean_Aesop_evalAesop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_aesop___closed__8;
lean_object* l_Lean_Aesop_evalAesop___boxed(lean_object*);
lean_object* l_Lean_Aesop_aesop;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_search(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_evalAesop(lean_object*);
lean_object* l_Lean_Aesop_evalAesop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_aesop___closed__7;
lean_object* l_Lean_Aesop_evalAesop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_aesop___closed__5;
static lean_object* l_Lean_Aesop_aesop___closed__3;
static lean_object* l_Lean_Aesop_aesop___closed__6;
static lean_object* _init_l_Lean_Aesop_aesop___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_aesop___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Aesop");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_aesop___closed__2;
x_2 = l_Lean_Aesop_aesop___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_aesop___closed__4;
x_2 = l_Lean_Aesop_aesop___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_aesop___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_aesop___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Aesop_aesop___closed__6;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Aesop_aesop___closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Aesop_aesop() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_aesop___closed__8;
return x_1;
}
}
lean_object* l_Lean_Aesop_evalAesop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
x_14 = l_Lean_Aesop_search(x_1, x_12, x_6, x_7, x_8, x_9, x_13);
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
lean_object* l_Lean_Aesop_evalAesop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_Aesop_getRuleSet___rarg(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_closure((void*)(l_Lean_Aesop_evalAesop___rarg___lambda__1___boxed), 10, 1);
lean_closure_set(x_13, 0, x_11);
x_14 = l_Lean_Elab_Tactic_withMainContext___rarg(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_14;
}
}
lean_object* l_Lean_Aesop_evalAesop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_evalAesop___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_evalAesop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Aesop_evalAesop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Aesop_evalAesop___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_evalAesop(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Aesop_BestFirstSearch(lean_object*);
lean_object* initialize_Lean_Aesop_Config(lean_object*);
lean_object* initialize_Lean_Elab_Tactic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_Main(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_BestFirstSearch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Config(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Aesop_aesop___closed__1 = _init_l_Lean_Aesop_aesop___closed__1();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__1);
l_Lean_Aesop_aesop___closed__2 = _init_l_Lean_Aesop_aesop___closed__2();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__2);
l_Lean_Aesop_aesop___closed__3 = _init_l_Lean_Aesop_aesop___closed__3();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__3);
l_Lean_Aesop_aesop___closed__4 = _init_l_Lean_Aesop_aesop___closed__4();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__4);
l_Lean_Aesop_aesop___closed__5 = _init_l_Lean_Aesop_aesop___closed__5();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__5);
l_Lean_Aesop_aesop___closed__6 = _init_l_Lean_Aesop_aesop___closed__6();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__6);
l_Lean_Aesop_aesop___closed__7 = _init_l_Lean_Aesop_aesop___closed__7();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__7);
l_Lean_Aesop_aesop___closed__8 = _init_l_Lean_Aesop_aesop___closed__8();
lean_mark_persistent(l_Lean_Aesop_aesop___closed__8);
l_Lean_Aesop_aesop = _init_l_Lean_Aesop_aesop();
lean_mark_persistent(l_Lean_Aesop_aesop);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
