#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:
    // Parameterized Constructor
    Student(string n, int r, float m)
    {
        name = n;
        rollNo = r;
        marks = m;

        cout << "Constructor called: Object created" << endl;
    }

    // User-defined function
    void displayDetails()
    {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor called: Object destroyed" << endl;
    }
};

int main()
{
    // Creating Student object
    Student s1("Rutik", 62, 79.50);

    // Calling user-defined function
    s1.displayDetails();

    return 0;
}
