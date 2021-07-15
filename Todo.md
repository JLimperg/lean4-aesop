# Todo

- allow aesop attr to be removed
- allow rules to be removed when calling the tactic
- add forward rules
  - by-hyp indexing
  - per-hyp rules
- add proper meta handling
- add simp builder (combines `simp_unfold` and `simp_eq`)
- document how to merge upstream (wrt stage0 conflicts)
- allow registration of MetaM and TacticM tactics (and maybe SomeM Syntax for
  tactic syntax quotations?)
- suppress case tags in trace messages
- compress trace messages for new goals added
- deal with the interaction between safe tactics and metas (lots of safe
  tactics become unsafe if they assign metas)
- Maybe support additional rules that aren't constants or fvars. (Users can
  work around this restriction by adding the rule to the context as a hyp, but
  we could do this for them.)
- The normalisation simp currently uses every equation in the context as a
  simp rule. This can easily lead to nontermination.
- Support local hyps as norm simp lemmas.
