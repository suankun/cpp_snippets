// https://www.codewars.com/kata/57fb09ef2b5314a8a90001ed/train/cpp
#include <iostream>
using namespace std;

string replace(const string &s)
{
    string clear_from_vowels;
    string vowels {"aeiouAEIOU"};
    for (size_t i {}; i < s.length(); i++) {
        size_t found = vowels.find(s[i]);
        if (found != string::npos) clear_from_vowels += '!';
        else clear_from_vowels += s[i];
    }
    return clear_from_vowels;
}

int main() {
    string hi {"Hi!"};
    cout << replace(hi) << endl;

    return 0;
}
//
#include <string>
#include <regex>

using namespace std;

string replace(const string &s)
{
    return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}
