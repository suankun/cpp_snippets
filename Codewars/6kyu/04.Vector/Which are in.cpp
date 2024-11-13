// https://www.codewars.com/kata/550554fd08b86f84fe000a58/train/cpp

// Given two arrays of strings a1 and a2 return a sorted array r in lexicographical order of the strings of a1 which are substrings of strings of a2.

// Example 1:
// a1 = ["arp", "live", "strong"]

// a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

// returns ["arp", "live", "strong"]

// Example 2:
// a1 = ["tarp", "mice", "bull"]

// a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

// returns []

// Notes:
// Arrays are written in "general" notation. See "Your Test Cases" for examples in your language.
// In Shell bash a1 and a2 are strings. The return is a string where words are separated by commas.
// Beware: In some languages r must be without duplicates.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class WhichAreIn
{
    public:
    static std::vector<std::string> inArray(const std::vector<std::string> &array1, const std::vector<std::string> &array2) {
        std::vector<std::string> res;
        
        for (const auto &word1 : array1) {
            for (const auto &word2 : array2) {
                if (word2.find(word1) != std::string::npos) {
                    res.push_back(word1);
                    break;
                }
            }
        }
        
        std::sort(res.begin(), res.end());
        res.erase(std::unique(res.begin(), res.end()), res.end());
        
        return res;
    }
};

int main() {
    WhichAreIn w;

    std::vector<std::string> arr1 = { "arp", "live", "strong" };
    std::vector<std::string> arr2 = { "lively", "alive", "harp", "sharp", "armstrong" };
    std::vector<std::string> sol1 = w.inArray(arr1, arr2);

    for (string s : sol1)
        cout << s << ' ';
    cout << endl;
    // { "arp", "live", "strong" }

    return 0;
}
