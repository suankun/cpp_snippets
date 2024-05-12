// https://www.codewars.com/kata/5f77d62851f6bc0033616bd8/train/cpp
#include <iostream>
#include <string>
using namespace std;

bool valid_spacing(const std::string& s) {
    if (s[0] == ' ' || s[s.length()-1] == ' ') return false;
    bool isSpace = false;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && isSpace == true) return false;
        else if (s[i] == ' ') isSpace = true;
        else isSpace = false;
    }
    return true;
}

int main() {
    cout << boolalpha;
    cout << valid_spacing("Hello world") << endl;  // true
    cout << valid_spacing(" Hello world") << endl;  // false
    cout << valid_spacing("Hello  world ") << endl;  // false
    cout << valid_spacing("Hello") << endl;  // true
    cout << valid_spacing("Helloworld") << endl;  // true

    return 0;
}
//
bool valid_spacing(const std::string& s) {
    return s.front() != ' ' && s.back() != ' ' && s.find("  ") == s.npos;
}
