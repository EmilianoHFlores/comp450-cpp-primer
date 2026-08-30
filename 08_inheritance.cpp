#include <iostream>
#include <string>

class Animal {
public:
    Animal(std::string name) : name_(name) {}
    virtual void speak() const { // virtual: derived classes can override this
        std::cout << name_ << " makes a sound." << std::endl;
    }
protected:
    std::string name_;
};

class Dog : public Animal {
public:
    Dog(std::string name) : Animal(name) {}
    void speak() const override {
        std::cout << name_ << " says Woof!" << std::endl;
    }
};

int main() {
    Animal generic("Creature");
    Dog rex("Rex");

    generic.speak();
    rex.speak();

    Animal* ptr = &rex; // a Dog used through an Animal pointer...
    ptr->speak(); // ...still calls Dog::speak() because it's virtual

    return 0;
}
