#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    Shape() {
        cout << "Shape constructor called" << endl;
    }
    virtual ~Shape() {  // Virtual destructor
        cout << "Shape destructor called" << endl;
    }

    virtual void draw() {   // Virtual function
        cout << "Drawing a generic shape" << endl;
    }

    virtual void slope() {  // Virtual slope function
        cout << "Generic shape slope" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    Circle() {
        cout << "Circle constructor called" << endl;
    }
    ~Circle() {
        cout << "Circle destructor called" << endl;
    }

    void draw() override {
        cout << "Circle draw" << endl;
    }

    void slope() override {
        cout << "Circle slope" << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    Triangle() {
        cout << "Triangle constructor called" << endl;
    }
    ~Triangle() {
        cout << "Triangle destructor called" << endl;
    }

    void draw() override {
        cout << "Triangle draw" << endl;
    }

    void slope() override {
        cout << "Triangle slope" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    Rectangle() {
        cout << "Rectangle constructor called" << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }

    void draw() override {
        cout << "Rectangle draw" << endl;
    }

    void slope() override {
        cout << "Rectangle slope" << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    Square() {
        cout << "Square constructor called" << endl;
    }
    ~Square() {
        cout << "Square destructor called" << endl;
    }

    void draw() override {
        cout << "Square draw" << endl;
    }

    void slope() override {
        cout << "Square slope" << endl;
    }
};

int main() {
    // Base class pointer
    Shape* shapePtr;

    // Pointing to Circle
    shapePtr = new Circle();
    shapePtr->draw();
    shapePtr->slope();
    delete shapePtr;

    cout << "------------------" << endl;

    // Pointing to Rectangle
    shapePtr = new Rectangle();
    shapePtr->draw();
    shapePtr->slope();
    delete shapePtr;

    cout << "------------------" << endl;

    // Pointing to Square
    shapePtr = new Square();
    shapePtr->draw();
    shapePtr->slope();
    delete shapePtr;

    cout << "------------------" << endl;

    // Pointing to Triangle
    shapePtr = new Triangle();
    shapePtr->draw();
    shapePtr->slope();
    delete shapePtr;

    return 0;
}
