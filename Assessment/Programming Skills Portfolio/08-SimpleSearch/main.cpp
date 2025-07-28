#include <iostream>
#include <string>

using namespace std;

int main() {

    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchName;
    bool found = false;


    cout << "Enter name to search: ";
    cin >> searchName;


    for (int i = 0; i < 6; i++) {
        if (names[i] == searchName) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << searchName << " found in the list!" << endl;
    } else {
        cout << searchName << " not found in the list." << endl;
    }

    return 0;
}
