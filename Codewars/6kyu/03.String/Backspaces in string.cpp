// https://www.codewars.com/kata/5727bb0fe81185ae62000ae3/train/cpp

// Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"

// Your task is to process a string with "#" symbols.

// Examples
// "abc#d##c"      ==>  "ac"
// "abc##d######"  ==>  ""
// "#######"       ==>  ""
// ""              ==>  ""

#include <iostream>
#include <string>

using namespace std;

std::string cleanString(const std::string &s) {
    std::string cleaned;

    for (char ch : s)
        if (ch == '#') {
            if (!cleaned.empty())
                cleaned.pop_back();
        }
        else
            cleaned += ch;

    return cleaned;
}

int main() {

    cout << cleanString("abc#d##c") << endl;  // "ac"
    cout << cleanString("abc####d##c#") << endl;  // ""

    return 0;
}
