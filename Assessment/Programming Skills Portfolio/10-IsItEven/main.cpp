#include <iostream>

using namespace std;


string checkEven(int num) {

    if (num % 2 == 0)
        return "The provided number is even";
    else
        return "The provided number is odd";
}

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;


    string result = checkEven(number);

    cout << result << endl;

    return 0;
}
