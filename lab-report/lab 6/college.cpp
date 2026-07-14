#include <iostream>
#include <string>
using namespace std;


class College {
protected:
    string cName, loc, date;


public:
    College(string n, string l, string d) : cName(n), loc(l), date(d) {}
};


class Staff : public College {
    int id;
    string name;
    double sal;
    string desg;


public:
    Staff(string cn, string cl, string cd, int i, string n, double s, string d)
        : College(cn, cl, cd), id(i), name(n), sal(s), desg(d) {}


    void show() {
        cout << "College: " << cName << " (" << loc << ")\n";
        cout << "Staff -> ID: " << id << " | Name: " << name << " | " << desg << " | $" << sal << "\n\n";
    }
};


class Student : public College {
    int id;
    string name;
    string fac;
    int yr;


public:
    Student(string cn, string cl, string cd, int i, string n, string f, int y)
        : College(cn, cl, cd), id(i), name(n), fac(f), yr(y) {}


    void show() {
        // kan082bct092
        cout << "College: " << cName << " (" << loc << ")\n";
        cout << "Student -> ID: " << id << " | Name: " << name << " | " << fac << " | Year: " << yr << "\n\n";
    }
};


int main() {
    Staff s("KEC", "Dhapakhel", "2055-04-12", 101, "Ram Bahadur", 30000, "Lecturer");
    Student st("KEC", "Dhapakhel", "2055-04-12", 501, "Swornim", "BCT", 2082);
    s.show();
    st.show();


    return 0;
}
