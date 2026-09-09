#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    //Default constructor
    Student() {
        name = "Unknown";
        rollNo = 0;
        marks = 0.0;
        cout << "Default constructor called." << endl;
    }

    //Parameterized constructor
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Parameterized constructor called." << endl;
    }

    //Copy constructor
    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy constructor called." << endl;
    }

    //Member function to display details
    void displayDetails() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    //Member function to update marks
    void updateMarks(float m) {
        marks = m;
        cout << "\nMarks updated successfully." << endl;
    }

    //Destructor
    ~Student() {
        cout << "Destructor called for " << name << "." << endl;
    }
};

int main() {
    cout << "Assignment 2: Various Types of Constructors and Member Functions\n";
    cout << "---------------------------------------------------------------\n";

    Student s1;
    s1.displayDetails();

    Student s2("Rutik", 62, 79.50);
    s2.displayDetails();
    s2.updateMarks(85.00);
    s2.displayDetails();

    Student s3 = s2;
    s3.displayDetails();

    return 0;
}