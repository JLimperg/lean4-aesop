import Lean.Util.Trace

-- Importing this particular module triggers the error.
-- import Lean.Meta.CollectFVars

-- Indirect import also triggers the error.
-- import Lean.Meta

-- (Indirectly) importing every other module is fine.
import Lean.Meta.Basic
import Lean.Meta.LevelDefEq
import Lean.Meta.WHNF
import Lean.Meta.InferType
import Lean.Meta.FunInfo
import Lean.Meta.ExprDefEq
import Lean.Meta.DiscrTree
import Lean.Meta.Reduce
import Lean.Meta.Instances
import Lean.Meta.AbstractMVars
import Lean.Meta.SynthInstance
import Lean.Meta.AppBuilder
import Lean.Meta.Tactic
import Lean.Meta.KAbstract
import Lean.Meta.RecursorInfo
import Lean.Meta.GeneralizeTelescope
import Lean.Meta.Match
import Lean.Meta.ReduceEval
import Lean.Meta.Closure
import Lean.Meta.AbstractNestedProofs
import Lean.Meta.ForEachExpr
import Lean.Meta.Transform
import Lean.Meta.PPGoal
import Lean.Meta.UnificationHint
import Lean.Meta.Inductive
import Lean.Meta.SizeOf
import Lean.Meta.IndPredBelow
import Lean.Meta.Coe
import Lean.Meta.SortLocalDecls
import Lean.Meta.GeneralizeVars
import Lean.Meta.Injective

import Lean.Attributes
import Lean.AuxRecursor
import Lean.Class
import Lean.Compiler
import Lean.CoreM
import Lean.Data
import Lean.Declaration
import Lean.DeclarationRange
import Lean.DocString
import Lean.Elab
import Lean.Environment
import Lean.Eval
import Lean.Exception
import Lean.Expr
import Lean.HeadIndex
import Lean.Hygiene
import Lean.InternalExceptionId
import Lean.KeyedDeclsAttribute
import Lean.Level
import Lean.LocalContext
import Lean.Message
import Lean.MetavarContext
import Lean.Modifiers
import Lean.MonadEnv
import Lean.Parser
import Lean.ParserCompiler
import Lean.PrettyPrinter
import Lean.ProjFns
import Lean.ReducibilityAttrs
import Lean.ResolveName
import Lean.Runtime
import Lean.ScopedEnvExtension
import Lean.Server
import Lean.Structure
import Lean.Syntax
import Lean.ToExpr
import Lean.Util

import Std

open Lean (registerTraceClass)

builtin_initialize
  registerTraceClass `stuff
