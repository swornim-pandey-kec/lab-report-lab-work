#include <iostream>
#include <string>
using namespace std;

class FirstName {
    string* fname;
public:
    FirstName(string f) {
        fname = new string(f);
        cout << "FirstName constructor: " << *fname << endl;
    }
    ~FirstName() {
        cout << "FirstName destructor: " << *fname << endl;
        delete fname;
    }
    string getFirstName() const { return *fname; }
};

class LastName {
    string* lname;
public:
    LastName(string l) {
        lname = new string(l);
        cout << "LastName constructor: " << *lname << endl;
    }
    ~LastName() {
        cout << "LastName destructor: " << *lname << endl;
        delete lname;
    }
    string getLastName() const { return *lname; }
};

class FullName {
    string* fullname;
public:
    FullName(const FirstName& f, const LastName& l) {
        fullname = new string(f.getFirstName() + " " + l.getLastName());
        cout << "FullName constructor: " << *fullname << endl;
    }
    ~FullName() {
        cout << "FullName destructor: " << *fullname << endl;
        delete fullname;
    }
    void display() const {
        cout << "Full Name: " << *fullname << endl;
    }
};

int main() {
    FirstName fn("Swornim");
    LastName ln("Kaite");
    FullName full(fn, ln);
    full.display();
    return 0;
}
