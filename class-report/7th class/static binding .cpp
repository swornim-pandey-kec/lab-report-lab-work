//static binding where program knows which function to call at compilation time
#include <iostream>
using namespace std;

class Transport {
public:
    // Non-virtual functions → resolved at compile time
    void fareBus() {
        cout << "Bus fare: Rs. 20 per passenger." << endl;
    }

    void fareCar() {
        cout << "Car fare: Rs. 200 per trip." << endl;
    }

    void fareBike() {
        cout << "Bike fare: Rs. 50 per trip." << endl;
    }
};

int main() {
    Transport t;

    
    t.fareBus();   // Compiler knows to call fareBus()
    t.fareCar();   // Compiler knows to call fareCar()
    t.fareBike();  // Compiler knows to call fareBike()

    return 0;
}
