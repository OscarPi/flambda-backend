; Generated automatically by this directory's dune.
; Use `make regen-flambda2-test-dune-rules` to regenerate.

(alias (name regen))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe local.flt)
   (diff? local.flt local.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe local_in.fl)
   (diff? local_in.fl local_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe local_out.fl)
   (diff? local_out.fl local_out.fl.corrected))))

(rule
 (alias regen)
 (targets local.flt.new local_in.fl.new local_out.fl.new)
 (deps local.ml)
 (action
   (run ocamlopt -c local.ml -nopervasives -nostdlib
        -drawfexpr-to local_in.fl.new
        -dfexpr-to local_out.fl.new
        -dflexpect-to local.flt.new)))

(rule
 (alias regen)
 (action (diff local_in.fl local_in.fl.new)))

(rule
 (alias regen)
 (action (diff local_out.fl local_out.fl.new)))

(rule
 (alias regen)
 (action (diff local.flt local.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests0.flt)
   (diff? tests0.flt tests0.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests0_in.fl)
   (diff? tests0_in.fl tests0_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests0_out.fl)
   (diff? tests0_out.fl tests0_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests0.flt.new tests0_in.fl.new tests0_out.fl.new)
 (deps tests0.ml)
 (action
   (run ocamlopt -c tests0.ml -nopervasives -nostdlib
        -drawfexpr-to tests0_in.fl.new
        -dfexpr-to tests0_out.fl.new
        -dflexpect-to tests0.flt.new)))

(rule
 (alias regen)
 (action (diff tests0_in.fl tests0_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests0_out.fl tests0_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests0.flt tests0.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests2.flt)
   (diff? tests2.flt tests2.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests2_in.fl)
   (diff? tests2_in.fl tests2_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests2_out.fl)
   (diff? tests2_out.fl tests2_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests2.flt.new tests2_in.fl.new tests2_out.fl.new)
 (deps tests2.ml)
 (action
   (run ocamlopt -c tests2.ml -nopervasives -nostdlib
        -drawfexpr-to tests2_in.fl.new
        -dfexpr-to tests2_out.fl.new
        -dflexpect-to tests2.flt.new)))

(rule
 (alias regen)
 (action (diff tests2_in.fl tests2_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests2_out.fl tests2_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests2.flt tests2.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests3.flt)
   (diff? tests3.flt tests3.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests3_in.fl)
   (diff? tests3_in.fl tests3_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests3_out.fl)
   (diff? tests3_out.fl tests3_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests3.flt.new tests3_in.fl.new tests3_out.fl.new)
 (deps tests3.ml)
 (action
   (run ocamlopt -c tests3.ml -nopervasives -nostdlib
        -drawfexpr-to tests3_in.fl.new
        -dfexpr-to tests3_out.fl.new
        -dflexpect-to tests3.flt.new)))

(rule
 (alias regen)
 (action (diff tests3_in.fl tests3_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests3_out.fl tests3_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests3.flt tests3.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests4.flt)
   (diff? tests4.flt tests4.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests4_in.fl)
   (diff? tests4_in.fl tests4_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests4_out.fl)
   (diff? tests4_out.fl tests4_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests4.flt.new tests4_in.fl.new tests4_out.fl.new)
 (deps tests4.ml)
 (action
   (run ocamlopt -c tests4.ml -nopervasives -nostdlib
        -drawfexpr-to tests4_in.fl.new
        -dfexpr-to tests4_out.fl.new
        -dflexpect-to tests4.flt.new)))

(rule
 (alias regen)
 (action (diff tests4_in.fl tests4_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests4_out.fl tests4_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests4.flt tests4.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests4a.flt)
   (diff? tests4a.flt tests4a.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests4a_in.fl)
   (diff? tests4a_in.fl tests4a_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests4a_out.fl)
   (diff? tests4a_out.fl tests4a_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests4a.flt.new tests4a_in.fl.new tests4a_out.fl.new)
 (deps tests4a.ml)
 (action
   (run ocamlopt -c tests4a.ml -nopervasives -nostdlib
        -drawfexpr-to tests4a_in.fl.new
        -dfexpr-to tests4a_out.fl.new
        -dflexpect-to tests4a.flt.new)))

(rule
 (alias regen)
 (action (diff tests4a_in.fl tests4a_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests4a_out.fl tests4a_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests4a.flt tests4a.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests5.flt)
   (diff? tests5.flt tests5.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests5_in.fl)
   (diff? tests5_in.fl tests5_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests5_out.fl)
   (diff? tests5_out.fl tests5_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests5.flt.new tests5_in.fl.new tests5_out.fl.new)
 (deps tests5.ml)
 (action
   (run ocamlopt -c tests5.ml -nopervasives -nostdlib
        -drawfexpr-to tests5_in.fl.new
        -dfexpr-to tests5_out.fl.new
        -dflexpect-to tests5.flt.new)))

(rule
 (alias regen)
 (action (diff tests5_in.fl tests5_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests5_out.fl tests5_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests5.flt tests5.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests6.flt)
   (diff? tests6.flt tests6.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests6_in.fl)
   (diff? tests6_in.fl tests6_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests6_out.fl)
   (diff? tests6_out.fl tests6_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests6.flt.new tests6_in.fl.new tests6_out.fl.new)
 (deps tests6.ml)
 (action
   (run ocamlopt -c tests6.ml -nopervasives -nostdlib
        -drawfexpr-to tests6_in.fl.new
        -dfexpr-to tests6_out.fl.new
        -dflexpect-to tests6.flt.new)))

(rule
 (alias regen)
 (action (diff tests6_in.fl tests6_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests6_out.fl tests6_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests6.flt tests6.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests7.flt)
   (diff? tests7.flt tests7.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests7_in.fl)
   (diff? tests7_in.fl tests7_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests7_out.fl)
   (diff? tests7_out.fl tests7_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests7.flt.new tests7_in.fl.new tests7_out.fl.new)
 (deps tests7.ml)
 (action
   (run ocamlopt -c tests7.ml -nopervasives -nostdlib
        -drawfexpr-to tests7_in.fl.new
        -dfexpr-to tests7_out.fl.new
        -dflexpect-to tests7.flt.new)))

(rule
 (alias regen)
 (action (diff tests7_in.fl tests7_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests7_out.fl tests7_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests7.flt tests7.flt.new)))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/flexpect.exe tests11.flt)
   (diff? tests11.flt tests11.flt.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests11_in.fl)
   (diff? tests11_in.fl tests11_in.fl.corrected))))

(rule
 (alias runtest)
 (action
  (progn
   (run ../tools/roundtrip.exe tests11_out.fl)
   (diff? tests11_out.fl tests11_out.fl.corrected))))

(rule
 (alias regen)
 (targets tests11.flt.new tests11_in.fl.new tests11_out.fl.new)
 (deps tests11.ml)
 (action
   (run ocamlopt -c tests11.ml -nopervasives -nostdlib
        -drawfexpr-to tests11_in.fl.new
        -dfexpr-to tests11_out.fl.new
        -dflexpect-to tests11.flt.new)))

(rule
 (alias regen)
 (action (diff tests11_in.fl tests11_in.fl.new)))

(rule
 (alias regen)
 (action (diff tests11_out.fl tests11_out.fl.new)))

(rule
 (alias regen)
 (action (diff tests11.flt tests11.flt.new)))