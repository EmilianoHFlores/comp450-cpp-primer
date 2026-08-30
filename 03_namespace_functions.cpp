#include <iostream>
using namespace std; // now everything in std is visible without the std:: prefix...

// ...which is a problem if we name our own function the same as one already in std
int max(int a, int b) { // our own max()... but written wrong, just to prove a point
    return a + b;
}

namespace mymath {      // a namespace avoids this: names inside it must be qualified
    int square(int x) { return x * x; }
}

int main() {
    cout << "Hello, world!" << endl; // no std:: needed thanks to "using namespace std"

    cout << "max(3, 7) = " << max(3, 7) << endl; // silently calls OUR max, not std::max!
    cout << "std::max(3, 7) = " << std::max(3, 7) << endl; // qualify the name to get the real one

    cout << "mymath::square(4) = " << mymath::square(4) << endl; // never a problem: it's namespaced

    return 0;
}
