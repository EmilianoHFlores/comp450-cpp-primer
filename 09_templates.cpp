#include <iostream>
#include <string>

// A function template: one definition, works for any type T that supports operator>
template <typename T>
T max_value(T a, T b) {
    return (a > b) ? a : b;
}

// A class template: a generic box that can hold any single value
template <typename T>
class Box {
public:
    Box(T value) : value_(value) {}
    T get() const { return value_; }
private:
    T value_;
};

int main() {
    std::cout << max_value(3, 7) << std::endl; // T deduced as int
    std::cout << max_value(2.5, 1.5) << std::endl; // T deduced as double

    Box<int> int_box(42);
    Box<std::string> str_box("hello");
    std::cout << int_box.get() << " " << str_box.get() << std::endl;

    return 0;
}
