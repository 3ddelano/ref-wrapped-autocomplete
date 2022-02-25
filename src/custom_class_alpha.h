#ifndef CUSTOM_CLASS_ALPHA_H
#define CUSTOM_CLASS_ALPHA_H

#include <Godot.hpp>
#include <Reference.hpp>

#include <custom_class_beta.h>

using namespace godot;

class CustomClassAlpha : public Reference {
    GODOT_CLASS(CustomClassAlpha, Reference)
  public:
    void _init(){}; // Called by Godot
    static void _register_methods();

    CustomClassAlpha(){};
    ~CustomClassAlpha(){};

    // Methods
    Ref<CustomClassBeta> return_ref_beta() {
        Ref<CustomClassBeta> ref = (Ref<CustomClassBeta>) CustomClassBeta::_new();
        return ref;
    }

    CustomClassBeta* return_beta() {
        CustomClassBeta* beta = CustomClassBeta::_new();
        return beta;
    }
};

void CustomClassAlpha::_register_methods() {
    register_method("return_ref_beta", &CustomClassAlpha::return_ref_beta);
    register_method("return_beta", &CustomClassAlpha::return_beta);
}

#endif