#include <iostream>
#include <vector>
#include <string>

using Number = double; // modern alias: Number is just another name for double
typedef unsigned long OldStyleAlias; // the old, C-style way to do the same thing

using StringList = std::vector<std::string>; // aliases can simplify complex types too

namespace mymath {
    int square(int x) { return x * x; }
}
namespace mm = mymath; // namespace alias: a shorthand for a longer name

int main() {
    Number pi = 3.14159;
    OldStyleAlias big = 4000000000UL;
    StringList names = {"Alice", "Bob", "Charlie"};

    std::cout << "pi = " << pi << std::endl;
    std::cout << "big = " << big << std::endl;
    std::cout << "names[1] = " << names[1] << std::endl;
    std::cout << "mm::square(5) = " << mm::square(5) << std::endl;

    return 0;
}
