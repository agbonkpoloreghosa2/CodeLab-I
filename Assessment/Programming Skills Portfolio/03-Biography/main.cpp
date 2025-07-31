#include <iostream>
using namespace std;

int main() {

    string name;
    string hometown;
    int age;

    cout << "Enter your full name: ";
    cin >> name;

    cout << "Enter your hometown: ";
    cin >> hometown;

    cout << "Enter your age: ";

    while (!(cin >> age)) {
        cout << "Invalid! Please enter a number for age: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore();


    cout << "---- Biography ----" << endl
        << "Name: " << name << endl
        << "Hometown: "<< hometown << endl
        << "Age: "<< age << endl;

    return 0;

}
