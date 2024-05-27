#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    string digits, letters, symbols;
    int i;
    for (i = 0; i < text.length(); i++) {
        if (isdigit(text[i])) digits += text[i];
        else if (isalpha(text[i])) letters += text[i];
        else symbols += text[i];
    }

    cout << digits << endl
         << letters << endl
         << symbols << endl;

    return 0;
}
