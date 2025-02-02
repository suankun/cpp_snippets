// https://www.codewars.com/kata/5a49f074b3bfa89b4c00002b/train/cpp

// In this kata you need to build a function to return either true/True or false/False if a string can be seen as the repetition of a simpler/shorter subpattern or not.

// For example:

// hasSubpattern("a") == false; //no repeated pattern
// hasSubpattern("aaaa") == true; //created repeating "a"
// hasSubpattern("abcd") == false; //no repeated pattern
// hasSubpattern("abababab") == true; //created repeating "ab"
// hasSubpattern("ababababa") == false; //cannot be entirely reproduced repeating a pattern
// Strings will never be empty and can be composed of any character (just consider upper- and lowercase letters as different entities) and can be pretty long (keep an eye on performances!).

#include <iostream>
#include <string>

using namespace std;

bool hasSubpattern(const std::string& str){
    int len = str.length();

    for (int curSubStrSize = 1; curSubStrSize < len - 1; curSubStrSize++) {

        int strCheck = 0;
        for (; strCheck < len - curSubStrSize; strCheck += curSubStrSize) {

            std::string curSubStr = str.substr(strCheck, curSubStrSize);
            std::string nextSubStr = str.substr(strCheck + curSubStrSize, curSubStrSize);

            if (curSubStr != nextSubStr)
                break;

        }

        if (strCheck == len - curSubStrSize)
            return true;

    }

    return false;
}

int main() {

    cout << boolalpha;
    cout << hasSubpattern("a")              << endl;  // false
    cout << hasSubpattern("aaaa")           << endl;  // true
    cout << hasSubpattern("abcd")           << endl;  // false
    cout << hasSubpattern("abababab")       << endl;  // true
    cout << hasSubpattern("ababababa")      << endl;  // false
    cout << hasSubpattern("123a123a123a")   << endl;  // true
    cout << hasSubpattern("123A123a123a")   << endl;  // false
    cout << hasSubpattern("abbaabbaabba")   << endl;  // true
    cout << hasSubpattern("abbabbabba")     << endl;  // false
    cout << hasSubpattern("abcdabcabcd")    << endl;  // false

    return 0;
}
//
#include <string>

bool hasSubpattern(const std::string& str) {
    return (str + str).find(str, 1) != str.length();
}
