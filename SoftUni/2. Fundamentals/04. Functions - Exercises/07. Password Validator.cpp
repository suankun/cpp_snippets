#include <iostream>
using namespace std;

bool passLength(const string& text);
bool passSymbols(const string& text);
bool passDigits(const string& text);
void printValid();

int main() {
    string text;
    cin >> text;

    bool length = passLength(text);
    if (!length) {
        cout << "Password must be between 6 and 10 characters" << endl;
    }

    bool symbols = passSymbols(text);
    if (!symbols) {
        cout << "Password must consist only of letters and digits" << endl;
    }

    bool digits = passDigits(text);
    if (!digits) {
        cout << "Password must have at least 2 digits" << endl;
    }

    if (length && symbols && digits) {
        printValid();
    }

    return 0;
}

bool passLength(const string& text) {
    int len = text.length();
    if (len > 6 && len < 10) return true;
    return false;
}

bool passSymbols(const string& text) {
    for (char ch: text) {
        if (!isalpha(ch) && !isdigit(ch)) return false;
    }
    return true;
}

bool passDigits(const string& text){
    int count = 0;
    for (char ch: text) {
        if (isdigit(ch)) count++;
    }
    if (count < 2) return false;
    return true;
}

void printValid() {
    cout << "Password is valid" << endl;
}
