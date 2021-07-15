// Lean compiler output
// Module: Lean.Aesop.DefaultRules
// Imports: Init Lean.Aesop.DefaultRules.SplitHyps Lean.Aesop.Config
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
static lean_object* l_Lean_Aesop_DefaultRules_assumption___closed__1;
size_t l_USize_add(size_t, size_t);
static lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__2;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__4;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__6;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__26;
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__13;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__19;
lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_BuilderClause_parse(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__1;
lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__11;
static lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTacticAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__1;
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__10;
lean_object* l_Lean_Aesop_DefaultRules_assumption___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__2;
lean_object* l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed__const__1;
lean_object* l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__5;
static lean_object* l_Lean_Aesop_defaultRules___closed__1;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2;
lean_object* l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_defaultRules_mkRules_match__1(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRule___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__9;
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__1;
lean_object* l_Lean_Aesop_DefaultRules_splitAllHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__24;
static lean_object* l_Lean_Aesop_defaultRules___closed__7;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRules___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
static lean_object* l_Lean_Aesop_defaultRules___closed__19;
static lean_object* l_Lean_Aesop_defaultRules___closed__20;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__9;
static lean_object* l_Lean_Aesop_defaultRules___closed__10;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Aesop_RuleKind_parse___spec__1(lean_object*);
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_AttrConfig_applyToDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__16;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__1;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__5;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__14;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__18;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__15;
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__3;
lean_object* l_Lean_Aesop_DefaultRules_splitHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__2;
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__12;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_SafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__17;
static lean_object* l_Lean_Aesop_defaultRules___closed__6;
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__8;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__12;
static lean_object* l_Lean_Aesop_defaultRules___closed__22;
lean_object* l_Lean_Aesop_Clause_parse___at_Lean_Aesop_defaultRules_mkRule___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__8;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__4;
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__6;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__25;
lean_object* l_Lean_Aesop_DefaultRules_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__5;
lean_object* l_Lean_Aesop_defaultRules_mkRules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3;
static lean_object* l_Lean_Aesop_defaultRules___closed__14;
lean_object* l_Lean_Aesop_NormRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__2;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Aesop_defaultSafePenalty;
lean_object* l_Lean_Aesop_Percent_ofNat(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRule___spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__1;
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__9;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__21;
static lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__2;
lean_object* l_Lean_Aesop_DefaultRules_splitHyps___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__20;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__10;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__3;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__15;
static lean_object* l_Lean_Aesop_defaultRules___closed__18;
static lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__3;
lean_object* l_Lean_Aesop_DefaultRules_splitHyps___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__21(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__7;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_defaultRules_mkRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Aesop_NormRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__3;
lean_object* l_Lean_Aesop_defaultRules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__7;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__2;
lean_object* l_Lean_Aesop_SafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__4;
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__1;
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_AttrConfig_ofKindAndClauses___at_Lean_Aesop_defaultRules_mkRule___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRules___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_DefaultRules_splitHyps___closed__1;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_toNat(lean_object*);
lean_object* l_Lean_Aesop_defaultRules_mkRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_assumption___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Aesop_defaultNormPenalty;
static lean_object* l_Lean_Aesop_DefaultRules_intros___closed__11;
static lean_object* l_Lean_Aesop_defaultRules___closed__8;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__13;
static lean_object* l_Lean_Aesop_defaultRules___closed__17;
lean_object* l_Lean_Aesop_DefaultRules_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_defaultRules_mkRules___boxed__const__1;
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__11;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal_x21(lean_object*);
static lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__4;
lean_object* l_Lean_Aesop_AttrConfig_ofKindAndClauses___at_Lean_Aesop_defaultRules_mkRule___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__22;
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__23;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__21;
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__12;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16;
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Aesop_defaultRules_mkRules_match__1___rarg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_Lean_Aesop_defaultRules___closed__13;
lean_object* l_Lean_Aesop_Clause_parse___at_Lean_Aesop_defaultRules_mkRule___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Aesop_DefaultRules_assumption___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Meta_assumption(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Elab_Tactic_replaceMainGoal(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
else
{
uint8_t x_31; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_31 = !lean_is_exclusive(x_10);
if (x_31 == 0)
{
return x_10;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_10, 0);
x_33 = lean_ctor_get(x_10, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_10);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_assumption___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_assumption___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_DefaultRules_assumption(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Aesop_DefaultRules_assumption___closed__1;
x_11 = l_Lean_Elab_Tactic_withMainContext___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Aesop_DefaultRules_assumption___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_DefaultRules_assumption___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_intros___closed__2;
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_intros___closed__4;
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("intros");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_intros___closed__6;
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("null");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_intros___closed__10;
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_intros___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_DefaultRules_intros(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Aesop_DefaultRules_intros___closed__7;
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Aesop_DefaultRules_intros___closed__13;
x_20 = lean_array_push(x_19, x_18);
x_21 = l_Lean_Aesop_DefaultRules_intros___closed__12;
x_22 = lean_array_push(x_20, x_21);
x_23 = l_Lean_Aesop_DefaultRules_intros___closed__8;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Elab_Tactic_evalTacticAux(x_24, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_25;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHyps___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Aesop_DefaultRules_splitAllHyps(x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Tactic_replaceMainGoal(x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
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
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_30 = !lean_is_exclusive(x_13);
if (x_30 == 0)
{
return x_13;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_13, 0);
x_32 = lean_ctor_get(x_13, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_13);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_10);
if (x_34 == 0)
{
return x_10;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_10, 0);
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_10);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
static lean_object* _init_l_Lean_Aesop_DefaultRules_splitHyps___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_DefaultRules_splitHyps___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHyps(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Aesop_DefaultRules_splitHyps___closed__1;
x_11 = l_Lean_Elab_Tactic_withMainContext___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Aesop_DefaultRules_splitHyps___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_DefaultRules_splitHyps___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_defaultRules_mkRules_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Aesop_defaultRules_mkRules_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Aesop_defaultRules_mkRules_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
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
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
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
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
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
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
static lean_object* _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: Percentage must be between 0 and 100.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Percent_ofNat(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__2;
x_12 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__6(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
}
}
static lean_object* _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: Percentage cannot be negative.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = l_Lean_Syntax_isNone(x_13);
lean_dec(x_13);
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_1, x_15);
x_17 = l_Lean_Syntax_toNat(x_16);
lean_dec(x_16);
if (x_11 == 0)
{
uint8_t x_35; 
x_35 = 1;
x_18 = x_35;
goto block_34;
}
else
{
uint8_t x_36; 
x_36 = 0;
x_18 = x_36;
goto block_34;
}
block_34:
{
if (x_14 == 0)
{
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1(x_17, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_17);
x_21 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__2;
x_22 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_dec(x_2);
if (x_18 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_nat_to_int(x_17);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_8);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_nat_to_int(x_17);
x_31 = lean_int_neg(x_30);
lean_dec(x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_8);
return x_33;
}
}
}
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: unsafe rules must specify a success probability ('n%') (got ");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("none");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2;
x_2 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__7;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__8;
x_2 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("some (");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__13;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unsafe");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("safe");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__1___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: norm rules must specify an integer penalty, not a success probability.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__18;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__2___boxed), 8, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: safe rules must specify an integer penalty, not a success probability.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__21;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_unsigned_to_nat(0u);
x_30 = l_Lean_Syntax_getArg(x_1, x_29);
x_31 = l_Lean_Syntax_isNone(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = l_Lean_Syntax_getArg(x_30, x_29);
lean_dec(x_30);
x_33 = l_Lean_Syntax_getAtomVal_x21(x_32);
lean_dec(x_32);
x_34 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__15;
x_35 = lean_string_dec_eq(x_33, x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16;
x_37 = lean_string_dec_eq(x_33, x_36);
lean_dec(x_33);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__17;
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Lean_Aesop_defaultNormPenalty;
x_40 = lean_apply_8(x_38, x_39, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_40;
}
else
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_2, 0);
lean_inc(x_41);
lean_dec(x_2);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_41);
x_42 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__19;
x_43 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4(x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
return x_43;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_41, 0);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_apply_8(x_38, x_48, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_49;
}
}
}
else
{
lean_object* x_50; 
x_50 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__20;
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = l_Lean_Aesop_defaultSafePenalty;
x_52 = lean_apply_8(x_50, x_51, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_52;
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_2, 0);
lean_inc(x_53);
lean_dec(x_2);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_53);
x_54 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__22;
x_55 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4(x_54, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
return x_55;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_55);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_53, 0);
lean_inc(x_60);
lean_dec(x_53);
x_61 = lean_apply_8(x_50, x_60, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_61;
}
}
}
}
else
{
lean_object* x_62; 
lean_dec(x_33);
x_62 = lean_box(0);
x_10 = x_62;
goto block_28;
}
}
else
{
lean_object* x_63; 
lean_dec(x_30);
x_63 = lean_box(0);
x_10 = x_63;
goto block_28;
}
block_28:
{
lean_dec(x_10);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__9;
x_12 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_17 = l_Std_fmt___at_Lean_Aesop_RuleKind_parse___spec__1(x_13);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__12;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__14;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_27;
}
}
}
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_10, x_12);
lean_dec(x_10);
lean_inc(x_2);
x_14 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_15);
x_18 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3(x_1, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
x_23 = lean_box(0);
x_24 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3(x_1, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_Clause_parse___at_Lean_Aesop_defaultRules_mkRule___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Aesop_BuilderClause_parse(x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRule___spec__8(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = l_Lean_Aesop_Clause_parse___at_Lean_Aesop_defaultRules_mkRule___spec__7(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_2 + x_21;
x_23 = x_19;
x_24 = lean_array_uset(x_16, x_2, x_23);
x_2 = x_22;
x_3 = x_24;
x_10 = x_20;
goto _start;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
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
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
static lean_object* _init_l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: duplicate builder clause.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_dec(x_12);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_1, 1, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_9);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_19 = l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2;
x_20 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__12(x_19, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_20;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__13(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_5);
x_14 = l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_dec(x_5);
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
lean_dec(x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_NormRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_10, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__13(x_1, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
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
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
static lean_object* _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: 'simp' builder cannot be used with safe rules.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: 'unfold' builder cannot be used with safe rules.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get_uint8(x_2, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_dec(x_13);
x_14 = lean_box(x_12);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_1, 1, x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get_uint8(x_2, 0);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(x_17);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_9);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_1);
x_23 = l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2;
x_24 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_24;
}
}
case 1:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_25 = l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__2;
x_26 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
default: 
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_27 = l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__4;
x_28 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_28;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__17(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_5);
x_14 = l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_13);
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
lean_dec(x_5);
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
lean_dec(x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_SafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_10, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__17(x_1, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
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
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
static lean_object* _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: 'simp' builder cannot be used with unsafe rules.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop: 'unfold' builder cannot be used with unsafe rules.");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get_uint8(x_2, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_dec(x_13);
x_14 = lean_box(x_12);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_1, 1, x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get_uint8(x_2, 0);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(x_17);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_9);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_1);
x_23 = l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2;
x_24 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_24;
}
}
case 1:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_25 = l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__2;
x_26 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_26;
}
default: 
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_27 = l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__4;
x_28 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20(x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_28;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__21(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_1, x_2);
lean_inc(x_5);
x_14 = l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19(x_4, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_13);
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
lean_dec(x_5);
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
lean_dec(x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_10, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_9);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__21(x_1, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_18;
}
}
}
}
lean_object* l_Lean_Aesop_AttrConfig_ofKindAndClauses___at_Lean_Aesop_defaultRules_mkRule___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_box(0);
lean_inc(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_Aesop_NormRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__10(x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
case 1:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_box(0);
lean_inc(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Aesop_SafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__14(x_2, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_28, 0, x_31);
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_28);
if (x_36 == 0)
{
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_28, 0);
x_38 = lean_ctor_get(x_28, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_28);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
default: 
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_1, 0);
x_41 = lean_box(0);
lean_inc(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_Aesop_UnsafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__18(x_2, x_42, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_43, 0, x_46);
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_43, 0);
x_48 = lean_ctor_get(x_43, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_43);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_47);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_43);
if (x_51 == 0)
{
return x_43;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_43, 0);
x_53 = lean_ctor_get(x_43, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_43);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = lean_array_get_size(x_16);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_19 = x_16;
x_20 = lean_box_usize(x_18);
x_21 = l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed__const__1;
x_22 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRule___spec__8___boxed), 10, 3);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
lean_closure_set(x_22, 2, x_19);
x_23 = x_22;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_24 = lean_apply_7(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Aesop_AttrConfig_ofKindAndClauses___at_Lean_Aesop_defaultRules_mkRule___spec__9(x_12, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_25);
lean_dec(x_12);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_24);
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
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
return x_11;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Aesop_defaultRules_mkRule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Aesop_AttrConfig_applyToDecl(x_1, x_11, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_Clause_parse___at_Lean_Aesop_defaultRules_mkRule___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_Clause_parse___at_Lean_Aesop_defaultRules_mkRule___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRule___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRule___spec__8(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__12(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__13(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Aesop_NormRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_NormRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__16(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__17(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Aesop_SafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_SafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__14(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Aesop_defaultRules_mkRule___spec__20(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Aesop_defaultRules_mkRule___spec__21(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Aesop_UnsafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_UnsafeRuleConfig_addClauses___at_Lean_Aesop_defaultRules_mkRule___spec__18(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_AttrConfig_ofKindAndClauses___at_Lean_Aesop_defaultRules_mkRule___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_AttrConfig_ofKindAndClauses___at_Lean_Aesop_defaultRules_mkRule___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Aesop_defaultRules_mkRule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Aesop_defaultRules_mkRule(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRules___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Lean_Aesop_defaultRules_mkRule(x_18, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_2 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_16, x_2, x_25);
x_2 = x_24;
x_3 = x_26;
x_10 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules_mkRules___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Aesop_defaultRules_mkRules(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = x_1;
x_12 = lean_box_usize(x_10);
x_13 = l_Lean_Aesop_defaultRules_mkRules___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRules___spec__1___boxed), 10, 3);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_11);
x_15 = x_14;
x_16 = lean_apply_7(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRules___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Aesop_defaultRules_mkRules___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Aesop");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_DefaultRules_intros___closed__2;
x_2 = l_Lean_Aesop_defaultRules___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("AttrSyntax");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__2;
x_2 = l_Lean_Aesop_defaultRules___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aesop");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__4;
x_2 = l_Lean_Aesop_defaultRules___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("kind");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__4;
x_2 = l_Lean_Aesop_defaultRules___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("prio");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__4;
x_2 = l_Lean_Aesop_defaultRules___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("numLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Aesop_defaultRules___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("0");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__15;
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__12;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("norm");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("-");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("1");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("DefaultRules");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__2;
x_2 = l_Lean_Aesop_defaultRules___closed__20;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assumption");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__21;
x_2 = l_Lean_Aesop_defaultRules___closed__22;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__21;
x_2 = l_Lean_Aesop_DefaultRules_intros___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("splitHyps");
return x_1;
}
}
static lean_object* _init_l_Lean_Aesop_defaultRules___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Aesop_defaultRules___closed__21;
x_2 = l_Lean_Aesop_defaultRules___closed__25;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Aesop_defaultRules(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Aesop_defaultRules___closed__5;
lean_inc(x_9);
x_16 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16;
lean_inc(x_9);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_9);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Aesop_defaultRules___closed__9;
x_20 = lean_array_push(x_19, x_18);
x_21 = l_Lean_Aesop_DefaultRules_intros___closed__10;
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_Aesop_defaultRules___closed__14;
x_24 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_24, 0, x_9);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_array_push(x_19, x_24);
x_26 = l_Lean_Aesop_defaultRules___closed__13;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_Aesop_defaultRules___closed__16;
x_29 = lean_array_push(x_28, x_27);
x_30 = l_Lean_Aesop_DefaultRules_intros___closed__12;
x_31 = lean_array_push(x_29, x_30);
x_32 = l_Lean_Aesop_defaultRules___closed__11;
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_array_push(x_19, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_21);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_Aesop_DefaultRules_intros___closed__13;
x_37 = lean_array_push(x_36, x_22);
x_38 = lean_array_push(x_37, x_35);
x_39 = l_Lean_Aesop_defaultRules___closed__8;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_Lean_Aesop_defaultRules___closed__15;
x_42 = lean_array_push(x_41, x_16);
x_43 = lean_array_push(x_42, x_40);
x_44 = lean_array_push(x_43, x_30);
x_45 = l_Lean_Aesop_defaultRules___closed__6;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_5, x_6, x_14);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_51);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
lean_inc(x_48);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_15);
x_55 = l_Lean_Aesop_defaultRules___closed__17;
lean_inc(x_48);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_48);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_array_push(x_19, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_21);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_Aesop_defaultRules___closed__18;
lean_inc(x_48);
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_48);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_array_push(x_19, x_60);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_21);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_Aesop_defaultRules___closed__19;
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_48);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_19, x_64);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_26);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_array_push(x_41, x_62);
x_68 = lean_array_push(x_67, x_66);
x_69 = lean_array_push(x_68, x_30);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_32);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_array_push(x_19, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_21);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_36, x_58);
x_74 = lean_array_push(x_73, x_72);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_39);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_push(x_41, x_54);
x_77 = lean_array_push(x_76, x_75);
x_78 = lean_array_push(x_77, x_30);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_45);
lean_ctor_set(x_79, 1, x_78);
x_80 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_5, x_6, x_53);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_Elab_Term_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6, x_82);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = l_Lean_Elab_Term_getMainModule___rarg(x_6, x_84);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
lean_inc(x_81);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_81);
lean_ctor_set(x_87, 1, x_15);
lean_inc(x_81);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_81);
lean_ctor_set(x_88, 1, x_55);
x_89 = lean_array_push(x_19, x_88);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_21);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_81);
lean_ctor_set(x_91, 1, x_23);
x_92 = lean_array_push(x_19, x_91);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_26);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_array_push(x_28, x_93);
x_95 = lean_array_push(x_94, x_30);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_32);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_array_push(x_19, x_96);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_21);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_array_push(x_36, x_90);
x_100 = lean_array_push(x_99, x_98);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_39);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_array_push(x_41, x_87);
x_103 = lean_array_push(x_102, x_101);
x_104 = lean_array_push(x_103, x_30);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_45);
lean_ctor_set(x_105, 1, x_104);
x_106 = l_Lean_Aesop_defaultRules___closed__23;
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_46);
x_108 = l_Lean_Aesop_defaultRules___closed__24;
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_79);
x_110 = l_Lean_Aesop_defaultRules___closed__26;
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_105);
x_112 = lean_array_push(x_41, x_107);
x_113 = lean_array_push(x_112, x_109);
x_114 = lean_array_push(x_113, x_111);
x_115 = l_Lean_Aesop_defaultRules_mkRules(x_114, x_1, x_2, x_3, x_4, x_5, x_6, x_86);
return x_115;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Aesop_DefaultRules_SplitHyps(lean_object*);
lean_object* initialize_Lean_Aesop_Config(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_DefaultRules(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_DefaultRules_SplitHyps(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Aesop_Config(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Aesop_DefaultRules_assumption___closed__1 = _init_l_Lean_Aesop_DefaultRules_assumption___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_assumption___closed__1);
l_Lean_Aesop_DefaultRules_intros___closed__1 = _init_l_Lean_Aesop_DefaultRules_intros___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__1);
l_Lean_Aesop_DefaultRules_intros___closed__2 = _init_l_Lean_Aesop_DefaultRules_intros___closed__2();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__2);
l_Lean_Aesop_DefaultRules_intros___closed__3 = _init_l_Lean_Aesop_DefaultRules_intros___closed__3();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__3);
l_Lean_Aesop_DefaultRules_intros___closed__4 = _init_l_Lean_Aesop_DefaultRules_intros___closed__4();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__4);
l_Lean_Aesop_DefaultRules_intros___closed__5 = _init_l_Lean_Aesop_DefaultRules_intros___closed__5();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__5);
l_Lean_Aesop_DefaultRules_intros___closed__6 = _init_l_Lean_Aesop_DefaultRules_intros___closed__6();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__6);
l_Lean_Aesop_DefaultRules_intros___closed__7 = _init_l_Lean_Aesop_DefaultRules_intros___closed__7();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__7);
l_Lean_Aesop_DefaultRules_intros___closed__8 = _init_l_Lean_Aesop_DefaultRules_intros___closed__8();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__8);
l_Lean_Aesop_DefaultRules_intros___closed__9 = _init_l_Lean_Aesop_DefaultRules_intros___closed__9();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__9);
l_Lean_Aesop_DefaultRules_intros___closed__10 = _init_l_Lean_Aesop_DefaultRules_intros___closed__10();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__10);
l_Lean_Aesop_DefaultRules_intros___closed__11 = _init_l_Lean_Aesop_DefaultRules_intros___closed__11();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__11);
l_Lean_Aesop_DefaultRules_intros___closed__12 = _init_l_Lean_Aesop_DefaultRules_intros___closed__12();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__12);
l_Lean_Aesop_DefaultRules_intros___closed__13 = _init_l_Lean_Aesop_DefaultRules_intros___closed__13();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_intros___closed__13);
l_Lean_Aesop_DefaultRules_splitHyps___closed__1 = _init_l_Lean_Aesop_DefaultRules_splitHyps___closed__1();
lean_mark_persistent(l_Lean_Aesop_DefaultRules_splitHyps___closed__1);
l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__1 = _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__1);
l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__2 = _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___lambda__1___closed__2);
l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__1 = _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__1();
lean_mark_persistent(l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__1);
l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__2 = _init_l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__2();
lean_mark_persistent(l_Lean_Aesop_Prio_parse___at_Lean_Aesop_defaultRules_mkRule___spec__5___closed__2);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__1 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__1);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__2);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__3);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__4);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__5 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__5();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__5);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__6 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__6();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__6);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__7 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__7();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__7);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__8 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__8();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__8);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__9 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__9();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__9);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__10 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__10();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__10);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__11 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__11();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__11);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__12 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__12();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__12);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__13 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__13();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__13);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__14 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__14();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__14);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__15 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__15();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__15);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__16);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__17 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__17();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__17);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__18 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__18();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__18);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__19 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__19();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__19);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__20 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__20();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__20);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__21 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__21();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__21);
l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__22 = _init_l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__22();
lean_mark_persistent(l_Lean_Aesop_RuleKind_parse___at_Lean_Aesop_defaultRules_mkRule___spec__2___lambda__3___closed__22);
l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__1 = _init_l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__1();
lean_mark_persistent(l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__1);
l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2 = _init_l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2();
lean_mark_persistent(l_Lean_Aesop_NormRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__11___closed__2);
l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__1 = _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__1();
lean_mark_persistent(l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__1);
l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__2 = _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__2();
lean_mark_persistent(l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__2);
l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__3 = _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__3();
lean_mark_persistent(l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__3);
l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__4 = _init_l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__4();
lean_mark_persistent(l_Lean_Aesop_SafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__15___closed__4);
l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__1 = _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__1();
lean_mark_persistent(l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__1);
l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__2 = _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__2();
lean_mark_persistent(l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__2);
l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__3 = _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__3();
lean_mark_persistent(l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__3);
l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__4 = _init_l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__4();
lean_mark_persistent(l_Lean_Aesop_UnsafeRuleConfig_addClause___at_Lean_Aesop_defaultRules_mkRule___spec__19___closed__4);
l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed__const__1 = _init_l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed__const__1();
lean_mark_persistent(l_Lean_Aesop_AttrConfig_parse___at_Lean_Aesop_defaultRules_mkRule___spec__1___boxed__const__1);
l_Lean_Aesop_defaultRules_mkRules___boxed__const__1 = _init_l_Lean_Aesop_defaultRules_mkRules___boxed__const__1();
lean_mark_persistent(l_Lean_Aesop_defaultRules_mkRules___boxed__const__1);
l_Lean_Aesop_defaultRules___closed__1 = _init_l_Lean_Aesop_defaultRules___closed__1();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__1);
l_Lean_Aesop_defaultRules___closed__2 = _init_l_Lean_Aesop_defaultRules___closed__2();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__2);
l_Lean_Aesop_defaultRules___closed__3 = _init_l_Lean_Aesop_defaultRules___closed__3();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__3);
l_Lean_Aesop_defaultRules___closed__4 = _init_l_Lean_Aesop_defaultRules___closed__4();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__4);
l_Lean_Aesop_defaultRules___closed__5 = _init_l_Lean_Aesop_defaultRules___closed__5();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__5);
l_Lean_Aesop_defaultRules___closed__6 = _init_l_Lean_Aesop_defaultRules___closed__6();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__6);
l_Lean_Aesop_defaultRules___closed__7 = _init_l_Lean_Aesop_defaultRules___closed__7();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__7);
l_Lean_Aesop_defaultRules___closed__8 = _init_l_Lean_Aesop_defaultRules___closed__8();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__8);
l_Lean_Aesop_defaultRules___closed__9 = _init_l_Lean_Aesop_defaultRules___closed__9();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__9);
l_Lean_Aesop_defaultRules___closed__10 = _init_l_Lean_Aesop_defaultRules___closed__10();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__10);
l_Lean_Aesop_defaultRules___closed__11 = _init_l_Lean_Aesop_defaultRules___closed__11();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__11);
l_Lean_Aesop_defaultRules___closed__12 = _init_l_Lean_Aesop_defaultRules___closed__12();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__12);
l_Lean_Aesop_defaultRules___closed__13 = _init_l_Lean_Aesop_defaultRules___closed__13();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__13);
l_Lean_Aesop_defaultRules___closed__14 = _init_l_Lean_Aesop_defaultRules___closed__14();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__14);
l_Lean_Aesop_defaultRules___closed__15 = _init_l_Lean_Aesop_defaultRules___closed__15();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__15);
l_Lean_Aesop_defaultRules___closed__16 = _init_l_Lean_Aesop_defaultRules___closed__16();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__16);
l_Lean_Aesop_defaultRules___closed__17 = _init_l_Lean_Aesop_defaultRules___closed__17();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__17);
l_Lean_Aesop_defaultRules___closed__18 = _init_l_Lean_Aesop_defaultRules___closed__18();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__18);
l_Lean_Aesop_defaultRules___closed__19 = _init_l_Lean_Aesop_defaultRules___closed__19();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__19);
l_Lean_Aesop_defaultRules___closed__20 = _init_l_Lean_Aesop_defaultRules___closed__20();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__20);
l_Lean_Aesop_defaultRules___closed__21 = _init_l_Lean_Aesop_defaultRules___closed__21();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__21);
l_Lean_Aesop_defaultRules___closed__22 = _init_l_Lean_Aesop_defaultRules___closed__22();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__22);
l_Lean_Aesop_defaultRules___closed__23 = _init_l_Lean_Aesop_defaultRules___closed__23();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__23);
l_Lean_Aesop_defaultRules___closed__24 = _init_l_Lean_Aesop_defaultRules___closed__24();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__24);
l_Lean_Aesop_defaultRules___closed__25 = _init_l_Lean_Aesop_defaultRules___closed__25();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__25);
l_Lean_Aesop_defaultRules___closed__26 = _init_l_Lean_Aesop_defaultRules___closed__26();
lean_mark_persistent(l_Lean_Aesop_defaultRules___closed__26);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
