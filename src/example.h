#ifndef _EXAMPLE_H_
#define _EXAMPLE_H_

#include <godot_cpp/godot.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/binder_common.hpp>

using namespace godot;

class Example : public RefCounted {
    GDCLASS(Example, RefCounted);

protected:
    static void _bind_methods();

public:
    Example();
    ~Example();

    void say_hello() const;
};
#endif
