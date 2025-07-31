#include <iostream>
using namespace std;


int main() {
    const int correctPassword = 12345;
    int attemptsLeft = 5;
    int userInput;

    cout << "---- Secure System Access ----" << endl;

    while (attemptsLeft > 0) {
        cout << endl << " Enter password (" << attemptsLeft << " attempts left): ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << " Welcome to the Secure Area!" << endl;
            return 0;
        } else {
            cout << " Incorrect password." << endl;
            attemptsLeft--;
        }
    }


    cout << endl << " Maximum attempts reached! Authorities have been alerted!" << endl;
    return 0;
}
