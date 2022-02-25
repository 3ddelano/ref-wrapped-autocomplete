#ifndef CUSTOM_CLASS_BETA_H
#define CUSTOM_CLASS_BETA_H

#include <Godot.hpp>
#include <Reference.hpp>

using namespace godot;

class CustomClassBeta : public Reference {
    GODOT_CLASS(CustomClassBeta, Reference)
  public:
    void _init(){}; // Called by Godot
    static void _register_methods();
    CustomClassBeta(){};
    ~CustomClassBeta(){};

    // Methods
    void some_method() {
        Godot::print("CustomClassBeta - some_method()");
    }

    void some_other_method() {
        Godot::print("CustomClassBeta - some_other_method()");
    }

    void method_gamma() {
        Godot::print("CustomClassBeta - method_gamma()");
    }
};

void CustomClassBeta::_register_methods() {
    // 3 exposed methods to try autocomplete in Editor
    register_method("some_method", &CustomClassBeta::some_method);
    register_method("some_other_method", &CustomClassBeta::some_other_method);
    register_method("method_gamma", &CustomClassBeta::method_gamma);
}

#endif