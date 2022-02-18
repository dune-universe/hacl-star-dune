let pp_list ppf l =
  List.iter (fun s -> Format.fprintf ppf "%s\n" s) l

let pp_copy ppf l =
  List.iter (fun s -> Format.fprintf ppf "(copy raw/lib/%s %s)\n" s s) l

let modules =
  List.concat @@
  List.map
    (fun s ->
      [ Printf.sprintf "%s_stubs" s;
        Printf.sprintf "%s_bindings" s])
  [ "Hacl_Spec"
  ; "Hacl_Hash_Base"
  ; "Hacl_Hash_Blake2"
  ; "Hacl_Hash_MD5"
  ; "Hacl_Hash_SHA1"
  ; "Hacl_Hash_SHA2"
  ; "EverCrypt_AutoConfig2"
  ; "EverCrypt_Hash"
  ; "Hacl_SHA3"
  ; "Hacl_Chacha20"
  ; "Hacl_Salsa20"
  ; "Hacl_Bignum_Base"
  ; "Hacl_Bignum"
  ; "Hacl_Curve25519_64_Slow"
  ; "Hacl_Bignum25519_51"
  ; "Hacl_Curve25519_51"
  ; "Hacl_Streaming_SHA2"
  ; "Hacl_Ed25519"
  ; "Hacl_Poly1305_32"
  ; "Hacl_NaCl"
  ; "EverCrypt_Error"
  ; "EverCrypt_CTR"
  ; "Hacl_P256"
  ; "Hacl_Frodo_KEM"
  ; "Hacl_IntTypes_Intrinsics"
  ; "Hacl_RSAPSS"
  ; "Hacl_FFDHE"
  ; "Hacl_Streaming_Blake2"
  ; "Hacl_Frodo640"
  ; "Hacl_HMAC"
  ; "Hacl_HKDF"
  ; "Hacl_GenericField32"
  ; "Hacl_Bignum256"
  ; "Hacl_Bignum4096"
  ; "Hacl_Chacha20_Vec32"
  ; "EverCrypt_Ed25519"
  ; "Hacl_Bignum4096_32"
  ; "Hacl_SHA2_Scalar32"
  ; "Hacl_Frodo976"
  ; "Hacl_GenericField64"
  ; "Hacl_Frodo1344"
  ; "Hacl_Bignum32"
  ; "Hacl_Bignum256_32"
  ; "Hacl_Chacha20Poly1305_32"
  ; "Hacl_HPKE_Curve51_CP32_SHA256"
  ; "Hacl_Streaming_Poly1305_32"
  ; "Hacl_HPKE_Curve51_CP32_SHA512"
  ; "Hacl_HPKE_P256_CP32_SHA256"
  ; "Hacl_Bignum64"
  ; "Hacl_Frodo64"
  ; "Hacl_Streaming_SHA1"
  ; "Hacl_Streaming_MD5"
  ; "Hacl_EC_Ed25519"
  ; "EverCrypt_Chacha20Poly1305"
  ; "EverCrypt_AEAD"
  ; "EverCrypt_HMAC"
  ; "EverCrypt_HKDF"
  ; "Hacl_HMAC_DRBG"
  ; "EverCrypt_DRBG"
  ; "EverCrypt_Poly1305"
  ; "EverCrypt_Curve25519"
  ; "EverCrypt_Cipher"
  ; "EverCrypt_Vale"
  ; "EverCrypt_StaticConfig"
  ; "Lib_RandomBuffer_System"
  ]

let ml_files =
  List.map (fun s -> Printf.sprintf "%s.ml" s) modules

let () =
  Format.printf {|
(library
 (name raw)
 (public_name hacl-star-raw)
 (libraries ctypes)
 (foreign_archives evercrypt_c_stubs evercrypt)
 (wrapped false)
 (flags (:standard -warn-error -27-33))
 (modules %a))
|} pp_list modules;
  Format.printf {|
(rule
 (deps
  (source_tree raw)
  (source_tree kremlin))
 (targets
  config.h
  %a
  libevercrypt.a
  dllevercrypt.so
  libevercrypt_c_stubs.a
  dllevercrypt_c_stubs.so
  )
 (action
  (no-infer
   (progn
    (chdir raw (run ./configure))
    (chdir raw (run make -j 8))
    (chdir raw (run make libevercrypt_c_stubs.a dllevercrypt_c_stubs.so))
    %a
    (copy raw/config.h config.h)
    (copy raw/libevercrypt.a libevercrypt.a)
    (copy raw/libevercrypt.so dllevercrypt.so)
    (copy raw/libevercrypt_c_stubs.a libevercrypt_c_stubs.a)
    (copy raw/dllevercrypt_c_stubs.so dllevercrypt_c_stubs.so)
    ))))
    |}
    pp_list ml_files
    pp_copy ml_files
