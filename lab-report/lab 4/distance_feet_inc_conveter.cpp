#include <iostream>
using namespace std;

class dis {
private:
    int feet;
    float inc;

public:
    dis() {
        feet = 0;
        inc = 0.0;
    }

    dis(int f, float i) {
        feet = f;
        inc = i;
    }

    void setdata() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inc;
    }

    void display() const {
        cout << feet << " feet, " << inc << " inches" << endl;
    }

    dis operator+(const dis& d) {
        dis temp;
        temp.feet = this->feet + d.feet;
        temp.inc = this->inc + d.inc;

        if (temp.inc >= 12.0) {
            temp.feet += (int)(temp.inc / 12);
            temp.inc = (int)temp.inc % 12 + (temp.inc - (int)temp.inc);
        }
        return temp;
    }

    bool operator>(const dis& d) {
        float ti = (this->feet * 12.0) + this->inc;
        float ti2 = (d.feet * 12.0) + d.inc;

        return ti > ti2;
    }
};

int main() {
    dis d1, d2, d3;

    cout << "Enter first distance:" << endl;
    d1.setdata();

    cout << "\nEnter second distance:" << endl;
    d2.setdata();

    d3 = d1 + d2; 

    cout << "\n------------------ Results ---------------" << endl;
    cout << "Distance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "Sum (Distance 3): "; d3.display();

    if (d1 > d2) {
        cout << "\nDistance 1 is greater than Distance 2." << endl;
    } else {
        cout << "\nDistance 1 is NOT greater than Distance 2." << endl;
    }

    return 0;
}