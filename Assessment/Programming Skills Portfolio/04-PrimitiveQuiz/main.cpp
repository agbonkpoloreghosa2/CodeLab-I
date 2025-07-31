#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {

    string questions[] = {
        "What is the capital of France? ",
        "What is the capital of the UK? ",
        "What is the capital of Germany? ",
        "What is the capital of Spain? ",
        "What is the capital of Italy? "
    };

    string answers[] = {"paris", "london", "berlin", "madrid", "rome"};
    int score = 0;

    cout << "---- Primitive Quiz ----" << endl;

// W3Schools https://www.w3schools.com/cpp/cpp_for_loop.asp

    for (int i = 0; i < 5; i++) {
        string userAnswer;

        cout << "\nQuestion " << (i + 1) << ": " << questions[i];
        getline(cin, userAnswer);

        if (toLower(userAnswer) == answers[i]) {
            cout << " Correct!" << endl;
            score++;
        } else {
            cout << " Incorrect. The correct answer is " << answers[i] << "." << endl;
        }
    }


    cout << endl << "Quiz Complete! Your score: " << score << "/5" << endl;

    return 0;
}
