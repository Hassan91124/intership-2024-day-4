#include <iostream>
#include <string>

using namespace std;

/* This program shows the use of variables, comments, and output statements in C++.
   It declares variables of various types, assigns values to them, and prints them . */

int main() {
    // Declare and initialize variables
    int myInt = 10;
    float myFloat = 3.14f;
    string myString = "Hello";
    char myChar = 'A';
    double myDouble = 3.14159;
    bool myBool = true;

    // Output the values of the variables
    cout << "Integer: " << myInt << endl;
    cout << "Float: " << myFloat << endl;
    cout << "String: " << myString << endl;
    cout << "Char: " << myChar << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Bool: " << myBool << endl;

    return 0;
}
