#include <iostream>

class Animal {
public:
    virtual ~Animal() = default; // needs to be polymorphic for dynamic_cast to work
};

class Dog : public Animal {
public:
    void bark() const { std::cout << "Woof!" << std::endl; }
};

int main() {
    double pi = 3.14159;
    int truncated = static_cast<int>(pi); // explicit numeric conversion, checked at compile time
    std::cout << "truncated = " << truncated << std::endl;

    Animal* animal = new Dog(); // a Dog, stored through an Animal*
    Dog* dog = dynamic_cast<Dog*>(animal); // safe downcast: checked at runtime
    if (dog) {
        dog->bark();
    }

    Animal* not_a_dog = new Animal();
    Dog* fail = dynamic_cast<Dog*>(not_a_dog); // this cast can't succeed...
    std::cout << "fail = " << fail << std::endl; // ...so it returns nullptr instead of crashing

    delete animal;
    delete not_a_dog;
    return 0;
}
