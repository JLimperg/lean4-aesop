/-
Copyright (c) 2021 Jannis Limperg. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Jannis Limperg, Asta Halkjær From
-/

import Lean.Message
import Lean.Meta.DiscrTree
import Lean.Meta.Tactic.Simp.SimpLemmas
import Std.Data.BinomialHeap

namespace String

def joinSep (sep : String)  : List String → String
  | [] => ""
  | "" :: ss => joinSep sep ss
  | s :: ss => s ++ sep ++ joinSep sep ss

end String


namespace Std.Format

@[inlineIfReduce]
def isEmptyShallow : Format → Bool
  | nil => true
  | text "" => true
  | _ => false

@[inline]
def indentDSkipEmpty (f : Format) : Format :=
  if f.isEmptyShallow then nil else indentD f

@[inline]
def unlines (fs : List Format) : Format :=
  Format.joinSep fs line

@[inline]
def indentDUnlines : List Format → Format :=
  indentDSkipEmpty ∘ unlines

@[inline]
def indentDUnlinesSkipEmpty (fs : List Format) : Format :=
  indentDSkipEmpty $ unlines $ fs.filter (¬ ·.isEmptyShallow)

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

end Lean.MessageData


namespace Std.PersistentHashSet

@[inline]
def merge [BEq α] [Hashable α] (s t : PersistentHashSet α) : PersistentHashSet α :=
  if s.size < t.size then loop s t else loop t s
  where
    @[inline]
    loop s t := s.fold (init := t) λ s a => s.insert a

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
