
(library
  (name lib_stubs_gen)
  (public_name hacl-star-raw.stubs_gen)
  (modules Hacl_Hash_Base_stubs
Hacl_Hash_Blake2b_256_stubs
Hacl_Hash_Blake2s_128_stubs
Hacl_Hash_MD5_stubs
Hacl_Hash_SHA1_stubs
Hacl_Hash_SHA2_stubs
EverCrypt_AutoConfig2_stubs
EverCrypt_Hash_stubs
Hacl_SHA3_stubs
Hacl_Chacha20_stubs
Hacl_Salsa20_stubs
Hacl_Bignum_Base_stubs
Hacl_Curve25519_64_Slow_stubs
Hacl_Curve25519_64_stubs
Hacl_Bignum25519_51_stubs
Hacl_Curve25519_51_stubs
Hacl_Ed25519_stubs
Hacl_Poly1305_32_stubs
Hacl_Poly1305_128_stubs
Hacl_Poly1305_256_stubs
Hacl_NaCl_stubs
EverCrypt_CTR_stubs
Hacl_P256_stubs
Hacl_Frodo_KEM_stubs
Hacl_IntTypes_Intrinsics_stubs
Hacl_IntTypes_Intrinsics_128_stubs
Hacl_RSAPSS_stubs
Hacl_FFDHE_stubs
Hacl_Streaming_Blake2_stubs
Hacl_Frodo640_stubs
Hacl_Chacha20_Vec128_stubs
Hacl_Chacha20Poly1305_128_stubs
Hacl_HMAC_stubs
Hacl_HKDF_stubs
Hacl_HPKE_Curve51_CP128_SHA512_stubs
Hacl_SHA2_Vec256_stubs
Hacl_Bignum4096_stubs
Hacl_Chacha20_Vec32_stubs
EverCrypt_Ed25519_stubs
Hacl_Bignum4096_32_stubs
Hacl_HPKE_P256_CP128_SHA256_stubs
Hacl_Chacha20_Vec256_stubs
Hacl_Chacha20Poly1305_256_stubs
Hacl_HPKE_Curve51_CP256_SHA512_stubs
Hacl_SHA2_Scalar32_stubs
Hacl_Frodo976_stubs
Hacl_HMAC_Blake2s_128_stubs
Hacl_HKDF_Blake2s_128_stubs
Hacl_GenericField64_stubs
Hacl_Frodo1344_stubs
Hacl_Bignum32_stubs
Hacl_HPKE_Curve51_CP128_SHA256_stubs
Hacl_Bignum256_32_stubs
Hacl_SHA2_Vec128_stubs
Hacl_Chacha20Poly1305_32_stubs
Hacl_HPKE_Curve51_CP32_SHA256_stubs
Hacl_Streaming_Poly1305_32_stubs
Hacl_HPKE_Curve51_CP32_SHA512_stubs
Hacl_HPKE_P256_CP256_SHA256_stubs
Hacl_HPKE_P256_CP32_SHA256_stubs
Hacl_Bignum64_stubs
Hacl_Frodo64_stubs
Hacl_Streaming_SHA1_stubs
Hacl_Streaming_MD5_stubs
Hacl_HMAC_Blake2b_256_stubs
Hacl_HKDF_Blake2b_256_stubs
Hacl_EC_Ed25519_stubs
Hacl_HPKE_Curve51_CP256_SHA256_stubs
EverCrypt_Chacha20Poly1305_stubs
EverCrypt_AEAD_stubs
EverCrypt_HMAC_stubs
EverCrypt_HKDF_stubs
Hacl_HMAC_DRBG_stubs
EverCrypt_DRBG_stubs
EverCrypt_Poly1305_stubs
EverCrypt_Curve25519_stubs
EverCrypt_Cipher_stubs
EverCrypt_Vale_stubs
EverCrypt_StaticConfig_stubs
Lib_RandomBuffer_System_stubs
Hacl_HPKE_Curve64_CP128_SHA256_stubs
Hacl_HPKE_Curve64_CP128_SHA512_stubs
Hacl_HPKE_Curve64_CP256_SHA256_stubs
Hacl_HPKE_Curve64_CP256_SHA512_stubs
Hacl_HPKE_Curve64_CP32_SHA256_stubs
Hacl_HPKE_Curve64_CP32_SHA512_stubs
)
  (libraries lib_Hacl_Spec_stubs lib_evercrypt_so ctypes)
  (foreign_stubs
    (language c)
    (names Hacl_Hash_Base_c_stubs
Hacl_Hash_Blake2b_256_c_stubs
Hacl_Hash_Blake2s_128_c_stubs
Hacl_Hash_MD5_c_stubs
Hacl_Hash_SHA1_c_stubs
Hacl_Hash_SHA2_c_stubs
EverCrypt_AutoConfig2_c_stubs
EverCrypt_Hash_c_stubs
Hacl_SHA3_c_stubs
Hacl_Chacha20_c_stubs
Hacl_Salsa20_c_stubs
Hacl_Bignum_Base_c_stubs
Hacl_Curve25519_64_Slow_c_stubs
Hacl_Curve25519_64_c_stubs
Hacl_Bignum25519_51_c_stubs
Hacl_Curve25519_51_c_stubs
Hacl_Ed25519_c_stubs
Hacl_Poly1305_32_c_stubs
Hacl_Poly1305_128_c_stubs
Hacl_Poly1305_256_c_stubs
Hacl_NaCl_c_stubs
EverCrypt_CTR_c_stubs
Hacl_P256_c_stubs
Hacl_Frodo_KEM_c_stubs
Hacl_IntTypes_Intrinsics_c_stubs
Hacl_IntTypes_Intrinsics_128_c_stubs
Hacl_RSAPSS_c_stubs
Hacl_FFDHE_c_stubs
Hacl_Streaming_Blake2_c_stubs
Hacl_Frodo640_c_stubs
Hacl_Chacha20_Vec128_c_stubs
Hacl_Chacha20Poly1305_128_c_stubs
Hacl_HMAC_c_stubs
Hacl_HKDF_c_stubs
Hacl_HPKE_Curve51_CP128_SHA512_c_stubs
Hacl_SHA2_Vec256_c_stubs
Hacl_Bignum4096_c_stubs
Hacl_Chacha20_Vec32_c_stubs
EverCrypt_Ed25519_c_stubs
Hacl_Bignum4096_32_c_stubs
Hacl_HPKE_P256_CP128_SHA256_c_stubs
Hacl_Chacha20_Vec256_c_stubs
Hacl_Chacha20Poly1305_256_c_stubs
Hacl_HPKE_Curve51_CP256_SHA512_c_stubs
Hacl_SHA2_Scalar32_c_stubs
Hacl_Frodo976_c_stubs
Hacl_HMAC_Blake2s_128_c_stubs
Hacl_HKDF_Blake2s_128_c_stubs
Hacl_GenericField64_c_stubs
Hacl_Frodo1344_c_stubs
Hacl_Bignum32_c_stubs
Hacl_HPKE_Curve51_CP128_SHA256_c_stubs
Hacl_Bignum256_32_c_stubs
Hacl_SHA2_Vec128_c_stubs
Hacl_Chacha20Poly1305_32_c_stubs
Hacl_HPKE_Curve51_CP32_SHA256_c_stubs
Hacl_Streaming_Poly1305_32_c_stubs
Hacl_HPKE_Curve51_CP32_SHA512_c_stubs
Hacl_HPKE_P256_CP256_SHA256_c_stubs
Hacl_HPKE_P256_CP32_SHA256_c_stubs
Hacl_Bignum64_c_stubs
Hacl_Frodo64_c_stubs
Hacl_Streaming_SHA1_c_stubs
Hacl_Streaming_MD5_c_stubs
Hacl_HMAC_Blake2b_256_c_stubs
Hacl_HKDF_Blake2b_256_c_stubs
Hacl_EC_Ed25519_c_stubs
Hacl_HPKE_Curve51_CP256_SHA256_c_stubs
EverCrypt_Chacha20Poly1305_c_stubs
EverCrypt_AEAD_c_stubs
EverCrypt_HMAC_c_stubs
EverCrypt_HKDF_c_stubs
Hacl_HMAC_DRBG_c_stubs
EverCrypt_DRBG_c_stubs
EverCrypt_Poly1305_c_stubs
EverCrypt_Curve25519_c_stubs
EverCrypt_Cipher_c_stubs
EverCrypt_Vale_c_stubs
EverCrypt_StaticConfig_c_stubs
Lib_RandomBuffer_System_c_stubs
Hacl_HPKE_Curve64_CP128_SHA256_c_stubs
Hacl_HPKE_Curve64_CP128_SHA512_c_stubs
Hacl_HPKE_Curve64_CP256_SHA256_c_stubs
Hacl_HPKE_Curve64_CP256_SHA512_c_stubs
Hacl_HPKE_Curve64_CP32_SHA256_c_stubs
Hacl_HPKE_Curve64_CP32_SHA512_c_stubs
)
    (include_dirs ../kremlin/include ../kremlin/kremlib/dist/minimal)
    (extra_deps evercrypt_targetconfig.h)
    (flags :standard -I.))
  (wrapped false))

(rule
  (targets Hacl_Hash_Base_stubs.ml Hacl_Hash_Base_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Hash_Base_gen.exe)
      (no-infer
        (copy lib/Hacl_Hash_Base_stubs.ml Hacl_Hash_Base_stubs.ml))
      (no-infer
        (copy lib/Hacl_Hash_Base_c_stubs.c Hacl_Hash_Base_c_stubs.c)))))

(rule
  (targets Hacl_Hash_Blake2b_256_stubs.ml Hacl_Hash_Blake2b_256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Hash_Blake2b_256_gen.exe)
      (no-infer
        (copy lib/Hacl_Hash_Blake2b_256_stubs.ml Hacl_Hash_Blake2b_256_stubs.ml))
      (no-infer
        (copy lib/Hacl_Hash_Blake2b_256_c_stubs.c Hacl_Hash_Blake2b_256_c_stubs.c)))))

(rule
  (targets Hacl_Hash_Blake2s_128_stubs.ml Hacl_Hash_Blake2s_128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Hash_Blake2s_128_gen.exe)
      (no-infer
        (copy lib/Hacl_Hash_Blake2s_128_stubs.ml Hacl_Hash_Blake2s_128_stubs.ml))
      (no-infer
        (copy lib/Hacl_Hash_Blake2s_128_c_stubs.c Hacl_Hash_Blake2s_128_c_stubs.c)))))

(rule
  (targets Hacl_Hash_MD5_stubs.ml Hacl_Hash_MD5_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Hash_MD5_gen.exe)
      (no-infer
        (copy lib/Hacl_Hash_MD5_stubs.ml Hacl_Hash_MD5_stubs.ml))
      (no-infer
        (copy lib/Hacl_Hash_MD5_c_stubs.c Hacl_Hash_MD5_c_stubs.c)))))

(rule
  (targets Hacl_Hash_SHA1_stubs.ml Hacl_Hash_SHA1_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Hash_SHA1_gen.exe)
      (no-infer
        (copy lib/Hacl_Hash_SHA1_stubs.ml Hacl_Hash_SHA1_stubs.ml))
      (no-infer
        (copy lib/Hacl_Hash_SHA1_c_stubs.c Hacl_Hash_SHA1_c_stubs.c)))))

(rule
  (targets Hacl_Hash_SHA2_stubs.ml Hacl_Hash_SHA2_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Hash_SHA2_gen.exe)
      (no-infer
        (copy lib/Hacl_Hash_SHA2_stubs.ml Hacl_Hash_SHA2_stubs.ml))
      (no-infer
        (copy lib/Hacl_Hash_SHA2_c_stubs.c Hacl_Hash_SHA2_c_stubs.c)))))

(rule
  (targets EverCrypt_AutoConfig2_stubs.ml EverCrypt_AutoConfig2_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_AutoConfig2_gen.exe)
      (no-infer
        (copy lib/EverCrypt_AutoConfig2_stubs.ml EverCrypt_AutoConfig2_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_AutoConfig2_c_stubs.c EverCrypt_AutoConfig2_c_stubs.c)))))

(rule
  (targets EverCrypt_Hash_stubs.ml EverCrypt_Hash_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Hash_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Hash_stubs.ml EverCrypt_Hash_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Hash_c_stubs.c EverCrypt_Hash_c_stubs.c)))))

(rule
  (targets Hacl_SHA3_stubs.ml Hacl_SHA3_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_SHA3_gen.exe)
      (no-infer
        (copy lib/Hacl_SHA3_stubs.ml Hacl_SHA3_stubs.ml))
      (no-infer
        (copy lib/Hacl_SHA3_c_stubs.c Hacl_SHA3_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20_stubs.ml Hacl_Chacha20_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20_stubs.ml Hacl_Chacha20_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20_c_stubs.c Hacl_Chacha20_c_stubs.c)))))

(rule
  (targets Hacl_Salsa20_stubs.ml Hacl_Salsa20_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Salsa20_gen.exe)
      (no-infer
        (copy lib/Hacl_Salsa20_stubs.ml Hacl_Salsa20_stubs.ml))
      (no-infer
        (copy lib/Hacl_Salsa20_c_stubs.c Hacl_Salsa20_c_stubs.c)))))

(rule
  (targets Hacl_Bignum_Base_stubs.ml Hacl_Bignum_Base_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum_Base_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum_Base_stubs.ml Hacl_Bignum_Base_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum_Base_c_stubs.c Hacl_Bignum_Base_c_stubs.c)))))

(rule
  (targets Hacl_Curve25519_64_Slow_stubs.ml Hacl_Curve25519_64_Slow_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Curve25519_64_Slow_gen.exe)
      (no-infer
        (copy lib/Hacl_Curve25519_64_Slow_stubs.ml Hacl_Curve25519_64_Slow_stubs.ml))
      (no-infer
        (copy lib/Hacl_Curve25519_64_Slow_c_stubs.c Hacl_Curve25519_64_Slow_c_stubs.c)))))

(rule
  (targets Hacl_Curve25519_64_stubs.ml Hacl_Curve25519_64_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Curve25519_64_gen.exe)
      (no-infer
        (copy lib/Hacl_Curve25519_64_stubs.ml Hacl_Curve25519_64_stubs.ml))
      (no-infer
        (copy lib/Hacl_Curve25519_64_c_stubs.c Hacl_Curve25519_64_c_stubs.c)))))

(rule
  (targets Hacl_Bignum25519_51_stubs.ml Hacl_Bignum25519_51_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum25519_51_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum25519_51_stubs.ml Hacl_Bignum25519_51_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum25519_51_c_stubs.c Hacl_Bignum25519_51_c_stubs.c)))))

(rule
  (targets Hacl_Curve25519_51_stubs.ml Hacl_Curve25519_51_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Curve25519_51_gen.exe)
      (no-infer
        (copy lib/Hacl_Curve25519_51_stubs.ml Hacl_Curve25519_51_stubs.ml))
      (no-infer
        (copy lib/Hacl_Curve25519_51_c_stubs.c Hacl_Curve25519_51_c_stubs.c)))))

(rule
  (targets Hacl_Ed25519_stubs.ml Hacl_Ed25519_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Ed25519_gen.exe)
      (no-infer
        (copy lib/Hacl_Ed25519_stubs.ml Hacl_Ed25519_stubs.ml))
      (no-infer
        (copy lib/Hacl_Ed25519_c_stubs.c Hacl_Ed25519_c_stubs.c)))))

(rule
  (targets Hacl_Poly1305_32_stubs.ml Hacl_Poly1305_32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Poly1305_32_gen.exe)
      (no-infer
        (copy lib/Hacl_Poly1305_32_stubs.ml Hacl_Poly1305_32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Poly1305_32_c_stubs.c Hacl_Poly1305_32_c_stubs.c)))))

(rule
  (targets Hacl_Poly1305_128_stubs.ml Hacl_Poly1305_128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Poly1305_128_gen.exe)
      (no-infer
        (copy lib/Hacl_Poly1305_128_stubs.ml Hacl_Poly1305_128_stubs.ml))
      (no-infer
        (copy lib/Hacl_Poly1305_128_c_stubs.c Hacl_Poly1305_128_c_stubs.c)))))

(rule
  (targets Hacl_Poly1305_256_stubs.ml Hacl_Poly1305_256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Poly1305_256_gen.exe)
      (no-infer
        (copy lib/Hacl_Poly1305_256_stubs.ml Hacl_Poly1305_256_stubs.ml))
      (no-infer
        (copy lib/Hacl_Poly1305_256_c_stubs.c Hacl_Poly1305_256_c_stubs.c)))))

(rule
  (targets Hacl_NaCl_stubs.ml Hacl_NaCl_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_NaCl_gen.exe)
      (no-infer
        (copy lib/Hacl_NaCl_stubs.ml Hacl_NaCl_stubs.ml))
      (no-infer
        (copy lib/Hacl_NaCl_c_stubs.c Hacl_NaCl_c_stubs.c)))))

(rule
  (targets EverCrypt_CTR_stubs.ml EverCrypt_CTR_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_CTR_gen.exe)
      (no-infer
        (copy lib/EverCrypt_CTR_stubs.ml EverCrypt_CTR_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_CTR_c_stubs.c EverCrypt_CTR_c_stubs.c)))))

(rule
  (targets Hacl_P256_stubs.ml Hacl_P256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_P256_gen.exe)
      (no-infer
        (copy lib/Hacl_P256_stubs.ml Hacl_P256_stubs.ml))
      (no-infer
        (copy lib/Hacl_P256_c_stubs.c Hacl_P256_c_stubs.c)))))

(rule
  (targets Hacl_Frodo_KEM_stubs.ml Hacl_Frodo_KEM_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Frodo_KEM_gen.exe)
      (no-infer
        (copy lib/Hacl_Frodo_KEM_stubs.ml Hacl_Frodo_KEM_stubs.ml))
      (no-infer
        (copy lib/Hacl_Frodo_KEM_c_stubs.c Hacl_Frodo_KEM_c_stubs.c)))))

(rule
  (targets Hacl_IntTypes_Intrinsics_stubs.ml Hacl_IntTypes_Intrinsics_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_IntTypes_Intrinsics_gen.exe)
      (no-infer
        (copy lib/Hacl_IntTypes_Intrinsics_stubs.ml Hacl_IntTypes_Intrinsics_stubs.ml))
      (no-infer
        (copy lib/Hacl_IntTypes_Intrinsics_c_stubs.c Hacl_IntTypes_Intrinsics_c_stubs.c)))))

(rule
  (targets Hacl_IntTypes_Intrinsics_128_stubs.ml Hacl_IntTypes_Intrinsics_128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_IntTypes_Intrinsics_128_gen.exe)
      (no-infer
        (copy lib/Hacl_IntTypes_Intrinsics_128_stubs.ml Hacl_IntTypes_Intrinsics_128_stubs.ml))
      (no-infer
        (copy lib/Hacl_IntTypes_Intrinsics_128_c_stubs.c Hacl_IntTypes_Intrinsics_128_c_stubs.c)))))

(rule
  (targets Hacl_RSAPSS_stubs.ml Hacl_RSAPSS_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_RSAPSS_gen.exe)
      (no-infer
        (copy lib/Hacl_RSAPSS_stubs.ml Hacl_RSAPSS_stubs.ml))
      (no-infer
        (copy lib/Hacl_RSAPSS_c_stubs.c Hacl_RSAPSS_c_stubs.c)))))

(rule
  (targets Hacl_FFDHE_stubs.ml Hacl_FFDHE_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_FFDHE_gen.exe)
      (no-infer
        (copy lib/Hacl_FFDHE_stubs.ml Hacl_FFDHE_stubs.ml))
      (no-infer
        (copy lib/Hacl_FFDHE_c_stubs.c Hacl_FFDHE_c_stubs.c)))))

(rule
  (targets Hacl_Streaming_Blake2_stubs.ml Hacl_Streaming_Blake2_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Streaming_Blake2_gen.exe)
      (no-infer
        (copy lib/Hacl_Streaming_Blake2_stubs.ml Hacl_Streaming_Blake2_stubs.ml))
      (no-infer
        (copy lib/Hacl_Streaming_Blake2_c_stubs.c Hacl_Streaming_Blake2_c_stubs.c)))))

(rule
  (targets Hacl_Frodo640_stubs.ml Hacl_Frodo640_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Frodo640_gen.exe)
      (no-infer
        (copy lib/Hacl_Frodo640_stubs.ml Hacl_Frodo640_stubs.ml))
      (no-infer
        (copy lib/Hacl_Frodo640_c_stubs.c Hacl_Frodo640_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20_Vec128_stubs.ml Hacl_Chacha20_Vec128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20_Vec128_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20_Vec128_stubs.ml Hacl_Chacha20_Vec128_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20_Vec128_c_stubs.c Hacl_Chacha20_Vec128_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20Poly1305_128_stubs.ml Hacl_Chacha20Poly1305_128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20Poly1305_128_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20Poly1305_128_stubs.ml Hacl_Chacha20Poly1305_128_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20Poly1305_128_c_stubs.c Hacl_Chacha20Poly1305_128_c_stubs.c)))))

(rule
  (targets Hacl_HMAC_stubs.ml Hacl_HMAC_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HMAC_gen.exe)
      (no-infer
        (copy lib/Hacl_HMAC_stubs.ml Hacl_HMAC_stubs.ml))
      (no-infer
        (copy lib/Hacl_HMAC_c_stubs.c Hacl_HMAC_c_stubs.c)))))

(rule
  (targets Hacl_HKDF_stubs.ml Hacl_HKDF_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HKDF_gen.exe)
      (no-infer
        (copy lib/Hacl_HKDF_stubs.ml Hacl_HKDF_stubs.ml))
      (no-infer
        (copy lib/Hacl_HKDF_c_stubs.c Hacl_HKDF_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve51_CP128_SHA512_stubs.ml Hacl_HPKE_Curve51_CP128_SHA512_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve51_CP128_SHA512_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP128_SHA512_stubs.ml Hacl_HPKE_Curve51_CP128_SHA512_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP128_SHA512_c_stubs.c Hacl_HPKE_Curve51_CP128_SHA512_c_stubs.c)))))

(rule
  (targets Hacl_SHA2_Vec256_stubs.ml Hacl_SHA2_Vec256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_SHA2_Vec256_gen.exe)
      (no-infer
        (copy lib/Hacl_SHA2_Vec256_stubs.ml Hacl_SHA2_Vec256_stubs.ml))
      (no-infer
        (copy lib/Hacl_SHA2_Vec256_c_stubs.c Hacl_SHA2_Vec256_c_stubs.c)))))

(rule
  (targets Hacl_Bignum4096_stubs.ml Hacl_Bignum4096_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum4096_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum4096_stubs.ml Hacl_Bignum4096_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum4096_c_stubs.c Hacl_Bignum4096_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20_Vec32_stubs.ml Hacl_Chacha20_Vec32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20_Vec32_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20_Vec32_stubs.ml Hacl_Chacha20_Vec32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20_Vec32_c_stubs.c Hacl_Chacha20_Vec32_c_stubs.c)))))

(rule
  (targets EverCrypt_Ed25519_stubs.ml EverCrypt_Ed25519_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Ed25519_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Ed25519_stubs.ml EverCrypt_Ed25519_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Ed25519_c_stubs.c EverCrypt_Ed25519_c_stubs.c)))))

(rule
  (targets Hacl_Bignum4096_32_stubs.ml Hacl_Bignum4096_32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum4096_32_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum4096_32_stubs.ml Hacl_Bignum4096_32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum4096_32_c_stubs.c Hacl_Bignum4096_32_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_P256_CP128_SHA256_stubs.ml Hacl_HPKE_P256_CP128_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_P256_CP128_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_P256_CP128_SHA256_stubs.ml Hacl_HPKE_P256_CP128_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_P256_CP128_SHA256_c_stubs.c Hacl_HPKE_P256_CP128_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20_Vec256_stubs.ml Hacl_Chacha20_Vec256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20_Vec256_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20_Vec256_stubs.ml Hacl_Chacha20_Vec256_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20_Vec256_c_stubs.c Hacl_Chacha20_Vec256_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20Poly1305_256_stubs.ml Hacl_Chacha20Poly1305_256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20Poly1305_256_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20Poly1305_256_stubs.ml Hacl_Chacha20Poly1305_256_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20Poly1305_256_c_stubs.c Hacl_Chacha20Poly1305_256_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve51_CP256_SHA512_stubs.ml Hacl_HPKE_Curve51_CP256_SHA512_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve51_CP256_SHA512_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP256_SHA512_stubs.ml Hacl_HPKE_Curve51_CP256_SHA512_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP256_SHA512_c_stubs.c Hacl_HPKE_Curve51_CP256_SHA512_c_stubs.c)))))

(rule
  (targets Hacl_SHA2_Scalar32_stubs.ml Hacl_SHA2_Scalar32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_SHA2_Scalar32_gen.exe)
      (no-infer
        (copy lib/Hacl_SHA2_Scalar32_stubs.ml Hacl_SHA2_Scalar32_stubs.ml))
      (no-infer
        (copy lib/Hacl_SHA2_Scalar32_c_stubs.c Hacl_SHA2_Scalar32_c_stubs.c)))))

(rule
  (targets Hacl_Frodo976_stubs.ml Hacl_Frodo976_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Frodo976_gen.exe)
      (no-infer
        (copy lib/Hacl_Frodo976_stubs.ml Hacl_Frodo976_stubs.ml))
      (no-infer
        (copy lib/Hacl_Frodo976_c_stubs.c Hacl_Frodo976_c_stubs.c)))))

(rule
  (targets Hacl_HMAC_Blake2s_128_stubs.ml Hacl_HMAC_Blake2s_128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HMAC_Blake2s_128_gen.exe)
      (no-infer
        (copy lib/Hacl_HMAC_Blake2s_128_stubs.ml Hacl_HMAC_Blake2s_128_stubs.ml))
      (no-infer
        (copy lib/Hacl_HMAC_Blake2s_128_c_stubs.c Hacl_HMAC_Blake2s_128_c_stubs.c)))))

(rule
  (targets Hacl_HKDF_Blake2s_128_stubs.ml Hacl_HKDF_Blake2s_128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HKDF_Blake2s_128_gen.exe)
      (no-infer
        (copy lib/Hacl_HKDF_Blake2s_128_stubs.ml Hacl_HKDF_Blake2s_128_stubs.ml))
      (no-infer
        (copy lib/Hacl_HKDF_Blake2s_128_c_stubs.c Hacl_HKDF_Blake2s_128_c_stubs.c)))))

(rule
  (targets Hacl_GenericField64_stubs.ml Hacl_GenericField64_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_GenericField64_gen.exe)
      (no-infer
        (copy lib/Hacl_GenericField64_stubs.ml Hacl_GenericField64_stubs.ml))
      (no-infer
        (copy lib/Hacl_GenericField64_c_stubs.c Hacl_GenericField64_c_stubs.c)))))

(rule
  (targets Hacl_Frodo1344_stubs.ml Hacl_Frodo1344_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Frodo1344_gen.exe)
      (no-infer
        (copy lib/Hacl_Frodo1344_stubs.ml Hacl_Frodo1344_stubs.ml))
      (no-infer
        (copy lib/Hacl_Frodo1344_c_stubs.c Hacl_Frodo1344_c_stubs.c)))))

(rule
  (targets Hacl_Bignum32_stubs.ml Hacl_Bignum32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum32_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum32_stubs.ml Hacl_Bignum32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum32_c_stubs.c Hacl_Bignum32_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve51_CP128_SHA256_stubs.ml Hacl_HPKE_Curve51_CP128_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve51_CP128_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP128_SHA256_stubs.ml Hacl_HPKE_Curve51_CP128_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP128_SHA256_c_stubs.c Hacl_HPKE_Curve51_CP128_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_Bignum256_32_stubs.ml Hacl_Bignum256_32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum256_32_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum256_32_stubs.ml Hacl_Bignum256_32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum256_32_c_stubs.c Hacl_Bignum256_32_c_stubs.c)))))

(rule
  (targets Hacl_SHA2_Vec128_stubs.ml Hacl_SHA2_Vec128_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_SHA2_Vec128_gen.exe)
      (no-infer
        (copy lib/Hacl_SHA2_Vec128_stubs.ml Hacl_SHA2_Vec128_stubs.ml))
      (no-infer
        (copy lib/Hacl_SHA2_Vec128_c_stubs.c Hacl_SHA2_Vec128_c_stubs.c)))))

(rule
  (targets Hacl_Chacha20Poly1305_32_stubs.ml Hacl_Chacha20Poly1305_32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Chacha20Poly1305_32_gen.exe)
      (no-infer
        (copy lib/Hacl_Chacha20Poly1305_32_stubs.ml Hacl_Chacha20Poly1305_32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Chacha20Poly1305_32_c_stubs.c Hacl_Chacha20Poly1305_32_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve51_CP32_SHA256_stubs.ml Hacl_HPKE_Curve51_CP32_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve51_CP32_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP32_SHA256_stubs.ml Hacl_HPKE_Curve51_CP32_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP32_SHA256_c_stubs.c Hacl_HPKE_Curve51_CP32_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_Streaming_Poly1305_32_stubs.ml Hacl_Streaming_Poly1305_32_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Streaming_Poly1305_32_gen.exe)
      (no-infer
        (copy lib/Hacl_Streaming_Poly1305_32_stubs.ml Hacl_Streaming_Poly1305_32_stubs.ml))
      (no-infer
        (copy lib/Hacl_Streaming_Poly1305_32_c_stubs.c Hacl_Streaming_Poly1305_32_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve51_CP32_SHA512_stubs.ml Hacl_HPKE_Curve51_CP32_SHA512_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve51_CP32_SHA512_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP32_SHA512_stubs.ml Hacl_HPKE_Curve51_CP32_SHA512_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP32_SHA512_c_stubs.c Hacl_HPKE_Curve51_CP32_SHA512_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_P256_CP256_SHA256_stubs.ml Hacl_HPKE_P256_CP256_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_P256_CP256_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_P256_CP256_SHA256_stubs.ml Hacl_HPKE_P256_CP256_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_P256_CP256_SHA256_c_stubs.c Hacl_HPKE_P256_CP256_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_P256_CP32_SHA256_stubs.ml Hacl_HPKE_P256_CP32_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_P256_CP32_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_P256_CP32_SHA256_stubs.ml Hacl_HPKE_P256_CP32_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_P256_CP32_SHA256_c_stubs.c Hacl_HPKE_P256_CP32_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_Bignum64_stubs.ml Hacl_Bignum64_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Bignum64_gen.exe)
      (no-infer
        (copy lib/Hacl_Bignum64_stubs.ml Hacl_Bignum64_stubs.ml))
      (no-infer
        (copy lib/Hacl_Bignum64_c_stubs.c Hacl_Bignum64_c_stubs.c)))))

(rule
  (targets Hacl_Frodo64_stubs.ml Hacl_Frodo64_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Frodo64_gen.exe)
      (no-infer
        (copy lib/Hacl_Frodo64_stubs.ml Hacl_Frodo64_stubs.ml))
      (no-infer
        (copy lib/Hacl_Frodo64_c_stubs.c Hacl_Frodo64_c_stubs.c)))))

(rule
  (targets Hacl_Streaming_SHA1_stubs.ml Hacl_Streaming_SHA1_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Streaming_SHA1_gen.exe)
      (no-infer
        (copy lib/Hacl_Streaming_SHA1_stubs.ml Hacl_Streaming_SHA1_stubs.ml))
      (no-infer
        (copy lib/Hacl_Streaming_SHA1_c_stubs.c Hacl_Streaming_SHA1_c_stubs.c)))))

(rule
  (targets Hacl_Streaming_MD5_stubs.ml Hacl_Streaming_MD5_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_Streaming_MD5_gen.exe)
      (no-infer
        (copy lib/Hacl_Streaming_MD5_stubs.ml Hacl_Streaming_MD5_stubs.ml))
      (no-infer
        (copy lib/Hacl_Streaming_MD5_c_stubs.c Hacl_Streaming_MD5_c_stubs.c)))))

(rule
  (targets Hacl_HMAC_Blake2b_256_stubs.ml Hacl_HMAC_Blake2b_256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HMAC_Blake2b_256_gen.exe)
      (no-infer
        (copy lib/Hacl_HMAC_Blake2b_256_stubs.ml Hacl_HMAC_Blake2b_256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HMAC_Blake2b_256_c_stubs.c Hacl_HMAC_Blake2b_256_c_stubs.c)))))

(rule
  (targets Hacl_HKDF_Blake2b_256_stubs.ml Hacl_HKDF_Blake2b_256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HKDF_Blake2b_256_gen.exe)
      (no-infer
        (copy lib/Hacl_HKDF_Blake2b_256_stubs.ml Hacl_HKDF_Blake2b_256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HKDF_Blake2b_256_c_stubs.c Hacl_HKDF_Blake2b_256_c_stubs.c)))))

(rule
  (targets Hacl_EC_Ed25519_stubs.ml Hacl_EC_Ed25519_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_EC_Ed25519_gen.exe)
      (no-infer
        (copy lib/Hacl_EC_Ed25519_stubs.ml Hacl_EC_Ed25519_stubs.ml))
      (no-infer
        (copy lib/Hacl_EC_Ed25519_c_stubs.c Hacl_EC_Ed25519_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve51_CP256_SHA256_stubs.ml Hacl_HPKE_Curve51_CP256_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve51_CP256_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP256_SHA256_stubs.ml Hacl_HPKE_Curve51_CP256_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve51_CP256_SHA256_c_stubs.c Hacl_HPKE_Curve51_CP256_SHA256_c_stubs.c)))))

(rule
  (targets EverCrypt_Chacha20Poly1305_stubs.ml EverCrypt_Chacha20Poly1305_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Chacha20Poly1305_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Chacha20Poly1305_stubs.ml EverCrypt_Chacha20Poly1305_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Chacha20Poly1305_c_stubs.c EverCrypt_Chacha20Poly1305_c_stubs.c)))))

(rule
  (targets EverCrypt_AEAD_stubs.ml EverCrypt_AEAD_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_AEAD_gen.exe)
      (no-infer
        (copy lib/EverCrypt_AEAD_stubs.ml EverCrypt_AEAD_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_AEAD_c_stubs.c EverCrypt_AEAD_c_stubs.c)))))

(rule
  (targets EverCrypt_HMAC_stubs.ml EverCrypt_HMAC_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_HMAC_gen.exe)
      (no-infer
        (copy lib/EverCrypt_HMAC_stubs.ml EverCrypt_HMAC_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_HMAC_c_stubs.c EverCrypt_HMAC_c_stubs.c)))))

(rule
  (targets EverCrypt_HKDF_stubs.ml EverCrypt_HKDF_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_HKDF_gen.exe)
      (no-infer
        (copy lib/EverCrypt_HKDF_stubs.ml EverCrypt_HKDF_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_HKDF_c_stubs.c EverCrypt_HKDF_c_stubs.c)))))

(rule
  (targets Hacl_HMAC_DRBG_stubs.ml Hacl_HMAC_DRBG_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HMAC_DRBG_gen.exe)
      (no-infer
        (copy lib/Hacl_HMAC_DRBG_stubs.ml Hacl_HMAC_DRBG_stubs.ml))
      (no-infer
        (copy lib/Hacl_HMAC_DRBG_c_stubs.c Hacl_HMAC_DRBG_c_stubs.c)))))

(rule
  (targets EverCrypt_DRBG_stubs.ml EverCrypt_DRBG_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_DRBG_gen.exe)
      (no-infer
        (copy lib/EverCrypt_DRBG_stubs.ml EverCrypt_DRBG_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_DRBG_c_stubs.c EverCrypt_DRBG_c_stubs.c)))))

(rule
  (targets EverCrypt_Poly1305_stubs.ml EverCrypt_Poly1305_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Poly1305_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Poly1305_stubs.ml EverCrypt_Poly1305_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Poly1305_c_stubs.c EverCrypt_Poly1305_c_stubs.c)))))

(rule
  (targets EverCrypt_Curve25519_stubs.ml EverCrypt_Curve25519_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Curve25519_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Curve25519_stubs.ml EverCrypt_Curve25519_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Curve25519_c_stubs.c EverCrypt_Curve25519_c_stubs.c)))))

(rule
  (targets EverCrypt_Cipher_stubs.ml EverCrypt_Cipher_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Cipher_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Cipher_stubs.ml EverCrypt_Cipher_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Cipher_c_stubs.c EverCrypt_Cipher_c_stubs.c)))))

(rule
  (targets EverCrypt_Vale_stubs.ml EverCrypt_Vale_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_Vale_gen.exe)
      (no-infer
        (copy lib/EverCrypt_Vale_stubs.ml EverCrypt_Vale_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_Vale_c_stubs.c EverCrypt_Vale_c_stubs.c)))))

(rule
  (targets EverCrypt_StaticConfig_stubs.ml EverCrypt_StaticConfig_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/EverCrypt_StaticConfig_gen.exe)
      (no-infer
        (copy lib/EverCrypt_StaticConfig_stubs.ml EverCrypt_StaticConfig_stubs.ml))
      (no-infer
        (copy lib/EverCrypt_StaticConfig_c_stubs.c EverCrypt_StaticConfig_c_stubs.c)))))

(rule
  (targets Lib_RandomBuffer_System_stubs.ml Lib_RandomBuffer_System_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Lib_RandomBuffer_System_gen.exe)
      (no-infer
        (copy lib/Lib_RandomBuffer_System_stubs.ml Lib_RandomBuffer_System_stubs.ml))
      (no-infer
        (copy lib/Lib_RandomBuffer_System_c_stubs.c Lib_RandomBuffer_System_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve64_CP128_SHA256_stubs.ml Hacl_HPKE_Curve64_CP128_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve64_CP128_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP128_SHA256_stubs.ml Hacl_HPKE_Curve64_CP128_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP128_SHA256_c_stubs.c Hacl_HPKE_Curve64_CP128_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve64_CP128_SHA512_stubs.ml Hacl_HPKE_Curve64_CP128_SHA512_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve64_CP128_SHA512_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP128_SHA512_stubs.ml Hacl_HPKE_Curve64_CP128_SHA512_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP128_SHA512_c_stubs.c Hacl_HPKE_Curve64_CP128_SHA512_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve64_CP256_SHA256_stubs.ml Hacl_HPKE_Curve64_CP256_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve64_CP256_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP256_SHA256_stubs.ml Hacl_HPKE_Curve64_CP256_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP256_SHA256_c_stubs.c Hacl_HPKE_Curve64_CP256_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve64_CP256_SHA512_stubs.ml Hacl_HPKE_Curve64_CP256_SHA512_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve64_CP256_SHA512_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP256_SHA512_stubs.ml Hacl_HPKE_Curve64_CP256_SHA512_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP256_SHA512_c_stubs.c Hacl_HPKE_Curve64_CP256_SHA512_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve64_CP32_SHA256_stubs.ml Hacl_HPKE_Curve64_CP32_SHA256_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve64_CP32_SHA256_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP32_SHA256_stubs.ml Hacl_HPKE_Curve64_CP32_SHA256_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP32_SHA256_c_stubs.c Hacl_HPKE_Curve64_CP32_SHA256_c_stubs.c)))))

(rule
  (targets Hacl_HPKE_Curve64_CP32_SHA512_stubs.ml Hacl_HPKE_Curve64_CP32_SHA512_c_stubs.c)
  (action
    (progn
      (system "mkdir -p lib")
      (run lib_gen/Hacl_HPKE_Curve64_CP32_SHA512_gen.exe)
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP32_SHA512_stubs.ml Hacl_HPKE_Curve64_CP32_SHA512_stubs.ml))
      (no-infer
        (copy lib/Hacl_HPKE_Curve64_CP32_SHA512_c_stubs.c Hacl_HPKE_Curve64_CP32_SHA512_c_stubs.c)))))
