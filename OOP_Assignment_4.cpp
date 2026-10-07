#include <iostream>
using namespace std;

void swapUsingReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapUsingPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << "Assignment 4: References, Pointers and Dynamic Memory" << endl;
    cout << "-----------------------------------------------------" << endl;

    int x = 10, y = 20;
    cout << "\nBefore reference swap: x = " << x << ", y = " << y << endl;
    swapUsingReference(x, y);
    cout << "After reference swap:  x = " << x << ", y = " << y << endl;

    int p = 30, q = 40;
    cout << "\nBefore pointer swap: p = " << p << ", q = " << q << endl;
    swapUsingPointer(&p, &q);
    cout << "After pointer swap:  p = " << p << ", q = " << q << endl;

    int n = 5;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = (i + 1) * 10;

    cout << "\nDynamically allocated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    delete[] arr;
    arr = nullptr;
    cout << "Dynamic memory released using delete[]." << endl;

    return 0;
}
