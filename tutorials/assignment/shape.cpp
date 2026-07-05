#include <iostream>
using namespace std;

// Base class
class Set {
public:
    virtual void draw() {
        cout << "Draw from Set" << endl;
    }

    virtual ~Set() {  // Virtual destructor
        cout << "Set destroyed" << endl;
    }
};

// Derived class Circle
class Circle : public Set {
public:
    void draw() override {
        cout << "Circle is drawn" << endl;
    }
    void clope() {
        cout << "Circle drawn" << endl;
    }
    ~Circle() {
        cout << "Circle destroyed" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Set {
public:
    void draw() override {
        cout << "Rectangle is drawn" << endl;
    }
    void clope() {
        cout << "Rectangle drawn" << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
};

// Derived class Square
class Square : public Set {
public:
    void draw() override {
        cout << "Square is drawn" << endl;
    }
    void clope() {
        cout << "Square drawn" << endl;
    }
    ~Square() {
        cout << "Square destroyed" << endl;
    }
};

int main() {
    // Base class pointer
    Set* s;

    s = new Circle();
    s->draw();   // Calls Circle's draw()
    delete s;    // Properly calls Circle destructor then Set destructor

    s = new Rectangle();
    s->draw();   // Calls Rectangle's draw()
    delete s;

    s = new Square();
    s->draw();   // Calls Square's draw()
    delete s;

    return 0;
}
