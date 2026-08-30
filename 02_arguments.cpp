#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Hello, world!" << std::endl;

    std::cout << "argc = " << argc << std::endl; // number of arguments, including the program name

    if (argc > 1) {
        std::cout << "First argument: " << argv[1] << std::endl; // argv[0] is the program name itself
    } else {
        std::cout << "No arguments given." << std::endl;
    }

    return 0;
}
