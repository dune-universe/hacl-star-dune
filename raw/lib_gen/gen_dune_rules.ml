let modules = List.append Dune_modules.stage1 Dune_modules.modules

let () =
  List.iter (fun m ->
    Format.printf {|
(executable
  (name %s_gen)
  (modules %s_gen)
  (libraries lib_evercrypt_so lib_%s_bindings ctypes.stubs))
|} m m m) modules
