#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Complex(int r, int i) {
        real = r;
        imag = i;
        cout << "Parameterized constructor called." << endl;
    }

    // Operator overloading (+)
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Member function
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }

    ~Complex() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    cout << "\nAssignment 3: Operator Overloading using Constructors" << endl;
    cout << "----------------------------------------------------" << endl;

    Complex c1;
    cout << "\nFirst complex number: ";
    c1.display();

    Complex c2(5, 3);
    cout << "\nSecond complex number: ";
    c2.display();

    Complex c3(2, 4);
    cout << "\nThird complex number: ";
    c3.display();

    Complex c4 = c2 + c3;
    cout << "\nResult of c2 + c3: ";
    c4.display();

    return 0;
}
