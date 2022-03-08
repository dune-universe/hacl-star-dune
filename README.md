# hacl-star-raw dune port

## Description

There are two kinds of primitives: portable ones (written in C) and architecture-specific ones.

A configure script (home built - not using autotools) detects if the C compiler has enough features to build architecture-specific code. Two of these features are in particular `VEC128` and `VEC256`.

The configure script stores this result as `config.h` (included in C stubs for use in `#ifdef`) and in `Makefile.config` (included in `Makefile`).

> :warning: The only way `configure` works is by detecting. It is not possible to build only the portable code on a host that has hardware support for certain features. It is also not possible to ask for arch-specific code to be built or fail if the host does not have the features.

`config.h` is also used during the compilation of the `hacl` (in the same tarball). On the ocaml side, conditional compilation is handled through `cppo` to select the arch-specific code if available or a function that fails otherwise.

```ocaml
#ifdef HACL_CAN_COMPILE_VEC256
module Chacha20_Poly1305_256 : Chacha20_Poly1305 =
  Make_Chacha20_Poly1305 (struct
    let encrypt = Hacl_Chacha20Poly1305_256.hacl_Chacha20Poly1305_256_aead_encrypt
  end)
#else
module Chacha20_Poly1305_256 : Chacha20_Poly1305 =
  Make_Chacha20_Poly1305 (struct
    let encrypt _ _ _ _ _ _ = failwith "Not implemented on this platform"
  end)
#endif
```

> :warning: `hacl` needs `config.h` so it will build the raw package. It might be possible to restructure this so that this information is available in a more modular way. This is just the case in an opam environment. In a dune workspace (with opam-monorepo) it will only build it once.

This optional compilation is a bit fragile because optional features silently depend on the machine that has used to build the package.

> :warning: Recommendation: avoid conditional compilation by moving the arch-specific code to a specific sublibrary (`hacl.vec128`) or even better, to a separate opam package that can be marked with a precise `available` field.

There is an `AutoConfig2` module which allows querying at runtime whether some features are available. This is used for example in the test suite to skip tests for arch-specific code.

> :warning: This feature can be misleading. It checks for CPU features at runtime (for example using `cpuid`), but this is not necessary the same result as the detected compile-time result. For example, the combination of a recent CPU and old C compiler could fail detection at compile time but succeed at runtime, which would cause the "unimplemented" stubs to be used. Generally, exposing the compile-time results (contents of `config.h`) in an OCaml module would be simpler and enough for most cases. One case where run-time detection is necessary is if the binary is built on a system which has CPU features but runs on a system which does not have then. In that case it some applications might want to use the arch-specific code if available, or default to the portable code (NB there can be security concerns in doing that). But to reiterate, restructuring the library so that arch-specific code is assumed to be available or moved to another library removes the need for most of this (tests can be attached to the arch-specific package, etc).

## Dune port

The approach taken in the dune port is to wrap the upstream `configure` / `make` build system. `configure` needs to be patched to allow requiring arch-specific features or failing.

The dune stanza looks like the following:

```scheme
(library
 (name raw)
 (public_name hacl-star-raw)
 (wrapped false)
 (foreign_archives evercrypt_c_stubs evercrypt)
 (modules ...))
```

It means that dune is going to look for `libevercrypt_c_stubs.a`, `dllevercrypt_c_stubs.so`, `libevercrypt.a`, `dllevercrypt.so` and all the ml files for the listed modules. Some of the libraries need a new Makefile target (this relies on the `ALL_C_STUBS` variable).

Then a single rule is defined to express that running the upstream build system will build all of these:

```scheme
(rule
 (deps (source_tree raw) (source_tree kremlib))
 (targets
  config.h
  ... ; one.ml per listed module
  libevercrypt_c_stubs.a
  dllevercrypt_c_stubs.so
  libevercrypt.a
  dllevercrypt.so
  )
 (action
  (chdir raw
   (progn
    (run ./configure)
    (run make -j 8)
    (run make libevercrypt_c_stubs.a dllevercrypt_c_stubs.so)
    (copy raw/lib/x.ml x.ml) ; for each x in listed module and library
   ))))
```

> :warning: Dune does not know what the command does, so it will reexecute everything if the source tree is touched. Also there is no way to have `make` and `dune` share jobs. Running `make` means that the build will be sequential (dune counts that as 1 job so will keep schedule other processes in a long build). Running `make -j 8` will schedule parallel build processes but this is less efficient in the context of a monorepo build.

The dune port assumes that `VEC128` and `VEC256` are available (and has a corresponding `available` opam field) because Tezos requires these features.
