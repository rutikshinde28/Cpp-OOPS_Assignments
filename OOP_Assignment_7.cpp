#include <iostream>
using namespace std;

// Compile-time polymorphism: overloaded functions
int area(int side) {
    return side * side;
}

int area(int length, int width) {
    return length * width;
}

// Base class
class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void displayArea() {
        cout << "Area is not defined for a generic shape." << endl;
    }

    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void displayArea() override {
        cout << "Circle area: " << 3.14159 * radius * radius << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void displayArea() override {
        cout << "Rectangle area: " << length * width << endl;
    }
};

int main() {
    cout << "Practical 7: Polymorphism in C++" << endl;
    cout << "--------------------------------" << endl;

    // Compile-time polymorphism: function overloading
    cout << "\nCompile-time polymorphism (function overloading):" << endl;
    cout << "Area of square (side 4): " << area(4) << endl;
    cout << "Area of rectangle (4 x 5): " << area(4, 5) << endl;

    // Runtime polymorphism: virtual function
    cout << "\nRuntime polymorphism (virtual function):" << endl;
    Circle c(3);
    Rectangle r(4, 5);
    Shape *shapePtr;

    shapePtr = &c;
    shapePtr->displayArea();

    shapePtr = &r;
    shapePtr->displayArea();

    return 0;
}
