// https://www.codewars.com/kata/5a19226646d843de9000007d/train/cpp
#include <iostream>
#include <string>
using namespace std;

unsigned int countConsonants(const std::string& str){
    // Create result variable.
    unsigned int count=0;

    // Create a new string and make all chars to lower, in order to be case insensitive.
    std::string str_tolower;
    size_t i;
    for (i=0; i<str.length(); i++) str_tolower+=std::tolower(str[i]);

    // Create a string which consists all consonants.
    std::string consonants = "bcdfghjklmnpqrstvwxyz";

    // Checking if the char exists in string 'consonants', if so pop it out and increase count++
    for (i=0; i<str_tolower.length(); i++) {
        int found = consonants.find(str_tolower[i]);
        if (found != std::string::npos) {
            count++;
            consonants.erase(found, 1);
        }
    }

    return count;
}

int main() {
    cout << countConsonants("sillystring") << endl;  // 7
    cout << countConsonants("aeiou") << endl;  // 0
    cout << countConsonants("abcdefghijklmnopqrstuvwxyz") << endl;  // 21
    cout << countConsonants("Count my unique consonants!!") << endl;  // 7
    cout << countConsonants("") << endl;  // 0

    return 0;
}
//
#include <string>
#include <unordered_set>

unsigned int countConsonants(const std::string& str) {
    std::unordered_set<char> res{'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    for (char c : str) res.erase(std::tolower(c));
    return 21 - res.size();
}
