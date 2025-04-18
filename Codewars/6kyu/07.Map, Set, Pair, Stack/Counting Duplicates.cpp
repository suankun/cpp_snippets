// https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/train/cpp

// Count the number of Duplicates
// Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.

// Example
// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
// "indivisibility" -> 1 # 'i' occurs six times
// "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice

#include <iostream>
#include <string>
#include <map>

using namespace std;


std::size_t duplicateCount(const std::string& in)
{
    std::string toLow;
    for (const char & c : in)
        toLow += std::tolower(c);

    std::map<char, int> m;
    for (const char & ch : toLow)
        m[ch]++;

    std::size_t counter = 0;
    for (pair<char, int> p : m)
        if (p.second > 1)
            counter++;

    return counter;
}

int main() {
    cout << duplicateCount("asdfghjkl54") << endl;             // 0
    cout << duplicateCount("abcdeaa") << endl;                 // 1   
    cout << duplicateCount("93917949902") << endl;             // 1
    cout << duplicateCount("hhhhhhHHhhHHHHhhhhhHhH") << endl;  // 1
    cout << duplicateCount("asdfghjkl55") << endl;             // 1
    cout << duplicateCount("aabbcde") << endl;                 // 2
    cout << duplicateCount("aabBcde") << endl;                 // 2
    cout << duplicateCount("abcdeaB") << endl;                 // 2
    cout << duplicateCount("0") << endl;                       // 0
    cout << duplicateCount("000000000112") << endl;            // 2
    cout << duplicateCount("Indivisibility") << endl;          // 1
    cout << duplicateCount("Indivisibilities") << endl;        // 2
    

    return 0;
}
//
#include <string>
#include <unordered_map>
#include <algorithm>

#include <cctype>

std::size_t duplicateCount(const char* in) {
    std::unordered_map<char, unsigned> counts;
    for (const char* c = in; *c != '\0'; ++c) {
        ++counts[tolower(*c)];
    }
    return std::count_if(cbegin(counts), cend(counts), [](const auto& count) {
        return count.second > 1;
        });
}
