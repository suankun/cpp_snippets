#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string line;
    cin.ignore();
    getline(cin, line);

    istringstream iss(line);
    char symbol;
    string vowelChars = "AYOUEIayouei";
    int vowels = 0, nonVowels = 0;
    while (iss >> symbol) {
        if (vowelChars.find(symbol) != string::npos) {
            vowels++;
        }
        else if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z') {
            nonVowels++;
        }
    }

    cout << vowels << ' ' << nonVowels << endl;

    return 0;
}
