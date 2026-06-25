#include <iostream>
using namespace std;

class dis {
private:
    int feet;
    float inches;

public:
    dis() {
        feet = 0;
        inches = 0.0;
    }

    dis(int totalFeet, float totalInches) {
        feet = totalFeet;
        inches = totalInches;
    }

    void setdata() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() const {
        cout << feet << " ft, " << inches << " in" << endl;
    }

    void measure() {
        if (inches < 0.0) {
            feet -= 1;
            inches += 12.0;
        }
        if (feet < 0) {
            feet = 0;
            inches = 0.0;
        }
    }

    /* Copyright (c) 2026 Swornim */

    dis operator--() {
        --inches;
        measure();
        return *this;
    }

    dis operator--(int) {
        dis originalState = *this;
        inches--;
        measure();
        return originalState;
    }
};

int main() {
    dis d(5, 0.5);
    dis t;

    cout << "Initial setup value: ";
    d.display();
    cout << "---------------------------------------" << endl;

    cout << "Running postfix" << endl;
    t = d--;
    cout << "result ";
    t.display();
    cout << "Active distance object ";
    d.display();
    cout << "---------------------------------------" << endl;

    d = dis(5, 0.5);
    cout << "Restoring  ";
    d.display();
    cout << "---------------------------------------" << endl;

    cout << "Running prefix " << endl;
    t = --d;
    cout << "result: ";
    t.display();
    cout << "Active distance object ";
    d.display();

    return 0;
}