/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Elab.Syntax
import Lean.Elab.Tactic.Basic
import Lean.Message
import Lean.Meta.DiscrTree
import Lean.Meta.Tactic.Simp.SimpLemmas
import Lean.Syntax
import Std.Data.BinomialHeap

namespace String

def joinSep (sep : String)  : List String → String
  | [] => ""
  | "" :: ss => joinSep sep ss
  | s :: ss =>
    let tail := joinSep sep ss
    match tail with
    | "" => s
    | _ => s ++ sep ++ tail

end String


namespace Std.Format

@[inlineIfReduce]
def isEmptyShallow : Format → Bool
  | nil => true
  | text "" => true
  | _ => false

@[inline]
def indentDSkipEmpty [ToFormat α] (f : α) : Format :=
  let f := format f
  if f.isEmptyShallow then nil else indentD f

@[inline]
def unlines [ToFormat α] (fs : List α) : Format :=
  Format.joinSep fs line

@[inline]
def indentDUnlines [ToFormat α] : List α → Format :=
  indentDSkipEmpty ∘ unlines

@[inline]
def indentDUnlinesSkipEmpty [ToFormat α] (fs : List α) : Format :=
  indentDSkipEmpty $ unlines (fs.map format |>.filter (¬ ·.isEmptyShallow))

def formatIf (b : Bool) (f : Thunk Format) : Format :=
  if b then f.get else nil

end Std.Format


namespace Lean.MessageData

@[inline]
def join (ms : List MessageData) : MessageData :=
ms.foldl (· ++ ·) nil

@[inlineIfReduce]
def isEmptyShallow : MessageData → Bool
  | ofFormat f => f.isEmptyShallow
  | _ => false

@[inline]
def indentDSkipEmpty (m : MessageData) : MessageData :=
  if m.isEmptyShallow then nil else indentD m

@[inline]
def unlines (ms : List MessageData) : MessageData :=
  joinSep ms Format.line

@[inline]
def indentDUnlines : List MessageData → MessageData :=
  indentDSkipEmpty ∘ unlines

@[inline]
def indentDUnlinesSkipEmpty (fs : List MessageData) : MessageData :=
  indentDSkipEmpty $ unlines $ fs.filter (¬ ·.isEmptyShallow)

def toMessageDataIf (b : Bool) (f : Thunk MessageData) : MessageData :=
  if b then f.get else nil

def nodeFiltering (fs : Array (Option MessageData)) : MessageData :=
  node $ fs.filterMap id

end Lean.MessageData


namespace Std.PersistentHashSet

@[inline]
def merge [BEq α] [Hashable α] (s t : PersistentHashSet α) : PersistentHashSet α :=
  if s.size < t.size then loop s t else loop t s
  where
    @[inline]
    loop s t := s.fold (init := t) λ s a => s.insert a

-- Elements are returned in unspecified order.
def toList [BEq α] [Hashable α] (s : PersistentHashSet α) : List α :=
  s.fold (init := []) λ as a => a :: as

-- Elements are returned in unspecified order. (In fact, they are currently
-- returned in reverse order of `toList`.)
def toArray [BEq α] [Hashable α] (s : PersistentHashSet α) : Array α :=
  s.fold (init := #[]) λ as a => as.push a

end Std.PersistentHashSet


namespace Std.PersistentHashMap

@[inline]
def merge [BEq α] [Hashable α] (m n : PersistentHashMap α β) (f : α → β → β → β) :
    PersistentHashMap α β :=
  if m.size < n.size then loop m n f else loop n m (λ a b b' => f a b' b)
  where
    @[inline]
    loop m n f := m.foldl (init := n) λ map k v =>
      match map.find? k with
      | some v' => map.insert k (f k v v')
      | none => map.insert k v

end Std.PersistentHashMap


namespace Lean.Meta.DiscrTree.Trie

unsafe def foldMUnsafe [Monad m] (initialKeys : Array Key)
    (f : σ → Array Key → α → m σ) (init : σ) : Trie α → m σ
  | Trie.node vs children => do
    let s ← vs.foldlM (init := init) λ s v => f s initialKeys v
    children.foldlM (init := s) λ s (k, t) =>
      t.foldMUnsafe (initialKeys.push k) f s

@[implementedBy foldMUnsafe]
constant foldM [Monad m] (initalKeys : Array Key)
    (f : σ → Array Key → α → m σ) (init : σ) (t : Trie α) : m σ :=
  pure init

@[inline]
def fold (initialKeys : Array Key) (f : σ → Array Key → α → σ) (init : σ)
    (t : Trie α) : σ :=
  Id.run $ t.foldM initialKeys (init := init) λ s k a => return f s k a

end Trie

@[inline]
def foldM [Monad m] (f : σ → Array Key → α → m σ) (init : σ) (t : DiscrTree α) :
    m σ :=
  t.root.foldlM (init := init) λ s k t => t.foldM #[k] (init := s) f

@[inline]
def fold (f : σ → Array Key → α → σ) (init : σ) (t : DiscrTree α) : σ :=
  Id.run $ t.foldM (init := init) λ s keys a => return f s keys a

-- TODO inefficient since it doesn't take advantage of the Trie structure at all
@[inline]
def merge [BEq α] (t u : DiscrTree α) : DiscrTree α :=
  if t.root.size < u.root.size then loop t u else loop u t
  where
    @[inline]
    loop t u := t.fold (init := u) DiscrTree.insertCore

def values (t : DiscrTree α) : Array α :=
  t.fold (init := #[]) λ as _ a => as.push a

def toArray (t : DiscrTree α) : Array (Array Key × α) :=
  t.fold (init := #[]) λ as keys a => as.push (keys, a)

end DiscrTree


namespace SimpLemmas

def merge (s t : SimpLemmas) : SimpLemmas where
  pre := s.pre.merge t.pre
  post := s.post.merge t.post
  lemmaNames := s.lemmaNames.merge t.lemmaNames
  toUnfold := s.toUnfold.merge t.toUnfold
  erased := s.erased.merge t.erased

def addSimpEntry (s : SimpLemmas) : SimpEntry → SimpLemmas
  | SimpEntry.lemma l => addSimpLemmaEntry s l
  | SimpEntry.toUnfold d => s.addDeclToUnfold d

open MessageData in
protected def toMessageData (s : SimpLemmas) : MessageData :=
  node #[
    "pre lemmas:" ++ node (s.pre.values.map toMessageData),
    "post lemmas:" ++ node (s.post.values.map toMessageData),
    "definitions to unfold:" ++ node
      (s.toUnfold.toArray.qsort Name.lt |>.map toMessageData),
    "erased entries:" ++ node
      (s.erased.toArray.qsort Name.lt |>.map toMessageData)
  ]

end SimpLemmas

def copyMVar (mvarId : MVarId) : MetaM MVarId := do
  let decl ← getMVarDecl mvarId
  let mv ← mkFreshExprMVarAt decl.lctx decl.localInstances decl.type decl.kind
    decl.userName decl.numScopeArgs
  return mv.mvarId!

end Lean.Meta


namespace Std.BinomialHeap

@[inline]
def removeMin {lt : α → α → Bool} (h : BinomialHeap α lt) :
    Option (α × BinomialHeap α lt) :=
  match h.head? with
  | some hd => some (hd, h.tail)
  | none => none

end Std.BinomialHeap


namespace MonadStateOf

@[inline]
def ofLens [Monad m] [MonadStateOf α m] (project : α → β) (inject : β → α → α) :
    MonadStateOf β m where
  get := return project (← get)
  set b := modify λ a => inject b a
  modifyGet f := modifyGet λ a =>
    let (r, b) := f (project a)
    (r, inject b a)

end MonadStateOf

@[inline]
abbrev setThe (σ) {m} [MonadStateOf σ m] (s : σ) : m PUnit :=
  MonadStateOf.set s


namespace ST.Ref

variable {m} [Monad m] [MonadLiftT (ST σ) m]

@[inline]
unsafe def modifyMUnsafe (r : Ref σ α) (f : α → m α) : m Unit := do
  let v ← r.take
  r.set (← f v)

@[implementedBy modifyMUnsafe]
def modifyM (r : Ref σ α) (f : α → m α) : m Unit := do
  let v ← r.get
  r.set (← f v)

@[inline]
unsafe def modifyGetMUnsafe (r : Ref σ α) (f : α → m (β × α)) : m β := do
  let v ← r.take
  let (b, a) ← f v
  r.set a
  return b

@[implementedBy modifyGetMUnsafe]
def modifyGetM (r : Ref σ α) (f : α → m (β × α)) : m β := do
  let v ← r.get
  let (b, a) ← f v
  r.set a
  return b

end ST.Ref


namespace Lean.Meta

def instantiateMVarsMVarType (mvarId : MVarId) : MetaM Expr := do
  let type ← instantiateMVars (← getMVarDecl mvarId).type
  setMVarType mvarId type
  return type

end Lean.Meta


namespace Lean.Syntax

-- TODO for debugging, maybe remove
partial def formatRaw : Syntax → String
  | missing => "missing"
  | node kind args =>
    let args := ", ".joinSep $ args.map formatRaw |>.toList
    s!"(node {kind} [{args}])"
  | atom _ val => s!"(atom {val})"
  | ident _ _ val _ => s!"(ident {val})"

end Lean.Syntax


namespace Lean

open Lean.Elab.Tactic

def runTacticMAsMetaM (tac : TacticM Unit) (goal : MVarId) :
    MetaM (List MVarId) :=
  run goal tac |>.run'

def runMetaMAsImportM (x : MetaM α) : ImportM α := do
  let ctx : Core.Context := { options := (← read).opts }
  let state : Core.State := { env := (← read).env }
  let r ← x |>.run {} {} |>.run ctx state |>.toIO'
  match r with
  | Except.ok ((a, _), _) => pure a
  | Except.error e => throw $ IO.userError (← e.toMessageData.toString)

def runMetaMAsCoreM (x : MetaM α) : CoreM α :=
  Prod.fst <$> x.run {} {}

end Lean


namespace Lean.Elab.Command

syntax (name := syntaxCatWithUnreservedTokens)
  "declare_syntax_cat' " ident
    (&"allow_leading_unreserved_tokens" <|> &"force_leading_unreserved_tokens")? : command

-- Copied from Lean/Elab/Syntax.lean
private def declareSyntaxCatQuotParser (catName : Name) : CommandElabM Unit := do
  if let Name.str _ suffix _ := catName then
    let quotSymbol := "`(" ++ suffix ++ "|"
    let name := catName ++ `quot
    -- TODO(Sebastian): this might confuse the pretty printer, but it lets us reuse the elaborator
    let kind := ``Lean.Parser.Term.quot
    let cmd ← `(
      @[termParser] def $(mkIdent name) : Lean.ParserDescr :=
        Lean.ParserDescr.node $(quote kind) $(quote Lean.Parser.maxPrec)
          (Lean.ParserDescr.binary `andthen (Lean.ParserDescr.symbol $(quote quotSymbol))
            (Lean.ParserDescr.binary `andthen
              (Lean.ParserDescr.unary `incQuotDepth (Lean.ParserDescr.cat $(quote catName) 0))
              (Lean.ParserDescr.symbol ")"))))
    elabCommand cmd

open Lean.Parser (LeadingIdentBehavior) in
@[builtinCommandElab syntaxCatWithUnreservedTokens]
def elabDeclareSyntaxCatWithUnreservedTokens : CommandElab := fun stx => do
  let catName  := stx[1].getId
  let leadingIdentBehavior :=
    match stx[2].getOptional? with
    | none => LeadingIdentBehavior.default
    | some b =>
      match b.getAtomVal! with
      | "allow_leading_unreserved_tokens" => LeadingIdentBehavior.both
      | "force_leading_unreserved_tokens" => LeadingIdentBehavior.symbol
      | _ => unreachable!
  let attrName := catName.appendAfter "Parser"
  let env ← getEnv
  let env ←
    liftIO $ Parser.registerParserCategory env attrName catName
      leadingIdentBehavior
  setEnv env
  declareSyntaxCatQuotParser catName

end Lean.Elab.Command


namespace Lean.Elab.Tactic

open Lean.Elab.Term
open Lean.Meta

syntax (name := Parser.runTactic) &"run" term : tactic

private abbrev TacticMUnit := TacticM Unit

-- TODO copied from evalExpr
unsafe def evalTacticMUnitUnsafe (value : Expr) : TermElabM (TacticM Unit) :=
  withoutModifyingEnv do
    let name ← mkFreshUserName `_tmp
    let type ← inferType value
    unless (← isDefEq type (mkConst ``TacticMUnit)) do
      throwError "unexpected type at evalTacticMUnit:{indentExpr type}"
    let decl := Declaration.defnDecl {
       name := name, levelParams := [], type := type,
       value := value, hints := ReducibilityHints.opaque,
       safety := DefinitionSafety.unsafe
    }
    ensureNoUnassignedMVars decl
    addAndCompile decl
    evalConst (TacticM Unit) name

@[implementedBy evalTacticMUnitUnsafe]
constant evalTacticMUnit : Expr → TermElabM (TacticM Unit)

@[tactic Parser.runTactic]
def evalRunTactic : Tactic
  | `(tactic|run $t:term) => do
    let t ← elabTerm t (some (mkApp (mkConst ``TacticM) (mkConst ``Unit)))
    let t ← evalTacticMUnit t
    t
  | _ => unreachable!


end Lean.Elab.Tactic
