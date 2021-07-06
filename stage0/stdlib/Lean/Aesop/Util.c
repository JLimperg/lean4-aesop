// Lean compiler output
// Module: Lean.Aesop.Util
// Imports: Init Lean.Message Lean.Meta.DiscrTree Lean.Meta.Tactic.Simp.SimpLemmas Std.Data.BinomialHeap
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_set___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1(lean_object*);
static uint8_t l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2;
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Std_Format_indentDUnlinesSkipEmpty(lean_object*);
lean_object* l_MonadStateOf_ofLens___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_merge_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_setThe(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_toArray___rarg(lean_object*);
lean_object* l_MonadStateOf_ofLens(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_foldM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpLemmaEntry(lean_object*, lean_object*);
static uint8_t l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__3(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe(lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyM(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3(lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_toArray(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_isEmptyShallow_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_toArray___rarg___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_foldM(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashSet_merge_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_foldM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_isEmptyShallow_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashSet_merge___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_fold___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5(lean_object*);
lean_object* l_Lean_MessageData_unlines(lean_object*);
lean_object* l_MonadStateOf_ofLens___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_MonadStateOf_ofLens___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_merge(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___closed__1;
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___at_instReprProd___spec__1(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18(lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_ST_Prim_Ref_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_List_foldl___at_Lean_MessageData_join___spec__1___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_merge_loop___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_MessageData_join___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___closed__1;
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_addDeclToUnfold(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4(lean_object*);
static lean_object* l_Lean_Meta_DiscrTree_values___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_values___rarg(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_merge_loop(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14(lean_object*);
lean_object* l_Std_Format_formatIf(uint8_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_formatIf___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at_Lean_MessageData_indentDUnlinesSkipEmpty___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_merge_loop(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldM(lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeap_removeMin(lean_object*);
lean_object* l_MonadStateOf_ofLens___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyMUnsafe(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2(lean_object*);
lean_object* l_MonadStateOf_ofLens___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__2(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_take___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_copyMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_fold(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashSet_merge(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_foldM___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6(lean_object*);
uint8_t l_Std_Format_isEmptyShallow(lean_object*);
lean_object* l_String_joinSep_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_indentDUnlines(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2(lean_object*);
static lean_object* l_String_joinSep_match__1___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldM___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__1(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toMessageDataIf(uint8_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3(lean_object*);
lean_object* l_Std_Format_unlines(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_ST_Ref_modifyGetM(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_SimpLemmas_merge___closed__1;
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3(lean_object*);
lean_object* l_Std_PersistentHashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_merge___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_Format_isEmptyShallow_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5(lean_object*);
static lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_MonadStateOf_ofLens___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___closed__1;
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_MonadStateOf_ofLens_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashSet_merge_loop(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_Format_indentDUnlines(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_fold(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_isEmptyShallow_match__1(lean_object*);
lean_object* l_ST_Ref_modifyMUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_joinSep___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_fold___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_addSimpEntry_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_values___rarg___boxed(lean_object*);
lean_object* l_Lean_MessageData_indentDSkipEmpty(lean_object*);
lean_object* l_Std_PersistentHashMap_merge_loop_match__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_merge_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MessageData_unlines___boxed(lean_object*);
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_join___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_ST_Ref_modifyGetM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_copyMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_joinSep(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7(lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_head_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_BinomialHeap_removeMin___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_values(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Ref_modifyMUnsafe___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_indentDUnlinesSkipEmpty(lean_object*);
lean_object* l_Lean_MessageData_join(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_fold___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_addSimpEntry_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1(lean_object*, lean_object*);
lean_object* l_Std_Format_indentDUnlines___boxed(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_addSimpEntry(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_merge_loop___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7(lean_object*);
lean_object* l_Lean_MessageData_indentDUnlines___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_joinSep_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_merge_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1(lean_object*, lean_object*);
lean_object* l_Std_BinomialHeapImp_tail___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_merge(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_isEmptyShallow(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_setThe___rarg(lean_object*, lean_object*);
lean_object* l_Std_Format_unlines___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8(lean_object*, lean_object*);
lean_object* l_Std_Format_indentDSkipEmpty(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__2___rarg(lean_object*, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_isEmptyShallow___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MessageData_toMessageDataIf___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_fold___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_merge(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_merge___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_isEmptyShallow___boxed(lean_object*);
lean_object* l_MonadStateOf_ofLens_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashSet_merge_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_MessageData_unlines___closed__1;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* _init_l_String_joinSep_match__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
lean_object* l_String_joinSep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_String_joinSep_match__1___rarg___closed__1;
x_10 = lean_string_dec_eq(x_7, x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_apply_2(x_4, x_7, x_8);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_4);
x_12 = lean_apply_1(x_3, x_8);
return x_12;
}
}
}
}
lean_object* l_String_joinSep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_String_joinSep_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_String_joinSep(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_joinSep_match__1___rarg___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_String_joinSep_match__1___rarg___closed__1;
x_7 = lean_string_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_string_append(x_4, x_1);
x_9 = l_String_joinSep(x_1, x_5);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
return x_10;
}
else
{
lean_dec(x_4);
x_2 = x_5;
goto _start;
}
}
}
}
lean_object* l_String_joinSep___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_String_joinSep(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_Format_isEmptyShallow_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 2:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_String_joinSep_match__1___rarg___closed__1;
x_9 = lean_string_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_1(x_4, x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_3, x_11);
return x_12;
}
}
default: 
{
lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_4, x_1);
return x_13;
}
}
}
}
lean_object* l_Std_Format_isEmptyShallow_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Format_isEmptyShallow_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_Std_Format_isEmptyShallow(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
case 2:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_String_joinSep_match__1___rarg___closed__1;
x_5 = lean_string_dec_eq(x_3, x_4);
return x_5;
}
default: 
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l_Std_Format_isEmptyShallow___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Std_Format_isEmptyShallow(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Std_Format_indentDSkipEmpty(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Std_Format_isEmptyShallow(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = l_Std_Format_indentD(x_1);
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
}
}
lean_object* l_Std_Format_unlines(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(1);
x_3 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_Format_unlines___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_Format_unlines(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_Format_indentDUnlines(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_box(1);
x_3 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_1, x_2);
x_4 = l_Std_Format_isEmptyShallow(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Std_Format_indentD(x_3);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
}
}
lean_object* l_Std_Format_indentDUnlines___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_Format_indentDUnlines(x_1);
lean_dec(x_1);
return x_2;
}
}
static uint8_t _init_l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 0;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
static uint8_t _init_l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2() {
_start:
{
uint8_t x_1; uint8_t x_2; 
x_1 = 1;
x_2 = l_instDecidableNot___rarg(x_1);
return x_2;
}
}
lean_object* l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Std_Format_isEmptyShallow(x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1;
if (x_8 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
uint8_t x_11; 
x_11 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2;
if (x_11 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = l_Std_Format_isEmptyShallow(x_14);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1;
if (x_17 == 0)
{
lean_dec(x_14);
x_1 = x_15;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_2);
x_1 = x_15;
x_2 = x_19;
goto _start;
}
}
else
{
uint8_t x_21; 
x_21 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2;
if (x_21 == 0)
{
lean_dec(x_14);
x_1 = x_15;
goto _start;
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_2);
x_1 = x_15;
x_2 = x_23;
goto _start;
}
}
}
}
}
}
lean_object* l_Std_Format_indentDUnlinesSkipEmpty(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1(x_1, x_2);
x_4 = lean_box(1);
x_5 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_3, x_4);
lean_dec(x_3);
x_6 = l_Std_Format_isEmptyShallow(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Std_Format_indentD(x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_box(0);
return x_8;
}
}
}
lean_object* l_Std_Format_formatIf(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_thunk_get_own(x_2);
return x_4;
}
}
}
lean_object* l_Std_Format_formatIf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Std_Format_formatIf(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_foldl___at_Lean_MessageData_join___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_5 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_Lean_MessageData_join(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_MessageData_nil;
x_3 = l_List_foldl___at_Lean_MessageData_join___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_List_foldl___at_Lean_MessageData_join___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_MessageData_join___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_MessageData_join___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_MessageData_join(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_MessageData_isEmptyShallow_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_MessageData_isEmptyShallow_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MessageData_isEmptyShallow_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_MessageData_isEmptyShallow(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Std_Format_isEmptyShallow(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
}
lean_object* l_Lean_MessageData_isEmptyShallow___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_MessageData_isEmptyShallow(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_MessageData_indentDSkipEmpty(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_MessageData_isEmptyShallow(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = l_Lean_indentD(x_1);
return x_3;
}
else
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = l_Lean_MessageData_nil;
return x_4;
}
}
}
static lean_object* _init_l_Lean_MessageData_unlines___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(1);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_MessageData_unlines(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_MessageData_unlines___closed__1;
x_3 = l_Lean_MessageData_joinSep(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_MessageData_unlines___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_MessageData_unlines(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_MessageData_indentDUnlines(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_MessageData_unlines___closed__1;
x_3 = l_Lean_MessageData_joinSep(x_1, x_2);
x_4 = l_Lean_MessageData_isEmptyShallow(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l_Lean_indentD(x_3);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = l_Lean_MessageData_nil;
return x_6;
}
}
}
lean_object* l_Lean_MessageData_indentDUnlines___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_MessageData_indentDUnlines(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_filterAux___at_Lean_MessageData_indentDUnlinesSkipEmpty___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_MessageData_isEmptyShallow(x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1;
if (x_8 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
uint8_t x_11; 
x_11 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2;
if (x_11 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_1);
x_16 = l_Lean_MessageData_isEmptyShallow(x_14);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1;
if (x_17 == 0)
{
lean_dec(x_14);
x_1 = x_15;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_2);
x_1 = x_15;
x_2 = x_19;
goto _start;
}
}
else
{
uint8_t x_21; 
x_21 = l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2;
if (x_21 == 0)
{
lean_dec(x_14);
x_1 = x_15;
goto _start;
}
else
{
lean_object* x_23; 
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_2);
x_1 = x_15;
x_2 = x_23;
goto _start;
}
}
}
}
}
}
lean_object* l_Lean_MessageData_indentDUnlinesSkipEmpty(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = l_List_filterAux___at_Lean_MessageData_indentDUnlinesSkipEmpty___spec__1(x_1, x_2);
x_4 = l_Lean_MessageData_unlines___closed__1;
x_5 = l_Lean_MessageData_joinSep(x_3, x_4);
lean_dec(x_3);
x_6 = l_Lean_MessageData_isEmptyShallow(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_indentD(x_5);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = l_Lean_MessageData_nil;
return x_8;
}
}
}
lean_object* l_Lean_MessageData_toMessageDataIf(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
lean_object* x_3; 
x_3 = l_Lean_MessageData_nil;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_thunk_get_own(x_2);
return x_4;
}
}
}
lean_object* l_Lean_MessageData_toMessageDataIf___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_MessageData_toMessageDataIf(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_6, x_11, x_12);
x_4 = x_10;
x_6 = x_13;
goto _start;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg(x_1, x_2, x_15, x_6);
lean_dec(x_15);
x_4 = x_10;
x_6 = x_16;
goto _start;
}
default: 
{
x_4 = x_10;
goto _start;
}
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg(x_1, x_2, x_5, x_10, x_11, x_4);
return x_12;
}
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg(x_15, x_13, x_14, lean_box(0), x_16, x_4);
return x_17;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashSet_merge_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashSet_merge_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashSet_merge_loop___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge_loop___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge_loop___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge_loop___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashSet_merge_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashSet_merge_loop___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_6, x_11, x_12);
x_4 = x_10;
x_6 = x_13;
goto _start;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg(x_1, x_2, x_15, x_6);
lean_dec(x_15);
x_4 = x_10;
x_6 = x_16;
goto _start;
}
default: 
{
x_4 = x_10;
goto _start;
}
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg(x_1, x_2, x_5, x_10, x_11, x_4);
return x_12;
}
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg(x_15, x_13, x_14, lean_box(0), x_16, x_4);
return x_17;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_6, x_11, x_12);
x_4 = x_10;
x_6 = x_13;
goto _start;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
lean_inc(x_2);
lean_inc(x_1);
x_16 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg(x_1, x_2, x_15, x_6);
lean_dec(x_15);
x_4 = x_10;
x_6 = x_16;
goto _start;
}
default: 
{
x_4 = x_10;
goto _start;
}
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg(x_1, x_2, x_5, x_10, x_11, x_4);
return x_12;
}
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge_loop___spec__2___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg(x_15, x_13, x_14, lean_box(0), x_16, x_4);
return x_17;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashSet_merge___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg(x_1, x_2, x_4, x_3);
lean_dec(x_4);
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_9;
}
}
}
lean_object* l_Std_PersistentHashSet_merge(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashSet_merge___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__2___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashSet_merge___spec__7___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashSet_merge___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashSet_merge___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashSet_merge___spec__5___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_merge_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Std_PersistentHashMap_merge_loop_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_merge_loop_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; size_t x_10; size_t x_11; 
x_9 = lean_array_uget(x_4, x_5);
x_10 = 1;
x_11 = x_5 + x_10;
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
lean_inc(x_12);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_7, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_7, x_12, x_13);
x_5 = x_11;
x_7 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_12);
x_18 = lean_apply_3(x_3, x_12, x_13, x_17);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_7, x_12, x_18);
x_5 = x_11;
x_7 = x_19;
goto _start;
}
}
case 1:
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg(x_1, x_2, x_3, x_21, x_7);
lean_dec(x_21);
x_5 = x_11;
x_7 = x_22;
goto _start;
}
default: 
{
x_5 = x_11;
goto _start;
}
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_4, x_5, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
x_10 = lean_apply_3(x_3, x_5, x_6, x_9);
x_11 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_4, x_5, x_10);
return x_11;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_7, x_7);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_13 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg(x_1, x_2, x_3, x_6, x_11, x_12, x_5);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___lambda__1), 6, 3);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg(x_16, x_14, x_15, lean_box(0), x_17, x_5);
return x_18;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_merge_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_merge_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_merge_loop___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge_loop___spec__3___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge_loop___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge_loop___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_merge_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_merge_loop___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; size_t x_10; size_t x_11; 
x_9 = lean_array_uget(x_4, x_5);
x_10 = 1;
x_11 = x_5 + x_10;
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
lean_inc(x_12);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_7, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_7, x_12, x_13);
x_5 = x_11;
x_7 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_12);
x_18 = lean_apply_3(x_3, x_12, x_17, x_13);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_7, x_12, x_18);
x_5 = x_11;
x_7 = x_19;
goto _start;
}
}
case 1:
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg(x_1, x_2, x_3, x_21, x_7);
lean_dec(x_21);
x_5 = x_11;
x_7 = x_22;
goto _start;
}
default: 
{
x_5 = x_11;
goto _start;
}
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg___boxed), 7, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg___boxed), 6, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_4, x_5, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
x_10 = lean_apply_3(x_3, x_5, x_9, x_6);
x_11 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_4, x_5, x_10);
return x_11;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_7, x_7);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_13 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg(x_1, x_2, x_3, x_6, x_11, x_12, x_5);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg___lambda__1), 6, 3);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg(x_16, x_14, x_15, lean_box(0), x_17, x_5);
return x_18;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; size_t x_10; size_t x_11; 
x_9 = lean_array_uget(x_4, x_5);
x_10 = 1;
x_11 = x_5 + x_10;
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
lean_inc(x_12);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_14 = l_Std_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_7, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_1);
x_15 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_7, x_12, x_13);
x_5 = x_11;
x_7 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_3);
lean_inc(x_12);
x_18 = lean_apply_3(x_3, x_12, x_13, x_17);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Std_PersistentHashMap_insert___rarg(x_1, x_2, x_7, x_12, x_18);
x_5 = x_11;
x_7 = x_19;
goto _start;
}
}
case 1:
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_9, 0);
lean_inc(x_21);
lean_dec(x_9);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_22 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg(x_1, x_2, x_3, x_21, x_7);
lean_dec(x_21);
x_5 = x_11;
x_7 = x_22;
goto _start;
}
default: 
{
x_5 = x_11;
goto _start;
}
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg___boxed), 7, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg___boxed), 6, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_7, x_7);
if (x_10 == 0)
{
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_13 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg(x_1, x_2, x_3, x_6, x_11, x_12, x_5);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge_loop___spec__2___rarg___lambda__1), 6, 3);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg(x_16, x_14, x_15, lean_box(0), x_17, x_5);
return x_18;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_merge___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg(x_1, x_2, x_5, x_4, x_3);
lean_dec(x_4);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg(x_1, x_2, x_5, x_3, x_4);
lean_dec(x_3);
return x_10;
}
}
}
lean_object* l_Std_PersistentHashMap_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_merge___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__3___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Std_PersistentHashMap_merge___spec__7___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Std_PersistentHashMap_merge___spec__8___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Std_PersistentHashMap_merge___spec__6___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_foldlM___at_Std_PersistentHashMap_merge___spec__5___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__1___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe_match__2___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
x_11 = lean_box_usize(x_5);
x_12 = lean_box_usize(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_4);
lean_closure_set(x_13, 5, x_12);
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_array_push(x_2, x_14);
x_17 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg(x_1, x_16, x_3, x_7, x_15);
x_18 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_17, x_13);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_apply_2(x_20, lean_box(0), x_7);
return x_21;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___boxed), 7, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
lean_inc(x_3);
lean_inc(x_2);
x_11 = lean_apply_3(x_3, x_7, x_2, x_10);
x_12 = lean_box_usize(x_5);
x_13 = lean_box_usize(x_6);
x_14 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_3);
lean_closure_set(x_14, 4, x_4);
lean_closure_set(x_14, 5, x_13);
x_15 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_11, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_apply_2(x_17, lean_box(0), x_7);
return x_18;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___boxed), 7, 0);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_5);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_6, x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, lean_box(0), x_5);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg(x_2, x_3, x_4, x_1, x_16, x_17, x_5);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_get_size(x_6);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg___lambda__1), 5, 4);
lean_closure_set(x_12, 0, x_7);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_3);
if (x_11 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, lean_box(0), x_4);
x_16 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_15, x_12);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_9, x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_apply_2(x_19, lean_box(0), x_4);
x_21 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_20, x_12);
return x_21;
}
else
{
size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = 0;
x_23 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_24 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg(x_1, x_2, x_3, x_6, x_22, x_23, x_4);
x_25 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_24, x_12);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg), 5, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___lambda__1(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__1___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___lambda__1(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_foldMUnsafe___spec__2___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_2(x_7, lean_box(0), x_4);
return x_8;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldM___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldM___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_DiscrTree_Trie_foldM___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_fold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_fold(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_fold___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__4___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_Trie_fold___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_Trie_fold___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_fold___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_fold___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
x_10 = lean_box_usize(x_4);
x_11 = lean_box_usize(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_3);
lean_closure_set(x_12, 4, x_11);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_16 = lean_array_push(x_15, x_13);
x_17 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg(x_1, x_16, x_2, x_6, x_14);
x_18 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_17, x_12);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg(x_1, x_2, x_19, x_6);
x_21 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_20, x_12);
return x_21;
}
default: 
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_apply_2(x_23, lean_box(0), x_6);
x_25 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_24, x_12);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_apply_2(x_27, lean_box(0), x_6);
return x_28;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___boxed), 6, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg(x_2, lean_box(0), x_3, x_4, x_5, lean_box(0), x_8, x_6);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_4);
x_10 = lean_nat_dec_lt(x_7, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_array_fget(x_4, x_7);
x_15 = lean_array_fget(x_5, x_7);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_3);
x_17 = lean_apply_3(x_3, x_8, x_14, x_15);
x_18 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_18, 0, x_7);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_3);
lean_closure_set(x_18, 3, x_4);
lean_closure_set(x_18, 4, x_5);
x_19 = lean_apply_4(x_16, lean_box(0), lean_box(0), x_17, x_18);
return x_19;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg), 8, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_7 = lean_array_push(x_6, x_4);
x_8 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___rarg(x_1, x_7, x_2, x_3, x_5);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_4);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_6, x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, lean_box(0), x_4);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg(x_1, x_2, x_5, x_16, x_17, x_4);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg___lambda__1), 5, 2);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg(x_1, lean_box(0), x_21, x_19, x_20, lean_box(0), x_22, x_4);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_foldM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_foldM___spec__2___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_foldM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_foldM___spec__1___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_foldM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_foldM___spec__1___rarg(x_1, x_2, x_4, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_foldM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_foldM___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_foldM___spec__4___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_fold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_fold(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_fold___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__4___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_fold___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_fold___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_fold___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_fold___spec__7___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_fold___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_fold___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DiscrTree_fold___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_merge_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insertCore___rarg___boxed), 4, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_merge_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_merge_loop___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__4___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge_loop___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge_loop___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge_loop___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge_loop___spec__7___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge_loop___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_DiscrTree_merge_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DiscrTree_merge_loop___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_merge___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insertCore___rarg___boxed), 4, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg(x_7, x_3, x_2);
lean_dec(x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insertCore___rarg___boxed), 4, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg(x_9, x_2, x_3);
lean_dec(x_2);
return x_10;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_merge(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_merge___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__4___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__7___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__11___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__12___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__13___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__14___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_merge___spec__10___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_merge___spec__17___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_merge___spec__18___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_merge___spec__16___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_merge___spec__15___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_array_push(x_1, x_3);
return x_4;
}
}
static lean_object* _init_l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___closed__1;
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg(x_4, x_3, x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___boxed), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_values___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_values___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_DiscrTree_values___rarg___closed__1;
x_3 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_values(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_values___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__4___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_values___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_values___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_values___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_values___spec__7___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_values___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DiscrTree_values___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_array_push(x_1, x_4);
return x_5;
}
}
static lean_object* _init_l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___lambda__1), 3, 0);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___closed__1;
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg(x_4, x_3, x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_DiscrTree_toArray___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_DiscrTree_values___rarg___closed__1;
x_3 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_toArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_toArray___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__2___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__3___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__4___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__5___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_DiscrTree_toArray___spec__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_toArray___spec__8___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_toArray___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_DiscrTree_toArray___spec__7___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_DiscrTree_toArray___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_DiscrTree_toArray___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = x_2 + x_7;
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_box(0);
x_11 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_4, x_9, x_10);
x_2 = x_8;
x_4 = x_11;
goto _start;
}
case 1:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
lean_dec(x_6);
x_14 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2(x_13, x_4);
lean_dec(x_13);
x_2 = x_8;
x_4 = x_14;
goto _start;
}
default: 
{
x_2 = x_8;
goto _start;
}
}
}
else
{
return x_4;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_1, x_2, x_4);
return x_5;
}
}
static lean_object* _init_l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___lambda__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__3(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___closed__1;
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg(x_13, x_11, x_12, lean_box(0), x_14, x_2);
return x_15;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_apply_3(x_2, x_6, x_1, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
x_4 = x_11;
x_6 = x_9;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_array_uget(x_3, x_4);
x_9 = 1;
x_10 = x_4 + x_9;
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_1);
x_13 = lean_array_push(x_1, x_11);
lean_inc(x_2);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(x_13, x_2, x_6, x_12);
lean_dec(x_12);
x_4 = x_10;
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_array_get_size(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_lt(x_8, x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_7);
x_10 = lean_array_get_size(x_6);
x_11 = lean_nat_dec_lt(x_8, x_10);
if (x_11 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_10, x_10);
if (x_12 == 0)
{
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__6(x_1, x_2, x_6, x_13, x_14, x_3);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_7, x_7);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = lean_array_get_size(x_6);
x_18 = lean_nat_dec_lt(x_8, x_17);
if (x_18 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_17, x_17);
if (x_19 == 0)
{
lean_dec(x_17);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__7(x_1, x_2, x_6, x_20, x_21, x_3);
return x_22;
}
}
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_7);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__8(x_1, x_2, x_5, x_23, x_24, x_3);
x_26 = lean_array_get_size(x_6);
x_27 = lean_nat_dec_lt(x_8, x_26);
if (x_27 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_26, x_26);
if (x_28 == 0)
{
lean_dec(x_26);
lean_dec(x_2);
lean_dec(x_1);
return x_25;
}
else
{
size_t x_29; lean_object* x_30; 
x_29 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__9(x_1, x_2, x_6, x_23, x_29, x_25);
return x_30;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = 1;
x_9 = x_3 + x_8;
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_13 = lean_array_push(x_12, x_10);
lean_inc(x_1);
x_14 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(x_13, x_1, x_5, x_11);
lean_dec(x_11);
x_3 = x_9;
x_5 = x_14;
goto _start;
}
case 1:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
lean_inc(x_1);
x_17 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11(x_1, x_16, x_5);
lean_dec(x_16);
x_3 = x_9;
x_5 = x_17;
goto _start;
}
default: 
{
x_3 = x_9;
goto _start;
}
}
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_11 = lean_apply_3(x_1, x_6, x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_13;
x_6 = x_11;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1;
x_6 = lean_array_push(x_5, x_3);
x_7 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(x_6, x_1, x_2, x_4);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__12(x_1, x_4, x_9, x_10, x_3);
return x_11;
}
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___lambda__1___boxed), 4, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg(x_14, x_12, x_13, lean_box(0), x_15, x_3);
return x_16;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11(x_1, x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemmas_merge___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1___boxed), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_SimpLemmas_merge(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
x_7 = lean_nat_dec_lt(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_nat_dec_lt(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
x_17 = lean_nat_dec_lt(x_15, x_16);
lean_dec(x_16);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 3);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
x_22 = lean_nat_dec_lt(x_20, x_21);
lean_dec(x_21);
lean_dec(x_20);
x_23 = lean_ctor_get(x_1, 4);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_ctor_get(x_2, 4);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
x_27 = lean_nat_dec_lt(x_25, x_26);
lean_dec(x_26);
lean_dec(x_25);
if (x_7 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = l_Lean_Meta_SimpLemmas_merge___closed__1;
x_61 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(x_60, x_4, x_3);
lean_dec(x_4);
x_28 = x_61;
goto block_59;
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = l_Lean_Meta_SimpLemmas_merge___closed__1;
x_63 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(x_62, x_3, x_4);
lean_dec(x_3);
x_28 = x_63;
goto block_59;
}
block_59:
{
lean_object* x_29; lean_object* x_42; 
if (x_12 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = l_Lean_Meta_SimpLemmas_merge___closed__1;
x_56 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(x_55, x_9, x_8);
lean_dec(x_9);
if (x_17 == 0)
{
x_29 = x_56;
goto block_41;
}
else
{
x_42 = x_56;
goto block_54;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = l_Lean_Meta_SimpLemmas_merge___closed__1;
x_58 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(x_57, x_8, x_9);
lean_dec(x_8);
if (x_17 == 0)
{
x_29 = x_58;
goto block_41;
}
else
{
x_42 = x_58;
goto block_54;
}
}
block_41:
{
lean_object* x_30; 
x_30 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_14, x_13);
lean_dec(x_14);
if (x_22 == 0)
{
lean_object* x_31; 
x_31 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_19, x_18);
lean_dec(x_19);
if (x_27 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_24, x_23);
lean_dec(x_24);
x_33 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_29);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_31);
lean_ctor_set(x_33, 4, x_32);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_23, x_24);
lean_dec(x_23);
x_35 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_35, 0, x_28);
lean_ctor_set(x_35, 1, x_29);
lean_ctor_set(x_35, 2, x_30);
lean_ctor_set(x_35, 3, x_31);
lean_ctor_set(x_35, 4, x_34);
return x_35;
}
}
else
{
lean_object* x_36; 
x_36 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_18, x_19);
lean_dec(x_18);
if (x_27 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_24, x_23);
lean_dec(x_24);
x_38 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 2, x_30);
lean_ctor_set(x_38, 3, x_36);
lean_ctor_set(x_38, 4, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_23, x_24);
lean_dec(x_23);
x_40 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_29);
lean_ctor_set(x_40, 2, x_30);
lean_ctor_set(x_40, 3, x_36);
lean_ctor_set(x_40, 4, x_39);
return x_40;
}
}
}
block_54:
{
lean_object* x_43; 
x_43 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_13, x_14);
lean_dec(x_13);
if (x_22 == 0)
{
lean_object* x_44; 
x_44 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_19, x_18);
lean_dec(x_19);
if (x_27 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_24, x_23);
lean_dec(x_24);
x_46 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_46, 0, x_28);
lean_ctor_set(x_46, 1, x_42);
lean_ctor_set(x_46, 2, x_43);
lean_ctor_set(x_46, 3, x_44);
lean_ctor_set(x_46, 4, x_45);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_23, x_24);
lean_dec(x_23);
x_48 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_48, 0, x_28);
lean_ctor_set(x_48, 1, x_42);
lean_ctor_set(x_48, 2, x_43);
lean_ctor_set(x_48, 3, x_44);
lean_ctor_set(x_48, 4, x_47);
return x_48;
}
}
else
{
lean_object* x_49; 
x_49 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_18, x_19);
lean_dec(x_18);
if (x_27 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_24, x_23);
lean_dec(x_24);
x_51 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_51, 0, x_28);
lean_ctor_set(x_51, 1, x_42);
lean_ctor_set(x_51, 2, x_43);
lean_ctor_set(x_51, 3, x_49);
lean_ctor_set(x_51, 4, x_50);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_23, x_24);
lean_dec(x_23);
x_53 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_53, 0, x_28);
lean_ctor_set(x_53, 1, x_42);
lean_ctor_set(x_53, 2, x_43);
lean_ctor_set(x_53, 3, x_49);
lean_ctor_set(x_53, 4, x_52);
return x_53;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__6(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__7(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__8(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__9(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_DiscrTree_Trie_foldMUnsafe___at_Lean_Meta_SimpLemmas_merge___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_merge___spec__12(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_SimpLemmas_merge___spec__13___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__11(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_SimpLemmas_merge___spec__10(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SimpLemmas_addSimpEntry_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l_Lean_Meta_SimpLemmas_addSimpEntry_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SimpLemmas_addSimpEntry_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SimpLemmas_addSimpEntry(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_Lean_Meta_addSimpLemmaEntry(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Meta_SimpLemmas_addDeclToUnfold(x_1, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_copyMVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getMVarDecl(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_8, sizeof(void*)*6);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_8, 5);
lean_inc(x_15);
lean_dec(x_8);
x_16 = l_Lean_Meta_mkFreshExprMVarAt(x_10, x_11, x_12, x_13, x_14, x_15, x_2, x_3, x_4, x_5, x_9);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = l_Lean_Expr_mvarId_x21(x_18);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = l_Lean_Expr_mvarId_x21(x_20);
lean_dec(x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_7);
if (x_24 == 0)
{
return x_7;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_7, 0);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_7);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Meta_copyMVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_copyMVar(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_BinomialHeap_removeMin___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Std_BinomialHeapImp_head_x3f___rarg(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = l_Std_BinomialHeapImp_tail___rarg(x_1, x_2);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Std_BinomialHeapImp_tail___rarg(x_1, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
lean_object* l_Std_BinomialHeap_removeMin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_BinomialHeap_removeMin___rarg), 2, 0);
return x_2;
}
}
lean_object* l_MonadStateOf_ofLens_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_MonadStateOf_ofLens_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_MonadStateOf_ofLens___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_2, x_3);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_MonadStateOf_ofLens___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* l_MonadStateOf_ofLens___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens___rarg___lambda__2), 3, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_2(x_5, lean_box(0), x_4);
return x_6;
}
}
lean_object* l_MonadStateOf_ofLens___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_apply_1(x_2, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 1);
x_9 = lean_apply_2(x_3, x_8, x_4);
lean_ctor_set(x_6, 1, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = lean_apply_2(x_3, x_11, x_4);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
lean_object* l_MonadStateOf_ofLens___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens___rarg___lambda__4), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_5);
lean_closure_set(x_7, 2, x_3);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_MonadStateOf_ofLens___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
lean_inc(x_2);
lean_inc(x_4);
x_9 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens___rarg___lambda__3), 3, 2);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens___rarg___lambda__5), 5, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
lean_object* l_MonadStateOf_ofLens(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_MonadStateOf_ofLens___rarg), 4, 0);
return x_4;
}
}
lean_object* l_setThe___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_apply_1(x_3, x_2);
return x_4;
}
}
lean_object* l_setThe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_setThe___rarg), 2, 0);
return x_3;
}
}
lean_object* l_ST_Ref_modifyMUnsafe___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_apply_1(x_1, x_5);
x_7 = lean_alloc_closure((void*)(l_ST_Ref_set___rarg), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_3);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_ST_Ref_modifyMUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_ST_Prim_Ref_take___boxed), 4, 3);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_4);
lean_inc(x_2);
x_8 = lean_apply_2(x_2, lean_box(0), x_7);
lean_inc(x_6);
x_9 = lean_alloc_closure((void*)(l_ST_Ref_modifyMUnsafe___rarg___lambda__1), 5, 4);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_6);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_ST_Ref_modifyMUnsafe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ST_Ref_modifyMUnsafe___rarg), 5, 0);
return x_3;
}
}
lean_object* l_ST_Ref_modifyM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_7, 0, lean_box(0));
lean_closure_set(x_7, 1, lean_box(0));
lean_closure_set(x_7, 2, x_4);
lean_inc(x_2);
x_8 = lean_apply_2(x_2, lean_box(0), x_7);
lean_inc(x_6);
x_9 = lean_alloc_closure((void*)(l_ST_Ref_modifyMUnsafe___rarg___lambda__1), 5, 4);
lean_closure_set(x_9, 0, x_5);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_6);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_ST_Ref_modifyM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ST_Ref_modifyM___rarg), 5, 0);
return x_3;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_ST_Ref_modifyGetMUnsafe_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetMUnsafe_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, lean_box(0), x_2);
return x_6;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_closure((void*)(l_ST_Prim_Ref_set___boxed), 5, 4);
lean_closure_set(x_8, 0, lean_box(0));
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_1);
lean_closure_set(x_8, 3, x_7);
x_9 = lean_apply_2(x_2, lean_box(0), x_8);
x_10 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetMUnsafe___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_6);
x_11 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_6);
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetMUnsafe___rarg___lambda__2), 5, 4);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_3);
lean_closure_set(x_8, 2, x_4);
lean_closure_set(x_8, 3, x_5);
x_9 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_ST_Prim_Ref_take___boxed), 4, 3);
lean_closure_set(x_8, 0, lean_box(0));
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_5);
lean_inc(x_2);
x_9 = lean_apply_2(x_2, lean_box(0), x_8);
lean_inc(x_7);
x_10 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetMUnsafe___rarg___lambda__3), 6, 5);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_7);
x_11 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetMUnsafe___rarg), 6, 0);
return x_3;
}
}
lean_object* l_ST_Ref_modifyGetMUnsafe___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ST_Ref_modifyGetMUnsafe___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_ST_Ref_modifyGetM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_5);
x_8 = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(x_8, 0, lean_box(0));
lean_closure_set(x_8, 1, lean_box(0));
lean_closure_set(x_8, 2, x_5);
lean_inc(x_2);
x_9 = lean_apply_2(x_2, lean_box(0), x_8);
lean_inc(x_7);
x_10 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetMUnsafe___rarg___lambda__3), 6, 5);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_1);
lean_closure_set(x_10, 4, x_7);
x_11 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_ST_Ref_modifyGetM(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ST_Ref_modifyGetM___rarg), 6, 0);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Message(lean_object*);
lean_object* initialize_Lean_Meta_DiscrTree(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpLemmas(lean_object*);
lean_object* initialize_Std_Data_BinomialHeap(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Aesop_Util(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_SimpLemmas(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_BinomialHeap(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_joinSep_match__1___rarg___closed__1 = _init_l_String_joinSep_match__1___rarg___closed__1();
lean_mark_persistent(l_String_joinSep_match__1___rarg___closed__1);
l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1 = _init_l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__1();
l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2 = _init_l_List_filterAux___at_Std_Format_indentDUnlinesSkipEmpty___spec__1___closed__2();
l_Lean_MessageData_unlines___closed__1 = _init_l_Lean_MessageData_unlines___closed__1();
lean_mark_persistent(l_Lean_MessageData_unlines___closed__1);
l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1 = _init_l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1();
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_Meta_DiscrTree_foldM___spec__3___rarg___closed__1);
l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___closed__1 = _init_l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___closed__1();
lean_mark_persistent(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_values___spec__6___at_Lean_Meta_DiscrTree_values___spec__10___rarg___closed__1);
l_Lean_Meta_DiscrTree_values___rarg___closed__1 = _init_l_Lean_Meta_DiscrTree_values___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_DiscrTree_values___rarg___closed__1);
l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___closed__1 = _init_l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___closed__1();
lean_mark_persistent(l_Std_PersistentHashMap_foldlM___at_Lean_Meta_DiscrTree_toArray___spec__6___at_Lean_Meta_DiscrTree_toArray___spec__10___rarg___closed__1);
l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___closed__1 = _init_l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___closed__1();
lean_mark_persistent(l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_SimpLemmas_merge___spec__2___closed__1);
l_Lean_Meta_SimpLemmas_merge___closed__1 = _init_l_Lean_Meta_SimpLemmas_merge___closed__1();
lean_mark_persistent(l_Lean_Meta_SimpLemmas_merge___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
