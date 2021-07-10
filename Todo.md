# Todo

- add tactic runtime configuration options
  - additional rules
  - erased rules
- allow aesop attr to be removed
- add forward rules
  - by-hyp indexing
  - per-hyp rules
- add proper meta handling
- add simp builder (combines `simp_unfold` and `simp_eq`)
- document how to merge upstream (wrt stage0 conflicts)
- allow registration of MetaM and TacticM tactics (and maybe SomeM Syntax for
  tactic syntax quotations?)
- refactor config parsing code to try to use syntax quotations (again)
- suppress case tags in trace messages
- compress trace messages for new goals added
- check that we create the right mvar kind for goals (namely synthetic opaque
  metas; see docs in MetavarContext.lean)
- deal with the interaction between safe tactics and metas (lots of safe
  tactics become unsafe if they assign metas)
