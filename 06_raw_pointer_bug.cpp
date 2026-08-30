#include <iostream>

int main() {
    int* a = new int(5);
    int* b = a; // b points to the same object as a -- who owns it?

    delete a; // a is done with it, so it deletes the object...
    std::cout << *b << std::endl; // ...but b doesn't know that! Undefined behavior.

    delete b; // double delete: this object was already freed above.

    return 0;
}
