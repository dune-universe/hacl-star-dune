
(library
 (name raw)
 (public_name hacl-star-raw)
 (libraries ctypes)
 (foreign_archives evercrypt_c_stubs evercrypt)
 (wrapped false)
 (flags (:standard -warn-error -27-33))
 (modules Hacl_Spec_stubs
Hacl_Spec_bindings
Hacl_Hash_Base_stubs
Hacl_Hash_Base_bindings
Hacl_Hash_Blake2_stubs
Hacl_Hash_Blake2_bindings
Hacl_Hash_MD5_stubs
Hacl_Hash_MD5_bindings
Hacl_Hash_SHA1_stubs
Hacl_Hash_SHA1_bindings
Hacl_Hash_SHA2_stubs
Hacl_Hash_SHA2_bindings
EverCrypt_AutoConfig2_stubs
EverCrypt_AutoConfig2_bindings
EverCrypt_Hash_stubs
EverCrypt_Hash_bindings
Hacl_SHA3_stubs
Hacl_SHA3_bindings
Hacl_Chacha20_stubs
Hacl_Chacha20_bindings
Hacl_Salsa20_stubs
Hacl_Salsa20_bindings
Hacl_Bignum_Base_stubs
Hacl_Bignum_Base_bindings
Hacl_Bignum_stubs
Hacl_Bignum_bindings
Hacl_Curve25519_64_Slow_stubs
Hacl_Curve25519_64_Slow_bindings
Hacl_Bignum25519_51_stubs
Hacl_Bignum25519_51_bindings
Hacl_Curve25519_51_stubs
Hacl_Curve25519_51_bindings
Hacl_Streaming_SHA2_stubs
Hacl_Streaming_SHA2_bindings
Hacl_Ed25519_stubs
Hacl_Ed25519_bindings
Hacl_Poly1305_32_stubs
Hacl_Poly1305_32_bindings
Hacl_NaCl_stubs
Hacl_NaCl_bindings
EverCrypt_Error_stubs
EverCrypt_Error_bindings
EverCrypt_CTR_stubs
EverCrypt_CTR_bindings
Hacl_P256_stubs
Hacl_P256_bindings
Hacl_Frodo_KEM_stubs
Hacl_Frodo_KEM_bindings
Hacl_IntTypes_Intrinsics_stubs
Hacl_IntTypes_Intrinsics_bindings
Hacl_RSAPSS_stubs
Hacl_RSAPSS_bindings
Hacl_FFDHE_stubs
Hacl_FFDHE_bindings
Hacl_Streaming_Blake2_stubs
Hacl_Streaming_Blake2_bindings
Hacl_Frodo640_stubs
Hacl_Frodo640_bindings
Hacl_HMAC_stubs
Hacl_HMAC_bindings
Hacl_HKDF_stubs
Hacl_HKDF_bindings
Hacl_GenericField32_stubs
Hacl_GenericField32_bindings
Hacl_Bignum256_stubs
Hacl_Bignum256_bindings
Hacl_Bignum4096_stubs
Hacl_Bignum4096_bindings
Hacl_Chacha20_Vec32_stubs
Hacl_Chacha20_Vec32_bindings
EverCrypt_Ed25519_stubs
EverCrypt_Ed25519_bindings
Hacl_Bignum4096_32_stubs
Hacl_Bignum4096_32_bindings
Hacl_SHA2_Scalar32_stubs
Hacl_SHA2_Scalar32_bindings
Hacl_Frodo976_stubs
Hacl_Frodo976_bindings
Hacl_GenericField64_stubs
Hacl_GenericField64_bindings
Hacl_Frodo1344_stubs
Hacl_Frodo1344_bindings
Hacl_Bignum32_stubs
Hacl_Bignum32_bindings
Hacl_Bignum256_32_stubs
Hacl_Bignum256_32_bindings
Hacl_Chacha20Poly1305_32_stubs
Hacl_Chacha20Poly1305_32_bindings
Hacl_HPKE_Curve51_CP32_SHA256_stubs
Hacl_HPKE_Curve51_CP32_SHA256_bindings
Hacl_Streaming_Poly1305_32_stubs
Hacl_Streaming_Poly1305_32_bindings
Hacl_HPKE_Curve51_CP32_SHA512_stubs
Hacl_HPKE_Curve51_CP32_SHA512_bindings
Hacl_HPKE_P256_CP32_SHA256_stubs
Hacl_HPKE_P256_CP32_SHA256_bindings
Hacl_Bignum64_stubs
Hacl_Bignum64_bindings
Hacl_Frodo64_stubs
Hacl_Frodo64_bindings
Hacl_Streaming_SHA1_stubs
Hacl_Streaming_SHA1_bindings
Hacl_Streaming_MD5_stubs
Hacl_Streaming_MD5_bindings
Hacl_EC_Ed25519_stubs
Hacl_EC_Ed25519_bindings
EverCrypt_Chacha20Poly1305_stubs
EverCrypt_Chacha20Poly1305_bindings
EverCrypt_AEAD_stubs
EverCrypt_AEAD_bindings
EverCrypt_HMAC_stubs
EverCrypt_HMAC_bindings
EverCrypt_HKDF_stubs
EverCrypt_HKDF_bindings
Hacl_HMAC_DRBG_stubs
Hacl_HMAC_DRBG_bindings
EverCrypt_DRBG_stubs
EverCrypt_DRBG_bindings
EverCrypt_Poly1305_stubs
EverCrypt_Poly1305_bindings
EverCrypt_Curve25519_stubs
EverCrypt_Curve25519_bindings
EverCrypt_Cipher_stubs
EverCrypt_Cipher_bindings
EverCrypt_Vale_stubs
EverCrypt_Vale_bindings
EverCrypt_StaticConfig_stubs
EverCrypt_StaticConfig_bindings
Lib_RandomBuffer_System_stubs
Lib_RandomBuffer_System_bindings
))

(rule
 (deps
  (source_tree raw)
  (source_tree kremlin))
 (targets
  config.h
  Hacl_Spec_stubs.ml
Hacl_Spec_bindings.ml
Hacl_Hash_Base_stubs.ml
Hacl_Hash_Base_bindings.ml
Hacl_Hash_Blake2_stubs.ml
Hacl_Hash_Blake2_bindings.ml
Hacl_Hash_MD5_stubs.ml
Hacl_Hash_MD5_bindings.ml
Hacl_Hash_SHA1_stubs.ml
Hacl_Hash_SHA1_bindings.ml
Hacl_Hash_SHA2_stubs.ml
Hacl_Hash_SHA2_bindings.ml
EverCrypt_AutoConfig2_stubs.ml
EverCrypt_AutoConfig2_bindings.ml
EverCrypt_Hash_stubs.ml
EverCrypt_Hash_bindings.ml
Hacl_SHA3_stubs.ml
Hacl_SHA3_bindings.ml
Hacl_Chacha20_stubs.ml
Hacl_Chacha20_bindings.ml
Hacl_Salsa20_stubs.ml
Hacl_Salsa20_bindings.ml
Hacl_Bignum_Base_stubs.ml
Hacl_Bignum_Base_bindings.ml
Hacl_Bignum_stubs.ml
Hacl_Bignum_bindings.ml
Hacl_Curve25519_64_Slow_stubs.ml
Hacl_Curve25519_64_Slow_bindings.ml
Hacl_Bignum25519_51_stubs.ml
Hacl_Bignum25519_51_bindings.ml
Hacl_Curve25519_51_stubs.ml
Hacl_Curve25519_51_bindings.ml
Hacl_Streaming_SHA2_stubs.ml
Hacl_Streaming_SHA2_bindings.ml
Hacl_Ed25519_stubs.ml
Hacl_Ed25519_bindings.ml
Hacl_Poly1305_32_stubs.ml
Hacl_Poly1305_32_bindings.ml
Hacl_NaCl_stubs.ml
Hacl_NaCl_bindings.ml
EverCrypt_Error_stubs.ml
EverCrypt_Error_bindings.ml
EverCrypt_CTR_stubs.ml
EverCrypt_CTR_bindings.ml
Hacl_P256_stubs.ml
Hacl_P256_bindings.ml
Hacl_Frodo_KEM_stubs.ml
Hacl_Frodo_KEM_bindings.ml
Hacl_IntTypes_Intrinsics_stubs.ml
Hacl_IntTypes_Intrinsics_bindings.ml
Hacl_RSAPSS_stubs.ml
Hacl_RSAPSS_bindings.ml
Hacl_FFDHE_stubs.ml
Hacl_FFDHE_bindings.ml
Hacl_Streaming_Blake2_stubs.ml
Hacl_Streaming_Blake2_bindings.ml
Hacl_Frodo640_stubs.ml
Hacl_Frodo640_bindings.ml
Hacl_HMAC_stubs.ml
Hacl_HMAC_bindings.ml
Hacl_HKDF_stubs.ml
Hacl_HKDF_bindings.ml
Hacl_GenericField32_stubs.ml
Hacl_GenericField32_bindings.ml
Hacl_Bignum256_stubs.ml
Hacl_Bignum256_bindings.ml
Hacl_Bignum4096_stubs.ml
Hacl_Bignum4096_bindings.ml
Hacl_Chacha20_Vec32_stubs.ml
Hacl_Chacha20_Vec32_bindings.ml
EverCrypt_Ed25519_stubs.ml
EverCrypt_Ed25519_bindings.ml
Hacl_Bignum4096_32_stubs.ml
Hacl_Bignum4096_32_bindings.ml
Hacl_SHA2_Scalar32_stubs.ml
Hacl_SHA2_Scalar32_bindings.ml
Hacl_Frodo976_stubs.ml
Hacl_Frodo976_bindings.ml
Hacl_GenericField64_stubs.ml
Hacl_GenericField64_bindings.ml
Hacl_Frodo1344_stubs.ml
Hacl_Frodo1344_bindings.ml
Hacl_Bignum32_stubs.ml
Hacl_Bignum32_bindings.ml
Hacl_Bignum256_32_stubs.ml
Hacl_Bignum256_32_bindings.ml
Hacl_Chacha20Poly1305_32_stubs.ml
Hacl_Chacha20Poly1305_32_bindings.ml
Hacl_HPKE_Curve51_CP32_SHA256_stubs.ml
Hacl_HPKE_Curve51_CP32_SHA256_bindings.ml
Hacl_Streaming_Poly1305_32_stubs.ml
Hacl_Streaming_Poly1305_32_bindings.ml
Hacl_HPKE_Curve51_CP32_SHA512_stubs.ml
Hacl_HPKE_Curve51_CP32_SHA512_bindings.ml
Hacl_HPKE_P256_CP32_SHA256_stubs.ml
Hacl_HPKE_P256_CP32_SHA256_bindings.ml
Hacl_Bignum64_stubs.ml
Hacl_Bignum64_bindings.ml
Hacl_Frodo64_stubs.ml
Hacl_Frodo64_bindings.ml
Hacl_Streaming_SHA1_stubs.ml
Hacl_Streaming_SHA1_bindings.ml
Hacl_Streaming_MD5_stubs.ml
Hacl_Streaming_MD5_bindings.ml
Hacl_EC_Ed25519_stubs.ml
Hacl_EC_Ed25519_bindings.ml
EverCrypt_Chacha20Poly1305_stubs.ml
EverCrypt_Chacha20Poly1305_bindings.ml
EverCrypt_AEAD_stubs.ml
EverCrypt_AEAD_bindings.ml
EverCrypt_HMAC_stubs.ml
EverCrypt_HMAC_bindings.ml
EverCrypt_HKDF_stubs.ml
EverCrypt_HKDF_bindings.ml
Hacl_HMAC_DRBG_stubs.ml
Hacl_HMAC_DRBG_bindings.ml
EverCrypt_DRBG_stubs.ml
EverCrypt_DRBG_bindings.ml
EverCrypt_Poly1305_stubs.ml
EverCrypt_Poly1305_bindings.ml
EverCrypt_Curve25519_stubs.ml
EverCrypt_Curve25519_bindings.ml
EverCrypt_Cipher_stubs.ml
EverCrypt_Cipher_bindings.ml
EverCrypt_Vale_stubs.ml
EverCrypt_Vale_bindings.ml
EverCrypt_StaticConfig_stubs.ml
EverCrypt_StaticConfig_bindings.ml
Lib_RandomBuffer_System_stubs.ml
Lib_RandomBuffer_System_bindings.ml

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
    (copy raw/lib/Hacl_Spec_stubs.ml Hacl_Spec_stubs.ml)
(copy raw/lib/Hacl_Spec_bindings.ml Hacl_Spec_bindings.ml)
(copy raw/lib/Hacl_Hash_Base_stubs.ml Hacl_Hash_Base_stubs.ml)
(copy raw/lib/Hacl_Hash_Base_bindings.ml Hacl_Hash_Base_bindings.ml)
(copy raw/lib/Hacl_Hash_Blake2_stubs.ml Hacl_Hash_Blake2_stubs.ml)
(copy raw/lib/Hacl_Hash_Blake2_bindings.ml Hacl_Hash_Blake2_bindings.ml)
(copy raw/lib/Hacl_Hash_MD5_stubs.ml Hacl_Hash_MD5_stubs.ml)
(copy raw/lib/Hacl_Hash_MD5_bindings.ml Hacl_Hash_MD5_bindings.ml)
(copy raw/lib/Hacl_Hash_SHA1_stubs.ml Hacl_Hash_SHA1_stubs.ml)
(copy raw/lib/Hacl_Hash_SHA1_bindings.ml Hacl_Hash_SHA1_bindings.ml)
(copy raw/lib/Hacl_Hash_SHA2_stubs.ml Hacl_Hash_SHA2_stubs.ml)
(copy raw/lib/Hacl_Hash_SHA2_bindings.ml Hacl_Hash_SHA2_bindings.ml)
(copy raw/lib/EverCrypt_AutoConfig2_stubs.ml EverCrypt_AutoConfig2_stubs.ml)
(copy raw/lib/EverCrypt_AutoConfig2_bindings.ml EverCrypt_AutoConfig2_bindings.ml)
(copy raw/lib/EverCrypt_Hash_stubs.ml EverCrypt_Hash_stubs.ml)
(copy raw/lib/EverCrypt_Hash_bindings.ml EverCrypt_Hash_bindings.ml)
(copy raw/lib/Hacl_SHA3_stubs.ml Hacl_SHA3_stubs.ml)
(copy raw/lib/Hacl_SHA3_bindings.ml Hacl_SHA3_bindings.ml)
(copy raw/lib/Hacl_Chacha20_stubs.ml Hacl_Chacha20_stubs.ml)
(copy raw/lib/Hacl_Chacha20_bindings.ml Hacl_Chacha20_bindings.ml)
(copy raw/lib/Hacl_Salsa20_stubs.ml Hacl_Salsa20_stubs.ml)
(copy raw/lib/Hacl_Salsa20_bindings.ml Hacl_Salsa20_bindings.ml)
(copy raw/lib/Hacl_Bignum_Base_stubs.ml Hacl_Bignum_Base_stubs.ml)
(copy raw/lib/Hacl_Bignum_Base_bindings.ml Hacl_Bignum_Base_bindings.ml)
(copy raw/lib/Hacl_Bignum_stubs.ml Hacl_Bignum_stubs.ml)
(copy raw/lib/Hacl_Bignum_bindings.ml Hacl_Bignum_bindings.ml)
(copy raw/lib/Hacl_Curve25519_64_Slow_stubs.ml Hacl_Curve25519_64_Slow_stubs.ml)
(copy raw/lib/Hacl_Curve25519_64_Slow_bindings.ml Hacl_Curve25519_64_Slow_bindings.ml)
(copy raw/lib/Hacl_Bignum25519_51_stubs.ml Hacl_Bignum25519_51_stubs.ml)
(copy raw/lib/Hacl_Bignum25519_51_bindings.ml Hacl_Bignum25519_51_bindings.ml)
(copy raw/lib/Hacl_Curve25519_51_stubs.ml Hacl_Curve25519_51_stubs.ml)
(copy raw/lib/Hacl_Curve25519_51_bindings.ml Hacl_Curve25519_51_bindings.ml)
(copy raw/lib/Hacl_Streaming_SHA2_stubs.ml Hacl_Streaming_SHA2_stubs.ml)
(copy raw/lib/Hacl_Streaming_SHA2_bindings.ml Hacl_Streaming_SHA2_bindings.ml)
(copy raw/lib/Hacl_Ed25519_stubs.ml Hacl_Ed25519_stubs.ml)
(copy raw/lib/Hacl_Ed25519_bindings.ml Hacl_Ed25519_bindings.ml)
(copy raw/lib/Hacl_Poly1305_32_stubs.ml Hacl_Poly1305_32_stubs.ml)
(copy raw/lib/Hacl_Poly1305_32_bindings.ml Hacl_Poly1305_32_bindings.ml)
(copy raw/lib/Hacl_NaCl_stubs.ml Hacl_NaCl_stubs.ml)
(copy raw/lib/Hacl_NaCl_bindings.ml Hacl_NaCl_bindings.ml)
(copy raw/lib/EverCrypt_Error_stubs.ml EverCrypt_Error_stubs.ml)
(copy raw/lib/EverCrypt_Error_bindings.ml EverCrypt_Error_bindings.ml)
(copy raw/lib/EverCrypt_CTR_stubs.ml EverCrypt_CTR_stubs.ml)
(copy raw/lib/EverCrypt_CTR_bindings.ml EverCrypt_CTR_bindings.ml)
(copy raw/lib/Hacl_P256_stubs.ml Hacl_P256_stubs.ml)
(copy raw/lib/Hacl_P256_bindings.ml Hacl_P256_bindings.ml)
(copy raw/lib/Hacl_Frodo_KEM_stubs.ml Hacl_Frodo_KEM_stubs.ml)
(copy raw/lib/Hacl_Frodo_KEM_bindings.ml Hacl_Frodo_KEM_bindings.ml)
(copy raw/lib/Hacl_IntTypes_Intrinsics_stubs.ml Hacl_IntTypes_Intrinsics_stubs.ml)
(copy raw/lib/Hacl_IntTypes_Intrinsics_bindings.ml Hacl_IntTypes_Intrinsics_bindings.ml)
(copy raw/lib/Hacl_RSAPSS_stubs.ml Hacl_RSAPSS_stubs.ml)
(copy raw/lib/Hacl_RSAPSS_bindings.ml Hacl_RSAPSS_bindings.ml)
(copy raw/lib/Hacl_FFDHE_stubs.ml Hacl_FFDHE_stubs.ml)
(copy raw/lib/Hacl_FFDHE_bindings.ml Hacl_FFDHE_bindings.ml)
(copy raw/lib/Hacl_Streaming_Blake2_stubs.ml Hacl_Streaming_Blake2_stubs.ml)
(copy raw/lib/Hacl_Streaming_Blake2_bindings.ml Hacl_Streaming_Blake2_bindings.ml)
(copy raw/lib/Hacl_Frodo640_stubs.ml Hacl_Frodo640_stubs.ml)
(copy raw/lib/Hacl_Frodo640_bindings.ml Hacl_Frodo640_bindings.ml)
(copy raw/lib/Hacl_HMAC_stubs.ml Hacl_HMAC_stubs.ml)
(copy raw/lib/Hacl_HMAC_bindings.ml Hacl_HMAC_bindings.ml)
(copy raw/lib/Hacl_HKDF_stubs.ml Hacl_HKDF_stubs.ml)
(copy raw/lib/Hacl_HKDF_bindings.ml Hacl_HKDF_bindings.ml)
(copy raw/lib/Hacl_GenericField32_stubs.ml Hacl_GenericField32_stubs.ml)
(copy raw/lib/Hacl_GenericField32_bindings.ml Hacl_GenericField32_bindings.ml)
(copy raw/lib/Hacl_Bignum256_stubs.ml Hacl_Bignum256_stubs.ml)
(copy raw/lib/Hacl_Bignum256_bindings.ml Hacl_Bignum256_bindings.ml)
(copy raw/lib/Hacl_Bignum4096_stubs.ml Hacl_Bignum4096_stubs.ml)
(copy raw/lib/Hacl_Bignum4096_bindings.ml Hacl_Bignum4096_bindings.ml)
(copy raw/lib/Hacl_Chacha20_Vec32_stubs.ml Hacl_Chacha20_Vec32_stubs.ml)
(copy raw/lib/Hacl_Chacha20_Vec32_bindings.ml Hacl_Chacha20_Vec32_bindings.ml)
(copy raw/lib/EverCrypt_Ed25519_stubs.ml EverCrypt_Ed25519_stubs.ml)
(copy raw/lib/EverCrypt_Ed25519_bindings.ml EverCrypt_Ed25519_bindings.ml)
(copy raw/lib/Hacl_Bignum4096_32_stubs.ml Hacl_Bignum4096_32_stubs.ml)
(copy raw/lib/Hacl_Bignum4096_32_bindings.ml Hacl_Bignum4096_32_bindings.ml)
(copy raw/lib/Hacl_SHA2_Scalar32_stubs.ml Hacl_SHA2_Scalar32_stubs.ml)
(copy raw/lib/Hacl_SHA2_Scalar32_bindings.ml Hacl_SHA2_Scalar32_bindings.ml)
(copy raw/lib/Hacl_Frodo976_stubs.ml Hacl_Frodo976_stubs.ml)
(copy raw/lib/Hacl_Frodo976_bindings.ml Hacl_Frodo976_bindings.ml)
(copy raw/lib/Hacl_GenericField64_stubs.ml Hacl_GenericField64_stubs.ml)
(copy raw/lib/Hacl_GenericField64_bindings.ml Hacl_GenericField64_bindings.ml)
(copy raw/lib/Hacl_Frodo1344_stubs.ml Hacl_Frodo1344_stubs.ml)
(copy raw/lib/Hacl_Frodo1344_bindings.ml Hacl_Frodo1344_bindings.ml)
(copy raw/lib/Hacl_Bignum32_stubs.ml Hacl_Bignum32_stubs.ml)
(copy raw/lib/Hacl_Bignum32_bindings.ml Hacl_Bignum32_bindings.ml)
(copy raw/lib/Hacl_Bignum256_32_stubs.ml Hacl_Bignum256_32_stubs.ml)
(copy raw/lib/Hacl_Bignum256_32_bindings.ml Hacl_Bignum256_32_bindings.ml)
(copy raw/lib/Hacl_Chacha20Poly1305_32_stubs.ml Hacl_Chacha20Poly1305_32_stubs.ml)
(copy raw/lib/Hacl_Chacha20Poly1305_32_bindings.ml Hacl_Chacha20Poly1305_32_bindings.ml)
(copy raw/lib/Hacl_HPKE_Curve51_CP32_SHA256_stubs.ml Hacl_HPKE_Curve51_CP32_SHA256_stubs.ml)
(copy raw/lib/Hacl_HPKE_Curve51_CP32_SHA256_bindings.ml Hacl_HPKE_Curve51_CP32_SHA256_bindings.ml)
(copy raw/lib/Hacl_Streaming_Poly1305_32_stubs.ml Hacl_Streaming_Poly1305_32_stubs.ml)
(copy raw/lib/Hacl_Streaming_Poly1305_32_bindings.ml Hacl_Streaming_Poly1305_32_bindings.ml)
(copy raw/lib/Hacl_HPKE_Curve51_CP32_SHA512_stubs.ml Hacl_HPKE_Curve51_CP32_SHA512_stubs.ml)
(copy raw/lib/Hacl_HPKE_Curve51_CP32_SHA512_bindings.ml Hacl_HPKE_Curve51_CP32_SHA512_bindings.ml)
(copy raw/lib/Hacl_HPKE_P256_CP32_SHA256_stubs.ml Hacl_HPKE_P256_CP32_SHA256_stubs.ml)
(copy raw/lib/Hacl_HPKE_P256_CP32_SHA256_bindings.ml Hacl_HPKE_P256_CP32_SHA256_bindings.ml)
(copy raw/lib/Hacl_Bignum64_stubs.ml Hacl_Bignum64_stubs.ml)
(copy raw/lib/Hacl_Bignum64_bindings.ml Hacl_Bignum64_bindings.ml)
(copy raw/lib/Hacl_Frodo64_stubs.ml Hacl_Frodo64_stubs.ml)
(copy raw/lib/Hacl_Frodo64_bindings.ml Hacl_Frodo64_bindings.ml)
(copy raw/lib/Hacl_Streaming_SHA1_stubs.ml Hacl_Streaming_SHA1_stubs.ml)
(copy raw/lib/Hacl_Streaming_SHA1_bindings.ml Hacl_Streaming_SHA1_bindings.ml)
(copy raw/lib/Hacl_Streaming_MD5_stubs.ml Hacl_Streaming_MD5_stubs.ml)
(copy raw/lib/Hacl_Streaming_MD5_bindings.ml Hacl_Streaming_MD5_bindings.ml)
(copy raw/lib/Hacl_EC_Ed25519_stubs.ml Hacl_EC_Ed25519_stubs.ml)
(copy raw/lib/Hacl_EC_Ed25519_bindings.ml Hacl_EC_Ed25519_bindings.ml)
(copy raw/lib/EverCrypt_Chacha20Poly1305_stubs.ml EverCrypt_Chacha20Poly1305_stubs.ml)
(copy raw/lib/EverCrypt_Chacha20Poly1305_bindings.ml EverCrypt_Chacha20Poly1305_bindings.ml)
(copy raw/lib/EverCrypt_AEAD_stubs.ml EverCrypt_AEAD_stubs.ml)
(copy raw/lib/EverCrypt_AEAD_bindings.ml EverCrypt_AEAD_bindings.ml)
(copy raw/lib/EverCrypt_HMAC_stubs.ml EverCrypt_HMAC_stubs.ml)
(copy raw/lib/EverCrypt_HMAC_bindings.ml EverCrypt_HMAC_bindings.ml)
(copy raw/lib/EverCrypt_HKDF_stubs.ml EverCrypt_HKDF_stubs.ml)
(copy raw/lib/EverCrypt_HKDF_bindings.ml EverCrypt_HKDF_bindings.ml)
(copy raw/lib/Hacl_HMAC_DRBG_stubs.ml Hacl_HMAC_DRBG_stubs.ml)
(copy raw/lib/Hacl_HMAC_DRBG_bindings.ml Hacl_HMAC_DRBG_bindings.ml)
(copy raw/lib/EverCrypt_DRBG_stubs.ml EverCrypt_DRBG_stubs.ml)
(copy raw/lib/EverCrypt_DRBG_bindings.ml EverCrypt_DRBG_bindings.ml)
(copy raw/lib/EverCrypt_Poly1305_stubs.ml EverCrypt_Poly1305_stubs.ml)
(copy raw/lib/EverCrypt_Poly1305_bindings.ml EverCrypt_Poly1305_bindings.ml)
(copy raw/lib/EverCrypt_Curve25519_stubs.ml EverCrypt_Curve25519_stubs.ml)
(copy raw/lib/EverCrypt_Curve25519_bindings.ml EverCrypt_Curve25519_bindings.ml)
(copy raw/lib/EverCrypt_Cipher_stubs.ml EverCrypt_Cipher_stubs.ml)
(copy raw/lib/EverCrypt_Cipher_bindings.ml EverCrypt_Cipher_bindings.ml)
(copy raw/lib/EverCrypt_Vale_stubs.ml EverCrypt_Vale_stubs.ml)
(copy raw/lib/EverCrypt_Vale_bindings.ml EverCrypt_Vale_bindings.ml)
(copy raw/lib/EverCrypt_StaticConfig_stubs.ml EverCrypt_StaticConfig_stubs.ml)
(copy raw/lib/EverCrypt_StaticConfig_bindings.ml EverCrypt_StaticConfig_bindings.ml)
(copy raw/lib/Lib_RandomBuffer_System_stubs.ml Lib_RandomBuffer_System_stubs.ml)
(copy raw/lib/Lib_RandomBuffer_System_bindings.ml Lib_RandomBuffer_System_bindings.ml)

    (copy raw/config.h config.h)
    (copy raw/libevercrypt.a libevercrypt.a)
    (copy raw/libevercrypt.so dllevercrypt.so)
    (copy raw/libevercrypt_c_stubs.a libevercrypt_c_stubs.a)
    (copy raw/dllevercrypt_c_stubs.so dllevercrypt_c_stubs.so)
    ))))
    