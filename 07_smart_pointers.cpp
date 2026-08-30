#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> a = std::make_shared<int>(5);
    std::shared_ptr<int> b = a; // b shares ownership with a; use_count = 2

    std::cout << "use_count = " << a.use_count() << std::endl;

    a.reset(); // a gives up its share, but b still owns the object
    std::cout << *b << std::endl; // safe: the object is still alive
    std::cout << "use_count = " << b.use_count() << std::endl;

    b.reset(); // last owner releases it -> object is destroyed exactly once

    return 0;
}
