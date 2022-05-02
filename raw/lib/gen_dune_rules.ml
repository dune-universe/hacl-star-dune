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
  (libraries ctypes ctypes.stubs lib_evercrypt_so lib_Hacl_Spec_bindings lib_Hacl_Spec_stubs lib_EverCrypt_Error_bindings lib_EverCrypt_Error_stubs lib_Hacl_GenericField32_bindings lib_Hacl_GenericField32_stubs lib_Hacl_Bignum256_bindings lib_Hacl_Bignum256_stubs)
  (flags (:standard -warn-error -33))
  (modules %s_bindings))
|} m m m) Dune_modules.stage1;

  List.iter (fun m ->
    Format.printf {|
(library
  (name lib_%s_bindings)
  (public_name hacl-star-raw.lib-%s-bindings)
  (wrapped false)
  (libraries ctypes ctypes.stubs lib_evercrypt_so lib_Hacl_Spec_bindings lib_Hacl_Spec_stubs lib_EverCrypt_Error_bindings lib_EverCrypt_Error_stubs lib_Hacl_GenericField32_bindings lib_Hacl_GenericField32_stubs lib_Hacl_Bignum256_bindings lib_Hacl_Bignum256_stubs lib_Hacl_Hash_Blake2_bindings lib_Hacl_Hash_Blake2_stubs lib_Hacl_Streaming_SHA2_bindings lib_Hacl_Streaming_SHA2_stubs)
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
