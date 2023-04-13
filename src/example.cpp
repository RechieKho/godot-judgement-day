#include "example.h"

#include <godot_cpp/variant/utility_functions.hpp>

Example::Example() {}

Example::~Example() {}

void Example::_bind_methods() {
    ClassDB::bind_method(D_METHOD("say_hello"), &Example::say_hello);
}

void Example::say_hello() const {
    UtilityFunctions::print("Hello world!");
}
