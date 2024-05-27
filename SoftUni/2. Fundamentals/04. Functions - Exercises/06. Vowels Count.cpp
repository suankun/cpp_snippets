#include <iostream>
using namespace std;

int vowelCount(string& text) {
    int counter = 0;
    string vowels = "AEOUIaeoui";
    for (char ch: text) {
        bool isVowel = vowels.find(ch) != string::npos;
        if (isVowel) counter++;
    }

    return counter;
}

int main() {
    string text;
    cin >> text;

    cout << vowelCount(text) << endl;

    return 0;
}
