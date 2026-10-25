#include <iostream>
#include <string>
using namespace std;

class Result;
class Student {
private:
    string name;
    int marks;
public:
    static int studentCount;
    Student(string n, int m) { name=n; marks=m; studentCount++; }
    void setMarks(int marks) { this->marks = marks; }
    inline void display() { cout << "Name: " << name << ", Marks: " << marks << endl; }
    static void showStudentCount() { cout << "Total student objects created: " << studentCount << endl; }
    friend class Result;
};
int Student::studentCount = 0;

class Result {
public:
    void displayResult(Student s) {
        cout << "Friend class accessing private data:" << endl;
        cout << "Student: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "Result: " << (s.marks >= 40 ? "Pass" : "Fail") << endl;
    }
};

int main() {
    cout << "Practical 5: Function Types and Friend Class" << endl;
    cout << "--------------------------------------------" << endl;
    Student s1("Rutik", 85), s2("Aarav", 32);
    cout << "\nInline member function output:" << endl;
    s1.display(); s2.display();
    cout << "\nUsing this pointer to update marks:" << endl;
    s2.setMarks(45); s2.display();
    cout << "\nStatic member function output:" << endl;
    Student::showStudentCount();
    cout << "\nFriend class output:" << endl;
    Result r; r.displayResult(s1); r.displayResult(s2);
    return 0;
}