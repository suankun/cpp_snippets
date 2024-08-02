// https://www.codewars.com/kata/5f3142b3a28d9b002ef58f5e/train/cpp
#include <iostream>
#include <string>
#include <map>
using namespace std;

std::string wordPattern(const std::string &word) {
    if (word.length() == 0) return "";
    std::string pattern;
    std::map<char, int> map;
    int counter {};
    for (size_t i {}; i<word.length(); i++) {
        char tempChar = std::tolower(word[i]);
        if (map.count(tempChar) == 0) {
            map[tempChar] = counter;
            counter++;
        }
        pattern += std::to_string(map[tempChar]) + ".";
    }
    pattern.pop_back();
    return pattern;
}

int main() {
    // cout << wordPattern("helLo") << endl;  // "0.1.2.2.3"
    cout << wordPattern("Hippopotomonstrosesquippedaliophobia") << endl;
    // "0.1.2.2.3.2.3.4.3.5.3.6.7.4.8.3.7.9.7.10.11.1.2.2.9.12.13.14.1.3.2.0.3.15.1.13"

    return 0;
}
//
#include <cctype>
std::string wordPattern(const std::string &word) {
    int c[26] = {0}, k = 2;
    std::string s = "";
    c[tolower(word[0])-'a'] = 1;
    for (auto i:word)
    {
        c[tolower(i)-'a'] += (!c[tolower(i)-'a'] ? k++ : 0);
        s = s + std::to_string(c[tolower(i)-'a']-1) + ".";
    }
  
  return s.substr(0, s.size()-1);
}
