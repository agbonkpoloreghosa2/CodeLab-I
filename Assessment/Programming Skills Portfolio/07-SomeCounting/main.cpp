#include <iostream>
using namespace std;

int main() {

    cout << "Counting 0 to 50:\n";
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << "\n\n";


    cout << "Counting 50 to 0:\n";
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << "\n\n";


    cout << "Counting 30 to 50:\n";
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << "\n\n";


    cout << "Counting 50 to 10 (step -2):\n";
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << "\n\n";


    cout << "Counting 100 to 200 (step +5):\n";
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}