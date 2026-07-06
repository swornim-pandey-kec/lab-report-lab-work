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
    virtual void draw(){
        cout << "Circle is drawn" << endl;
    }
    void close() {
        cout << "Circle drawn" << endl;
    }
    ~Circle() {
        cout << "Circle destroyed" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Set {
public:
    virtual void draw() {
        cout << "Rectangle is drawn" << endl;
    }
    void close() {
        cout << "Rectangle drawn" << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
};

// Derived class Square
class Square : public Set {
public:
    virtual void draw(){
        cout << "Square is drawn" << endl;
    }
    void close() {
        cout << "Square drawn" << endl;
    }
    ~Square() {
        cout << "Square destroyed" << endl;
    }
};

int main() {

    Set* s;

    s = new Circle();
    s->draw();   
    delete s;    

    s = new Rectangle();
    s->draw();   
    delete s;

    s = new Square();
    s->draw(); 
    delete s;

    return 0;
}
