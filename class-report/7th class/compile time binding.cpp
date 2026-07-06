//compile time binding where program decides which function to call at compile time according to the object type or datamember type
//Function calls are resolved by the compiler before the program runs.
#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded functions (resolved at compile time)
    void add(int a, int b) {
        cout << "Adding integers: " << a << " + " << b << " = " << (a + b) << endl;
    }

    void add(double a, double b) {
        cout << "Adding doubles: " << a << " + " << b << " = " << (a + b) << endl;
    }

    void add(int a, int b, int c) {
        cout << "Adding three integers: " << a << " + " << b << " + " << c 
             << " = " << (a + b + c) << endl;
    }

    // Non-virtual function (also resolved at compile time)
    void multiply(int a, int b) {
        cout << "Multiplying integers: " << a << " * " << b << " = " << (a * b) << endl;
    }

    void multiply(double a, double b) {
        cout << "Multiplying doubles: " << a << " * " << b << " = " << (a * b) << endl;
    }
};

int main() {
    Calculator calc;
    calc.add(10, 20);          
    calc.add(3.5, 2.5);       
    calc.add(1, 2, 3);         

    calc.multiply(4, 5);       
    calc.multiply(2.5, 4.0);   

    return 0;
}

