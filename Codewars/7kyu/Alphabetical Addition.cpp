// https://www.codewars.com/kata/5d50e3914861a500121e1958/train/cpp
#include <iostream>
using namespace std;

#include <vector>
char add_letters(std::vector<char> letters) {
    if (letters.empty()) return 'z';

    int sum_of_letters = 0; // Initialize sum_of_letters to 0

    for (auto ch : letters) {
        sum_of_letters += (ch - 'a' + 1);
    }

    return (sum_of_letters - 1) % 26 + 'a';
}

int main() {
    cout << add_letters({'a', 'b', 'c'}) << endl;  // 'f'
    cout << add_letters({'z'}) << endl;            // 'z'
    cout << add_letters({'a', 'b'}) << endl;       // 'c'
    cout << add_letters({'c'}) << endl;            // 'c'
    cout << add_letters({'z', 'a'}) << endl;       // 'a'
    cout << add_letters({'y', 'c', 'b'}) << endl;  // 'd'
    cout << add_letters({}) << endl;               // 'z'

    return 0;
}
