#include <iostream>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    string vowels = "aeiou";
    for (int i = 0; i < text.length(); i++) {
        if (vowels.find(text[i]) == string::npos) {
            while (text[i] == text[i + 1]) text.erase(i + 1, 1);
        }
    }

    cout << text << endl;

    return 0;
}
