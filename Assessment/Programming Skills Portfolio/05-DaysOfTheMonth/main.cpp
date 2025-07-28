#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter month in between 1 to 12: ";
    cin >> month;

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "Days: 31";
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "Days: 30";
            break;

        case 2:  // February
            cout << "Days: 28";
            break;

        default:
            cout << "Invalid month!";
            break;
    }

    return 0;
}