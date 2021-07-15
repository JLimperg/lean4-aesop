// Lean compiler output
// Module: Lean.Aesop.Tracing
// Imports: Init Lean.Util.Trace
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
lean_object* l_Lean_getBoolOption___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_TraceOption_get(lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__19;
lean_object* l_Lean_Aesop_TraceOption_get___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Aesop_TraceOption_default(uint8_t, lean_object*);
lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3_(lean_object*);
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix(uint8_t);
lean_object* l_Lean_Aesop_TraceOption_get___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__12;
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg(lean_object*);
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix(uint8_t);
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___boxed(lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__20;
static lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3;
static lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__3;
static lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__5;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__16;
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__5;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__10;
static lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__4;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1;
static lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__2;
static lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__4;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__3;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5;
lean_object* l_Lean_Aesop_TraceOption_default___boxed(lean_object*, lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15;
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___boxed(lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18;
static lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__1;
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___boxed(lean_object*);
static lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__2;
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__14;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__22;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__21;
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1(lean_object*);
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1(lean_object*);
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__4;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__8;
static lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__1;
static lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17;
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Aesop");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("RuleSet");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Steps");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Goals");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("UnsafeQueues");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("FailedRuleApplications");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Proofs");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("RuleSelection");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tree");
return x_1;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_initFn____x40_Lean_Aesop_Tracing___hyg_3_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__4;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6;
x_6 = l_Lean_registerTraceClass(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__8;
x_9 = l_Lean_registerTraceClass(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__10;
x_12 = l_Lean_registerTraceClass(x_11, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__12;
x_15 = l_Lean_registerTraceClass(x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__14;
x_18 = l_Lean_registerTraceClass(x_17, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__16;
x_21 = l_Lean_registerTraceClass(x_20, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18;
x_24 = l_Lean_registerTraceClass(x_23, x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__19;
x_27 = l_Lean_registerTraceClass(x_26, x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__20;
x_30 = l_Lean_registerTraceClass(x_29, x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__21;
x_33 = l_Lean_registerTraceClass(x_32, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__22;
x_36 = l_Lean_registerTraceClass(x_35, x_34);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_33);
if (x_37 == 0)
{
return x_33;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_33, 0);
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_33);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_30);
if (x_41 == 0)
{
return x_30;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_30, 0);
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_30);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_27);
if (x_45 == 0)
{
return x_27;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_27, 0);
x_47 = lean_ctor_get(x_27, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_27);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_24);
if (x_49 == 0)
{
return x_24;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_24, 0);
x_51 = lean_ctor_get(x_24, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_24);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_21);
if (x_53 == 0)
{
return x_21;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_21, 0);
x_55 = lean_ctor_get(x_21, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_21);
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
x_57 = !lean_is_exclusive(x_18);
if (x_57 == 0)
{
return x_18;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_18, 0);
x_59 = lean_ctor_get(x_18, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_18);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_15);
if (x_61 == 0)
{
return x_15;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_15, 0);
x_63 = lean_ctor_get(x_15, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_15);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_12);
if (x_65 == 0)
{
return x_12;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_12, 0);
x_67 = lean_ctor_get(x_12, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_12);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_9);
if (x_69 == 0)
{
return x_9;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_9, 0);
x_71 = lean_ctor_get(x_9, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_9);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_6);
if (x_73 == 0)
{
return x_6;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_6, 0);
x_75 = lean_ctor_get(x_6, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_6);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_3);
if (x_77 == 0)
{
return x_3;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_3, 0);
x_79 = lean_ctor_get(x_3, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_3);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
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
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("trace");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__2;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3;
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__4;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__5;
return x_3;
}
}
}
lean_object* l_Lean_Aesop_TraceContext_toTraceOptionPrefix___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix(x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_10 = lean_box(x_1);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_box(x_1);
x_13 = lean_apply_1(x_5, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_box(x_1);
x_15 = lean_apply_1(x_6, x_14);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_7, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix_match__1___rarg(x_8, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_9;
}
}
static lean_object* _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__2;
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__3;
return x_4;
}
case 3:
{
lean_object* x_5; 
x_5 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__4;
return x_5;
}
default: 
{
lean_object* x_6; 
x_6 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__5;
return x_6;
}
}
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_TraceOption_toTraceOptionSuffix___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix(x_2);
return x_3;
}
}
uint8_t l_Lean_Aesop_TraceOption_default(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
lean_object* l_Lean_Aesop_TraceOption_default___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Aesop_TraceOption_default(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_TraceOption_get___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_5 = l_Lean_Aesop_TraceContext_toTraceOptionPrefix(x_3);
x_6 = l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg(x_4);
x_7 = l_Lean_Name_append(x_5, x_6);
lean_dec(x_5);
x_8 = 1;
x_9 = l_Lean_getBoolOption___rarg(x_1, x_2, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Aesop_TraceOption_get(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_TraceOption_get___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Aesop_TraceOption_get___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Aesop_TraceOption_get___rarg(x_1, x_2, x_5, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_Trace(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_Tracing(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Trace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__1);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__2);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__3 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__3();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__3);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__4 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__4();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__4);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__5);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__6);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__7);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__8 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__8();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__8);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__9);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__10 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__10();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__10);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__11);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__12 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__12();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__12);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__13);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__14 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__14();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__14);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__15);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__16 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__16();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__16);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__17);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__18);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__19 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__19();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__19);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__20 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__20();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__20);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__21 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__21();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__21);
l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__22 = _init_l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__22();
lean_mark_persistent(l_initFn____x40_Lean_Aesop_Tracing___hyg_3____closed__22);
res = l_initFn____x40_Lean_Aesop_Tracing___hyg_3_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__1 = _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__1();
lean_mark_persistent(l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__1);
l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__2 = _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__2();
lean_mark_persistent(l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__2);
l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3 = _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3();
lean_mark_persistent(l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__3);
l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__4 = _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__4();
lean_mark_persistent(l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__4);
l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__5 = _init_l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__5();
lean_mark_persistent(l_Lean_Aesop_TraceContext_toTraceOptionPrefix___closed__5);
l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__1 = _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__1();
lean_mark_persistent(l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__1);
l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__2 = _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__2();
lean_mark_persistent(l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__2);
l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__3 = _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__3();
lean_mark_persistent(l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__3);
l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__4 = _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__4();
lean_mark_persistent(l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__4);
l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__5 = _init_l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__5();
lean_mark_persistent(l_Lean_Aesop_TraceOption_toTraceOptionSuffix___rarg___closed__5);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
