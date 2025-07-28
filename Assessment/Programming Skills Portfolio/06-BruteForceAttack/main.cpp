#include <iostream>
using namespace std;


int main() {
    const int correctPassword = 12345;
    int attemptsLeft = 5;
    int userInput;

    cout << "---- Secure System Access ----\n";

    while (attemptsLeft > 0) {
        cout << "\n Enter password (" << attemptsLeft << " attempts left): ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << " Welcome to the Secure Area!\n";
            return 0;
        } else {
            cout << " Incorrect password.\n";
            attemptsLeft--;
        }
    }


    cout << "\n Maximum attempts reached! Authorities have been alerted!\n";
    return 0;
}