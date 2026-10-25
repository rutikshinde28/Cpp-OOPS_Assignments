#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Single inheritance
class Student : public Person {
private:
    int marks;

public:
    Student(string n, int m) : Person(n) {
        marks = m;
    }

    void displayStudent() {
        displayName();
        cout << "Marks: " << marks << endl;
    }
};

// Multilevel inheritance
class GraduateStudent : public Student {
private:
    string specialization;

public:
    GraduateStudent(string n, int m, string s)
        : Student(n, m) {
        specialization = s;
    }

    void displayGraduate() {
        displayStudent();
        cout << "Specialization: " << specialization << endl;
    }
};

// Hierarchical inheritance
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, string sub) : Person(n) {
        subject = sub;
    }

    void displayTeacher() {
        displayName();
        cout << "Subject: " << subject << endl;
    }
};

// Multiple inheritance
class Sports {
protected:
    string sport;

public:
    Sports(string s) {
        sport = s;
    }

    void displaySport() {
        cout << "Sport: " << sport << endl;
    }
};

class SportsStudent : public Student, public Sports {
public:
    SportsStudent(string n, int m, string s)
        : Student(n, m), Sports(s) {}

    void displaySportsStudent() {
        displayStudent();
        displaySport();
    }
};

int main() {
    cout << "Practical 6: Different Types of Inheritance" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "\n1. Single Inheritance" << endl;
    Student s1("Rutik", 85);
    s1.displayStudent();

    cout << "\n2. Multilevel Inheritance" << endl;
    GraduateStudent g1("Aarav", 90, "AIML");
    g1.displayGraduate();

    cout << "\n3. Hierarchical Inheritance" << endl;
    Teacher t1("Neha", "C++");
    t1.displayTeacher();

    cout << "\n4. Multiple Inheritance" << endl;
    SportsStudent ss1("Karan", 78, "Cricket");
    ss1.displaySportsStudent();

    return 0;
}
