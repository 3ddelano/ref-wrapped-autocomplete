# ref-wrapped-autocomplete
#### Minimal reproduction for gdnative / Godot editor bug

Demo showcasing that autocomplete doesn't work for GDNative classes in GDScript when they are wrapped in Ref<> or a pointer is returned.

`CustomClassAlpha`
  - `return_beta()` - Returns pointer to `CustomClassBeta`
  - `return_ref_beta()` - Returns `Ref<CustomClassBeta>`

`CustomClassBeta`
  - `some_method()` - Prints text
  - `some_other_method()` - Prints text
  - `method_gamma()` - Prints text

### How to run?
1. Download the repo, open terminal and run
   
   `git submodule update --init --recursive`

2. Then generate bindings for `godot-cpp` (See [Compiling the C++ bindings](https://docs.godotengine.org/en/stable/tutorials/scripting/gdnative/gdnative_cpp_example.html#building-the-c-bindings))

3. Compile the GDNative library by running
   
   `scons target=release`

4. Test by running the `Main.tscn` scene in `/project`