let modules = Dune_modules.modules

let pp_list_modules ppf l =
  List.iter (fun s -> Format.fprintf ppf "%s_stubs\n" s) l

let pp_list_foreign_stub_names ppf l =
  List.iter (fun s -> Format.fprintf ppf "%s_c_stubs\n" s) l

let () =
  Format.printf {|
(library
  (name lib_stubs_gen)
  (public_name hacl-star-raw.stubs_gen)
  (modules %a)
  (libraries lib_Hacl_Spec_stubs lib_evercrypt_so ctypes)
  (foreign_stubs
    (language c)
    (names %a)
    (include_dirs ../kremlin/include ../kremlin/kremlib/dist/minimal)
    (extra_deps evercrypt_targetconfig.h)
    (flags :standard -I.))
  (wrapped false))
|} pp_list_modules modules pp_list_foreign_stub_names modules;

  List.iter (fun m ->
    Format.printf {|
(rule
  (targets %s_stubs.ml %s_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/%s_gen.exe)
      (no-infer
        (copy lib/%s_stubs.ml %s_stubs.ml))
      (no-infer
        (copy lib/%s_c_stubs.c %s_c_stubs.c)))))
|} m m m m m m m) modules
