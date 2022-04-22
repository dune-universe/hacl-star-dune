let pp_list ppf l =
  List.iter (fun s -> Format.fprintf ppf "lib_%s_bindings\n" s) l

let bindings_only = [
  "Hacl_Bignum";
]

let modules = List.append bindings_only Dune_modules.modules

let () =
  List.iter (fun m ->
    Format.printf {|
(library
  (name lib_%s_bindings)
  (public_name hacl-star-raw.lib-%s-bindings)
  (wrapped false)
  (libraries ctypes ctypes.stubs lib_evercrypt_so lib_hacl_spec_bindings lib_hacl_spec_stubs lib_evercrypt_error_bindings lib_evercrypt_error_stubs lib_hacl_genericfield32_bindings lib_hacl_genericfield32_stubs lib_hacl_bignum256_bindings lib_hacl_bignum256_stubs)
  (flags (:standard -warn-error -33))
  (modules %s_bindings))
|} m m m) Dune_modules.stage1;

  List.iter (fun m ->
    Format.printf {|
(library
  (name lib_%s_bindings)
  (public_name hacl-star-raw.lib-%s-bindings)
  (wrapped false)
  (libraries ctypes ctypes.stubs lib_evercrypt_so lib_hacl_spec_bindings lib_hacl_spec_stubs lib_evercrypt_error_bindings lib_evercrypt_error_stubs lib_hacl_genericfield32_bindings lib_hacl_genericfield32_stubs lib_hacl_bignum256_bindings lib_hacl_bignum256_stubs lib_Hacl_Hash_Blake2_bindings lib_Hacl_Hash_Blake2_stubs lib_Hacl_Streaming_SHA2_bindings lib_Hacl_Streaming_SHA2_stubs)
  (flags (:standard -warn-error -33))
  (modules %s_bindings))
|} m m m) modules;

  Format.printf {|
(library
  (name lib_bindings_gen)
  (public_name hacl-star-raw.lib-bindings-gen)
  (libraries %a)
  (modules)
  (wrapped false))
|} pp_list modules;
