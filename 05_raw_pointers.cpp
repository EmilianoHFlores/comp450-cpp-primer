#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value; // ptr holds the address of value

    std::cout << "value = " << value << std::endl;
    std::cout << "ptr   = " << ptr << std::endl;   // the address
    std::cout << "*ptr  = " << *ptr << std::endl;  // dereference: the value at that address

    *ptr = 100; // modify value through the pointer
    std::cout << "value after *ptr = 100: " << value << std::endl;

    int* heap_ptr = new int(7); // manually allocated on the heap
    std::cout << "*heap_ptr = " << *heap_ptr << std::endl;
    delete heap_ptr; // we must remember to free it ourselves

    return 0;
}
