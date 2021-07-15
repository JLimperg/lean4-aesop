// Lean compiler output
// Module: Lean.Aesop
// Imports: Init Lean.Aesop.BestFirstSearch Lean.Aesop.Config Lean.Aesop.DefaultRules Lean.Aesop.Main Lean.Aesop.MutAltTree Lean.Aesop.Percent Lean.Aesop.Rule Lean.Aesop.RuleBuilder Lean.Aesop.RuleTac Lean.Aesop.Tracing Lean.Aesop.Tree Lean.Aesop.Util
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
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Aesop_BestFirstSearch(lean_object*);
lean_object* initialize_Lean_Aesop_Config(lean_object*);
lean_object* initialize_Lean_Aesop_DefaultRules(lean_object*);
lean_object* initialize_Lean_Aesop_Main(lean_object*);
lean_object* initialize_Lean_Aesop_MutAltTree(lean_object*);
lean_object* initialize_Lean_Aesop_Percent(lean_object*);
lean_object* initialize_Lean_Aesop_Rule(lean_object*);
lean_object* initialize_Lean_Aesop_RuleBuilder(lean_object*);
lean_object* initialize_Lean_Aesop_RuleTac(lean_object*);
lean_object* initialize_Lean_Aesop_Tracing(lean_object*);
lean_object* initialize_Lean_Aesop_Tree(lean_object*);
lean_object* initialize_Lean_Aesop_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop(lean_object* w) {
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
res = initialize_Lean_Aesop_DefaultRules(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Main(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_MutAltTree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Percent(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Rule(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_RuleBuilder(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_RuleTac(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Tracing(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Tree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
