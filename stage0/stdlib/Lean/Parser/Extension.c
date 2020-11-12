// Lean compiler output
// Module: Lean.Parser.Extension
// Imports: Init Lean.Parser.Basic Lean.Parser.StrInterpolation Lean.KeyedDeclsAttribute
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
lean_object* l_Lean_Parser_declareLeadingBuiltinParser___closed__2;
lean_object* l_Lean_Parser_builtinTokenTable;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens_match__1(lean_object*);
lean_object* l_List_map___at_Lean_Parser_addLeadingParser___spec__1(lean_object*);
extern lean_object* l_Std_RBTree_toList___rarg___closed__1;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__1(lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_Name_getString_x21___closed__3;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareLeadingBuiltinParser___closed__1;
lean_object* l_Std_PersistentHashMap_containsAtAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingIdentAsSymbol___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByTermToken___closed__1;
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserContext(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_sepByInfo(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__2___boxed(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder_match__1(lean_object*);
lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__4;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4;
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1428____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Parser_addParserTokens___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
extern lean_object* l_Lean_Parser_charLit;
lean_object* l_Lean_Parser_mkParserOfConstantAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig_match__1(lean_object*);
lean_object* l_Lean_Parser_registerBuiltinParserAttribute___closed__1;
lean_object* l_Lean_Parser_parserExtension___elambda__1___boxed(lean_object*);
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable___boxed(lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__1(lean_object*);
extern lean_object* l_Lean_registerInternalExceptionId___closed__2;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__2(lean_object*);
lean_object* l_Lean_Parser_addParser(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_categoryParserFnRef;
lean_object* l_Lean_Parser_compileParserDescr_visit_match__1(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserExtension___elambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__4;
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_4____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addLeadingParser_match__2___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_Parser_builtinParserCategoriesRef;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__3;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__2;
lean_object* l_Lean_Parser_parserExtension;
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_parserExtension___closed__2;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getParserPriority_match__2(lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserExtensionState_newEntries___default;
lean_object* l_Lean_Parser_registerParserAliasCore(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__6;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__2;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__1;
lean_object* l_Lean_Parser_declareBuiltinParser___closed__3;
lean_object* l_Lean_Parser_notFollowedByCommandToken___closed__1;
lean_object* l_Lean_Parser_orelseFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_37____closed__3;
lean_object* l_Lean_getConstInfo___at_Lean_registerInitAttrUnsafe___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkInputContext(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addBuiltinParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addBuiltinParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Parser_addLeadingParser___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___kind_term____x40_Init_Notation___hyg_3____closed__14;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__1;
extern lean_object* l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_runParserAttributeHooks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__4;
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__2(lean_object*);
lean_object* l_Lean_Parser_notFollowedByCommandToken___closed__2;
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
uint8_t l_Std_PersistentHashMap_contains___at_Lean_Parser_isValidSyntaxNodeKind___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserExtension___elambda__4___rarg(lean_object*);
lean_object* l_Lean_Parser_declareBuiltinParser___closed__1;
lean_object* l_Lean_Parser_categoryParserFnImpl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__1;
lean_object* l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Parser_getSyntaxNodeKinds___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_22____spec__1(lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_isParserCategory___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareBuiltinParser___closed__2;
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__1;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__4;
lean_object* l_Lean_Parser_addTrailingParser_match__1(lean_object*);
lean_object* l_Lean_Parser_parserExtension___closed__1;
uint8_t l_Lean_NameMap_contains___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Lean_Parser_getParserPriority_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__3(lean_object*);
lean_object* l_Lean_Parser_mkCategoryAntiquotParser(lean_object*);
lean_object* l_Lean_Parser_Lean_Parser_Extension___instance__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addParserCategory(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_many1Fn(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Parser_getCategory___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareBuiltinParser_match__1(lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__2;
lean_object* l_Lean_Name_toStringWithSep(lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserExtension___closed__3;
lean_object* l_Lean_Parser_parserExtension___elambda__2___boxed(lean_object*);
lean_object* l_Lean_Parser_declareTrailingBuiltinParser___closed__1;
lean_object* l_Lean_Parser_parserExtension___closed__5;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__2(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__8;
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined(lean_object*);
uint8_t l_Lean_Parser_leadingIdentAsSymbol(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Parser_getSyntaxNodeKinds___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__1;
lean_object* l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(lean_object*);
lean_object* l_Lean_Parser_getParserPriority_match__1(lean_object*);
lean_object* l_Lean_Parser_setCategoryParserFnRef(lean_object*);
lean_object* l_Lean_Parser_throwUnknownParserCategory(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1;
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1812____spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_containsAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareTrailingBuiltinParser___closed__2;
lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
lean_object* l_Lean_Parser_getParserAlias___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addSyntaxNodeKind(lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__1(lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__2;
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__8;
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___boxed(lean_object*);
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_lookaheadFn(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_insertAux___rarg___closed__3;
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Parser_categoryParserFnImpl___closed__1;
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Parser_getCategory___spec__2(lean_object*, size_t, lean_object*);
uint8_t l_Std_PersistentHashMap_containsAtAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareBuiltinParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
extern lean_object* l_Lean_KeyedDeclsAttribute_declareBuiltin___rarg___closed__6;
lean_object* l_Lean_Parser_categoryParserFnImpl___closed__2;
lean_object* l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind;
lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object*, uint8_t);
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__9;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__1;
lean_object* l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe(lean_object*);
lean_object* l_Lean_registerAttributeOfBuilder(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser(lean_object*);
lean_object* l_Lean_Parser_notFollowedByTermToken___closed__2;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__2;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1812_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1428_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_98_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_49_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_4_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_22_(lean_object*);
lean_object* l_Std_PersistentHashMap_containsAtAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_getSyntaxNodeKinds___spec__3(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Parser_addParser_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Trie_Lean_Data_Trie___instance__1___closed__1;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
uint8_t l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1(lean_object*, lean_object*);
lean_object* l_List_foldl___at___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserExtension___closed__4;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
lean_object* l_Lean_Parser_optionaInfo(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__2;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_peekToken(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_nameLit;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2;
lean_object* l_Lean_Parser_mkParserOfConstantAux___rarg(lean_object*);
lean_object* l_Lean_Parser_parserExtension___elambda__4(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__4(lean_object*);
lean_object* l_Lean_Parser_throwUnknownParserCategory___rarg(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__7;
lean_object* l_Lean_Parser_compileParserDescr_visit_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addLeadingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__2(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toExprAux(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
size_t l_Lean_Name_hash(lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addToken(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__1;
lean_object* l_Lean_Parser_categoryParserFnImpl___closed__4;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__1(lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryToken(lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__3;
lean_object* l_Lean_Parser_registerBuiltinParserAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit_match__3(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserAliasesRef;
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__2;
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(lean_object*, lean_object*);
lean_object* l_List_foldl___at___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__2;
lean_object* l_Lean_Parser_mkParserAttributeImpl___closed__1;
extern lean_object* l_Lean_choiceKind;
extern lean_object* l_Lean_charLitKind;
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Init_Data_Repr___instance__15___closed__1;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Parser_getCategory___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__1;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__2;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_eval_const(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserAttributeImpl(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__5;
extern lean_object* l_Lean_Parser_ParserState_mkEOIError___closed__1;
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareTrailingBuiltinParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setCategoryParserFnRef___closed__1;
lean_object* l_Lean_Parser_addParserTokens(lean_object*, lean_object*);
extern lean_object* l_Lean_Environment_evalConstCheck___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserExtension___elambda__2(lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* l_Lean_Parser_interpolatedStr(lean_object*);
lean_object* l_Lean_Parser_getAlias(lean_object*);
lean_object* l_Lean_Parser_addParserCategory___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3;
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Trie_insert_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getCategory___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Parser_runParserAttributeHooks___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingIdentAsSymbol_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_getSyntaxNodeKinds___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getParserPriority___closed__4;
lean_object* l_Lean_Parser_categoryParserFnImpl_match__1(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__1;
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Parser_addParser_match__1(lean_object*);
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_mkCategoryAntiquotParserFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getParserPriority___closed__2;
uint8_t l_Std_PersistentHashMap_containsAtAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_isValidSyntaxNodeKind___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__2;
extern lean_object* l_Lean_registerAttributeImplBuilder___closed__2;
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias(lean_object*);
lean_object* l_List_foldl___at_Lean_Parser_addLeadingParser___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Parser_addTrailingParser(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerTagAttribute___lambda__6___closed__2;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Parser_trailingNodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__5;
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_Parser_parserExtension___elambda__4___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__6;
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6(lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getParserPriority___closed__1;
lean_object* l_Lean_ParametricAttribute_setParam___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1___boxed(lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1Info(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__3;
lean_object* l_Lean_Parser_categoryParserFnImpl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getParserAlias(lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareLeadingBuiltinParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGeFn(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerParserCategory(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_identKind;
lean_object* l_Lean_Parser_getAlias___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_trailingLoop(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__3;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
extern lean_object* l_Lean_Parser_numLit;
uint8_t l_Std_PersistentHashMap_containsAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__2;
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_List_forM___at_Lean_Parser_runParserAttributeHooks___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
extern lean_object* l_Lean_registerTagAttribute___lambda__5___closed__2;
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__3;
extern lean_object* l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg(lean_object*);
extern lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2;
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__2(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__1;
uint8_t l_Lean_Syntax_hasArgs(lean_object*);
lean_object* l_Lean_Parser_tryFn(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_isParserCategory(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withPosition___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__2;
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_98____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParserFnImpl___closed__3;
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1;
lean_object* l_Lean_Environment_addAndCompile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_containsAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__2(lean_object*, size_t, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_37____closed__4;
lean_object* l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_runParserCategory(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__3;
lean_object* l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addLeadingParser_match__1(lean_object*);
lean_object* l_Lean_Parser_symbolInfo(lean_object*);
lean_object* l_Lean_Parser_parserAttributeHooks;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__3;
lean_object* l_Lean_Parser_notFollowedByTermToken;
lean_object* l_Lean_Parser_addTrailingParser_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingIdentAsSymbol_match__1(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__1___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_regularInitAttr;
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__5;
lean_object* l_Lean_Parser_getParserPriority(lean_object*);
lean_object* l_Lean_Parser_builtinSyntaxNodeKindSetRef;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__5;
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinNodeKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState___boxed(lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Parser_getCategory___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_declareBuiltinParser_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___closed__1;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_runParserAttributeHooks(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByCommandToken;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__6;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1;
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_match__1(lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_Parser_leadingParserAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___closed__1;
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserExtensionState_categories___default;
lean_object* l_Lean_Parser_optionalFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_TokenMap_insert___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_EnvExtensionInterfaceUnsafe_Lean_Environment___instance__6___closed__2;
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__2___rarg(lean_object*, lean_object*, lean_object*);
extern size_t l_Std_PersistentHashMap_insertAux___rarg___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_37____closed__1;
lean_object* lean_st_ref_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__1;
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserOfConstant(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__2;
lean_object* l_Lean_Parser_compileParserDescr_visit_match__3___rarg___boxed(lean_object**);
lean_object* lean_io_initializing(lean_object*);
lean_object* l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parserExtension___elambda__1(lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Parser_getSyntaxNodeKinds(lean_object*);
lean_object* l_Lean_Parser_addBuiltinTrailingParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_addParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_match__1(lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit___closed__7;
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGtFn(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyFn(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_addLeadingParser_match__2(lean_object*);
lean_object* l_Lean_Parser_getParserPriority___closed__3;
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__3(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAlias___rarg___closed__2;
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2;
lean_object* l_Lean_Parser_ParserExtensionState_kinds___default;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_Lean_Parser_getParserPriority___closed__5;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__1;
extern lean_object* l_Lean_Parser_mkAntiquot___closed__8;
extern lean_object* l_Lean_Init_Prelude___instance__74___closed__1;
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addLeadingParser_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__1;
lean_object* l_Lean_registerAttributeImplBuilder(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_getSyntaxNodeKinds___boxed(lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__1;
lean_object* l_IO_ofExcept___at_Lean_KeyedDeclsAttribute_declareBuiltin___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_containsAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getParserPriority_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_addParser_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__6;
lean_object* l_Lean_Parser_getAlias___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_IO_Error_Init_System_IOError___instance__3___closed__1;
extern lean_object* l_Lean_Parser_Lean_Parser_Basic___instance__14___closed__1;
lean_object* l_Lean_Parser_Trie_find_x3f_loop___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getCategory(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2;
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserExtensionState_tokens___default;
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_compileParserDescr_visit_match__2(lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1;
lean_object* l_Lean_Parser_parserExtension___elambda__3(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__2;
lean_object* l_Std_PersistentHashMap_contains___at_Lean_Parser_isValidSyntaxNodeKind___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerParserCategory___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4;
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Lean_Parser_Extension___instance__1___closed__1;
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_4____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_Trie_Lean_Data_Trie___instance__1___closed__1;
x_3 = l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_4____spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_22____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_22_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
x_3 = l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_22____spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_registerBuiltinNodeKind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_3 = l_Lean_Parser_builtinSyntaxNodeKindSetRef;
x_4 = lean_st_ref_take(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_5, x_1, x_7);
x_9 = lean_st_ref_set(x_3, x_8, x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_49_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_2 = l_Lean_choiceKind;
x_3 = l_Lean_Parser_registerBuiltinNodeKind(x_2, x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_identKind;
x_6 = l_Lean_Parser_registerBuiltinNodeKind(x_5, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_strLitKind;
x_9 = l_Lean_Parser_registerBuiltinNodeKind(x_8, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_numLitKind;
x_12 = l_Lean_Parser_registerBuiltinNodeKind(x_11, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_charLitKind;
x_15 = l_Lean_Parser_registerBuiltinNodeKind(x_14, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_nameLitKind;
x_18 = l_Lean_Parser_registerBuiltinNodeKind(x_17, x_16);
return x_18;
}
}
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_98____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_98_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
x_3 = l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_98____spec__1(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("parser category '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has already been defined");
return x_1;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_System_FilePath_dirName___closed__1;
x_3 = l_Lean_Name_toStringWithSep(x_2, x_1);
x_4 = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__1;
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__2;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg), 1, 0);
return x_2;
}
}
uint8_t l_Std_PersistentHashMap_containsAtAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
uint8_t l_Std_PersistentHashMap_containsAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Std_PersistentHashMap_containsAtAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__3(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
uint8_t l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_containsAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_19 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_6, x_16, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_18;
x_6 = x_19;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__7(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = x_85 <= x_3;
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_93 = l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6(x_3, x_90, x_91, lean_box(0), x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__7(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = x_99 <= x_3;
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Std_PersistentHashMap_insertAux___rarg___closed__3;
x_107 = l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6(x_3, x_104, x_105, lean_box(0), x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = 1;
x_9 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = l_Lean_Name_hash(x_2);
x_15 = 1;
x_16 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_1);
x_4 = l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1(x_1, x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_3);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg(x_2);
return x_7;
}
}
}
lean_object* l_Std_PersistentHashMap_containsAtAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Std_PersistentHashMap_containsAtAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_containsAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_containsAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Lean_Parser_builtinParserCategoriesRef;
x_5 = lean_st_ref_get(x_4, x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Parser_Lean_Parser_Basic___instance__14___closed__1;
x_9 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_2);
x_10 = l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(x_6, x_1, x_9);
x_11 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_10, x_7);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_set(x_4, x_12, x_13);
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
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
return x_11;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_11);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(x_1, x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_ParserExtensionState_tokens___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Trie_Lean_Data_Trie___instance__1___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ParserExtensionState_kinds___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ParserExtensionState_categories___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ParserExtensionState_newEntries___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Lean_Parser_Extension___instance__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_Trie_Lean_Data_Trie___instance__1___closed__1;
x_3 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
x_4 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_3);
lean_ctor_set(x_4, 3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Lean_Parser_Extension___instance__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Lean_Parser_Extension___instance__1___closed__1;
return x_1;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_2 = l_Lean_Parser_builtinTokenTable;
x_3 = lean_st_ref_get(x_2, x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Parser_builtinSyntaxNodeKindSetRef;
x_7 = lean_st_ref_get(x_6, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Parser_builtinParserCategoriesRef;
x_11 = lean_st_ref_get(x_10, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_15, 2, x_13);
lean_ctor_set(x_15, 3, x_14);
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
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_19, 0, x_4);
lean_ctor_set(x_19, 1, x_8);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid empty symbol");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Init_Prelude___instance__74___closed__1;
x_4 = lean_string_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_6 = l_Lean_Parser_Trie_find_x3f_loop___rarg(x_2, x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_2);
x_7 = l_Lean_Parser_Trie_insert_loop___rarg(x_2, x_2, x_1, x_5);
lean_dec(x_2);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_1);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__2;
return x_10;
}
}
}
static lean_object* _init_l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown parser category '");
return x_1;
}
}
lean_object* l_Lean_Parser_throwUnknownParserCategory___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_System_FilePath_dirName___closed__1;
x_3 = l_Lean_Name_toStringWithSep(x_2, x_1);
x_4 = l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1;
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = l_Init_Data_Repr___instance__15___closed__1;
x_7 = lean_string_append(x_5, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
lean_object* l_Lean_Parser_throwUnknownParserCategory(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_throwUnknownParserCategory___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Parser_getCategory___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Parser_getCategory___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Std_PersistentHashMap_findAtAux___at_Lean_Parser_getCategory___spec__3(x_20, x_21, lean_box(0), x_22, x_3);
lean_dec(x_21);
lean_dec(x_20);
return x_23;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Parser_getCategory___spec__2(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_Lean_Parser_getCategory(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Parser_getCategory___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Parser_getCategory___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Parser_getCategory___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Parser_getCategory___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_getCategory___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_getCategory(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_addLeadingParser_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Parser_addLeadingParser_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_addLeadingParser_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_addLeadingParser_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_addLeadingParser_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_addLeadingParser_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_map___at_Lean_Parser_addLeadingParser___spec__1(lean_object* x_1) {
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
x_6 = lean_box(0);
x_7 = lean_name_mk_string(x_6, x_4);
x_8 = l_List_map___at_Lean_Parser_addLeadingParser___spec__1(x_5);
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
x_11 = lean_box(0);
x_12 = lean_name_mk_string(x_11, x_9);
x_13 = l_List_map___at_Lean_Parser_addLeadingParser___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_List_foldl___at_Lean_Parser_addLeadingParser___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Lean_Parser_TokenMap_insert___rarg(x_8, x_5, x_9);
lean_ctor_set(x_3, 0, x_10);
x_4 = x_6;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
x_17 = l_Lean_Parser_TokenMap_insert___rarg(x_12, x_5, x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_15);
x_3 = x_18;
x_4 = x_6;
goto _start;
}
}
}
}
lean_object* l_List_foldl___at_Lean_Parser_addLeadingParser___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Lean_Parser_TokenMap_insert___rarg(x_8, x_5, x_9);
lean_ctor_set(x_3, 0, x_10);
x_4 = x_6;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
x_17 = l_Lean_Parser_TokenMap_insert___rarg(x_12, x_5, x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_14);
lean_ctor_set(x_18, 3, x_15);
x_3 = x_18;
x_4 = x_6;
goto _start;
}
}
}
}
lean_object* l_Lean_Parser_addLeadingParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_1);
x_6 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_1, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_7 = l_Lean_Parser_throwUnknownParserCategory___rarg(x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
switch (lean_obj_tag(x_9)) {
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_map___at_Lean_Parser_addLeadingParser___spec__1(x_11);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(x_12);
x_16 = l_List_foldl___at_Lean_Parser_addLeadingParser___spec__2(x_4, x_5, x_14, x_15);
lean_ctor_set(x_10, 0, x_16);
x_17 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get_uint8(x_10, sizeof(void*)*1);
lean_inc(x_19);
lean_dec(x_10);
x_21 = l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(x_12);
x_22 = l_List_foldl___at_Lean_Parser_addLeadingParser___spec__2(x_4, x_5, x_19, x_21);
x_23 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_20);
x_24 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
}
case 3:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_6, 0);
lean_inc(x_26);
lean_dec(x_6);
x_27 = lean_ctor_get(x_9, 0);
lean_inc(x_27);
lean_dec(x_9);
x_28 = l_List_map___at_Lean_Parser_addLeadingParser___spec__1(x_27);
x_29 = !lean_is_exclusive(x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_26, 0);
x_31 = l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(x_28);
x_32 = l_List_foldl___at_Lean_Parser_addLeadingParser___spec__3(x_4, x_5, x_30, x_31);
lean_ctor_set(x_26, 0, x_32);
x_33 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_26);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get_uint8(x_26, sizeof(void*)*1);
lean_inc(x_35);
lean_dec(x_26);
x_37 = l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(x_28);
x_38 = l_List_foldl___at_Lean_Parser_addLeadingParser___spec__3(x_4, x_5, x_35, x_37);
x_39 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set_uint8(x_39, sizeof(void*)*1, x_36);
x_40 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_39);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
}
default: 
{
lean_object* x_42; uint8_t x_43; 
lean_dec(x_9);
x_42 = lean_ctor_get(x_6, 0);
lean_inc(x_42);
lean_dec(x_6);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_44, 3);
lean_inc(x_47);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_4);
lean_ctor_set(x_48, 1, x_5);
x_49 = !lean_is_exclusive(x_44);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_44, 1);
x_51 = lean_ctor_get(x_44, 3);
lean_dec(x_51);
x_52 = lean_ctor_get(x_44, 2);
lean_dec(x_52);
x_53 = lean_ctor_get(x_44, 0);
lean_dec(x_53);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_50);
lean_ctor_set(x_44, 1, x_54);
x_55 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_42);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_44, 1);
lean_inc(x_57);
lean_dec(x_44);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_48);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_59, 0, x_45);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_46);
lean_ctor_set(x_59, 3, x_47);
lean_ctor_set(x_42, 0, x_59);
x_60 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_42);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
else
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_62 = lean_ctor_get(x_42, 0);
x_63 = lean_ctor_get_uint8(x_42, sizeof(void*)*1);
lean_inc(x_62);
lean_dec(x_42);
x_64 = lean_ctor_get(x_62, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_62, 2);
lean_inc(x_65);
x_66 = lean_ctor_get(x_62, 3);
lean_inc(x_66);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_4);
lean_ctor_set(x_67, 1, x_5);
x_68 = lean_ctor_get(x_62, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 lean_ctor_release(x_62, 2);
 lean_ctor_release(x_62, 3);
 x_69 = x_62;
} else {
 lean_dec_ref(x_62);
 x_69 = lean_box(0);
}
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
if (lean_is_scalar(x_69)) {
 x_71 = lean_alloc_ctor(0, 4, 0);
} else {
 x_71 = x_69;
}
lean_ctor_set(x_71, 0, x_64);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_71, 2, x_65);
lean_ctor_set(x_71, 3, x_66);
x_72 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set_uint8(x_72, sizeof(void*)*1, x_63);
x_73 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_72);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
return x_74;
}
}
}
}
}
}
lean_object* l_Lean_Parser_addLeadingParser___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_addLeadingParser(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_foldl___at___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Lean_Parser_TokenMap_insert___rarg(x_8, x_5, x_9);
lean_ctor_set(x_3, 2, x_10);
x_4 = x_6;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
x_17 = l_Lean_Parser_TokenMap_insert___rarg(x_14, x_5, x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_15);
x_3 = x_18;
x_4 = x_6;
goto _start;
}
}
}
}
lean_object* l_List_foldl___at___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_2);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Lean_Parser_TokenMap_insert___rarg(x_8, x_5, x_9);
lean_ctor_set(x_3, 2, x_10);
x_4 = x_6;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
x_14 = lean_ctor_get(x_3, 2);
x_15 = lean_ctor_get(x_3, 3);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
x_17 = l_Lean_Parser_TokenMap_insert___rarg(x_14, x_5, x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_13);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_15);
x_3 = x_18;
x_4 = x_6;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
switch (lean_obj_tag(x_5)) {
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_List_map___at_Lean_Parser_addLeadingParser___spec__1(x_6);
x_8 = l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(x_7);
x_9 = l_List_foldl___at___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux___spec__1(x_2, x_3, x_1, x_8);
return x_9;
}
case 3:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_List_map___at_Lean_Parser_addLeadingParser___spec__1(x_10);
x_12 = l_List_eraseDups___at_Lean_ResolveName_resolveGlobalName_loop___spec__1(x_11);
x_13 = l_List_foldl___at___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux___spec__2(x_2, x_3, x_1, x_12);
return x_13;
}
default: 
{
uint8_t x_14; 
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_1, 3);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_3);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_1, 3, x_17);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get(x_1, 2);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_3);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 2, x_20);
lean_ctor_set(x_24, 3, x_23);
return x_24;
}
}
}
}
}
lean_object* l_Lean_Parser_addTrailingParser_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_addTrailingParser_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_addTrailingParser_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_addTrailingParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_1, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_6 = l_Lean_Parser_throwUnknownParserCategory___rarg(x_2);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(x_9, x_3, x_4);
lean_ctor_set(x_7, 0, x_10);
x_11 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTrailingParserAux(x_13, x_3, x_4);
x_16 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_14);
x_17 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_1, x_2, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Parser_addParser_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
}
}
lean_object* l_Lean_Parser_addParser_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_addParser_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_addParser_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Parser_addParser_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Parser_addParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (x_4 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_Parser_addTrailingParser(x_1, x_2, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_Parser_addLeadingParser(x_1, x_2, x_3, x_5, x_6);
return x_8;
}
}
}
lean_object* l_Lean_Parser_addParser___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_4);
lean_dec(x_4);
x_8 = l_Lean_Parser_addParser(x_1, x_2, x_3, x_7, x_5, x_6);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_List_foldlM___at_Lean_Parser_addParserTokens___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(x_1, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
}
}
}
lean_object* l_Lean_Parser_addParserTokens(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
x_6 = l_List_foldlM___at_Lean_Parser_addParserTokens___spec__1(x_1, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid builtin parser '");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', ");
return x_1;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_Lean_Parser_builtinTokenTable;
x_5 = l_Lean_Parser_Trie_Lean_Data_Trie___instance__1___closed__1;
x_6 = lean_st_ref_swap(x_4, x_5, x_3);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_Lean_Parser_addParserTokens(x_8, x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_System_FilePath_dirName___closed__1;
x_13 = l_Lean_Name_toStringWithSep(x_12, x_2);
x_14 = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_17, x_11);
lean_dec(x_11);
x_19 = l_Lean_Init_Prelude___instance__74___closed__1;
x_20 = lean_string_append(x_18, x_19);
x_21 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_21);
return x_6;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_free_object(x_6);
lean_dec(x_2);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_st_ref_set(x_4, x_22, x_9);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_6, 0);
x_29 = lean_ctor_get(x_6, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_6);
x_30 = l_Lean_Parser_addParserTokens(x_28, x_1);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_System_FilePath_dirName___closed__1;
x_33 = l_Lean_Name_toStringWithSep(x_32, x_2);
x_34 = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1;
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2;
x_37 = lean_string_append(x_35, x_36);
x_38 = lean_string_append(x_37, x_31);
lean_dec(x_31);
x_39 = l_Lean_Init_Prelude___instance__74___closed__1;
x_40 = lean_string_append(x_38, x_39);
x_41 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_29);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_2);
x_43 = lean_ctor_get(x_30, 0);
lean_inc(x_43);
lean_dec(x_30);
x_44 = lean_st_ref_set(x_4, x_43, x_29);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_47 = x_44;
} else {
 lean_dec_ref(x_44);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
lean_object* l_Lean_Parser_addBuiltinParser(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = l_Lean_Parser_builtinParserCategoriesRef;
x_8 = lean_st_ref_get(x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_4);
x_11 = l_Lean_Parser_addParser(x_9, x_1, x_2, x_3, x_4, x_5);
x_12 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_11, x_10);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_set(x_7, x_13, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
lean_dec(x_4);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = l_Lean_Parser_builtinSyntaxNodeKindSetRef;
x_20 = lean_st_ref_take(x_19, x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_apply_1(x_18, x_21);
x_24 = lean_st_ref_set(x_19, x_23, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens(x_17, x_2, x_25);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_4);
lean_dec(x_2);
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
lean_object* l_Lean_Parser_addBuiltinParser___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_Parser_addBuiltinParser(x_1, x_2, x_7, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 1;
x_7 = l_Lean_Parser_addBuiltinParser(x_1, x_2, x_6, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_addBuiltinTrailingParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = 0;
x_7 = l_Lean_Parser_addBuiltinParser(x_1, x_2, x_6, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_12 = lean_box(x_11);
x_13 = lean_apply_2(x_4, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(x_16);
x_20 = lean_apply_5(x_5, x_14, x_15, x_19, x_17, x_18);
return x_20;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry_match__3___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Parser.Extension");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_private.Lean.Parser.Extension.0.Lean.Parser.ParserExtensionAddEntry");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1;
x_2 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2;
x_3 = lean_unsigned_to_nat(152u);
x_4 = lean_unsigned_to_nat(26u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1;
x_2 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2;
x_3 = lean_unsigned_to_nat(163u);
x_4 = lean_unsigned_to_nat(11u);
x_5 = l_Lean_Name_getString_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_9 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(x_5, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_10 = l_Lean_Parser_Lean_Parser_Extension___instance__1;
x_11 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3;
x_12 = lean_panic_fn(x_10, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_3);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_8);
lean_ctor_set(x_1, 3, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
x_18 = lean_ctor_get(x_1, 2);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_1);
lean_inc(x_3);
x_20 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(x_16, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_3);
x_21 = l_Lean_Parser_Lean_Parser_Extension___instance__1;
x_22 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3;
x_23 = lean_panic_fn(x_21, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_3);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_17);
lean_ctor_set(x_27, 2, x_18);
lean_ctor_set(x_27, 3, x_26);
return x_27;
}
}
}
case 1:
{
lean_object* x_28; uint8_t x_29; 
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_1);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_1, 1);
x_31 = lean_ctor_get(x_1, 3);
x_32 = lean_box(0);
lean_inc(x_28);
x_33 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_30, x_28, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_28);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_31);
lean_ctor_set(x_1, 3, x_35);
lean_ctor_set(x_1, 1, x_33);
return x_1;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_36 = lean_ctor_get(x_1, 0);
x_37 = lean_ctor_get(x_1, 1);
x_38 = lean_ctor_get(x_1, 2);
x_39 = lean_ctor_get(x_1, 3);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_1);
x_40 = lean_box(0);
lean_inc(x_28);
x_41 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_37, x_28, x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_28);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_39);
x_44 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_44, 0, x_36);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_38);
lean_ctor_set(x_44, 3, x_43);
return x_44;
}
}
case 2:
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_45 = lean_ctor_get(x_2, 0);
lean_inc(x_45);
x_46 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 2);
lean_inc(x_49);
x_50 = lean_ctor_get(x_1, 3);
lean_inc(x_50);
lean_inc(x_49);
x_51 = l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1(x_49, x_45);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_1);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_ctor_get(x_1, 3);
lean_dec(x_53);
x_54 = lean_ctor_get(x_1, 2);
lean_dec(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_dec(x_55);
x_56 = lean_ctor_get(x_1, 0);
lean_dec(x_56);
x_57 = l_Lean_Parser_Lean_Parser_Basic___instance__14___closed__1;
x_58 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_46);
lean_inc(x_45);
x_59 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_49, x_45, x_58);
x_60 = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(x_60, 0, x_45);
lean_ctor_set_uint8(x_60, sizeof(void*)*1, x_46);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_50);
lean_ctor_set(x_1, 3, x_61);
lean_ctor_set(x_1, 2, x_59);
return x_1;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_1);
x_62 = l_Lean_Parser_Lean_Parser_Basic___instance__14___closed__1;
x_63 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_46);
lean_inc(x_45);
x_64 = l_Std_PersistentHashMap_insert___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__4(x_49, x_45, x_63);
x_65 = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(x_65, 0, x_45);
lean_ctor_set_uint8(x_65, sizeof(void*)*1, x_46);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_50);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_47);
lean_ctor_set(x_67, 1, x_48);
lean_ctor_set(x_67, 2, x_64);
lean_ctor_set(x_67, 3, x_66);
return x_67;
}
}
else
{
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_45);
return x_1;
}
}
default: 
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_68 = lean_ctor_get(x_2, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_2, 1);
lean_inc(x_69);
x_70 = lean_ctor_get_uint8(x_2, sizeof(void*)*4);
x_71 = lean_ctor_get(x_2, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_2, 3);
lean_inc(x_72);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_1);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_1, 0);
x_75 = lean_ctor_get(x_1, 1);
x_76 = lean_ctor_get(x_1, 2);
x_77 = lean_ctor_get(x_1, 3);
lean_inc(x_72);
lean_inc(x_68);
x_78 = l_Lean_Parser_addParser(x_76, x_68, x_69, x_70, x_71, x_72);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_78);
lean_free_object(x_1);
lean_dec(x_77);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_72);
lean_dec(x_69);
lean_dec(x_68);
x_79 = l_Lean_Parser_Lean_Parser_Extension___instance__1;
x_80 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4;
x_81 = lean_panic_fn(x_79, x_80);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_78, 0);
lean_inc(x_82);
lean_dec(x_78);
x_83 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_83, 0, x_68);
lean_ctor_set(x_83, 1, x_69);
lean_ctor_set(x_83, 2, x_72);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_77);
lean_ctor_set(x_1, 3, x_84);
lean_ctor_set(x_1, 2, x_82);
return x_1;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_85 = lean_ctor_get(x_1, 0);
x_86 = lean_ctor_get(x_1, 1);
x_87 = lean_ctor_get(x_1, 2);
x_88 = lean_ctor_get(x_1, 3);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_1);
lean_inc(x_72);
lean_inc(x_68);
x_89 = l_Lean_Parser_addParser(x_87, x_68, x_69, x_70, x_71, x_72);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_72);
lean_dec(x_69);
lean_dec(x_68);
x_90 = l_Lean_Parser_Lean_Parser_Extension___instance__1;
x_91 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4;
x_92 = lean_panic_fn(x_90, x_91);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_89, 0);
lean_inc(x_93);
lean_dec(x_89);
x_94 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_94, 0, x_68);
lean_ctor_set(x_94, 1, x_69);
lean_ctor_set(x_94, 2, x_72);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_88);
x_96 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_96, 0, x_85);
lean_ctor_set(x_96, 1, x_86);
lean_ctor_set(x_96, 2, x_93);
lean_ctor_set(x_96, 3, x_95);
return x_96;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ParserDescr");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("TrailingParserDescr");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("TrailingParser");
return x_1;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
uint64_t x_12; lean_object* x_13; size_t x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_ctor_get_usize(x_7, 2);
x_15 = lean_ctor_get(x_7, 0);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_8);
if (x_16 == 0)
{
lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_8, 1);
x_18 = lean_ctor_get_usize(x_8, 2);
x_19 = lean_ctor_get(x_8, 0);
lean_dec(x_19);
x_20 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_21 = lean_string_dec_eq(x_17, x_20);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_22 = lean_apply_1(x_6, x_1);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_1, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_1, 0);
lean_dec(x_25);
x_26 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1;
x_27 = lean_string_dec_eq(x_13, x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
lean_dec(x_4);
x_28 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2;
x_29 = lean_string_dec_eq(x_13, x_28);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_5);
lean_ctor_set(x_8, 1, x_20);
x_30 = lean_apply_1(x_6, x_1);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_free_object(x_1);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_6);
x_31 = lean_box_uint64(x_12);
x_32 = lean_box_usize(x_18);
x_33 = lean_box_usize(x_14);
x_34 = lean_apply_4(x_5, x_10, x_31, x_32, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_free_object(x_1);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
x_35 = lean_box_uint64(x_12);
x_36 = lean_box_usize(x_18);
x_37 = lean_box_usize(x_14);
x_38 = lean_apply_4(x_4, x_10, x_35, x_36, x_37);
return x_38;
}
}
else
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_1);
x_39 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1;
x_40 = lean_string_dec_eq(x_13, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_4);
x_41 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2;
x_42 = lean_string_dec_eq(x_13, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_5);
lean_ctor_set(x_8, 1, x_20);
x_43 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_43, 0, x_7);
lean_ctor_set(x_43, 1, x_10);
lean_ctor_set_uint64(x_43, sizeof(void*)*2, x_12);
x_44 = lean_apply_1(x_6, x_43);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_6);
x_45 = lean_box_uint64(x_12);
x_46 = lean_box_usize(x_18);
x_47 = lean_box_usize(x_14);
x_48 = lean_apply_4(x_5, x_10, x_45, x_46, x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
x_49 = lean_box_uint64(x_12);
x_50 = lean_box_usize(x_18);
x_51 = lean_box_usize(x_14);
x_52 = lean_apply_4(x_4, x_10, x_49, x_50, x_51);
return x_52;
}
}
}
}
else
{
lean_object* x_53; size_t x_54; lean_object* x_55; uint8_t x_56; 
x_53 = lean_ctor_get(x_8, 1);
x_54 = lean_ctor_get_usize(x_8, 2);
lean_inc(x_53);
lean_dec(x_8);
x_55 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_56 = lean_string_dec_eq(x_53, x_55);
lean_dec(x_53);
if (x_56 == 0)
{
lean_object* x_57; 
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_57 = lean_apply_1(x_6, x_1);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_58 = x_1;
} else {
 lean_dec_ref(x_1);
 x_58 = lean_box(0);
}
x_59 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1;
x_60 = lean_string_dec_eq(x_13, x_59);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
lean_dec(x_4);
x_61 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2;
x_62 = lean_string_dec_eq(x_13, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_5);
x_63 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_63, 0, x_9);
lean_ctor_set(x_63, 1, x_55);
lean_ctor_set_usize(x_63, 2, x_54);
lean_ctor_set(x_7, 0, x_63);
if (lean_is_scalar(x_58)) {
 x_64 = lean_alloc_ctor(4, 2, 8);
} else {
 x_64 = x_58;
}
lean_ctor_set(x_64, 0, x_7);
lean_ctor_set(x_64, 1, x_10);
lean_ctor_set_uint64(x_64, sizeof(void*)*2, x_12);
x_65 = lean_apply_1(x_6, x_64);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_58);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_6);
x_66 = lean_box_uint64(x_12);
x_67 = lean_box_usize(x_54);
x_68 = lean_box_usize(x_14);
x_69 = lean_apply_4(x_5, x_10, x_66, x_67, x_68);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_58);
lean_free_object(x_7);
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
x_70 = lean_box_uint64(x_12);
x_71 = lean_box_usize(x_54);
x_72 = lean_box_usize(x_14);
x_73 = lean_apply_4(x_4, x_10, x_70, x_71, x_72);
return x_73;
}
}
}
}
else
{
uint64_t x_74; lean_object* x_75; size_t x_76; lean_object* x_77; size_t x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_74 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_75 = lean_ctor_get(x_7, 1);
x_76 = lean_ctor_get_usize(x_7, 2);
lean_inc(x_75);
lean_dec(x_7);
x_77 = lean_ctor_get(x_8, 1);
lean_inc(x_77);
x_78 = lean_ctor_get_usize(x_8, 2);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_79 = x_8;
} else {
 lean_dec_ref(x_8);
 x_79 = lean_box(0);
}
x_80 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_81 = lean_string_dec_eq(x_77, x_80);
lean_dec(x_77);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_79);
lean_dec(x_75);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
x_82 = lean_apply_1(x_6, x_1);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; uint8_t x_85; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_83 = x_1;
} else {
 lean_dec_ref(x_1);
 x_83 = lean_box(0);
}
x_84 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1;
x_85 = lean_string_dec_eq(x_75, x_84);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
lean_dec(x_4);
x_86 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2;
x_87 = lean_string_dec_eq(x_75, x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_5);
if (lean_is_scalar(x_79)) {
 x_88 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_88 = x_79;
}
lean_ctor_set(x_88, 0, x_9);
lean_ctor_set(x_88, 1, x_80);
lean_ctor_set_usize(x_88, 2, x_78);
x_89 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_75);
lean_ctor_set_usize(x_89, 2, x_76);
if (lean_is_scalar(x_83)) {
 x_90 = lean_alloc_ctor(4, 2, 8);
} else {
 x_90 = x_83;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_10);
lean_ctor_set_uint64(x_90, sizeof(void*)*2, x_74);
x_91 = lean_apply_1(x_6, x_90);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_83);
lean_dec(x_79);
lean_dec(x_75);
lean_dec(x_6);
x_92 = lean_box_uint64(x_74);
x_93 = lean_box_usize(x_78);
x_94 = lean_box_usize(x_76);
x_95 = lean_apply_4(x_5, x_10, x_92, x_93, x_94);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_83);
lean_dec(x_79);
lean_dec(x_75);
lean_dec(x_6);
lean_dec(x_5);
x_96 = lean_box_uint64(x_74);
x_97 = lean_box_usize(x_78);
x_98 = lean_box_usize(x_76);
x_99 = lean_apply_4(x_4, x_10, x_96, x_97, x_98);
return x_99;
}
}
}
}
case 1:
{
lean_object* x_100; 
lean_dec(x_5);
lean_dec(x_4);
x_100 = lean_ctor_get(x_9, 0);
lean_inc(x_100);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_1, 1);
lean_inc(x_101);
x_102 = !lean_is_exclusive(x_7);
if (x_102 == 0)
{
uint64_t x_103; lean_object* x_104; size_t x_105; lean_object* x_106; uint8_t x_107; 
x_103 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_104 = lean_ctor_get(x_7, 1);
x_105 = lean_ctor_get_usize(x_7, 2);
x_106 = lean_ctor_get(x_7, 0);
lean_dec(x_106);
x_107 = !lean_is_exclusive(x_8);
if (x_107 == 0)
{
lean_object* x_108; size_t x_109; lean_object* x_110; uint8_t x_111; 
x_108 = lean_ctor_get(x_8, 1);
x_109 = lean_ctor_get_usize(x_8, 2);
x_110 = lean_ctor_get(x_8, 0);
lean_dec(x_110);
x_111 = !lean_is_exclusive(x_9);
if (x_111 == 0)
{
lean_object* x_112; size_t x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_112 = lean_ctor_get(x_9, 1);
x_113 = lean_ctor_get_usize(x_9, 2);
x_114 = lean_ctor_get(x_9, 0);
lean_dec(x_114);
x_115 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_116 = lean_string_dec_eq(x_112, x_115);
lean_dec(x_112);
if (x_116 == 0)
{
lean_object* x_117; 
lean_free_object(x_9);
lean_free_object(x_8);
lean_dec(x_108);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_101);
lean_dec(x_3);
lean_dec(x_2);
x_117 = lean_apply_1(x_6, x_1);
return x_117;
}
else
{
uint8_t x_118; 
x_118 = !lean_is_exclusive(x_1);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_119 = lean_ctor_get(x_1, 1);
lean_dec(x_119);
x_120 = lean_ctor_get(x_1, 0);
lean_dec(x_120);
x_121 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_122 = lean_string_dec_eq(x_108, x_121);
if (x_122 == 0)
{
lean_object* x_123; 
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_9, 1, x_115);
x_123 = lean_apply_1(x_6, x_1);
return x_123;
}
else
{
lean_object* x_124; uint8_t x_125; 
lean_dec(x_108);
x_124 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_125 = lean_string_dec_eq(x_104, x_124);
if (x_125 == 0)
{
uint8_t x_126; 
lean_dec(x_2);
x_126 = lean_string_dec_eq(x_104, x_121);
if (x_126 == 0)
{
lean_object* x_127; 
lean_dec(x_3);
lean_ctor_set(x_9, 1, x_115);
lean_ctor_set(x_8, 1, x_121);
x_127 = lean_apply_1(x_6, x_1);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
lean_free_object(x_1);
lean_free_object(x_9);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
x_128 = lean_box_uint64(x_103);
x_129 = lean_box_usize(x_113);
x_130 = lean_box_usize(x_109);
x_131 = lean_box_usize(x_105);
x_132 = lean_apply_5(x_3, x_101, x_128, x_129, x_130, x_131);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_free_object(x_1);
lean_free_object(x_9);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
lean_dec(x_3);
x_133 = lean_box_uint64(x_103);
x_134 = lean_box_usize(x_113);
x_135 = lean_box_usize(x_109);
x_136 = lean_box_usize(x_105);
x_137 = lean_apply_5(x_2, x_101, x_133, x_134, x_135, x_136);
return x_137;
}
}
}
else
{
lean_object* x_138; uint8_t x_139; 
lean_dec(x_1);
x_138 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_139 = lean_string_dec_eq(x_108, x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_9, 1, x_115);
x_140 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_140, 0, x_7);
lean_ctor_set(x_140, 1, x_101);
lean_ctor_set_uint64(x_140, sizeof(void*)*2, x_103);
x_141 = lean_apply_1(x_6, x_140);
return x_141;
}
else
{
lean_object* x_142; uint8_t x_143; 
lean_dec(x_108);
x_142 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_143 = lean_string_dec_eq(x_104, x_142);
if (x_143 == 0)
{
uint8_t x_144; 
lean_dec(x_2);
x_144 = lean_string_dec_eq(x_104, x_138);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_3);
lean_ctor_set(x_9, 1, x_115);
lean_ctor_set(x_8, 1, x_138);
x_145 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_145, 0, x_7);
lean_ctor_set(x_145, 1, x_101);
lean_ctor_set_uint64(x_145, sizeof(void*)*2, x_103);
x_146 = lean_apply_1(x_6, x_145);
return x_146;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_free_object(x_9);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
x_147 = lean_box_uint64(x_103);
x_148 = lean_box_usize(x_113);
x_149 = lean_box_usize(x_109);
x_150 = lean_box_usize(x_105);
x_151 = lean_apply_5(x_3, x_101, x_147, x_148, x_149, x_150);
return x_151;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_free_object(x_9);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
lean_dec(x_3);
x_152 = lean_box_uint64(x_103);
x_153 = lean_box_usize(x_113);
x_154 = lean_box_usize(x_109);
x_155 = lean_box_usize(x_105);
x_156 = lean_apply_5(x_2, x_101, x_152, x_153, x_154, x_155);
return x_156;
}
}
}
}
}
else
{
lean_object* x_157; size_t x_158; lean_object* x_159; uint8_t x_160; 
x_157 = lean_ctor_get(x_9, 1);
x_158 = lean_ctor_get_usize(x_9, 2);
lean_inc(x_157);
lean_dec(x_9);
x_159 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_160 = lean_string_dec_eq(x_157, x_159);
lean_dec(x_157);
if (x_160 == 0)
{
lean_object* x_161; 
lean_free_object(x_8);
lean_dec(x_108);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_101);
lean_dec(x_3);
lean_dec(x_2);
x_161 = lean_apply_1(x_6, x_1);
return x_161;
}
else
{
lean_object* x_162; lean_object* x_163; uint8_t x_164; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_162 = x_1;
} else {
 lean_dec_ref(x_1);
 x_162 = lean_box(0);
}
x_163 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_164 = lean_string_dec_eq(x_108, x_163);
if (x_164 == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_3);
lean_dec(x_2);
x_165 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_165, 0, x_100);
lean_ctor_set(x_165, 1, x_159);
lean_ctor_set_usize(x_165, 2, x_158);
lean_ctor_set(x_8, 0, x_165);
if (lean_is_scalar(x_162)) {
 x_166 = lean_alloc_ctor(4, 2, 8);
} else {
 x_166 = x_162;
}
lean_ctor_set(x_166, 0, x_7);
lean_ctor_set(x_166, 1, x_101);
lean_ctor_set_uint64(x_166, sizeof(void*)*2, x_103);
x_167 = lean_apply_1(x_6, x_166);
return x_167;
}
else
{
lean_object* x_168; uint8_t x_169; 
lean_dec(x_108);
x_168 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_169 = lean_string_dec_eq(x_104, x_168);
if (x_169 == 0)
{
uint8_t x_170; 
lean_dec(x_2);
x_170 = lean_string_dec_eq(x_104, x_163);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_3);
x_171 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_171, 0, x_100);
lean_ctor_set(x_171, 1, x_159);
lean_ctor_set_usize(x_171, 2, x_158);
lean_ctor_set(x_8, 1, x_163);
lean_ctor_set(x_8, 0, x_171);
if (lean_is_scalar(x_162)) {
 x_172 = lean_alloc_ctor(4, 2, 8);
} else {
 x_172 = x_162;
}
lean_ctor_set(x_172, 0, x_7);
lean_ctor_set(x_172, 1, x_101);
lean_ctor_set_uint64(x_172, sizeof(void*)*2, x_103);
x_173 = lean_apply_1(x_6, x_172);
return x_173;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_162);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
x_174 = lean_box_uint64(x_103);
x_175 = lean_box_usize(x_158);
x_176 = lean_box_usize(x_109);
x_177 = lean_box_usize(x_105);
x_178 = lean_apply_5(x_3, x_101, x_174, x_175, x_176, x_177);
return x_178;
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_162);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
lean_dec(x_3);
x_179 = lean_box_uint64(x_103);
x_180 = lean_box_usize(x_158);
x_181 = lean_box_usize(x_109);
x_182 = lean_box_usize(x_105);
x_183 = lean_apply_5(x_2, x_101, x_179, x_180, x_181, x_182);
return x_183;
}
}
}
}
}
else
{
lean_object* x_184; size_t x_185; lean_object* x_186; size_t x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_184 = lean_ctor_get(x_8, 1);
x_185 = lean_ctor_get_usize(x_8, 2);
lean_inc(x_184);
lean_dec(x_8);
x_186 = lean_ctor_get(x_9, 1);
lean_inc(x_186);
x_187 = lean_ctor_get_usize(x_9, 2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_188 = x_9;
} else {
 lean_dec_ref(x_9);
 x_188 = lean_box(0);
}
x_189 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_190 = lean_string_dec_eq(x_186, x_189);
lean_dec(x_186);
if (x_190 == 0)
{
lean_object* x_191; 
lean_dec(x_188);
lean_dec(x_184);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_101);
lean_dec(x_3);
lean_dec(x_2);
x_191 = lean_apply_1(x_6, x_1);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; uint8_t x_194; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_192 = x_1;
} else {
 lean_dec_ref(x_1);
 x_192 = lean_box(0);
}
x_193 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_194 = lean_string_dec_eq(x_184, x_193);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_188)) {
 x_195 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_195 = x_188;
}
lean_ctor_set(x_195, 0, x_100);
lean_ctor_set(x_195, 1, x_189);
lean_ctor_set_usize(x_195, 2, x_187);
x_196 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_184);
lean_ctor_set_usize(x_196, 2, x_185);
lean_ctor_set(x_7, 0, x_196);
if (lean_is_scalar(x_192)) {
 x_197 = lean_alloc_ctor(4, 2, 8);
} else {
 x_197 = x_192;
}
lean_ctor_set(x_197, 0, x_7);
lean_ctor_set(x_197, 1, x_101);
lean_ctor_set_uint64(x_197, sizeof(void*)*2, x_103);
x_198 = lean_apply_1(x_6, x_197);
return x_198;
}
else
{
lean_object* x_199; uint8_t x_200; 
lean_dec(x_184);
x_199 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_200 = lean_string_dec_eq(x_104, x_199);
if (x_200 == 0)
{
uint8_t x_201; 
lean_dec(x_2);
x_201 = lean_string_dec_eq(x_104, x_193);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec(x_3);
if (lean_is_scalar(x_188)) {
 x_202 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_202 = x_188;
}
lean_ctor_set(x_202, 0, x_100);
lean_ctor_set(x_202, 1, x_189);
lean_ctor_set_usize(x_202, 2, x_187);
x_203 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_193);
lean_ctor_set_usize(x_203, 2, x_185);
lean_ctor_set(x_7, 0, x_203);
if (lean_is_scalar(x_192)) {
 x_204 = lean_alloc_ctor(4, 2, 8);
} else {
 x_204 = x_192;
}
lean_ctor_set(x_204, 0, x_7);
lean_ctor_set(x_204, 1, x_101);
lean_ctor_set_uint64(x_204, sizeof(void*)*2, x_103);
x_205 = lean_apply_1(x_6, x_204);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_192);
lean_dec(x_188);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
x_206 = lean_box_uint64(x_103);
x_207 = lean_box_usize(x_187);
x_208 = lean_box_usize(x_185);
x_209 = lean_box_usize(x_105);
x_210 = lean_apply_5(x_3, x_101, x_206, x_207, x_208, x_209);
return x_210;
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_192);
lean_dec(x_188);
lean_free_object(x_7);
lean_dec(x_104);
lean_dec(x_6);
lean_dec(x_3);
x_211 = lean_box_uint64(x_103);
x_212 = lean_box_usize(x_187);
x_213 = lean_box_usize(x_185);
x_214 = lean_box_usize(x_105);
x_215 = lean_apply_5(x_2, x_101, x_211, x_212, x_213, x_214);
return x_215;
}
}
}
}
}
else
{
uint64_t x_216; lean_object* x_217; size_t x_218; lean_object* x_219; size_t x_220; lean_object* x_221; lean_object* x_222; size_t x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
x_216 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_217 = lean_ctor_get(x_7, 1);
x_218 = lean_ctor_get_usize(x_7, 2);
lean_inc(x_217);
lean_dec(x_7);
x_219 = lean_ctor_get(x_8, 1);
lean_inc(x_219);
x_220 = lean_ctor_get_usize(x_8, 2);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_221 = x_8;
} else {
 lean_dec_ref(x_8);
 x_221 = lean_box(0);
}
x_222 = lean_ctor_get(x_9, 1);
lean_inc(x_222);
x_223 = lean_ctor_get_usize(x_9, 2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_224 = x_9;
} else {
 lean_dec_ref(x_9);
 x_224 = lean_box(0);
}
x_225 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_226 = lean_string_dec_eq(x_222, x_225);
lean_dec(x_222);
if (x_226 == 0)
{
lean_object* x_227; 
lean_dec(x_224);
lean_dec(x_221);
lean_dec(x_219);
lean_dec(x_217);
lean_dec(x_101);
lean_dec(x_3);
lean_dec(x_2);
x_227 = lean_apply_1(x_6, x_1);
return x_227;
}
else
{
lean_object* x_228; lean_object* x_229; uint8_t x_230; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_228 = x_1;
} else {
 lean_dec_ref(x_1);
 x_228 = lean_box(0);
}
x_229 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_230 = lean_string_dec_eq(x_219, x_229);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_224)) {
 x_231 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_231 = x_224;
}
lean_ctor_set(x_231, 0, x_100);
lean_ctor_set(x_231, 1, x_225);
lean_ctor_set_usize(x_231, 2, x_223);
if (lean_is_scalar(x_221)) {
 x_232 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_232 = x_221;
}
lean_ctor_set(x_232, 0, x_231);
lean_ctor_set(x_232, 1, x_219);
lean_ctor_set_usize(x_232, 2, x_220);
x_233 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_217);
lean_ctor_set_usize(x_233, 2, x_218);
if (lean_is_scalar(x_228)) {
 x_234 = lean_alloc_ctor(4, 2, 8);
} else {
 x_234 = x_228;
}
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_101);
lean_ctor_set_uint64(x_234, sizeof(void*)*2, x_216);
x_235 = lean_apply_1(x_6, x_234);
return x_235;
}
else
{
lean_object* x_236; uint8_t x_237; 
lean_dec(x_219);
x_236 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_237 = lean_string_dec_eq(x_217, x_236);
if (x_237 == 0)
{
uint8_t x_238; 
lean_dec(x_2);
x_238 = lean_string_dec_eq(x_217, x_229);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_3);
if (lean_is_scalar(x_224)) {
 x_239 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_239 = x_224;
}
lean_ctor_set(x_239, 0, x_100);
lean_ctor_set(x_239, 1, x_225);
lean_ctor_set_usize(x_239, 2, x_223);
if (lean_is_scalar(x_221)) {
 x_240 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_240 = x_221;
}
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_229);
lean_ctor_set_usize(x_240, 2, x_220);
x_241 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_217);
lean_ctor_set_usize(x_241, 2, x_218);
if (lean_is_scalar(x_228)) {
 x_242 = lean_alloc_ctor(4, 2, 8);
} else {
 x_242 = x_228;
}
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_101);
lean_ctor_set_uint64(x_242, sizeof(void*)*2, x_216);
x_243 = lean_apply_1(x_6, x_242);
return x_243;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_228);
lean_dec(x_224);
lean_dec(x_221);
lean_dec(x_217);
lean_dec(x_6);
x_244 = lean_box_uint64(x_216);
x_245 = lean_box_usize(x_223);
x_246 = lean_box_usize(x_220);
x_247 = lean_box_usize(x_218);
x_248 = lean_apply_5(x_3, x_101, x_244, x_245, x_246, x_247);
return x_248;
}
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_228);
lean_dec(x_224);
lean_dec(x_221);
lean_dec(x_217);
lean_dec(x_6);
lean_dec(x_3);
x_249 = lean_box_uint64(x_216);
x_250 = lean_box_usize(x_223);
x_251 = lean_box_usize(x_220);
x_252 = lean_box_usize(x_218);
x_253 = lean_apply_5(x_2, x_101, x_249, x_250, x_251, x_252);
return x_253;
}
}
}
}
}
else
{
lean_object* x_254; 
lean_dec(x_100);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_254 = lean_apply_1(x_6, x_1);
return x_254;
}
}
default: 
{
lean_object* x_255; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_255 = lean_apply_1(x_6, x_1);
return x_255;
}
}
}
else
{
lean_object* x_256; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_256 = lean_apply_1(x_6, x_1);
return x_256;
}
}
else
{
lean_object* x_257; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_257 = lean_apply_1(x_6, x_1);
return x_257;
}
}
else
{
lean_object* x_258; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_258 = lean_apply_1(x_6, x_1);
return x_258;
}
}
}
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_mkParserOfConstantUnsafe_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
static lean_object* _init_l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected parser type at '");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' (`ParserDescr`, `TrailingParserDescr`, `Parser` or `TrailingParser` expected");
return x_1;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_environment_find(x_5, x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_8 = l_System_FilePath_dirName___closed__1;
x_9 = l_Lean_Name_toStringWithSep(x_8, x_1);
x_10 = l_Lean_Environment_evalConstCheck___rarg___closed__1;
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = l_Init_Data_Repr___instance__15___closed__1;
x_13 = lean_string_append(x_11, x_12);
x_14 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 0);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l_Lean_ConstantInfo_type(x_16);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 1)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 1)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
switch (lean_obj_tag(x_20)) {
case 0:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_24 = lean_string_dec_eq(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_21);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_25 = l_System_FilePath_dirName___closed__1;
x_26 = l_Lean_Name_toStringWithSep(x_25, x_1);
x_27 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_30 = lean_string_append(x_28, x_29);
x_31 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_4);
return x_32;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1;
x_34 = lean_string_dec_eq(x_21, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2;
x_36 = lean_string_dec_eq(x_21, x_35);
lean_dec(x_21);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_37 = l_System_FilePath_dirName___closed__1;
x_38 = l_Lean_Name_toStringWithSep(x_37, x_1);
x_39 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_40 = lean_string_append(x_39, x_38);
lean_dec(x_38);
x_41 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_42 = lean_string_append(x_40, x_41);
x_43 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_4);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_eval_const(x_5, x_6, x_1);
lean_dec(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_46 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__1(x_45, x_4);
lean_dec(x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_apply_3(x_2, x_47, x_3, x_48);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = 0;
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
lean_ctor_set(x_49, 0, x_54);
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_49, 0);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_49);
x_57 = 0;
x_58 = lean_box(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_55);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_56);
return x_60;
}
}
else
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_49);
if (x_61 == 0)
{
return x_49;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_49, 0);
x_63 = lean_ctor_get(x_49, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_49);
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
lean_dec(x_3);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_46);
if (x_65 == 0)
{
return x_46;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_46, 0);
x_67 = lean_ctor_get(x_46, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_46);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_21);
x_69 = lean_eval_const(x_5, x_6, x_1);
lean_dec(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_70 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__2(x_69, x_4);
lean_dec(x_69);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_apply_3(x_2, x_71, x_3, x_72);
if (lean_obj_tag(x_73) == 0)
{
uint8_t x_74; 
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_73, 0);
x_76 = 1;
x_77 = lean_box(x_76);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
lean_ctor_set(x_73, 0, x_78);
return x_73;
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_73, 0);
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_73);
x_81 = 1;
x_82 = lean_box(x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_79);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_80);
return x_84;
}
}
else
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_73);
if (x_85 == 0)
{
return x_73;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_73, 0);
x_87 = lean_ctor_get(x_73, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_73);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_70);
if (x_89 == 0)
{
return x_70;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_70, 0);
x_91 = lean_ctor_get(x_70, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_70);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
}
case 1:
{
lean_object* x_93; 
lean_dec(x_3);
lean_dec(x_2);
x_93 = lean_ctor_get(x_20, 0);
lean_inc(x_93);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_18, 1);
lean_inc(x_94);
lean_dec(x_18);
x_95 = lean_ctor_get(x_19, 1);
lean_inc(x_95);
lean_dec(x_19);
x_96 = lean_ctor_get(x_20, 1);
lean_inc(x_96);
lean_dec(x_20);
x_97 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_98 = lean_string_dec_eq(x_96, x_97);
lean_dec(x_96);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_6);
lean_dec(x_5);
x_99 = l_System_FilePath_dirName___closed__1;
x_100 = l_Lean_Name_toStringWithSep(x_99, x_1);
x_101 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_102 = lean_string_append(x_101, x_100);
lean_dec(x_100);
x_103 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_104 = lean_string_append(x_102, x_103);
x_105 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_4);
return x_106;
}
else
{
lean_object* x_107; uint8_t x_108; 
x_107 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_108 = lean_string_dec_eq(x_95, x_107);
lean_dec(x_95);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec(x_94);
lean_dec(x_6);
lean_dec(x_5);
x_109 = l_System_FilePath_dirName___closed__1;
x_110 = l_Lean_Name_toStringWithSep(x_109, x_1);
x_111 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_112 = lean_string_append(x_111, x_110);
lean_dec(x_110);
x_113 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_114 = lean_string_append(x_112, x_113);
x_115 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_115, 0, x_114);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_4);
return x_116;
}
else
{
lean_object* x_117; uint8_t x_118; 
x_117 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_118 = lean_string_dec_eq(x_94, x_117);
if (x_118 == 0)
{
uint8_t x_119; 
x_119 = lean_string_dec_eq(x_94, x_107);
lean_dec(x_94);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_6);
lean_dec(x_5);
x_120 = l_System_FilePath_dirName___closed__1;
x_121 = l_Lean_Name_toStringWithSep(x_120, x_1);
x_122 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_123 = lean_string_append(x_122, x_121);
lean_dec(x_121);
x_124 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_125 = lean_string_append(x_123, x_124);
x_126 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_4);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_eval_const(x_5, x_6, x_1);
lean_dec(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_129 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3(x_128, x_4);
lean_dec(x_128);
if (lean_obj_tag(x_129) == 0)
{
uint8_t x_130; 
x_130 = !lean_is_exclusive(x_129);
if (x_130 == 0)
{
lean_object* x_131; uint8_t x_132; lean_object* x_133; lean_object* x_134; 
x_131 = lean_ctor_get(x_129, 0);
x_132 = 1;
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_131);
lean_ctor_set(x_129, 0, x_134);
return x_129;
}
else
{
lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_135 = lean_ctor_get(x_129, 0);
x_136 = lean_ctor_get(x_129, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_129);
x_137 = 1;
x_138 = lean_box(x_137);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_135);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_136);
return x_140;
}
}
else
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_129);
if (x_141 == 0)
{
return x_129;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_129, 0);
x_143 = lean_ctor_get(x_129, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_129);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_94);
x_145 = lean_eval_const(x_5, x_6, x_1);
lean_dec(x_1);
lean_dec(x_6);
lean_dec(x_5);
x_146 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3(x_145, x_4);
lean_dec(x_145);
if (lean_obj_tag(x_146) == 0)
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_146);
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; lean_object* x_150; lean_object* x_151; 
x_148 = lean_ctor_get(x_146, 0);
x_149 = 0;
x_150 = lean_box(x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_148);
lean_ctor_set(x_146, 0, x_151);
return x_146;
}
else
{
lean_object* x_152; lean_object* x_153; uint8_t x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_152 = lean_ctor_get(x_146, 0);
x_153 = lean_ctor_get(x_146, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_146);
x_154 = 0;
x_155 = lean_box(x_154);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_152);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_153);
return x_157;
}
}
else
{
uint8_t x_158; 
x_158 = !lean_is_exclusive(x_146);
if (x_158 == 0)
{
return x_146;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_146, 0);
x_160 = lean_ctor_get(x_146, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_146);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
}
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_93);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
x_162 = l_System_FilePath_dirName___closed__1;
x_163 = l_Lean_Name_toStringWithSep(x_162, x_1);
x_164 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_165 = lean_string_append(x_164, x_163);
lean_dec(x_163);
x_166 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_167 = lean_string_append(x_165, x_166);
x_168 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_168, 0, x_167);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_4);
return x_169;
}
}
default: 
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_170 = l_System_FilePath_dirName___closed__1;
x_171 = l_Lean_Name_toStringWithSep(x_170, x_1);
x_172 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_173 = lean_string_append(x_172, x_171);
lean_dec(x_171);
x_174 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_175 = lean_string_append(x_173, x_174);
x_176 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_4);
return x_177;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_178 = l_System_FilePath_dirName___closed__1;
x_179 = l_Lean_Name_toStringWithSep(x_178, x_1);
x_180 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_181 = lean_string_append(x_180, x_179);
lean_dec(x_179);
x_182 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_183 = lean_string_append(x_181, x_182);
x_184 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_184, 0, x_183);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_4);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_186 = l_System_FilePath_dirName___closed__1;
x_187 = l_Lean_Name_toStringWithSep(x_186, x_1);
x_188 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_189 = lean_string_append(x_188, x_187);
lean_dec(x_187);
x_190 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_191 = lean_string_append(x_189, x_190);
x_192 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_192, 0, x_191);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_4);
return x_193;
}
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_194 = l_System_FilePath_dirName___closed__1;
x_195 = l_Lean_Name_toStringWithSep(x_194, x_1);
x_196 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_197 = lean_string_append(x_196, x_195);
lean_dec(x_195);
x_198 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2;
x_199 = lean_string_append(x_197, x_198);
x_200 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_200, 0, x_199);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_4);
return x_201;
}
}
}
}
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_mkParserOfConstantUnsafe___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantUnsafe___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_mkParserOfConstantUnsafe(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantAux___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_IO_Error_Init_System_IOError___instance__3___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkParserOfConstantAux___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_mkParserOfConstantAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_mkParserOfConstantAux(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_6 = lean_st_ref_take(x_1, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_7, x_2, x_3);
x_10 = lean_st_ref_set(x_1, x_9, x_8);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
static lean_object* _init_l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("alias '");
return x_1;
}
}
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_st_ref_get(x_1, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_Lean_NameMap_contains___rarg(x_8, x_2);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_free_object(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_Parser_registerAlias___rarg___lambda__1(x_1, x_2, x_3, x_11, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_13 = l_System_FilePath_dirName___closed__1;
x_14 = l_Lean_Name_toStringWithSep(x_13, x_2);
x_15 = l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1;
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = l_Lean_registerAttributeImplBuilder___closed__2;
x_18 = lean_string_append(x_16, x_17);
x_19 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_19);
return x_6;
}
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_6, 0);
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_6);
x_22 = l_Lean_NameMap_contains___rarg(x_20, x_2);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_box(0);
x_24 = l_Lean_Parser_registerAlias___rarg___lambda__1(x_1, x_2, x_3, x_23, x_21);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_3);
x_25 = l_System_FilePath_dirName___closed__1;
x_26 = l_Lean_Name_toStringWithSep(x_25, x_2);
x_27 = l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = l_Lean_registerAttributeImplBuilder___closed__2;
x_30 = lean_string_append(x_28, x_29);
x_31 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_21);
return x_32;
}
}
}
}
static lean_object* _init_l_Lean_Parser_registerAlias___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("aliases can only be registered during initialization");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_registerAlias___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_registerAlias___rarg___closed__1;
x_2 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_registerAlias___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_io_initializing(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_dec(x_9);
x_10 = l_Lean_Parser_registerAlias___rarg___closed__2;
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_10);
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_dec(x_5);
x_12 = l_Lean_Parser_registerAlias___rarg___closed__2;
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_5, 1);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_Lean_Parser_registerAlias___rarg___lambda__2(x_1, x_2, x_3, x_15, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_5);
if (x_17 == 0)
{
return x_5;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Parser_registerAlias(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_registerAlias___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_registerAlias___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_registerAlias___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_registerAlias___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_registerAlias___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_registerAlias___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_getAlias___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_st_ref_get(x_1, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg(x_6, x_2);
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_7);
return x_4;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_4);
x_10 = l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg(x_8, x_2);
lean_dec(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Parser_getAlias(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_getAlias___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_Parser_getAlias___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_getAlias___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_getAlias___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1428____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1428_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1428____spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_registerParserAliasCore(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Parser_parserAliasesRef;
x_5 = l_Lean_Parser_registerAlias___rarg(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Parser_getParserAlias(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_parserAliasesRef;
x_4 = l_Lean_Parser_getAlias___rarg(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_getParserAlias___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_getParserAlias(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_compileParserDescr_visit_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Parser_compileParserDescr_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_compileParserDescr_visit_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_compileParserDescr_visit_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_compileParserDescr_visit_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_compileParserDescr_visit_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_compileParserDescr_visit_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
lean_dec(x_1);
x_29 = lean_apply_2(x_2, x_27, x_28);
return x_29;
}
case 1:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_apply_2(x_3, x_30, x_31);
return x_32;
}
case 2:
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_apply_1(x_4, x_33);
return x_34;
}
case 3:
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
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
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
lean_dec(x_1);
x_36 = lean_apply_1(x_5, x_35);
return x_36;
}
case 4:
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = lean_ctor_get(x_1, 0);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_apply_1(x_6, x_37);
return x_38;
}
case 5:
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_apply_1(x_8, x_39);
return x_40;
}
case 6:
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_apply_1(x_9, x_41);
return x_42;
}
case 7:
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
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
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
x_45 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_46 = lean_box(x_45);
x_47 = lean_apply_3(x_10, x_43, x_44, x_46);
return x_47;
}
case 8:
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
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
lean_dec(x_2);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_51 = lean_box(x_50);
x_52 = lean_apply_3(x_11, x_48, x_49, x_51);
return x_52;
}
case 9:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
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
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 2);
lean_inc(x_55);
lean_dec(x_1);
x_56 = lean_apply_3(x_12, x_53, x_54, x_55);
return x_56;
}
case 10:
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_57 = lean_ctor_get(x_1, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_1, 1);
lean_inc(x_58);
x_59 = lean_ctor_get(x_1, 2);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_apply_3(x_13, x_57, x_58, x_59);
return x_60;
}
case 11:
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
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
x_61 = lean_ctor_get(x_1, 0);
lean_inc(x_61);
lean_dec(x_1);
x_62 = lean_apply_1(x_14, x_61);
return x_62;
}
case 12:
{
lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_65 = lean_box(x_64);
x_66 = lean_apply_2(x_24, x_63, x_65);
return x_66;
}
case 13:
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
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
x_67 = lean_box(0);
x_68 = lean_apply_1(x_15, x_67);
return x_68;
}
case 14:
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
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
x_69 = lean_box(0);
x_70 = lean_apply_1(x_16, x_69);
return x_70;
}
case 15:
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_71 = lean_box(0);
x_72 = lean_apply_1(x_17, x_71);
return x_72;
}
case 16:
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_73 = lean_box(0);
x_74 = lean_apply_1(x_18, x_73);
return x_74;
}
case 17:
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_75 = lean_box(0);
x_76 = lean_apply_1(x_19, x_75);
return x_76;
}
case 18:
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
lean_dec(x_1);
x_78 = lean_apply_1(x_20, x_77);
return x_78;
}
case 19:
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_79 = lean_box(0);
x_80 = lean_apply_1(x_21, x_79);
return x_80;
}
case 20:
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_81 = lean_ctor_get(x_1, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_1, 1);
lean_inc(x_82);
lean_dec(x_1);
x_83 = lean_apply_2(x_26, x_81, x_82);
return x_83;
}
case 21:
{
lean_object* x_84; lean_object* x_85; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_84 = lean_ctor_get(x_1, 0);
lean_inc(x_84);
lean_dec(x_1);
x_85 = lean_apply_1(x_25, x_84);
return x_85;
}
case 22:
{
lean_object* x_86; lean_object* x_87; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_86 = lean_ctor_get(x_1, 0);
lean_inc(x_86);
lean_dec(x_1);
x_87 = lean_apply_1(x_7, x_86);
return x_87;
}
case 23:
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_88 = lean_ctor_get(x_1, 0);
lean_inc(x_88);
lean_dec(x_1);
x_89 = lean_apply_1(x_23, x_88);
return x_89;
}
default: 
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_90 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
x_91 = lean_box(x_90);
x_92 = lean_apply_1(x_22, x_91);
return x_92;
}
}
}
}
lean_object* l_Lean_Parser_compileParserDescr_visit_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_compileParserDescr_visit_match__3___rarg___boxed), 26, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_compileParserDescr_visit_match__3___rarg___boxed(lean_object** _args) {
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
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
_start:
{
lean_object* x_27; 
x_27 = l_Lean_Parser_compileParserDescr_visit_match__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26);
return x_27;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("no space");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_compileParserDescr_visit___closed__1;
x_2 = l_Lean_Parser_checkNoWsBefore(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("element");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("checkColGe");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_compileParserDescr_visit___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_2 = l_Lean_Parser_compileParserDescr_visit___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("checkColGt");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_compileParserDescr_visit___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGtFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_compileParserDescr_visit___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_2 = l_Lean_Parser_compileParserDescr_visit___closed__8;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_compileParserDescr_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_7 = l_Lean_Parser_compileParserDescr_visit(x_1, x_5, x_3, x_4);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Parser_compileParserDescr_visit(x_1, x_6, x_3, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_8, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = l_Lean_Parser_andthenInfo(x_13, x_14);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_dec(x_8);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = lean_ctor_get(x_8, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
x_24 = l_Lean_Parser_andthenInfo(x_22, x_23);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_27, 0, x_25);
lean_closure_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_24);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_21);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_8);
x_30 = !lean_is_exclusive(x_10);
if (x_30 == 0)
{
return x_10;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_10, 0);
x_32 = lean_ctor_get(x_10, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_10);
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
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_7);
if (x_34 == 0)
{
return x_7;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_7, 0);
x_36 = lean_ctor_get(x_7, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_7);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
case 1:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_2, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_2, 1);
lean_inc(x_39);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_40 = l_Lean_Parser_compileParserDescr_visit(x_1, x_38, x_3, x_4);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Parser_compileParserDescr_visit(x_1, x_39, x_3, x_42);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_43, 0);
x_46 = lean_ctor_get(x_41, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
x_48 = l_Lean_Parser_orelseInfo(x_46, x_47);
x_49 = lean_ctor_get(x_41, 1);
lean_inc(x_49);
lean_dec(x_41);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_dec(x_45);
x_51 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_51, 0, x_49);
lean_closure_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_43, 0, x_52);
return x_43;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_53 = lean_ctor_get(x_43, 0);
x_54 = lean_ctor_get(x_43, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_43);
x_55 = lean_ctor_get(x_41, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_53, 0);
lean_inc(x_56);
x_57 = l_Lean_Parser_orelseInfo(x_55, x_56);
x_58 = lean_ctor_get(x_41, 1);
lean_inc(x_58);
lean_dec(x_41);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
x_60 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_60, 0, x_58);
lean_closure_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_57);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_54);
return x_62;
}
}
else
{
uint8_t x_63; 
lean_dec(x_41);
x_63 = !lean_is_exclusive(x_43);
if (x_63 == 0)
{
return x_43;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_43, 0);
x_65 = lean_ctor_get(x_43, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_43);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_39);
lean_dec(x_3);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_40);
if (x_67 == 0)
{
return x_40;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_40, 0);
x_69 = lean_ctor_get(x_40, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_40);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
case 2:
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_2, 0);
lean_inc(x_71);
lean_dec(x_2);
x_72 = l_Lean_Parser_compileParserDescr_visit(x_1, x_71, x_3, x_4);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_74 = lean_ctor_get(x_72, 0);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = l_Lean_Parser_optionaInfo(x_75);
x_77 = lean_ctor_get(x_74, 1);
lean_inc(x_77);
lean_dec(x_74);
x_78 = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn), 3, 1);
lean_closure_set(x_78, 0, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_76);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set(x_72, 0, x_79);
return x_72;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_80 = lean_ctor_get(x_72, 0);
x_81 = lean_ctor_get(x_72, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_72);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
x_83 = l_Lean_Parser_optionaInfo(x_82);
x_84 = lean_ctor_get(x_80, 1);
lean_inc(x_84);
lean_dec(x_80);
x_85 = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn), 3, 1);
lean_closure_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_81);
return x_87;
}
}
else
{
uint8_t x_88; 
x_88 = !lean_is_exclusive(x_72);
if (x_88 == 0)
{
return x_72;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_72, 0);
x_90 = lean_ctor_get(x_72, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_72);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
case 3:
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_2, 0);
lean_inc(x_92);
lean_dec(x_2);
x_93 = l_Lean_Parser_compileParserDescr_visit(x_1, x_92, x_3, x_4);
if (lean_obj_tag(x_93) == 0)
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; uint8_t x_96; 
x_95 = lean_ctor_get(x_93, 0);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_95, 1);
x_98 = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(x_98, 0, x_97);
lean_ctor_set(x_95, 1, x_98);
return x_93;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_95, 0);
x_100 = lean_ctor_get(x_95, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_95);
x_101 = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_93, 0, x_102);
return x_93;
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_103 = lean_ctor_get(x_93, 0);
x_104 = lean_ctor_get(x_93, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_93);
x_105 = lean_ctor_get(x_103, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_107 = x_103;
} else {
 lean_dec_ref(x_103);
 x_107 = lean_box(0);
}
x_108 = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(x_108, 0, x_106);
if (lean_is_scalar(x_107)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_107;
}
lean_ctor_set(x_109, 0, x_105);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_104);
return x_110;
}
}
else
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_93);
if (x_111 == 0)
{
return x_93;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_93, 0);
x_113 = lean_ctor_get(x_93, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_93);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
case 4:
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_2, 0);
lean_inc(x_115);
lean_dec(x_2);
x_116 = l_Lean_Parser_compileParserDescr_visit(x_1, x_115, x_3, x_4);
if (lean_obj_tag(x_116) == 0)
{
uint8_t x_117; 
x_117 = !lean_is_exclusive(x_116);
if (x_117 == 0)
{
lean_object* x_118; uint8_t x_119; 
x_118 = lean_ctor_get(x_116, 0);
x_119 = !lean_is_exclusive(x_118);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_118, 1);
x_121 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_121, 0, x_120);
lean_ctor_set(x_118, 1, x_121);
return x_116;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_122 = lean_ctor_get(x_118, 0);
x_123 = lean_ctor_get(x_118, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_118);
x_124 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_124, 0, x_123);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_124);
lean_ctor_set(x_116, 0, x_125);
return x_116;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_126 = lean_ctor_get(x_116, 0);
x_127 = lean_ctor_get(x_116, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_116);
x_128 = lean_ctor_get(x_126, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_126, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_130 = x_126;
} else {
 lean_dec_ref(x_126);
 x_130 = lean_box(0);
}
x_131 = lean_alloc_closure((void*)(l_Lean_Parser_tryFn), 3, 1);
lean_closure_set(x_131, 0, x_129);
if (lean_is_scalar(x_130)) {
 x_132 = lean_alloc_ctor(0, 2, 0);
} else {
 x_132 = x_130;
}
lean_ctor_set(x_132, 0, x_128);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_127);
return x_133;
}
}
else
{
uint8_t x_134; 
x_134 = !lean_is_exclusive(x_116);
if (x_134 == 0)
{
return x_116;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_116, 0);
x_136 = lean_ctor_get(x_116, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_116);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
case 5:
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_2, 0);
lean_inc(x_138);
lean_dec(x_2);
x_139 = l_Lean_Parser_compileParserDescr_visit(x_1, x_138, x_3, x_4);
if (lean_obj_tag(x_139) == 0)
{
uint8_t x_140; 
x_140 = !lean_is_exclusive(x_139);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_141 = lean_ctor_get(x_139, 0);
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = l_Lean_Parser_noFirstTokenInfo(x_142);
x_144 = lean_ctor_get(x_141, 1);
lean_inc(x_144);
lean_dec(x_141);
x_145 = lean_alloc_closure((void*)(l_Lean_Parser_manyFn), 3, 1);
lean_closure_set(x_145, 0, x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_145);
lean_ctor_set(x_139, 0, x_146);
return x_139;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_147 = lean_ctor_get(x_139, 0);
x_148 = lean_ctor_get(x_139, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_139);
x_149 = lean_ctor_get(x_147, 0);
lean_inc(x_149);
x_150 = l_Lean_Parser_noFirstTokenInfo(x_149);
x_151 = lean_ctor_get(x_147, 1);
lean_inc(x_151);
lean_dec(x_147);
x_152 = lean_alloc_closure((void*)(l_Lean_Parser_manyFn), 3, 1);
lean_closure_set(x_152, 0, x_151);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_148);
return x_154;
}
}
else
{
uint8_t x_155; 
x_155 = !lean_is_exclusive(x_139);
if (x_155 == 0)
{
return x_139;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_139, 0);
x_157 = lean_ctor_get(x_139, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_139);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
case 6:
{
lean_object* x_159; lean_object* x_160; 
x_159 = lean_ctor_get(x_2, 0);
lean_inc(x_159);
lean_dec(x_2);
x_160 = l_Lean_Parser_compileParserDescr_visit(x_1, x_159, x_3, x_4);
if (lean_obj_tag(x_160) == 0)
{
uint8_t x_161; 
x_161 = !lean_is_exclusive(x_160);
if (x_161 == 0)
{
lean_object* x_162; uint8_t x_163; 
x_162 = lean_ctor_get(x_160, 0);
x_163 = !lean_is_exclusive(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_162, 1);
x_165 = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn), 3, 1);
lean_closure_set(x_165, 0, x_164);
lean_ctor_set(x_162, 1, x_165);
return x_160;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_162, 0);
x_167 = lean_ctor_get(x_162, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_162);
x_168 = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn), 3, 1);
lean_closure_set(x_168, 0, x_167);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_168);
lean_ctor_set(x_160, 0, x_169);
return x_160;
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_170 = lean_ctor_get(x_160, 0);
x_171 = lean_ctor_get(x_160, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_160);
x_172 = lean_ctor_get(x_170, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_170, 1);
lean_inc(x_173);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_174 = x_170;
} else {
 lean_dec_ref(x_170);
 x_174 = lean_box(0);
}
x_175 = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn), 3, 1);
lean_closure_set(x_175, 0, x_173);
if (lean_is_scalar(x_174)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_174;
}
lean_ctor_set(x_176, 0, x_172);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_171);
return x_177;
}
}
else
{
uint8_t x_178; 
x_178 = !lean_is_exclusive(x_160);
if (x_178 == 0)
{
return x_160;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_160, 0);
x_180 = lean_ctor_get(x_160, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_160);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
}
case 7:
{
lean_object* x_182; lean_object* x_183; uint8_t x_184; lean_object* x_185; 
x_182 = lean_ctor_get(x_2, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_2, 1);
lean_inc(x_183);
x_184 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_185 = l_Lean_Parser_compileParserDescr_visit(x_1, x_182, x_3, x_4);
if (lean_obj_tag(x_185) == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
x_188 = l_Lean_Parser_compileParserDescr_visit(x_1, x_183, x_3, x_187);
if (lean_obj_tag(x_188) == 0)
{
uint8_t x_189; 
x_189 = !lean_is_exclusive(x_188);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_190 = lean_ctor_get(x_188, 0);
x_191 = lean_ctor_get(x_186, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 0);
lean_inc(x_192);
x_193 = l_Lean_Parser_sepByInfo(x_191, x_192);
x_194 = lean_ctor_get(x_186, 1);
lean_inc(x_194);
lean_dec(x_186);
x_195 = lean_ctor_get(x_190, 1);
lean_inc(x_195);
lean_dec(x_190);
x_196 = lean_box(x_184);
x_197 = lean_alloc_closure((void*)(l_Lean_Parser_sepByFn___boxed), 5, 3);
lean_closure_set(x_197, 0, x_196);
lean_closure_set(x_197, 1, x_194);
lean_closure_set(x_197, 2, x_195);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_193);
lean_ctor_set(x_198, 1, x_197);
lean_ctor_set(x_188, 0, x_198);
return x_188;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_199 = lean_ctor_get(x_188, 0);
x_200 = lean_ctor_get(x_188, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_188);
x_201 = lean_ctor_get(x_186, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 0);
lean_inc(x_202);
x_203 = l_Lean_Parser_sepByInfo(x_201, x_202);
x_204 = lean_ctor_get(x_186, 1);
lean_inc(x_204);
lean_dec(x_186);
x_205 = lean_ctor_get(x_199, 1);
lean_inc(x_205);
lean_dec(x_199);
x_206 = lean_box(x_184);
x_207 = lean_alloc_closure((void*)(l_Lean_Parser_sepByFn___boxed), 5, 3);
lean_closure_set(x_207, 0, x_206);
lean_closure_set(x_207, 1, x_204);
lean_closure_set(x_207, 2, x_205);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_203);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_200);
return x_209;
}
}
else
{
uint8_t x_210; 
lean_dec(x_186);
x_210 = !lean_is_exclusive(x_188);
if (x_210 == 0)
{
return x_188;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_188, 0);
x_212 = lean_ctor_get(x_188, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_188);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
else
{
uint8_t x_214; 
lean_dec(x_183);
lean_dec(x_3);
lean_dec(x_1);
x_214 = !lean_is_exclusive(x_185);
if (x_214 == 0)
{
return x_185;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_185, 0);
x_216 = lean_ctor_get(x_185, 1);
lean_inc(x_216);
lean_inc(x_215);
lean_dec(x_185);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_215);
lean_ctor_set(x_217, 1, x_216);
return x_217;
}
}
}
case 8:
{
lean_object* x_218; lean_object* x_219; uint8_t x_220; lean_object* x_221; 
x_218 = lean_ctor_get(x_2, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_2, 1);
lean_inc(x_219);
x_220 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_221 = l_Lean_Parser_compileParserDescr_visit(x_1, x_218, x_3, x_4);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = l_Lean_Parser_compileParserDescr_visit(x_1, x_219, x_3, x_223);
if (lean_obj_tag(x_224) == 0)
{
uint8_t x_225; 
x_225 = !lean_is_exclusive(x_224);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_226 = lean_ctor_get(x_224, 0);
x_227 = lean_ctor_get(x_222, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 0);
lean_inc(x_228);
x_229 = l_Lean_Parser_sepBy1Info(x_227, x_228);
x_230 = lean_ctor_get(x_222, 1);
lean_inc(x_230);
lean_dec(x_222);
x_231 = lean_ctor_get(x_226, 1);
lean_inc(x_231);
lean_dec(x_226);
x_232 = lean_box(x_220);
x_233 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Fn___boxed), 5, 3);
lean_closure_set(x_233, 0, x_232);
lean_closure_set(x_233, 1, x_230);
lean_closure_set(x_233, 2, x_231);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_229);
lean_ctor_set(x_234, 1, x_233);
lean_ctor_set(x_224, 0, x_234);
return x_224;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_235 = lean_ctor_get(x_224, 0);
x_236 = lean_ctor_get(x_224, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_224);
x_237 = lean_ctor_get(x_222, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_235, 0);
lean_inc(x_238);
x_239 = l_Lean_Parser_sepBy1Info(x_237, x_238);
x_240 = lean_ctor_get(x_222, 1);
lean_inc(x_240);
lean_dec(x_222);
x_241 = lean_ctor_get(x_235, 1);
lean_inc(x_241);
lean_dec(x_235);
x_242 = lean_box(x_220);
x_243 = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Fn___boxed), 5, 3);
lean_closure_set(x_243, 0, x_242);
lean_closure_set(x_243, 1, x_240);
lean_closure_set(x_243, 2, x_241);
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_239);
lean_ctor_set(x_244, 1, x_243);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_236);
return x_245;
}
}
else
{
uint8_t x_246; 
lean_dec(x_222);
x_246 = !lean_is_exclusive(x_224);
if (x_246 == 0)
{
return x_224;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_247 = lean_ctor_get(x_224, 0);
x_248 = lean_ctor_get(x_224, 1);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_224);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_247);
lean_ctor_set(x_249, 1, x_248);
return x_249;
}
}
}
else
{
uint8_t x_250; 
lean_dec(x_219);
lean_dec(x_3);
lean_dec(x_1);
x_250 = !lean_is_exclusive(x_221);
if (x_250 == 0)
{
return x_221;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_221, 0);
x_252 = lean_ctor_get(x_221, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_221);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
return x_253;
}
}
}
case 9:
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_254 = lean_ctor_get(x_2, 0);
lean_inc(x_254);
x_255 = lean_ctor_get(x_2, 1);
lean_inc(x_255);
x_256 = lean_ctor_get(x_2, 2);
lean_inc(x_256);
lean_dec(x_2);
x_257 = l_Lean_Parser_compileParserDescr_visit(x_1, x_256, x_3, x_4);
if (lean_obj_tag(x_257) == 0)
{
uint8_t x_258; 
x_258 = !lean_is_exclusive(x_257);
if (x_258 == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_259 = lean_ctor_get(x_257, 0);
x_260 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_260, 0, x_255);
x_261 = lean_ctor_get(x_259, 0);
lean_inc(x_261);
lean_inc(x_254);
x_262 = l_Lean_Parser_nodeInfo(x_254, x_261);
x_263 = lean_ctor_get(x_259, 1);
lean_inc(x_263);
lean_dec(x_259);
x_264 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_264, 0, x_254);
lean_closure_set(x_264, 1, x_263);
x_265 = l_Lean_Parser_epsilonInfo;
x_266 = l_Lean_Parser_andthenInfo(x_265, x_262);
x_267 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_267, 0, x_260);
lean_closure_set(x_267, 1, x_264);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
lean_ctor_set(x_257, 0, x_268);
return x_257;
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_269 = lean_ctor_get(x_257, 0);
x_270 = lean_ctor_get(x_257, 1);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_257);
x_271 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_271, 0, x_255);
x_272 = lean_ctor_get(x_269, 0);
lean_inc(x_272);
lean_inc(x_254);
x_273 = l_Lean_Parser_nodeInfo(x_254, x_272);
x_274 = lean_ctor_get(x_269, 1);
lean_inc(x_274);
lean_dec(x_269);
x_275 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_275, 0, x_254);
lean_closure_set(x_275, 1, x_274);
x_276 = l_Lean_Parser_epsilonInfo;
x_277 = l_Lean_Parser_andthenInfo(x_276, x_273);
x_278 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_278, 0, x_271);
lean_closure_set(x_278, 1, x_275);
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
x_280 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_270);
return x_280;
}
}
else
{
uint8_t x_281; 
lean_dec(x_255);
lean_dec(x_254);
x_281 = !lean_is_exclusive(x_257);
if (x_281 == 0)
{
return x_257;
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_257, 0);
x_283 = lean_ctor_get(x_257, 1);
lean_inc(x_283);
lean_inc(x_282);
lean_dec(x_257);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_283);
return x_284;
}
}
}
case 10:
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_285 = lean_ctor_get(x_2, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_2, 1);
lean_inc(x_286);
x_287 = lean_ctor_get(x_2, 2);
lean_inc(x_287);
lean_dec(x_2);
x_288 = l_Lean_Parser_compileParserDescr_visit(x_1, x_287, x_3, x_4);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
x_289 = !lean_is_exclusive(x_288);
if (x_289 == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_290 = lean_ctor_get(x_288, 0);
x_291 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_291, 0, x_286);
x_292 = lean_ctor_get(x_290, 0);
lean_inc(x_292);
lean_inc(x_285);
x_293 = l_Lean_Parser_nodeInfo(x_285, x_292);
x_294 = lean_ctor_get(x_290, 1);
lean_inc(x_294);
lean_dec(x_290);
x_295 = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn), 4, 2);
lean_closure_set(x_295, 0, x_285);
lean_closure_set(x_295, 1, x_294);
x_296 = l_Lean_Parser_epsilonInfo;
x_297 = l_Lean_Parser_andthenInfo(x_296, x_293);
x_298 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_298, 0, x_291);
lean_closure_set(x_298, 1, x_295);
x_299 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_299, 0, x_297);
lean_ctor_set(x_299, 1, x_298);
lean_ctor_set(x_288, 0, x_299);
return x_288;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_300 = lean_ctor_get(x_288, 0);
x_301 = lean_ctor_get(x_288, 1);
lean_inc(x_301);
lean_inc(x_300);
lean_dec(x_288);
x_302 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_302, 0, x_286);
x_303 = lean_ctor_get(x_300, 0);
lean_inc(x_303);
lean_inc(x_285);
x_304 = l_Lean_Parser_nodeInfo(x_285, x_303);
x_305 = lean_ctor_get(x_300, 1);
lean_inc(x_305);
lean_dec(x_300);
x_306 = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn), 4, 2);
lean_closure_set(x_306, 0, x_285);
lean_closure_set(x_306, 1, x_305);
x_307 = l_Lean_Parser_epsilonInfo;
x_308 = l_Lean_Parser_andthenInfo(x_307, x_304);
x_309 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_309, 0, x_302);
lean_closure_set(x_309, 1, x_306);
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_301);
return x_311;
}
}
else
{
uint8_t x_312; 
lean_dec(x_286);
lean_dec(x_285);
x_312 = !lean_is_exclusive(x_288);
if (x_312 == 0)
{
return x_288;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_ctor_get(x_288, 0);
x_314 = lean_ctor_get(x_288, 1);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_288);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
return x_315;
}
}
}
case 11:
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_3);
lean_dec(x_1);
x_316 = lean_ctor_get(x_2, 0);
lean_inc(x_316);
lean_dec(x_2);
x_317 = l_String_trim(x_316);
lean_dec(x_316);
lean_inc(x_317);
x_318 = l_Lean_Parser_symbolInfo(x_317);
x_319 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_319, 0, x_317);
x_320 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_320, 0, x_318);
lean_ctor_set(x_320, 1, x_319);
x_321 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_4);
return x_321;
}
case 12:
{
lean_object* x_322; uint8_t x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
lean_dec(x_3);
lean_dec(x_1);
x_322 = lean_ctor_get(x_2, 0);
lean_inc(x_322);
x_323 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_324 = l_String_trim(x_322);
lean_dec(x_322);
lean_inc(x_324);
x_325 = l_Lean_Parser_nonReservedSymbolInfo(x_324, x_323);
x_326 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_326, 0, x_324);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_328, 0, x_327);
lean_ctor_set(x_328, 1, x_4);
return x_328;
}
case 13:
{
lean_object* x_329; lean_object* x_330; 
lean_dec(x_3);
lean_dec(x_1);
x_329 = l_Lean_Parser_compileParserDescr_visit___closed__2;
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_4);
return x_330;
}
case 14:
{
lean_object* x_331; lean_object* x_332; 
lean_dec(x_3);
lean_dec(x_1);
x_331 = l_Lean_Parser_numLit;
x_332 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_4);
return x_332;
}
case 15:
{
lean_object* x_333; lean_object* x_334; 
lean_dec(x_3);
lean_dec(x_1);
x_333 = l_Lean_Parser_strLit;
x_334 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_334, 0, x_333);
lean_ctor_set(x_334, 1, x_4);
return x_334;
}
case 16:
{
lean_object* x_335; lean_object* x_336; 
lean_dec(x_3);
lean_dec(x_1);
x_335 = l_Lean_Parser_charLit;
x_336 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_4);
return x_336;
}
case 17:
{
lean_object* x_337; lean_object* x_338; 
lean_dec(x_3);
lean_dec(x_1);
x_337 = l_Lean_Parser_nameLit;
x_338 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_338, 0, x_337);
lean_ctor_set(x_338, 1, x_4);
return x_338;
}
case 18:
{
lean_object* x_339; lean_object* x_340; 
x_339 = lean_ctor_get(x_2, 0);
lean_inc(x_339);
lean_dec(x_2);
x_340 = l_Lean_Parser_compileParserDescr_visit(x_1, x_339, x_3, x_4);
if (lean_obj_tag(x_340) == 0)
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_340);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; 
x_342 = lean_ctor_get(x_340, 0);
x_343 = l_Lean_Parser_interpolatedStr(x_342);
lean_ctor_set(x_340, 0, x_343);
return x_340;
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_344 = lean_ctor_get(x_340, 0);
x_345 = lean_ctor_get(x_340, 1);
lean_inc(x_345);
lean_inc(x_344);
lean_dec(x_340);
x_346 = l_Lean_Parser_interpolatedStr(x_344);
x_347 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_345);
return x_347;
}
}
else
{
uint8_t x_348; 
x_348 = !lean_is_exclusive(x_340);
if (x_348 == 0)
{
return x_340;
}
else
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_349 = lean_ctor_get(x_340, 0);
x_350 = lean_ctor_get(x_340, 1);
lean_inc(x_350);
lean_inc(x_349);
lean_dec(x_340);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_349);
lean_ctor_set(x_351, 1, x_350);
return x_351;
}
}
}
case 19:
{
lean_object* x_352; lean_object* x_353; 
lean_dec(x_3);
lean_dec(x_1);
x_352 = l_Lean_Parser_ident;
x_353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_4);
return x_353;
}
case 20:
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
lean_dec(x_3);
x_354 = lean_ctor_get(x_2, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_2, 1);
lean_inc(x_355);
lean_dec(x_2);
x_356 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_1, x_354);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; lean_object* x_358; 
lean_dec(x_355);
x_357 = l_Lean_Parser_throwUnknownParserCategory___rarg(x_354);
x_358 = l_IO_ofExcept___at_Lean_Parser_mkParserOfConstantUnsafe___spec__3(x_357, x_4);
lean_dec(x_357);
return x_358;
}
else
{
lean_object* x_359; lean_object* x_360; 
lean_dec(x_356);
x_359 = l_Lean_Parser_categoryParser(x_354, x_355);
x_360 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_4);
return x_360;
}
}
case 21:
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_361 = lean_ctor_get(x_2, 0);
lean_inc(x_361);
lean_dec(x_2);
x_362 = lean_alloc_closure((void*)(l_Lean_Parser_compileParserDescr_visit), 4, 1);
lean_closure_set(x_362, 0, x_1);
x_363 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg(x_361, x_362, x_3, x_4);
if (lean_obj_tag(x_363) == 0)
{
uint8_t x_364; 
x_364 = !lean_is_exclusive(x_363);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; 
x_365 = lean_ctor_get(x_363, 0);
x_366 = lean_ctor_get(x_365, 1);
lean_inc(x_366);
lean_dec(x_365);
lean_ctor_set(x_363, 0, x_366);
return x_363;
}
else
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_367 = lean_ctor_get(x_363, 0);
x_368 = lean_ctor_get(x_363, 1);
lean_inc(x_368);
lean_inc(x_367);
lean_dec(x_363);
x_369 = lean_ctor_get(x_367, 1);
lean_inc(x_369);
lean_dec(x_367);
x_370 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_368);
return x_370;
}
}
else
{
uint8_t x_371; 
x_371 = !lean_is_exclusive(x_363);
if (x_371 == 0)
{
return x_363;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; 
x_372 = lean_ctor_get(x_363, 0);
x_373 = lean_ctor_get(x_363, 1);
lean_inc(x_373);
lean_inc(x_372);
lean_dec(x_363);
x_374 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_374, 0, x_372);
lean_ctor_set(x_374, 1, x_373);
return x_374;
}
}
}
case 22:
{
lean_object* x_375; lean_object* x_376; 
x_375 = lean_ctor_get(x_2, 0);
lean_inc(x_375);
lean_dec(x_2);
x_376 = l_Lean_Parser_compileParserDescr_visit(x_1, x_375, x_3, x_4);
if (lean_obj_tag(x_376) == 0)
{
uint8_t x_377; 
x_377 = !lean_is_exclusive(x_376);
if (x_377 == 0)
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_378 = lean_ctor_get(x_376, 0);
x_379 = lean_ctor_get(x_378, 1);
lean_inc(x_379);
lean_dec(x_378);
x_380 = l_Lean_Parser_compileParserDescr_visit___closed__3;
x_381 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(x_381, 0, x_379);
lean_closure_set(x_381, 1, x_380);
x_382 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_381);
lean_ctor_set(x_376, 0, x_383);
return x_376;
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
x_384 = lean_ctor_get(x_376, 0);
x_385 = lean_ctor_get(x_376, 1);
lean_inc(x_385);
lean_inc(x_384);
lean_dec(x_376);
x_386 = lean_ctor_get(x_384, 1);
lean_inc(x_386);
lean_dec(x_384);
x_387 = l_Lean_Parser_compileParserDescr_visit___closed__3;
x_388 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(x_388, 0, x_386);
lean_closure_set(x_388, 1, x_387);
x_389 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_389);
lean_ctor_set(x_390, 1, x_388);
x_391 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_391, 0, x_390);
lean_ctor_set(x_391, 1, x_385);
return x_391;
}
}
else
{
uint8_t x_392; 
x_392 = !lean_is_exclusive(x_376);
if (x_392 == 0)
{
return x_376;
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_393 = lean_ctor_get(x_376, 0);
x_394 = lean_ctor_get(x_376, 1);
lean_inc(x_394);
lean_inc(x_393);
lean_dec(x_376);
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
return x_395;
}
}
}
case 23:
{
lean_object* x_396; lean_object* x_397; 
x_396 = lean_ctor_get(x_2, 0);
lean_inc(x_396);
lean_dec(x_2);
x_397 = l_Lean_Parser_compileParserDescr_visit(x_1, x_396, x_3, x_4);
if (lean_obj_tag(x_397) == 0)
{
uint8_t x_398; 
x_398 = !lean_is_exclusive(x_397);
if (x_398 == 0)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; uint8_t x_402; 
x_399 = lean_ctor_get(x_397, 0);
x_400 = lean_ctor_get(x_399, 0);
lean_inc(x_400);
lean_inc(x_399);
x_401 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lambda__1), 3, 1);
lean_closure_set(x_401, 0, x_399);
x_402 = !lean_is_exclusive(x_399);
if (x_402 == 0)
{
lean_object* x_403; lean_object* x_404; 
x_403 = lean_ctor_get(x_399, 1);
lean_dec(x_403);
x_404 = lean_ctor_get(x_399, 0);
lean_dec(x_404);
lean_ctor_set(x_399, 1, x_401);
return x_397;
}
else
{
lean_object* x_405; 
lean_dec(x_399);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_400);
lean_ctor_set(x_405, 1, x_401);
lean_ctor_set(x_397, 0, x_405);
return x_397;
}
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
x_406 = lean_ctor_get(x_397, 0);
x_407 = lean_ctor_get(x_397, 1);
lean_inc(x_407);
lean_inc(x_406);
lean_dec(x_397);
x_408 = lean_ctor_get(x_406, 0);
lean_inc(x_408);
lean_inc(x_406);
x_409 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lambda__1), 3, 1);
lean_closure_set(x_409, 0, x_406);
if (lean_is_exclusive(x_406)) {
 lean_ctor_release(x_406, 0);
 lean_ctor_release(x_406, 1);
 x_410 = x_406;
} else {
 lean_dec_ref(x_406);
 x_410 = lean_box(0);
}
if (lean_is_scalar(x_410)) {
 x_411 = lean_alloc_ctor(0, 2, 0);
} else {
 x_411 = x_410;
}
lean_ctor_set(x_411, 0, x_408);
lean_ctor_set(x_411, 1, x_409);
x_412 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_412, 0, x_411);
lean_ctor_set(x_412, 1, x_407);
return x_412;
}
}
else
{
uint8_t x_413; 
x_413 = !lean_is_exclusive(x_397);
if (x_413 == 0)
{
return x_397;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; 
x_414 = lean_ctor_get(x_397, 0);
x_415 = lean_ctor_get(x_397, 1);
lean_inc(x_415);
lean_inc(x_414);
lean_dec(x_397);
x_416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_416, 0, x_414);
lean_ctor_set(x_416, 1, x_415);
return x_416;
}
}
}
default: 
{
uint8_t x_417; 
lean_dec(x_3);
lean_dec(x_1);
x_417 = lean_ctor_get_uint8(x_2, 0);
lean_dec(x_2);
if (x_417 == 0)
{
lean_object* x_418; lean_object* x_419; 
x_418 = l_Lean_Parser_compileParserDescr_visit___closed__6;
x_419 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_419, 0, x_418);
lean_ctor_set(x_419, 1, x_4);
return x_419;
}
else
{
lean_object* x_420; lean_object* x_421; 
x_420 = l_Lean_Parser_compileParserDescr_visit___closed__9;
x_421 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_4);
return x_421;
}
}
}
}
}
lean_object* l_Lean_Parser_compileParserDescr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_compileParserDescr_visit(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_mkParserOfConstant(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_compileParserDescr), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg(x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1812____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1812_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_IO_mkRef___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1812____spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_registerParserAttributeHook(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_Parser_parserAttributeHooks;
x_4 = lean_st_ref_take(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_st_ref_set(x_3, x_7, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
lean_object* l_List_forM___at_Lean_Parser_runParserAttributeHooks___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_box(x_3);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_14 = lean_apply_7(x_11, x_1, x_2, x_13, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_4 = x_12;
x_8 = x_15;
goto _start;
}
else
{
uint8_t x_17; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
}
lean_object* l_Lean_Parser_runParserAttributeHooks(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_Parser_parserAttributeHooks;
x_11 = lean_st_ref_get(x_10, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_List_forM___at_Lean_Parser_runParserAttributeHooks___spec__1(x_1, x_2, x_3, x_12, x_4, x_5, x_6, x_13);
return x_14;
}
}
lean_object* l_List_forM___at_Lean_Parser_runParserAttributeHooks___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_List_forM___at_Lean_Parser_runParserAttributeHooks___spec__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Parser_runParserAttributeHooks___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_Parser_runParserAttributeHooks(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = 1;
x_9 = l_Lean_Parser_runParserAttributeHooks(x_7, x_1, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid attribute 'runBuiltinParserAttributeHooks', unexpected argument");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Syntax_hasArgs(x_2);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_box(0);
x_10 = 1;
x_11 = l_Lean_Parser_runParserAttributeHooks(x_9, x_1, x_10, x_4, x_5, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_1);
x_12 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__3;
x_13 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_12, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("runBuiltinParserAttributeHooks");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicitly run hooks normally activated by builtin parser attributes");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__2;
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__3;
x_3 = 0;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__4;
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__6;
x_3 = l_Lean_registerBuiltinAttribute(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = 0;
x_9 = l_Lean_Parser_runParserAttributeHooks(x_7, x_1, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid attribute 'runParserAttributeHooks', unexpected argument");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Syntax_hasArgs(x_2);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_box(0);
x_10 = 0;
x_11 = l_Lean_Parser_runParserAttributeHooks(x_9, x_1, x_10, x_4, x_5, x_6, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_1);
x_12 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__3;
x_13 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_12, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("runParserAttributeHooks");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicitly run hooks normally activated by parser attributes");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__2;
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__3;
x_3 = 0;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___boxed), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__4;
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__6;
x_3 = l_Lean_registerBuiltinAttribute(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_12 = lean_box(x_11);
x_13 = lean_apply_2(x_4, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 2);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_3(x_5, x_14, x_15, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_13; 
x_13 = x_2 == x_3;
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_array_uget(x_1, x_2);
switch (lean_obj_tag(x_14)) {
case 0:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
x_19 = lean_ctor_get(x_4, 2);
x_20 = lean_ctor_get(x_4, 3);
x_21 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(x_17, x_15);
x_22 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1(x_21, x_6);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_ctor_set(x_4, 0, x_23);
x_7 = x_4;
x_8 = x_24;
goto block_12;
}
else
{
uint8_t x_25; 
lean_free_object(x_4);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_5);
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_22);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
x_31 = lean_ctor_get(x_4, 2);
x_32 = lean_ctor_get(x_4, 3);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_33 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(x_29, x_15);
x_34 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1(x_33, x_6);
lean_dec(x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_30);
lean_ctor_set(x_37, 2, x_31);
lean_ctor_set(x_37, 3, x_32);
x_7 = x_37;
x_8 = x_36;
goto block_12;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_5);
x_38 = lean_ctor_get(x_34, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_40 = x_34;
} else {
 lean_dec_ref(x_34);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
case 1:
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_14, 0);
lean_inc(x_42);
lean_dec(x_14);
x_43 = !lean_is_exclusive(x_4);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_4, 1);
x_45 = lean_box(0);
x_46 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_44, x_42, x_45);
lean_ctor_set(x_4, 1, x_46);
x_7 = x_4;
x_8 = x_6;
goto block_12;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_47 = lean_ctor_get(x_4, 0);
x_48 = lean_ctor_get(x_4, 1);
x_49 = lean_ctor_get(x_4, 2);
x_50 = lean_ctor_get(x_4, 3);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_4);
x_51 = lean_box(0);
x_52 = l_Std_PersistentHashMap_insert___at_Lean_Parser_SyntaxNodeKindSet_insert___spec__1(x_48, x_42, x_51);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_53, 2, x_49);
lean_ctor_set(x_53, 3, x_50);
x_7 = x_53;
x_8 = x_6;
goto block_12;
}
}
case 2:
{
lean_object* x_54; uint8_t x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_14, 0);
lean_inc(x_54);
x_55 = lean_ctor_get_uint8(x_14, sizeof(void*)*1);
lean_dec(x_14);
x_56 = !lean_is_exclusive(x_4);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_57 = lean_ctor_get(x_4, 0);
x_58 = lean_ctor_get(x_4, 1);
x_59 = lean_ctor_get(x_4, 2);
x_60 = lean_ctor_get(x_4, 3);
x_61 = l_Lean_Parser_Lean_Parser_Basic___instance__14___closed__1;
x_62 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set_uint8(x_62, sizeof(void*)*1, x_55);
x_63 = l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(x_59, x_54, x_62);
x_64 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_63, x_6);
lean_dec(x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
lean_ctor_set(x_4, 2, x_65);
x_7 = x_4;
x_8 = x_66;
goto block_12;
}
else
{
uint8_t x_67; 
lean_free_object(x_4);
lean_dec(x_60);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_5);
x_67 = !lean_is_exclusive(x_64);
if (x_67 == 0)
{
return x_64;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_64, 0);
x_69 = lean_ctor_get(x_64, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_64);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_4, 0);
x_72 = lean_ctor_get(x_4, 1);
x_73 = lean_ctor_get(x_4, 2);
x_74 = lean_ctor_get(x_4, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_4);
x_75 = l_Lean_Parser_Lean_Parser_Basic___instance__14___closed__1;
x_76 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set_uint8(x_76, sizeof(void*)*1, x_55);
x_77 = l___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore(x_73, x_54, x_76);
x_78 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_77, x_6);
lean_dec(x_77);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_72);
lean_ctor_set(x_81, 2, x_79);
lean_ctor_set(x_81, 3, x_74);
x_7 = x_81;
x_8 = x_80;
goto block_12;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_74);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_5);
x_82 = lean_ctor_get(x_78, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_78, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_84 = x_78;
} else {
 lean_dec_ref(x_78);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
default: 
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_86 = lean_ctor_get(x_14, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_14, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_14, 2);
lean_inc(x_88);
lean_dec(x_14);
x_89 = !lean_is_exclusive(x_4);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_4, 0);
x_91 = lean_ctor_get(x_4, 1);
x_92 = lean_ctor_get(x_4, 2);
x_93 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
lean_inc(x_87);
lean_inc(x_92);
x_94 = l_Lean_Parser_mkParserOfConstant(x_92, x_87, x_5, x_6);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lean_ctor_get(x_95, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
lean_dec(x_95);
x_99 = lean_unbox(x_97);
lean_dec(x_97);
x_100 = l_Lean_Parser_addParser(x_92, x_86, x_87, x_99, x_98, x_88);
lean_dec(x_87);
x_101 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_100, x_96);
lean_dec(x_100);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
lean_ctor_set(x_4, 2, x_102);
x_7 = x_4;
x_8 = x_103;
goto block_12;
}
else
{
uint8_t x_104; 
lean_free_object(x_4);
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_5);
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
else
{
uint8_t x_108; 
lean_free_object(x_4);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_5);
x_108 = !lean_is_exclusive(x_94);
if (x_108 == 0)
{
return x_94;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_94, 0);
x_110 = lean_ctor_get(x_94, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_94);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_112 = lean_ctor_get(x_4, 0);
x_113 = lean_ctor_get(x_4, 1);
x_114 = lean_ctor_get(x_4, 2);
x_115 = lean_ctor_get(x_4, 3);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_4);
lean_inc(x_5);
lean_inc(x_87);
lean_inc(x_114);
x_116 = l_Lean_Parser_mkParserOfConstant(x_114, x_87, x_5, x_6);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; lean_object* x_123; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_ctor_get(x_117, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
lean_dec(x_117);
x_121 = lean_unbox(x_119);
lean_dec(x_119);
x_122 = l_Lean_Parser_addParser(x_114, x_86, x_87, x_121, x_120, x_88);
lean_dec(x_87);
x_123 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory___spec__1(x_122, x_118);
lean_dec(x_122);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_126, 0, x_112);
lean_ctor_set(x_126, 1, x_113);
lean_ctor_set(x_126, 2, x_124);
lean_ctor_set(x_126, 3, x_115);
x_7 = x_126;
x_8 = x_125;
goto block_12;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_115);
lean_dec(x_113);
lean_dec(x_112);
lean_dec(x_5);
x_127 = lean_ctor_get(x_123, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_123, 1);
lean_inc(x_128);
if (lean_is_exclusive(x_123)) {
 lean_ctor_release(x_123, 0);
 lean_ctor_release(x_123, 1);
 x_129 = x_123;
} else {
 lean_dec_ref(x_123);
 x_129 = lean_box(0);
}
if (lean_is_scalar(x_129)) {
 x_130 = lean_alloc_ctor(1, 2, 0);
} else {
 x_130 = x_129;
}
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_115);
lean_dec(x_114);
lean_dec(x_113);
lean_dec(x_112);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_5);
x_131 = lean_ctor_get(x_116, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_116, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_133 = x_116;
} else {
 lean_dec_ref(x_116);
 x_133 = lean_box(0);
}
if (lean_is_scalar(x_133)) {
 x_134 = lean_alloc_ctor(1, 2, 0);
} else {
 x_134 = x_133;
}
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_132);
return x_134;
}
}
}
}
}
else
{
lean_object* x_135; 
lean_dec(x_5);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_4);
lean_ctor_set(x_135, 1, x_6);
return x_135;
}
block_12:
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = x_2 + x_9;
x_2 = x_10;
x_4 = x_7;
x_6 = x_8;
goto _start;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_array_get_size(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
size_t x_12; size_t x_13; 
lean_dec(x_9);
lean_dec(x_8);
x_12 = 1;
x_13 = x_2 + x_12;
x_2 = x_13;
goto _start;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_9, x_9);
if (x_15 == 0)
{
size_t x_16; size_t x_17; 
lean_dec(x_9);
lean_dec(x_8);
x_16 = 1;
x_17 = x_2 + x_16;
x_2 = x_17;
goto _start;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; 
x_19 = 0;
x_20 = lean_usize_of_nat(x_9);
lean_dec(x_9);
lean_inc(x_5);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__2(x_8, x_19, x_20, x_4, x_5, x_6);
lean_dec(x_8);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
x_4 = x_22;
x_6 = x_23;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
else
{
lean_object* x_31; 
lean_dec(x_5);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_6);
return x_31;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_2);
return x_4;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_le(x_8, x_8);
if (x_11 == 0)
{
lean_dec(x_8);
lean_dec(x_2);
return x_4;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; 
lean_free_object(x_4);
x_12 = 0;
x_13 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3(x_1, x_12, x_13, x_6, x_2, x_7);
return x_14;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
x_17 = lean_array_get_size(x_1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_le(x_17, x_17);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_2);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_16);
return x_22;
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_25 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3(x_1, x_23, x_24, x_15, x_2, x_16);
return x_25;
}
}
}
}
}
lean_object* l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___spec__3(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_persistentEnvExtensionsRef;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_11, x_7);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_8, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_14 = lean_box(0);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_14, x_7);
return x_15;
}
else
{
size_t x_16; size_t x_17; uint8_t x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_18 = l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2(x_1, x_6, x_16, x_17);
lean_dec(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_4);
x_19 = lean_box(0);
x_20 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_19, x_7);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = l_System_FilePath_dirName___closed__1;
x_23 = l_Lean_Name_toStringWithSep(x_22, x_21);
x_24 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l_Lean_registerInternalExceptionId___closed__2;
x_27 = lean_string_append(x_25, x_26);
x_28 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_28);
return x_4;
}
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_31 = lean_array_get_size(x_29);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_31);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_34, x_30);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = lean_nat_dec_le(x_31, x_31);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_31);
lean_dec(x_29);
x_37 = lean_box(0);
x_38 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_37, x_30);
return x_38;
}
else
{
size_t x_39; size_t x_40; uint8_t x_41; 
x_39 = 0;
x_40 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_41 = l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2(x_1, x_29, x_39, x_40);
lean_dec(x_29);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_box(0);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_42, x_30);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_dec(x_1);
x_45 = l_System_FilePath_dirName___closed__1;
x_46 = l_Lean_Name_toStringWithSep(x_45, x_44);
x_47 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_48 = lean_string_append(x_47, x_46);
lean_dec(x_46);
x_49 = l_Lean_registerInternalExceptionId___closed__2;
x_50 = lean_string_append(x_48, x_49);
x_51 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_30);
return x_52;
}
}
}
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_List_reverse___rarg(x_2);
x_4 = l_List_redLength___rarg(x_3);
x_5 = lean_mk_empty_array_with_capacity(x_4);
lean_dec(x_4);
x_6 = l_List_toArrayAux___rarg(x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 3);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthAux___rarg(x_2, x_3);
x_5 = l_Nat_repr(x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___closed__2;
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("parserExt");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_mkInitial), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtension_addImported___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__2;
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__3;
x_3 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__4;
x_4 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__5;
x_5 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__6;
x_6 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__7;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__8;
x_3 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____spec__2(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_empty___closed__1;
return x_2;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_IO_Error_Init_System_IOError___instance__3___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_parserExtension___elambda__4___rarg), 1, 0);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_parserExtension___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_parserExtension___elambda__4___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_parserExtension___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_parserExtension___elambda__3___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_parserExtension___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_parserExtension___elambda__2___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_parserExtension___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_parserExtension___elambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_parserExtension___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_EnvExtensionInterfaceUnsafe_Lean_Environment___instance__6___closed__2;
x_2 = lean_box(0);
x_3 = l_Lean_Parser_parserExtension___closed__1;
x_4 = l_Lean_Parser_parserExtension___closed__2;
x_5 = l_Lean_Parser_parserExtension___closed__3;
x_6 = l_Lean_Parser_parserExtension___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_parserExtension___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_parserExtension___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_parserExtension___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_parserExtension___elambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_parserExtension___elambda__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_Lean_Parser_isParserCategory(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_Lean_Parser_parserExtension;
x_4 = l_Lean_PersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Std_PersistentHashMap_contains___at___private_Lean_Parser_Extension_0__Lean_Parser_addParserCategoryCore___spec__1(x_5, x_2);
return x_6;
}
}
lean_object* l_Lean_Parser_isParserCategory___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_isParserCategory(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_addParserCategory(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Parser_isParserCategory(x_1, x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_3);
x_6 = l_Lean_Parser_parserExtension;
x_7 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_6, x_1, x_5);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg(x_2);
return x_9;
}
}
}
lean_object* l_Lean_Parser_addParserCategory___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Parser_addParserCategory(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_leadingIdentAsSymbol_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_leadingIdentAsSymbol_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_leadingIdentAsSymbol_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Parser_leadingIdentAsSymbol(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Parser_parserExtension;
x_4 = l_Lean_PersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
lean_dec(x_8);
return x_9;
}
}
}
lean_object* l_Lean_Parser_leadingIdentAsSymbol___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_leadingIdentAsSymbol(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_mkCategoryAntiquotParser(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_2 = l_System_FilePath_dirName___closed__1;
x_3 = l_Lean_Name_toStringWithSep(x_2, x_1);
x_4 = lean_box(0);
x_5 = 1;
x_6 = l_Lean_Parser_mkAntiquot(x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_mkCategoryAntiquotParserFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Parser_mkCategoryAntiquotParser(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, x_2, x_3);
return x_6;
}
}
lean_object* l_Lean_Parser_categoryParserFnImpl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_categoryParserFnImpl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnImpl_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_categoryParserFnImpl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("syntax");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_categoryParserFnImpl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_categoryParserFnImpl___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_categoryParserFnImpl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("stx");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_categoryParserFnImpl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_categoryParserFnImpl___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_categoryParserFnImpl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Lean_Parser_categoryParserFnImpl___closed__2;
x_5 = lean_name_eq(x_1, x_4);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = l_Lean_Parser_parserExtension;
x_8 = l_Lean_PersistentEnvExtension_getState___rarg(x_7, x_6);
lean_dec(x_6);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
if (x_5 == 0)
{
x_10 = x_1;
goto block_33;
}
else
{
lean_object* x_34; 
lean_dec(x_1);
x_34 = l_Lean_Parser_categoryParserFnImpl___closed__4;
x_10 = x_34;
goto block_33;
}
block_33:
{
lean_object* x_11; 
x_11 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_12 = l_System_FilePath_dirName___closed__1;
x_13 = l_Lean_Name_toStringWithSep(x_12, x_10);
x_14 = l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_Init_Data_Repr___instance__15___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_19, sizeof(void*)*1);
lean_dec(x_19);
lean_inc(x_10);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_mkCategoryAntiquotParserFn), 3, 1);
lean_closure_set(x_22, 0, x_10);
x_23 = lean_box(x_21);
lean_inc(x_20);
lean_inc(x_10);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_leadingParserAux___boxed), 5, 3);
lean_closure_set(x_24, 0, x_10);
lean_closure_set(x_24, 1, x_20);
lean_closure_set(x_24, 2, x_23);
lean_inc(x_3);
lean_inc(x_2);
x_25 = l_Lean_Parser_tryAnti(x_2, x_3);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_22);
lean_inc(x_2);
lean_inc(x_20);
x_26 = l_Lean_Parser_leadingParserAux(x_10, x_20, x_21, x_2, x_3);
x_27 = lean_ctor_get(x_26, 3);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = l_Lean_Parser_trailingLoop(x_20, x_2, x_26);
return x_28;
}
else
{
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_2);
return x_26;
}
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_10);
x_29 = 1;
lean_inc(x_2);
x_30 = l_Lean_Parser_orelseFnCore(x_22, x_24, x_29, x_2, x_3);
x_31 = lean_ctor_get(x_30, 3);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = l_Lean_Parser_trailingLoop(x_20, x_2, x_30);
return x_32;
}
else
{
lean_dec(x_31);
lean_dec(x_20);
lean_dec(x_2);
return x_30;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_setCategoryParserFnRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFnImpl), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_setCategoryParserFnRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = l_Lean_Parser_categoryParserFnRef;
x_3 = l_Lean_Parser_setCategoryParserFnRef___closed__1;
x_4 = lean_st_ref_set(x_2, x_3, x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l_Lean_Parser_addToken(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Parser_parserExtension;
x_4 = l_Lean_PersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
lean_inc(x_2);
x_6 = l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_2);
x_13 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_3, x_1, x_12);
lean_ctor_set(x_6, 0, x_13);
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_2);
x_15 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_3, x_1, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_addSyntaxNodeKind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = l_Lean_Parser_parserExtension;
x_5 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_4, x_1, x_3);
return x_5;
}
}
uint8_t l_Std_PersistentHashMap_containsAtAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
uint8_t l_Std_PersistentHashMap_containsAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Std_PersistentHashMap_insertAux___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Std_PersistentHashMap_containsAtAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__3(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
uint8_t l_Std_PersistentHashMap_contains___at_Lean_Parser_isValidSyntaxNodeKind___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = l_Std_PersistentHashMap_containsAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__2(x_3, x_4, x_2);
return x_5;
}
}
uint8_t l_Lean_Parser_isValidSyntaxNodeKind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = l_Lean_Parser_parserExtension;
x_4 = l_Lean_PersistentEnvExtension_getState___rarg(x_3, x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Std_PersistentHashMap_contains___at_Lean_Parser_isValidSyntaxNodeKind___spec__1(x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_containsAtAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Std_PersistentHashMap_containsAtAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_containsAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_containsAux___at_Lean_Parser_isValidSyntaxNodeKind___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_contains___at_Lean_Parser_isValidSyntaxNodeKind___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_PersistentHashMap_contains___at_Lean_Parser_isValidSyntaxNodeKind___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_isValidSyntaxNodeKind___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Parser_isValidSyntaxNodeKind(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_getSyntaxNodeKinds___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
x_2 = x_8;
x_4 = x_10;
goto _start;
}
case 1:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
lean_dec(x_6);
x_13 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2(x_12, x_4);
lean_dec(x_12);
x_2 = x_8;
x_4 = x_13;
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
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_getSyntaxNodeKinds___spec__3(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = l_Std_RBTree_toList___rarg___closed__1;
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg(x_13, x_11, x_12, lean_box(0), x_14, x_2);
return x_15;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Parser_getSyntaxNodeKinds___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_getSyntaxNodeKinds(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Parser_parserExtension;
x_3 = l_Lean_PersistentEnvExtension_getState___rarg(x_2, x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = l_Std_PersistentHashMap_foldlM___at_Lean_Parser_getSyntaxNodeKinds___spec__1(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_getSyntaxNodeKinds___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_getSyntaxNodeKinds___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Parser_getSyntaxNodeKinds___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Parser_getSyntaxNodeKinds___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Parser_getSyntaxNodeKinds___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_foldlM___at_Lean_Parser_getSyntaxNodeKinds___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_getSyntaxNodeKinds___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_getSyntaxNodeKinds(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_getTokenTable(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Parser_parserExtension;
x_3 = l_Lean_PersistentEnvExtension_getState___rarg(x_2, x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_getTokenTable___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_getTokenTable(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkInputContext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = l_Lean_FileMap_ofString(x_1);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_mkParserContext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_3 = l_Lean_Parser_getTokenTable(x_1);
x_4 = lean_box(0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = 0;
x_7 = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_1);
lean_ctor_set(x_7, 3, x_3);
lean_ctor_set(x_7, 4, x_4);
lean_ctor_set(x_7, 5, x_4);
lean_ctor_set_uint8(x_7, sizeof(void*)*6, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*6 + 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_mkParserState(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Parser_initCacheForInput(x_1);
x_3 = lean_box(0);
x_4 = l_Array_empty___closed__1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set(x_6, 2, x_2);
lean_ctor_set(x_6, 3, x_3);
return x_6;
}
}
lean_object* l_Lean_Parser_mkParserState___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_mkParserState(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_runParserCategory(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
x_5 = l_Lean_Parser_mkInputContext(x_3, x_4);
x_6 = l_Lean_Parser_mkParserContext(x_1, x_5);
x_7 = l_Lean_Parser_mkParserState(x_3);
x_8 = l_Lean_Parser_whitespace(x_6, x_7);
lean_inc(x_6);
x_9 = l_Lean_Parser_categoryParserFnImpl(x_2, x_6, x_8);
x_10 = lean_ctor_get(x_9, 3);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
x_12 = lean_string_utf8_at_end(x_3, x_11);
lean_dec(x_11);
lean_dec(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l_Lean_Parser_ParserState_mkEOIError___closed__1;
x_14 = l_Lean_Parser_ParserState_mkError(x_9, x_13);
x_15 = l_Lean_Parser_ParserState_toErrorMsg(x_6, x_14);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_3);
x_20 = l_Lean_Parser_ParserState_toErrorMsg(x_6, x_9);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
lean_object* l_Lean_Parser_declareBuiltinParser_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_declareBuiltinParser_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_declareBuiltinParser_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_declareBuiltinParser___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_regBuiltinParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_declareBuiltinParser___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_declareBuiltinParser___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_declareBuiltinParser___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to emit registration code for builtin parser '");
return x_1;
}
}
lean_object* l_Lean_Parser_declareBuiltinParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_7 = l_Lean_Parser_declareBuiltinParser___closed__2;
lean_inc(x_4);
x_8 = l_Lean_Name_append(x_7, x_4);
x_9 = lean_box(0);
x_10 = l_Lean_mkConst(x_2, x_9);
x_11 = l_Lean_Name_toExprAux(x_3);
lean_inc(x_4);
x_12 = l_Lean_Name_toExprAux(x_4);
lean_inc(x_4);
x_13 = l_Lean_mkConst(x_4, x_9);
x_14 = l_Lean_mkNatLit(x_5);
x_15 = l_Std_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_16 = lean_array_push(x_15, x_11);
x_17 = lean_array_push(x_16, x_12);
x_18 = lean_array_push(x_17, x_13);
x_19 = lean_array_push(x_18, x_14);
x_20 = l_Lean_mkAppN(x_10, x_19);
lean_dec(x_19);
x_21 = l_Lean_KeyedDeclsAttribute_declareBuiltin___rarg___closed__6;
lean_inc(x_8);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_8);
lean_ctor_set(x_22, 1, x_9);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_box(0);
x_24 = 0;
x_25 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_20);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*3, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_Environment_addAndCompile(x_1, x_9, x_26);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_27);
lean_dec(x_8);
x_28 = l_System_FilePath_dirName___closed__1;
x_29 = l_Lean_Name_toStringWithSep(x_28, x_4);
x_30 = l_Lean_Parser_declareBuiltinParser___closed__3;
x_31 = lean_string_append(x_30, x_29);
lean_dec(x_29);
x_32 = l_Init_Data_Repr___instance__15___closed__1;
x_33 = lean_string_append(x_31, x_32);
x_34 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_6);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_4);
x_36 = lean_ctor_get(x_27, 0);
lean_inc(x_36);
lean_dec(x_27);
x_37 = l_Lean_regularInitAttr;
x_38 = lean_box(0);
x_39 = l_Lean_ParametricAttribute_setParam___rarg(x_37, x_36, x_8, x_38);
x_40 = l_IO_ofExcept___at_Lean_KeyedDeclsAttribute_declareBuiltin___spec__1(x_39, x_6);
lean_dec(x_39);
return x_40;
}
}
}
static lean_object* _init_l_Lean_Parser_declareLeadingBuiltinParser___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("addBuiltinLeadingParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_declareLeadingBuiltinParser___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Init_Notation___hyg_37____closed__4;
x_2 = l_Lean_Parser_declareLeadingBuiltinParser___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_declareLeadingBuiltinParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_declareLeadingBuiltinParser___closed__2;
x_7 = l_Lean_Parser_declareBuiltinParser(x_1, x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_declareTrailingBuiltinParser___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("addBuiltinTrailingParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_declareTrailingBuiltinParser___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Init_Notation___hyg_37____closed__4;
x_2 = l_Lean_Parser_declareTrailingBuiltinParser___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_declareTrailingBuiltinParser(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_declareTrailingBuiltinParser___closed__2;
x_7 = l_Lean_Parser_declareBuiltinParser(x_1, x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_getParserPriority_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_getParserPriority_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_getParserPriority_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_getParserPriority_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
lean_dec(x_2);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_2, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Parser_getParserPriority_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_getParserPriority_match__2___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_getParserPriority___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid parser attribute, no argument or numeral expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_getParserPriority___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_getParserPriority___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_getParserPriority___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid parser attribute, numeral expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_getParserPriority___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_getParserPriority___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_getParserPriority___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_getParserPriority(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
lean_inc(x_1);
x_2 = l_Lean_Syntax_getNumArgs(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_dec_eq(x_2, x_5);
lean_dec(x_2);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = l_Lean_Parser_getParserPriority___closed__2;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Syntax_getArg(x_1, x_3);
lean_dec(x_1);
x_9 = l_Lean_numLitKind;
x_10 = l_Lean_Syntax_isNatLitAux(x_9, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Parser_getParserPriority___closed__4;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
}
else
{
lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = l_Lean_Parser_getParserPriority___closed__5;
return x_14;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
uint64_t x_11; lean_object* x_12; size_t x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_12 = lean_ctor_get(x_5, 1);
x_13 = lean_ctor_get_usize(x_5, 2);
x_14 = lean_ctor_get(x_5, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
lean_object* x_16; size_t x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_6, 1);
x_17 = lean_ctor_get_usize(x_6, 2);
x_18 = lean_ctor_get(x_6, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_7, 1);
x_21 = lean_ctor_get_usize(x_7, 2);
x_22 = lean_ctor_get(x_7, 0);
lean_dec(x_22);
x_23 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_24 = lean_string_dec_eq(x_20, x_23);
lean_dec(x_20);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_16);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_apply_1(x_4, x_1);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_1);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = lean_ctor_get(x_1, 1);
lean_dec(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_dec(x_28);
x_29 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_30 = lean_string_dec_eq(x_16, x_29);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_23);
x_31 = lean_apply_1(x_4, x_1);
return x_31;
}
else
{
lean_object* x_32; uint8_t x_33; 
lean_dec(x_16);
x_32 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_33 = lean_string_dec_eq(x_12, x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_2);
x_34 = lean_string_dec_eq(x_12, x_29);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_23);
lean_ctor_set(x_6, 1, x_29);
x_35 = lean_apply_1(x_4, x_1);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_free_object(x_1);
lean_free_object(x_7);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
x_36 = lean_box_uint64(x_11);
x_37 = lean_box_usize(x_21);
x_38 = lean_box_usize(x_17);
x_39 = lean_box_usize(x_13);
x_40 = lean_apply_5(x_3, x_9, x_36, x_37, x_38, x_39);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_free_object(x_1);
lean_free_object(x_7);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
x_41 = lean_box_uint64(x_11);
x_42 = lean_box_usize(x_21);
x_43 = lean_box_usize(x_17);
x_44 = lean_box_usize(x_13);
x_45 = lean_apply_5(x_2, x_9, x_41, x_42, x_43, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; uint8_t x_47; 
lean_dec(x_1);
x_46 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_47 = lean_string_dec_eq(x_16, x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_23);
x_48 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_48, 0, x_5);
lean_ctor_set(x_48, 1, x_9);
lean_ctor_set_uint64(x_48, sizeof(void*)*2, x_11);
x_49 = lean_apply_1(x_4, x_48);
return x_49;
}
else
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_16);
x_50 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_51 = lean_string_dec_eq(x_12, x_50);
if (x_51 == 0)
{
uint8_t x_52; 
lean_dec(x_2);
x_52 = lean_string_dec_eq(x_12, x_46);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_23);
lean_ctor_set(x_6, 1, x_46);
x_53 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_53, 0, x_5);
lean_ctor_set(x_53, 1, x_9);
lean_ctor_set_uint64(x_53, sizeof(void*)*2, x_11);
x_54 = lean_apply_1(x_4, x_53);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
x_55 = lean_box_uint64(x_11);
x_56 = lean_box_usize(x_21);
x_57 = lean_box_usize(x_17);
x_58 = lean_box_usize(x_13);
x_59 = lean_apply_5(x_3, x_9, x_55, x_56, x_57, x_58);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
x_60 = lean_box_uint64(x_11);
x_61 = lean_box_usize(x_21);
x_62 = lean_box_usize(x_17);
x_63 = lean_box_usize(x_13);
x_64 = lean_apply_5(x_2, x_9, x_60, x_61, x_62, x_63);
return x_64;
}
}
}
}
}
else
{
lean_object* x_65; size_t x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_ctor_get(x_7, 1);
x_66 = lean_ctor_get_usize(x_7, 2);
lean_inc(x_65);
lean_dec(x_7);
x_67 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_68 = lean_string_dec_eq(x_65, x_67);
lean_dec(x_65);
if (x_68 == 0)
{
lean_object* x_69; 
lean_free_object(x_6);
lean_dec(x_16);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_apply_1(x_4, x_1);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_70 = x_1;
} else {
 lean_dec_ref(x_1);
 x_70 = lean_box(0);
}
x_71 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_72 = lean_string_dec_eq(x_16, x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_3);
lean_dec(x_2);
x_73 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_73, 0, x_8);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set_usize(x_73, 2, x_66);
lean_ctor_set(x_6, 0, x_73);
if (lean_is_scalar(x_70)) {
 x_74 = lean_alloc_ctor(4, 2, 8);
} else {
 x_74 = x_70;
}
lean_ctor_set(x_74, 0, x_5);
lean_ctor_set(x_74, 1, x_9);
lean_ctor_set_uint64(x_74, sizeof(void*)*2, x_11);
x_75 = lean_apply_1(x_4, x_74);
return x_75;
}
else
{
lean_object* x_76; uint8_t x_77; 
lean_dec(x_16);
x_76 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_77 = lean_string_dec_eq(x_12, x_76);
if (x_77 == 0)
{
uint8_t x_78; 
lean_dec(x_2);
x_78 = lean_string_dec_eq(x_12, x_71);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_3);
x_79 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_79, 0, x_8);
lean_ctor_set(x_79, 1, x_67);
lean_ctor_set_usize(x_79, 2, x_66);
lean_ctor_set(x_6, 1, x_71);
lean_ctor_set(x_6, 0, x_79);
if (lean_is_scalar(x_70)) {
 x_80 = lean_alloc_ctor(4, 2, 8);
} else {
 x_80 = x_70;
}
lean_ctor_set(x_80, 0, x_5);
lean_ctor_set(x_80, 1, x_9);
lean_ctor_set_uint64(x_80, sizeof(void*)*2, x_11);
x_81 = lean_apply_1(x_4, x_80);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_70);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
x_82 = lean_box_uint64(x_11);
x_83 = lean_box_usize(x_66);
x_84 = lean_box_usize(x_17);
x_85 = lean_box_usize(x_13);
x_86 = lean_apply_5(x_3, x_9, x_82, x_83, x_84, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_70);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
x_87 = lean_box_uint64(x_11);
x_88 = lean_box_usize(x_66);
x_89 = lean_box_usize(x_17);
x_90 = lean_box_usize(x_13);
x_91 = lean_apply_5(x_2, x_9, x_87, x_88, x_89, x_90);
return x_91;
}
}
}
}
}
else
{
lean_object* x_92; size_t x_93; lean_object* x_94; size_t x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_92 = lean_ctor_get(x_6, 1);
x_93 = lean_ctor_get_usize(x_6, 2);
lean_inc(x_92);
lean_dec(x_6);
x_94 = lean_ctor_get(x_7, 1);
lean_inc(x_94);
x_95 = lean_ctor_get_usize(x_7, 2);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_96 = x_7;
} else {
 lean_dec_ref(x_7);
 x_96 = lean_box(0);
}
x_97 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_98 = lean_string_dec_eq(x_94, x_97);
lean_dec(x_94);
if (x_98 == 0)
{
lean_object* x_99; 
lean_dec(x_96);
lean_dec(x_92);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_99 = lean_apply_1(x_4, x_1);
return x_99;
}
else
{
lean_object* x_100; lean_object* x_101; uint8_t x_102; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_100 = x_1;
} else {
 lean_dec_ref(x_1);
 x_100 = lean_box(0);
}
x_101 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_102 = lean_string_dec_eq(x_92, x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_96)) {
 x_103 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_103 = x_96;
}
lean_ctor_set(x_103, 0, x_8);
lean_ctor_set(x_103, 1, x_97);
lean_ctor_set_usize(x_103, 2, x_95);
x_104 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_92);
lean_ctor_set_usize(x_104, 2, x_93);
lean_ctor_set(x_5, 0, x_104);
if (lean_is_scalar(x_100)) {
 x_105 = lean_alloc_ctor(4, 2, 8);
} else {
 x_105 = x_100;
}
lean_ctor_set(x_105, 0, x_5);
lean_ctor_set(x_105, 1, x_9);
lean_ctor_set_uint64(x_105, sizeof(void*)*2, x_11);
x_106 = lean_apply_1(x_4, x_105);
return x_106;
}
else
{
lean_object* x_107; uint8_t x_108; 
lean_dec(x_92);
x_107 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_108 = lean_string_dec_eq(x_12, x_107);
if (x_108 == 0)
{
uint8_t x_109; 
lean_dec(x_2);
x_109 = lean_string_dec_eq(x_12, x_101);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_3);
if (lean_is_scalar(x_96)) {
 x_110 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_110 = x_96;
}
lean_ctor_set(x_110, 0, x_8);
lean_ctor_set(x_110, 1, x_97);
lean_ctor_set_usize(x_110, 2, x_95);
x_111 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_101);
lean_ctor_set_usize(x_111, 2, x_93);
lean_ctor_set(x_5, 0, x_111);
if (lean_is_scalar(x_100)) {
 x_112 = lean_alloc_ctor(4, 2, 8);
} else {
 x_112 = x_100;
}
lean_ctor_set(x_112, 0, x_5);
lean_ctor_set(x_112, 1, x_9);
lean_ctor_set_uint64(x_112, sizeof(void*)*2, x_11);
x_113 = lean_apply_1(x_4, x_112);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec(x_100);
lean_dec(x_96);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
x_114 = lean_box_uint64(x_11);
x_115 = lean_box_usize(x_95);
x_116 = lean_box_usize(x_93);
x_117 = lean_box_usize(x_13);
x_118 = lean_apply_5(x_3, x_9, x_114, x_115, x_116, x_117);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_100);
lean_dec(x_96);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_4);
lean_dec(x_3);
x_119 = lean_box_uint64(x_11);
x_120 = lean_box_usize(x_95);
x_121 = lean_box_usize(x_93);
x_122 = lean_box_usize(x_13);
x_123 = lean_apply_5(x_2, x_9, x_119, x_120, x_121, x_122);
return x_123;
}
}
}
}
}
else
{
uint64_t x_124; lean_object* x_125; size_t x_126; lean_object* x_127; size_t x_128; lean_object* x_129; lean_object* x_130; size_t x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_124 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_125 = lean_ctor_get(x_5, 1);
x_126 = lean_ctor_get_usize(x_5, 2);
lean_inc(x_125);
lean_dec(x_5);
x_127 = lean_ctor_get(x_6, 1);
lean_inc(x_127);
x_128 = lean_ctor_get_usize(x_6, 2);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_129 = x_6;
} else {
 lean_dec_ref(x_6);
 x_129 = lean_box(0);
}
x_130 = lean_ctor_get(x_7, 1);
lean_inc(x_130);
x_131 = lean_ctor_get_usize(x_7, 2);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_132 = x_7;
} else {
 lean_dec_ref(x_7);
 x_132 = lean_box(0);
}
x_133 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_134 = lean_string_dec_eq(x_130, x_133);
lean_dec(x_130);
if (x_134 == 0)
{
lean_object* x_135; 
lean_dec(x_132);
lean_dec(x_129);
lean_dec(x_127);
lean_dec(x_125);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_135 = lean_apply_1(x_4, x_1);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; uint8_t x_138; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_136 = x_1;
} else {
 lean_dec_ref(x_1);
 x_136 = lean_box(0);
}
x_137 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_138 = lean_string_dec_eq(x_127, x_137);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_132)) {
 x_139 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_139 = x_132;
}
lean_ctor_set(x_139, 0, x_8);
lean_ctor_set(x_139, 1, x_133);
lean_ctor_set_usize(x_139, 2, x_131);
if (lean_is_scalar(x_129)) {
 x_140 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_140 = x_129;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_127);
lean_ctor_set_usize(x_140, 2, x_128);
x_141 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_125);
lean_ctor_set_usize(x_141, 2, x_126);
if (lean_is_scalar(x_136)) {
 x_142 = lean_alloc_ctor(4, 2, 8);
} else {
 x_142 = x_136;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_9);
lean_ctor_set_uint64(x_142, sizeof(void*)*2, x_124);
x_143 = lean_apply_1(x_4, x_142);
return x_143;
}
else
{
lean_object* x_144; uint8_t x_145; 
lean_dec(x_127);
x_144 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_145 = lean_string_dec_eq(x_125, x_144);
if (x_145 == 0)
{
uint8_t x_146; 
lean_dec(x_2);
x_146 = lean_string_dec_eq(x_125, x_137);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_3);
if (lean_is_scalar(x_132)) {
 x_147 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_147 = x_132;
}
lean_ctor_set(x_147, 0, x_8);
lean_ctor_set(x_147, 1, x_133);
lean_ctor_set_usize(x_147, 2, x_131);
if (lean_is_scalar(x_129)) {
 x_148 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
} else {
 x_148 = x_129;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_137);
lean_ctor_set_usize(x_148, 2, x_128);
x_149 = lean_alloc_ctor(1, 2, sizeof(size_t)*1);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_125);
lean_ctor_set_usize(x_149, 2, x_126);
if (lean_is_scalar(x_136)) {
 x_150 = lean_alloc_ctor(4, 2, 8);
} else {
 x_150 = x_136;
}
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_9);
lean_ctor_set_uint64(x_150, sizeof(void*)*2, x_124);
x_151 = lean_apply_1(x_4, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_136);
lean_dec(x_132);
lean_dec(x_129);
lean_dec(x_125);
lean_dec(x_4);
x_152 = lean_box_uint64(x_124);
x_153 = lean_box_usize(x_131);
x_154 = lean_box_usize(x_128);
x_155 = lean_box_usize(x_126);
x_156 = lean_apply_5(x_3, x_9, x_152, x_153, x_154, x_155);
return x_156;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_136);
lean_dec(x_132);
lean_dec(x_129);
lean_dec(x_125);
lean_dec(x_4);
lean_dec(x_3);
x_157 = lean_box_uint64(x_124);
x_158 = lean_box_usize(x_131);
x_159 = lean_box_usize(x_128);
x_160 = lean_box_usize(x_126);
x_161 = lean_apply_5(x_2, x_9, x_157, x_158, x_159, x_160);
return x_161;
}
}
}
}
}
else
{
lean_object* x_162; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_162 = lean_apply_1(x_4, x_1);
return x_162;
}
}
else
{
lean_object* x_163; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_163 = lean_apply_1(x_4, x_1);
return x_163;
}
}
else
{
lean_object* x_164; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_164 = lean_apply_1(x_4, x_1);
return x_164;
}
}
else
{
lean_object* x_165; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_165 = lean_apply_1(x_4, x_1);
return x_165;
}
}
else
{
lean_object* x_166; 
lean_dec(x_3);
lean_dec(x_2);
x_166 = lean_apply_1(x_4, x_1);
return x_166;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_8, x_2, x_3, x_4, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = 1;
x_9 = l_Lean_Parser_runParserAttributeHooks(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' (`Parser` or `TrailingParser` expected)");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at_Lean_registerInitAttrUnsafe___spec__1(x_1, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_7, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_ConstantInfo_type(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_16) == 4)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 1)
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 1)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 1)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = l_myMacro____x40_Init_Notation___hyg_37____closed__1;
x_25 = lean_string_dec_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_26, 0, x_1);
x_27 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_30, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = l_myMacro____x40_Init_Notation___hyg_37____closed__3;
x_37 = lean_string_dec_eq(x_22, x_36);
lean_dec(x_22);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_38, 0, x_1);
x_39 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_42, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_object* x_48; uint8_t x_49; 
x_48 = l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3;
x_49 = lean_string_dec_eq(x_21, x_48);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = lean_string_dec_eq(x_21, x_36);
lean_dec(x_21);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_51 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_51, 0, x_1);
x_52 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_55, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
return x_56;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_st_ref_get(x_7, x_14);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_ctor_get(x_6, 3);
lean_inc(x_63);
lean_inc(x_1);
lean_inc(x_2);
x_64 = l_Lean_Parser_declareLeadingBuiltinParser(x_15, x_2, x_1, x_3, x_62);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; 
lean_dec(x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_65, x_5, x_6, x_7, x_66);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = 1;
x_70 = l_Lean_Parser_runParserAttributeHooks(x_2, x_1, x_69, x_5, x_6, x_7, x_68);
return x_70;
}
else
{
uint8_t x_71; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_64);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_64, 0);
x_73 = lean_io_error_to_string(x_72);
x_74 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_63);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_64, 0, x_76);
return x_64;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_77 = lean_ctor_get(x_64, 0);
x_78 = lean_ctor_get(x_64, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_64);
x_79 = lean_io_error_to_string(x_77);
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_63);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_78);
return x_83;
}
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_21);
x_84 = lean_st_ref_get(x_7, x_14);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_ctor_get(x_6, 3);
lean_inc(x_86);
lean_inc(x_1);
lean_inc(x_2);
x_87 = l_Lean_Parser_declareTrailingBuiltinParser(x_15, x_2, x_1, x_3, x_85);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; lean_object* x_93; 
lean_dec(x_86);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_88, x_5, x_6, x_7, x_89);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = 1;
x_93 = l_Lean_Parser_runParserAttributeHooks(x_2, x_1, x_92, x_5, x_6, x_7, x_91);
return x_93;
}
else
{
uint8_t x_94; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_87);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_95 = lean_ctor_get(x_87, 0);
x_96 = lean_io_error_to_string(x_95);
x_97 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_86);
lean_ctor_set(x_99, 1, x_98);
lean_ctor_set(x_87, 0, x_99);
return x_87;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_100 = lean_ctor_get(x_87, 0);
x_101 = lean_ctor_get(x_87, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_87);
x_102 = lean_io_error_to_string(x_100);
x_103 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_103, 0, x_102);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_86);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_101);
return x_106;
}
}
}
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_107 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_107, 0, x_1);
x_108 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_109 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_111, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_113 = !lean_is_exclusive(x_112);
if (x_113 == 0)
{
return x_112;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_112, 0);
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_112);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_117 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_117, 0, x_1);
x_118 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_119 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
x_120 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_121 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_121, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
return x_122;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_122, 0);
x_125 = lean_ctor_get(x_122, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_122);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_127 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_127, 0, x_1);
x_128 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_129 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_131 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_131, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_133 = !lean_is_exclusive(x_132);
if (x_133 == 0)
{
return x_132;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_132, 0);
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_132);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_137 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_137, 0, x_1);
x_138 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_139 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_141 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
x_142 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_141, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_143 = !lean_is_exclusive(x_142);
if (x_143 == 0)
{
return x_142;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_142, 0);
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_142);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_147 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_147, 0, x_1);
x_148 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1;
x_149 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3;
x_151 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_151, x_5, x_6, x_7, x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
return x_152;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_152, 0);
x_155 = lean_ctor_get(x_152, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_152);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_157 = !lean_is_exclusive(x_9);
if (x_157 == 0)
{
return x_9;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_9, 0);
x_159 = lean_ctor_get(x_9, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_9);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_getParserPriority(x_4);
x_11 = l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1(x_10, x_6, x_7, x_8, x_9);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
if (x_5 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = l_Lean_registerTagAttribute___lambda__5___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_registerTagAttribute___lambda__6___closed__2;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_17, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_11, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_dec(x_11);
x_25 = lean_box(0);
x_26 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2(x_3, x_2, x_23, x_25, x_6, x_7, x_8, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_9;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Parser_registerBuiltinParserAttribute___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Builtin parser");
return x_1;
}
}
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_2);
x_5 = l___private_Lean_Parser_Extension_0__Lean_Parser_addBuiltinParserCategory(x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_registerBuiltinParserAttribute___closed__1;
x_8 = 1;
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*2, x_8);
x_10 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___boxed), 9, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_registerBuiltinAttribute(x_11, x_6);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_registerBuiltinParserAttribute___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_Parser_registerBuiltinParserAttribute(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid parser '");
return x_1;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_st_ref_get(x_5, x_6);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Parser_addToken(x_14, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__2;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__3;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Array_foldlMUnsafe_fold___at_Lean_withNestedTraces___spec__5___closed__1;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_25, x_3, x_4, x_5, x_13);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
return x_26;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_26);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_15, 0);
lean_inc(x_31);
lean_dec(x_15);
x_32 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_31, x_3, x_4, x_5, x_13);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_2 = x_10;
x_6 = x_33;
goto _start;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_2 == x_3;
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_array_uget(x_1, x_2);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_take(x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_16 = lean_ctor_get(x_13, 0);
x_17 = l_Lean_Parser_addSyntaxNodeKind(x_16, x_11);
lean_ctor_set(x_13, 0, x_17);
x_18 = lean_st_ref_set(x_7, x_13, x_14);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = 1;
x_21 = x_2 + x_20;
x_22 = lean_box(0);
x_2 = x_21;
x_4 = x_22;
x_8 = x_19;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; size_t x_32; size_t x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
x_26 = lean_ctor_get(x_13, 2);
x_27 = lean_ctor_get(x_13, 3);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_28 = l_Lean_Parser_addSyntaxNodeKind(x_24, x_11);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
lean_ctor_set(x_29, 2, x_26);
lean_ctor_set(x_29, 3, x_27);
x_30 = lean_st_ref_set(x_7, x_29, x_14);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = 1;
x_33 = x_2 + x_32;
x_34 = lean_box(0);
x_2 = x_33;
x_4 = x_34;
x_8 = x_31;
goto _start;
}
}
case 1:
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_10, 0);
lean_inc(x_36);
lean_dec(x_10);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_37 = l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4(x_36, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = 1;
x_41 = x_2 + x_40;
x_2 = x_41;
x_4 = x_38;
x_8 = x_39;
goto _start;
}
else
{
uint8_t x_43; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_43 = !lean_is_exclusive(x_37);
if (x_43 == 0)
{
return x_37;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_37, 0);
x_45 = lean_ctor_get(x_37, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_37);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
default: 
{
size_t x_47; size_t x_48; 
x_47 = 1;
x_48 = x_2 + x_47;
x_2 = x_48;
goto _start;
}
}
}
else
{
lean_object* x_50; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_4);
lean_ctor_set(x_50, 1, x_8);
return x_50;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_5, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_array_fget(x_2, x_5);
x_15 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = lean_apply_7(x_1, x_6, x_14, x_15, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_5, x_19);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_20;
x_6 = x_17;
x_10 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
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
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_st_ref_take(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = l_Lean_Parser_addSyntaxNodeKind(x_12, x_2);
lean_ctor_set(x_9, 0, x_13);
x_14 = lean_st_ref_set(x_6, x_9, x_10);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
x_23 = lean_ctor_get(x_9, 2);
x_24 = lean_ctor_get(x_9, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_25 = l_Lean_Parser_addSyntaxNodeKind(x_21, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
x_27 = lean_st_ref_set(x_6, x_26, x_10);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
x_30 = lean_box(0);
if (lean_is_scalar(x_29)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_29;
}
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
return x_31;
}
}
}
static lean_object* _init_l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___lambda__1___boxed), 7, 0);
return x_1;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_8, x_8);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = 0;
x_15 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_16 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__5(x_7, x_14, x_15, x_2, x_3, x_4, x_5, x_6);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_19 = l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___closed__1;
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg(x_19, x_17, x_18, lean_box(0), x_20, x_2, x_3, x_4, x_5, x_6);
return x_21;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3(x_1, x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = 0;
x_9 = l_Lean_Parser_runParserAttributeHooks(x_1, x_2, x_8, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Parser_getParserPriority(x_3);
x_10 = l_Lean_ofExcept___at___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___spec__1(x_9, x_5, x_6, x_7, x_8);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_st_ref_get(x_7, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Parser_parserExtension;
x_18 = l_Lean_PersistentEnvExtension_getState___rarg(x_17, x_16);
lean_dec(x_16);
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_st_ref_get(x_7, x_15);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_ctor_get(x_6, 3);
lean_inc(x_26);
lean_inc(x_2);
lean_inc(x_19);
x_27 = l_Lean_Parser_mkParserOfConstant(x_19, x_2, x_25, x_22);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_box(0);
x_35 = lean_apply_1(x_33, x_34);
lean_inc(x_2);
x_36 = l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1(x_2, x_35, x_5, x_6, x_7, x_29);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_ctor_get(x_32, 1);
lean_inc(x_38);
lean_dec(x_32);
x_39 = l_Lean_LocalContext_fvarIdToDecl___default___closed__1;
x_40 = lean_apply_1(x_38, x_39);
x_41 = lean_box(0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_42 = l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3(x_40, x_41, x_5, x_6, x_7, x_37);
lean_dec(x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_unbox(x_30);
lean_inc(x_11);
lean_inc(x_31);
lean_inc(x_1);
x_45 = l_Lean_Parser_addParser(x_19, x_1, x_2, x_44, x_31, x_11);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_throwError___at_Lean_addAttribute___spec__2___rarg(x_48, x_5, x_6, x_7, x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
return x_49;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_49);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_45);
x_54 = lean_st_ref_take(x_7, x_43);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = !lean_is_exclusive(x_55);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; 
x_58 = lean_ctor_get(x_55, 0);
lean_inc(x_2);
lean_inc(x_1);
x_59 = lean_alloc_ctor(3, 4, 1);
lean_ctor_set(x_59, 0, x_1);
lean_ctor_set(x_59, 1, x_2);
lean_ctor_set(x_59, 2, x_31);
lean_ctor_set(x_59, 3, x_11);
x_60 = lean_unbox(x_30);
lean_dec(x_30);
lean_ctor_set_uint8(x_59, sizeof(void*)*4, x_60);
x_61 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_17, x_58, x_59);
lean_ctor_set(x_55, 0, x_61);
x_62 = lean_st_ref_set(x_7, x_55, x_56);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = 0;
x_65 = l_Lean_Parser_runParserAttributeHooks(x_1, x_2, x_64, x_5, x_6, x_7, x_63);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; 
x_66 = lean_ctor_get(x_55, 0);
x_67 = lean_ctor_get(x_55, 1);
x_68 = lean_ctor_get(x_55, 2);
x_69 = lean_ctor_get(x_55, 3);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_55);
lean_inc(x_2);
lean_inc(x_1);
x_70 = lean_alloc_ctor(3, 4, 1);
lean_ctor_set(x_70, 0, x_1);
lean_ctor_set(x_70, 1, x_2);
lean_ctor_set(x_70, 2, x_31);
lean_ctor_set(x_70, 3, x_11);
x_71 = lean_unbox(x_30);
lean_dec(x_30);
lean_ctor_set_uint8(x_70, sizeof(void*)*4, x_71);
x_72 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_17, x_66, x_70);
x_73 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set(x_73, 2, x_68);
lean_ctor_set(x_73, 3, x_69);
x_74 = lean_st_ref_set(x_7, x_73, x_56);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = 0;
x_77 = l_Lean_Parser_runParserAttributeHooks(x_1, x_2, x_76, x_5, x_6, x_7, x_75);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_42);
if (x_78 == 0)
{
return x_42;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_42, 0);
x_80 = lean_ctor_get(x_42, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_42);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_36);
if (x_82 == 0)
{
return x_36;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_36, 0);
x_84 = lean_ctor_get(x_36, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_36);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_27);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_ctor_get(x_27, 0);
x_88 = lean_io_error_to_string(x_87);
x_89 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_26);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_27, 0, x_91);
return x_27;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_27, 0);
x_93 = lean_ctor_get(x_27, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_27);
x_94 = lean_io_error_to_string(x_92);
x_95 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_26);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_93);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_10);
if (x_99 == 0)
{
return x_10;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_10, 0);
x_101 = lean_ctor_get(x_10, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_10);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_10 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_11 = l_Array_foldlMUnsafe_fold___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__5(x_1, x_9, x_10, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Std_PersistentHashMap_foldlMAux_traverse___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_PersistentHashMap_foldlM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
return x_8;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg(x_1, x_2, x_3, x_9, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg___boxed), 8, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkParserAttributeImpl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("parser");
return x_1;
}
}
lean_object* l_Lean_Parser_mkParserAttributeImpl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Lean_Parser_mkParserAttributeImpl___closed__1;
x_4 = 1;
x_5 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*2, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg___boxed), 8, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_4);
lean_dec(x_4);
x_10 = l_Lean_Parser_mkParserAttributeImpl___elambda__1___rarg(x_1, x_2, x_3, x_9, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Parser_mkParserAttributeImpl___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_mkParserAttributeImpl___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_Parser_mkParserAttributeImpl(x_1, x_2);
x_5 = l_Lean_registerBuiltinAttribute(x_4, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 2)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_ctor_get(x_5, 0);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_apply_2(x_2, x_10, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_13 = lean_apply_1(x_3, x_1);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid parser attribute implementation builder arguments");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2;
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 2)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = l_Lean_Parser_mkParserAttributeImpl(x_8, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_12 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2;
return x_12;
}
}
else
{
lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_13 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2;
return x_13;
}
}
}
else
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2;
return x_14;
}
}
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("parserAttr");
return x_1;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2;
x_3 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__3;
x_4 = l_Lean_registerAttributeImplBuilder(x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_registerParserCategory(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_6 = l_Lean_Parser_addParserCategory(x_1, x_3, x_4);
x_7 = l_IO_ofExcept___at_Lean_KeyedDeclsAttribute_declareBuiltin___spec__1(x_6, x_5);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_2);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_3);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2;
x_16 = l_Lean_registerAttributeOfBuilder(x_8, x_15, x_14, x_9);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
return x_7;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Parser_registerParserCategory___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Parser_registerParserCategory(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinTermParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__2;
x_3 = l___kind_term____x40_Init_Notation___hyg_3____closed__14;
x_4 = 0;
x_5 = l_Lean_Parser_registerBuiltinParserAttribute(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("termParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__2;
x_3 = l___kind_term____x40_Init_Notation___hyg_3____closed__14;
x_4 = l_Lean_Parser_registerBuiltinDynamicParserAttribute(x_2, x_3, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinCommandParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("command");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__2;
x_3 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4;
x_4 = 0;
x_5 = l_Lean_Parser_registerBuiltinParserAttribute(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("commandParser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__2;
x_3 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4;
x_4 = l_Lean_Parser_registerBuiltinDynamicParserAttribute(x_2, x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_commandParser(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4;
x_3 = l_Lean_Parser_categoryParser(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryTokenFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
x_5 = l_Lean_Parser_parserExtension;
x_6 = l_Lean_PersistentEnvExtension_getState___rarg(x_5, x_4);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Std_PersistentHashMap_find_x3f___at_Lean_Parser_getCategory___spec__1(x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_9 = l_System_FilePath_dirName___closed__1;
x_10 = l_Lean_Name_toStringWithSep(x_9, x_1);
x_11 = l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Init_Data_Repr___instance__15___closed__1;
x_14 = lean_string_append(x_12, x_13);
x_15 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
lean_inc(x_2);
x_17 = l_Lean_Parser_peekToken(x_2, x_3);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
if (lean_obj_tag(x_20) == 2)
{
uint8_t x_21; 
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*6);
lean_dec(x_2);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
lean_dec(x_16);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_box(0);
x_27 = lean_name_mk_string(x_26, x_23);
x_28 = l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1(x_25, x_27);
lean_dec(x_27);
lean_dec(x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_dec(x_1);
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_28);
x_29 = l_System_FilePath_dirName___closed__1;
x_30 = l_Lean_Name_toStringWithSep(x_29, x_1);
x_31 = l_Lean_Parser_ParserState_mkUnexpectedError(x_22, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_17, 0);
lean_inc(x_32);
lean_dec(x_17);
x_33 = lean_ctor_get(x_20, 1);
lean_inc(x_33);
lean_dec(x_20);
x_34 = l_Lean_Parser_mkAntiquot___closed__8;
x_35 = lean_string_dec_eq(x_33, x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_16, 0);
lean_inc(x_36);
lean_dec(x_16);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_box(0);
x_39 = lean_name_mk_string(x_38, x_33);
x_40 = l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1(x_37, x_39);
lean_dec(x_39);
lean_dec(x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_dec(x_1);
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_40);
x_41 = l_System_FilePath_dirName___closed__1;
x_42 = l_Lean_Name_toStringWithSep(x_41, x_1);
x_43 = l_Lean_Parser_ParserState_mkUnexpectedError(x_32, x_42);
return x_43;
}
}
else
{
lean_dec(x_33);
lean_dec(x_16);
lean_dec(x_1);
return x_32;
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_ctor_get(x_17, 0);
lean_inc(x_44);
lean_dec(x_17);
return x_44;
}
}
}
}
}
lean_object* l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_Parser_notFollowedByCategoryTokenFn___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Parser_notFollowedByCategoryToken(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_notFollowedByCommandToken___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_notFollowedByCommandToken___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_2 = l_Lean_Parser_notFollowedByCommandToken___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_notFollowedByCommandToken() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_notFollowedByCommandToken___closed__2;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_notFollowedByTermToken___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___kind_term____x40_Init_Notation___hyg_3____closed__14;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByCategoryTokenFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_notFollowedByTermToken___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Lean_Parser_Basic___instance__8___closed__1;
x_2 = l_Lean_Parser_notFollowedByTermToken___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_notFollowedByTermToken() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_notFollowedByTermToken___closed__2;
return x_1;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Basic(lean_object*);
lean_object* initialize_Lean_Parser_StrInterpolation(lean_object*);
lean_object* initialize_Lean_KeyedDeclsAttribute(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Extension(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_StrInterpolation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_KeyedDeclsAttribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_builtinTokenTable = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_builtinTokenTable);
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_22_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_builtinSyntaxNodeKindSetRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_builtinSyntaxNodeKindSetRef);
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_49_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_98_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_builtinParserCategoriesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_builtinParserCategoriesRef);
lean_dec_ref(res);
l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_throwParserCategoryAlreadyDefined___rarg___closed__2);
l_Lean_Parser_ParserExtensionState_tokens___default = _init_l_Lean_Parser_ParserExtensionState_tokens___default();
lean_mark_persistent(l_Lean_Parser_ParserExtensionState_tokens___default);
l_Lean_Parser_ParserExtensionState_kinds___default = _init_l_Lean_Parser_ParserExtensionState_kinds___default();
lean_mark_persistent(l_Lean_Parser_ParserExtensionState_kinds___default);
l_Lean_Parser_ParserExtensionState_categories___default = _init_l_Lean_Parser_ParserExtensionState_categories___default();
lean_mark_persistent(l_Lean_Parser_ParserExtensionState_categories___default);
l_Lean_Parser_ParserExtensionState_newEntries___default = _init_l_Lean_Parser_ParserExtensionState_newEntries___default();
lean_mark_persistent(l_Lean_Parser_ParserExtensionState_newEntries___default);
l_Lean_Parser_Lean_Parser_Extension___instance__1___closed__1 = _init_l_Lean_Parser_Lean_Parser_Extension___instance__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Lean_Parser_Extension___instance__1___closed__1);
l_Lean_Parser_Lean_Parser_Extension___instance__1 = _init_l_Lean_Parser_Lean_Parser_Extension___instance__1();
lean_mark_persistent(l_Lean_Parser_Lean_Parser_Extension___instance__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_addTokenConfig___closed__2);
l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1 = _init_l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_throwUnknownParserCategory___rarg___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_updateBuiltinTokens___closed__2);
l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__2);
l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__3);
l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_ParserExtensionAddEntry___closed__4);
l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1 = _init_l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__1);
l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2 = _init_l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__2);
l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3 = _init_l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3();
lean_mark_persistent(l_Lean_Parser_mkParserOfConstantUnsafe_match__1___rarg___closed__3);
l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1 = _init_l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__1);
l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2 = _init_l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_mkParserOfConstantUnsafe___rarg___closed__2);
l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1 = _init_l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Parser_registerAlias___rarg___lambda__2___closed__1);
l_Lean_Parser_registerAlias___rarg___closed__1 = _init_l_Lean_Parser_registerAlias___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_registerAlias___rarg___closed__1);
l_Lean_Parser_registerAlias___rarg___closed__2 = _init_l_Lean_Parser_registerAlias___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_registerAlias___rarg___closed__2);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1428_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserAliasesRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserAliasesRef);
lean_dec_ref(res);
l_Lean_Parser_compileParserDescr_visit___closed__1 = _init_l_Lean_Parser_compileParserDescr_visit___closed__1();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__1);
l_Lean_Parser_compileParserDescr_visit___closed__2 = _init_l_Lean_Parser_compileParserDescr_visit___closed__2();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__2);
l_Lean_Parser_compileParserDescr_visit___closed__3 = _init_l_Lean_Parser_compileParserDescr_visit___closed__3();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__3);
l_Lean_Parser_compileParserDescr_visit___closed__4 = _init_l_Lean_Parser_compileParserDescr_visit___closed__4();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__4);
l_Lean_Parser_compileParserDescr_visit___closed__5 = _init_l_Lean_Parser_compileParserDescr_visit___closed__5();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__5);
l_Lean_Parser_compileParserDescr_visit___closed__6 = _init_l_Lean_Parser_compileParserDescr_visit___closed__6();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__6);
l_Lean_Parser_compileParserDescr_visit___closed__7 = _init_l_Lean_Parser_compileParserDescr_visit___closed__7();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__7);
l_Lean_Parser_compileParserDescr_visit___closed__8 = _init_l_Lean_Parser_compileParserDescr_visit___closed__8();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__8);
l_Lean_Parser_compileParserDescr_visit___closed__9 = _init_l_Lean_Parser_compileParserDescr_visit___closed__9();
lean_mark_persistent(l_Lean_Parser_compileParserDescr_visit___closed__9);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1812_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserAttributeHooks = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserAttributeHooks);
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__2);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__3 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__3();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____lambda__2___closed__3);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__2);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__3 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__3();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__3);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__4 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__4();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__4);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__5 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__5();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__5);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__6 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__6();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871____closed__6);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1871_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__2);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__3 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__3();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____lambda__2___closed__3);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__2);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__3 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__3();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__3);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__4 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__4();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__4);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__5 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__5();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__5);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__6 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__6();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926____closed__6);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_1926_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__2);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__3 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__3();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__3);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__4 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__4();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__4);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__5 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__5();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__5);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__6 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__6();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__6);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__7 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__7();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__7);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__8 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__8();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122____closed__8);
l_Lean_Parser_parserExtension___closed__1 = _init_l_Lean_Parser_parserExtension___closed__1();
lean_mark_persistent(l_Lean_Parser_parserExtension___closed__1);
l_Lean_Parser_parserExtension___closed__2 = _init_l_Lean_Parser_parserExtension___closed__2();
lean_mark_persistent(l_Lean_Parser_parserExtension___closed__2);
l_Lean_Parser_parserExtension___closed__3 = _init_l_Lean_Parser_parserExtension___closed__3();
lean_mark_persistent(l_Lean_Parser_parserExtension___closed__3);
l_Lean_Parser_parserExtension___closed__4 = _init_l_Lean_Parser_parserExtension___closed__4();
lean_mark_persistent(l_Lean_Parser_parserExtension___closed__4);
l_Lean_Parser_parserExtension___closed__5 = _init_l_Lean_Parser_parserExtension___closed__5();
lean_mark_persistent(l_Lean_Parser_parserExtension___closed__5);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_2122_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_parserExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_parserExtension);
lean_dec_ref(res);
l_Lean_Parser_categoryParserFnImpl___closed__1 = _init_l_Lean_Parser_categoryParserFnImpl___closed__1();
lean_mark_persistent(l_Lean_Parser_categoryParserFnImpl___closed__1);
l_Lean_Parser_categoryParserFnImpl___closed__2 = _init_l_Lean_Parser_categoryParserFnImpl___closed__2();
lean_mark_persistent(l_Lean_Parser_categoryParserFnImpl___closed__2);
l_Lean_Parser_categoryParserFnImpl___closed__3 = _init_l_Lean_Parser_categoryParserFnImpl___closed__3();
lean_mark_persistent(l_Lean_Parser_categoryParserFnImpl___closed__3);
l_Lean_Parser_categoryParserFnImpl___closed__4 = _init_l_Lean_Parser_categoryParserFnImpl___closed__4();
lean_mark_persistent(l_Lean_Parser_categoryParserFnImpl___closed__4);
l_Lean_Parser_setCategoryParserFnRef___closed__1 = _init_l_Lean_Parser_setCategoryParserFnRef___closed__1();
lean_mark_persistent(l_Lean_Parser_setCategoryParserFnRef___closed__1);
res = l_Lean_Parser_setCategoryParserFnRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_declareBuiltinParser___closed__1 = _init_l_Lean_Parser_declareBuiltinParser___closed__1();
lean_mark_persistent(l_Lean_Parser_declareBuiltinParser___closed__1);
l_Lean_Parser_declareBuiltinParser___closed__2 = _init_l_Lean_Parser_declareBuiltinParser___closed__2();
lean_mark_persistent(l_Lean_Parser_declareBuiltinParser___closed__2);
l_Lean_Parser_declareBuiltinParser___closed__3 = _init_l_Lean_Parser_declareBuiltinParser___closed__3();
lean_mark_persistent(l_Lean_Parser_declareBuiltinParser___closed__3);
l_Lean_Parser_declareLeadingBuiltinParser___closed__1 = _init_l_Lean_Parser_declareLeadingBuiltinParser___closed__1();
lean_mark_persistent(l_Lean_Parser_declareLeadingBuiltinParser___closed__1);
l_Lean_Parser_declareLeadingBuiltinParser___closed__2 = _init_l_Lean_Parser_declareLeadingBuiltinParser___closed__2();
lean_mark_persistent(l_Lean_Parser_declareLeadingBuiltinParser___closed__2);
l_Lean_Parser_declareTrailingBuiltinParser___closed__1 = _init_l_Lean_Parser_declareTrailingBuiltinParser___closed__1();
lean_mark_persistent(l_Lean_Parser_declareTrailingBuiltinParser___closed__1);
l_Lean_Parser_declareTrailingBuiltinParser___closed__2 = _init_l_Lean_Parser_declareTrailingBuiltinParser___closed__2();
lean_mark_persistent(l_Lean_Parser_declareTrailingBuiltinParser___closed__2);
l_Lean_Parser_getParserPriority___closed__1 = _init_l_Lean_Parser_getParserPriority___closed__1();
lean_mark_persistent(l_Lean_Parser_getParserPriority___closed__1);
l_Lean_Parser_getParserPriority___closed__2 = _init_l_Lean_Parser_getParserPriority___closed__2();
lean_mark_persistent(l_Lean_Parser_getParserPriority___closed__2);
l_Lean_Parser_getParserPriority___closed__3 = _init_l_Lean_Parser_getParserPriority___closed__3();
lean_mark_persistent(l_Lean_Parser_getParserPriority___closed__3);
l_Lean_Parser_getParserPriority___closed__4 = _init_l_Lean_Parser_getParserPriority___closed__4();
lean_mark_persistent(l_Lean_Parser_getParserPriority___closed__4);
l_Lean_Parser_getParserPriority___closed__5 = _init_l_Lean_Parser_getParserPriority___closed__5();
lean_mark_persistent(l_Lean_Parser_getParserPriority___closed__5);
l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__2);
l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_BuiltinParserAttribute_add___lambda__2___closed__3);
l_Lean_Parser_registerBuiltinParserAttribute___closed__1 = _init_l_Lean_Parser_registerBuiltinParserAttribute___closed__1();
lean_mark_persistent(l_Lean_Parser_registerBuiltinParserAttribute___closed__1);
l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__1 = _init_l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__1();
lean_mark_persistent(l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__1);
l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__2 = _init_l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__2();
lean_mark_persistent(l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__2);
l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__3 = _init_l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__3();
lean_mark_persistent(l_List_forM___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__1___closed__3);
l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___closed__1 = _init_l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___closed__1();
lean_mark_persistent(l_Std_PersistentHashMap_foldlMAux___at___private_Lean_Parser_Extension_0__Lean_Parser_ParserAttribute_add___spec__4___closed__1);
l_Lean_Parser_mkParserAttributeImpl___closed__1 = _init_l_Lean_Parser_mkParserAttributeImpl___closed__1();
lean_mark_persistent(l_Lean_Parser_mkParserAttributeImpl___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___lambda__1___closed__2);
l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__1 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__1();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__1);
l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__2);
l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__3 = _init_l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__3();
lean_mark_persistent(l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder___closed__3);
res = l___private_Lean_Parser_Extension_0__Lean_Parser_registerParserAttributeImplBuilder(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292____closed__2);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3292_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302____closed__2);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3302_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__2);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__3 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__3();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__3);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312____closed__4);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3312_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__1 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__1();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__1);
l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__2 = _init_l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__2();
lean_mark_persistent(l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322____closed__2);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extension___hyg_3322_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_notFollowedByCommandToken___closed__1 = _init_l_Lean_Parser_notFollowedByCommandToken___closed__1();
lean_mark_persistent(l_Lean_Parser_notFollowedByCommandToken___closed__1);
l_Lean_Parser_notFollowedByCommandToken___closed__2 = _init_l_Lean_Parser_notFollowedByCommandToken___closed__2();
lean_mark_persistent(l_Lean_Parser_notFollowedByCommandToken___closed__2);
l_Lean_Parser_notFollowedByCommandToken = _init_l_Lean_Parser_notFollowedByCommandToken();
lean_mark_persistent(l_Lean_Parser_notFollowedByCommandToken);
l_Lean_Parser_notFollowedByTermToken___closed__1 = _init_l_Lean_Parser_notFollowedByTermToken___closed__1();
lean_mark_persistent(l_Lean_Parser_notFollowedByTermToken___closed__1);
l_Lean_Parser_notFollowedByTermToken___closed__2 = _init_l_Lean_Parser_notFollowedByTermToken___closed__2();
lean_mark_persistent(l_Lean_Parser_notFollowedByTermToken___closed__2);
l_Lean_Parser_notFollowedByTermToken = _init_l_Lean_Parser_notFollowedByTermToken();
lean_mark_persistent(l_Lean_Parser_notFollowedByTermToken);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
