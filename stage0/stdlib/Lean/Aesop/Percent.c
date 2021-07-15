// Lean compiler output
// Module: Lean.Aesop.Percent
// Imports: Init
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
static lean_object* l_Lean_Aesop_instBEqPercent___closed__1;
static lean_object* l_Lean_Aesop_instInhabitedPercent___closed__1;
static lean_object* l_Lean_Aesop_Percent_toHumanString___closed__3;
double lean_float_of_scientific(lean_object*, uint8_t, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Aesop_instBEqPercent;
lean_object* l_Lean_Aesop_Percent_ofNat___boxed(lean_object*);
lean_object* l_Lean_Aesop_Percent_ofFloat___boxed(lean_object*);
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Float_beq(double, double);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Percent_instDecidableRelPercentLt___boxed(lean_object*, lean_object*);
static double l_Lean_Aesop_Percent_ofFloat___closed__1;
lean_object* l_Lean_Aesop_Percent_instLTPercent;
uint8_t l_Lean_Aesop_Percent_instDecidableRelPercentLt(double, double);
uint8_t l_Float_decLe(double, double);
lean_object* l_String_takeWhile(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
double l_Lean_Aesop_Percent_instMulPercent(double, double);
uint8_t l_Float_decLt(double, double);
lean_object* l_Lean_Aesop_instInhabitedPercent;
lean_object* lean_float_to_string(double);
double l_Float_div(double, double);
lean_object* l_Lean_Aesop_Percent_instMulPercent___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24_(double, double);
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24____boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1(lean_object*);
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1___rarg(double, double, lean_object*, lean_object*);
static double l_Lean_Aesop_Percent_ofFloat___closed__2;
lean_object* l_Lean_Aesop_Percent_ofNat(lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Lean_Aesop_Percent_toHumanString(double);
lean_object* l_Lean_Aesop_Percent_toHumanString___lambda__1___boxed(lean_object*);
static double l_Lean_Aesop_Percent_toHumanString___closed__1;
uint8_t l_Lean_Aesop_Percent_toHumanString___lambda__1(uint32_t);
double l_Lean_Aesop_Percent_hundred;
lean_object* l_Lean_Aesop_Percent_instToStringPercent___boxed(lean_object*);
static lean_object* l_Lean_Aesop_Percent_toHumanString___closed__2;
lean_object* l_Lean_Aesop_Percent_toHumanString___boxed(lean_object*);
lean_object* l_Lean_Aesop_Percent_ofFloat(double);
static double l_Lean_Aesop_Percent_hundred___closed__1;
lean_object* l_Lean_Aesop_Percent_instToStringPercent(double);
double l_Float_mul(double, double);
static lean_object* _init_l_Lean_Aesop_instInhabitedPercent___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_instInhabitedPercent() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_instInhabitedPercent___closed__1;
return x_1;
}
}
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1___rarg(double x_1, double x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_box_float(x_1);
x_6 = lean_box_float(x_2);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
double x_5; double x_6; lean_object* x_7; 
x_5 = lean_unbox_float(x_1);
lean_dec(x_1);
x_6 = lean_unbox_float(x_2);
lean_dec(x_2);
x_7 = l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24__match__1___rarg(x_5, x_6, x_3, x_4);
lean_dec(x_4);
return x_7;
}
}
uint8_t l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24_(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 == x_2;
return x_3;
}
}
lean_object* l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Aesop_instBEqPercent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Aesop_Percent_0__Lean_Aesop_beqPercent____x40_Lean_Aesop_Percent___hyg_24____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_instBEqPercent() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Aesop_instBEqPercent___closed__1;
return x_1;
}
}
static double _init_l_Lean_Aesop_Percent_ofFloat___closed__1() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
static double _init_l_Lean_Aesop_Percent_ofFloat___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = 1;
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_float_of_scientific(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Percent_ofFloat(double x_1) {
_start:
{
double x_2; uint8_t x_3; 
x_2 = l_Lean_Aesop_Percent_ofFloat___closed__1;
x_3 = x_2 <= x_1;
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
double x_5; uint8_t x_6; 
x_5 = l_Lean_Aesop_Percent_ofFloat___closed__2;
x_6 = x_1 <= x_5;
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box_float(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l_Lean_Aesop_Percent_ofFloat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_Percent_ofFloat(x_2);
return x_3;
}
}
double l_Lean_Aesop_Percent_instMulPercent(double x_1, double x_2) {
_start:
{
double x_3; 
x_3 = x_1 * x_2;
return x_3;
}
}
lean_object* l_Lean_Aesop_Percent_instMulPercent___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_Lean_Aesop_Percent_instMulPercent(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Aesop_Percent_instLTPercent() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
uint8_t l_Lean_Aesop_Percent_instDecidableRelPercentLt(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
lean_object* l_Lean_Aesop_Percent_instDecidableRelPercentLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_Lean_Aesop_Percent_instDecidableRelPercentLt(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_Aesop_Percent_instToStringPercent(double x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_float_to_string(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Percent_instToStringPercent___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_Percent_instToStringPercent(x_2);
return x_3;
}
}
static double _init_l_Lean_Aesop_Percent_hundred___closed__1() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
static double _init_l_Lean_Aesop_Percent_hundred() {
_start:
{
double x_1; 
x_1 = l_Lean_Aesop_Percent_hundred___closed__1;
return x_1;
}
}
uint8_t l_Lean_Aesop_Percent_toHumanString___lambda__1(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; uint8_t x_4; 
x_2 = 46;
x_3 = x_1 == x_2;
x_4 = l_instDecidableNot___rarg(x_3);
return x_4;
}
}
static double _init_l_Lean_Aesop_Percent_toHumanString___closed__1() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(100u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_Percent_toHumanString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_Percent_toHumanString___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Percent_toHumanString___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("%");
return x_1;
}
}
lean_object* l_Lean_Aesop_Percent_toHumanString(double x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Aesop_Percent_toHumanString___closed__1;
x_3 = x_1 * x_2;
x_4 = lean_float_to_string(x_3);
x_5 = l_Lean_Aesop_Percent_toHumanString___closed__2;
x_6 = l_String_takeWhile(x_4, x_5);
lean_dec(x_4);
x_7 = l_Lean_Aesop_Percent_toHumanString___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Aesop_Percent_toHumanString___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_Percent_toHumanString___lambda__1(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Aesop_Percent_toHumanString___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = l_Lean_Aesop_Percent_toHumanString(x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_Percent_ofNat(lean_object* x_1) {
_start:
{
double x_2; double x_3; double x_4; lean_object* x_5; 
x_2 = lean_float_of_nat(x_1);
x_3 = l_Lean_Aesop_Percent_toHumanString___closed__1;
x_4 = x_2 / x_3;
x_5 = l_Lean_Aesop_Percent_ofFloat(x_4);
return x_5;
}
}
lean_object* l_Lean_Aesop_Percent_ofNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Aesop_Percent_ofNat(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_Percent(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Aesop_instInhabitedPercent___closed__1 = _init_l_Lean_Aesop_instInhabitedPercent___closed__1();
lean_mark_persistent(l_Lean_Aesop_instInhabitedPercent___closed__1);
l_Lean_Aesop_instInhabitedPercent = _init_l_Lean_Aesop_instInhabitedPercent();
lean_mark_persistent(l_Lean_Aesop_instInhabitedPercent);
l_Lean_Aesop_instBEqPercent___closed__1 = _init_l_Lean_Aesop_instBEqPercent___closed__1();
lean_mark_persistent(l_Lean_Aesop_instBEqPercent___closed__1);
l_Lean_Aesop_instBEqPercent = _init_l_Lean_Aesop_instBEqPercent();
lean_mark_persistent(l_Lean_Aesop_instBEqPercent);
l_Lean_Aesop_Percent_ofFloat___closed__1 = _init_l_Lean_Aesop_Percent_ofFloat___closed__1();
l_Lean_Aesop_Percent_ofFloat___closed__2 = _init_l_Lean_Aesop_Percent_ofFloat___closed__2();
l_Lean_Aesop_Percent_instLTPercent = _init_l_Lean_Aesop_Percent_instLTPercent();
lean_mark_persistent(l_Lean_Aesop_Percent_instLTPercent);
l_Lean_Aesop_Percent_hundred___closed__1 = _init_l_Lean_Aesop_Percent_hundred___closed__1();
l_Lean_Aesop_Percent_hundred = _init_l_Lean_Aesop_Percent_hundred();
l_Lean_Aesop_Percent_toHumanString___closed__1 = _init_l_Lean_Aesop_Percent_toHumanString___closed__1();
l_Lean_Aesop_Percent_toHumanString___closed__2 = _init_l_Lean_Aesop_Percent_toHumanString___closed__2();
lean_mark_persistent(l_Lean_Aesop_Percent_toHumanString___closed__2);
l_Lean_Aesop_Percent_toHumanString___closed__3 = _init_l_Lean_Aesop_Percent_toHumanString___closed__3();
lean_mark_persistent(l_Lean_Aesop_Percent_toHumanString___closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
