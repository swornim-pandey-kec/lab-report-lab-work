#include <iostream>

// Base Class
class Base {
public:
    void show() {
        std::cout << "Base show function" << std::endl;
    }
};

// Intermediate Class 1 (Use virtual keyword)
class Derived1 : virtual public Base {
};

// Intermediate Class 2 (Use virtual keyword)
class Derived2 : virtual public Base {
};

// Final Derived Class
class FinalDerived : public Derived1, public Derived2 {
};

int main() {
    FinalDerived obj;
    obj.show(); // No error! Calls Base::show()
    return 0;
}
