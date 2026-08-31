#include <iostream>
#include <functional>

bool isPositive(int x) {
    return x > 0;
}

// isValid is a function parameter
void checkValue(int x, std::function<bool(int)> isValid) {
    std::cout << x << " is " << (isValid(x) ? "valid" : "invalid") << std::endl;
}

int main() {
    // pass a named function
    checkValue(5, isPositive);
    // or a lambda. Note they both do the same thing: check if x is positive
    checkValue(-3, [](int x) { return x > 0; }); 

    return 0;
}
