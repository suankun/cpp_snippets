#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    int balance = 0;
    for (const char& ch: line) {
        if (ch == '(') balance++;
        else if (ch == ')') balance--;
    }

    string result = "";
    balance == 0 ? result = "correct" : result = "incorrect";

    cout << result << endl;

    return 0;
}
