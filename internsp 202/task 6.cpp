#include <iostream>
#include <string>

using namespace std;

int main() {
    // this is the personal profile information
    string name = "Hassan Riaz";       // Person's name
    int age = 20;                   // Person's age
    float height = 180.5f;          // Person's height in centimeters
    char gender = 'M';              // Person's gender ('M' for Male, 'F' for Female)
    bool isStudent = true;          // Indicates if the person is a student (true or false)

    // we will now use cout to print the person's information
    cout << "Personal Profile Information" << endl;
    cout << "----------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Gender: " << gender << endl;
    cout << "Student: " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
