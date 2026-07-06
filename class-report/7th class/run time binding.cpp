//run time binding where program decides which function to call at run time according to the object type or datamember type
//Function calls are resolved while the program is running.
#include <iostream>
using namespace std;

// Base class
class Transport {
public:
    // Virtual function for runtime binding
    virtual void fare() {
        cout << "Generic transport fare." << endl;
    }

    // Virtual destructor for safe cleanup
    virtual ~Transport() {}
};

// Derived class Bus
class Bus : public Transport {
public:
    void fare() override {
        cout << "Bus fare: Rs. 20 per passenger." << endl;
    }
};

// Derived class Car
class Car : public Transport {
public:
    void fare() override {
        cout << "Car fare: Rs. 200 per trip." << endl;
    }
};

// Derived class Bike
class Bike : public Transport {
public:
    void fare() override {
        cout << "Bike fare: Rs. 50 per trip." << endl;
    }
};

int main() {
    // Base class pointer
    Transport* t;

    // Pointing to Bus
    t = new Bus();
    t->fare();   // Runtime binding → Bus version called
    delete t;

    // Pointing to Car
    t = new Car();
    t->fare();   // Runtime binding → Car version called
    delete t;

    // Pointing to Bike
    t = new Bike();
    t->fare();   // Runtime binding → Bike version called
    delete t;

    return 0;
}
