// https://www.codewars.com/kata/586d6cefbcc21eed7a001155/train/cpp

// For a given string s find the character c (or C) with longest consecutive repetition and return:

// std::pair<char, unsigned int>(c, l)
// where l (or L) is the length of the repetition. If there are two or more characters with the same l return the first in order of appearance.

// For empty string return:

// std::nullopt

#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <optional>
using namespace std;

std::optional<std::pair<char, unsigned int>> longestRepetition(const std::string &str) {
    if (str.empty())
        return std::nullopt;

    char ch = str[0];
    unsigned int cnt = 1, tempCnt = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == str[i]) {
            tempCnt++;
        } else {
            if (cnt < tempCnt) {
                cnt = tempCnt;
                ch = str[i - 1];
            }
            tempCnt = 1;                
        }
    }

    if (cnt < tempCnt) {
        cnt = tempCnt;
        ch = str.back();
    }

    return std::make_pair(ch, cnt);
}

int main() {
    std::optional<std::pair<char, unsigned int>> lr;

    lr = longestRepetition("bbbaaabaaaa");
    cout << "{'" << lr->first << "', " << lr->second << "}" << endl; // {'a', 4};

    
    lr = longestRepetition("aaaabb");
    cout << "{'" << lr->first << "', " << lr->second << "}" << endl; // {'a', 3};

    return 0;
}
//
#include <optional>
#include <string>
#include <utility>

std::optional<std::pair<char, unsigned int>> longestRepetition(
    const std::string& str) {
    if (str.empty()) return std::nullopt;

    std::pair<char, unsigned> last{0, 0}, max{0, 0};
    for (const char c : str) {
        if (last.first == c) {
            last.second += 1;
        } else {
            if (last.second > max.second) max = last;
            last = {c, 1};
        }
    }

    return last.second > max.second ? last : max;
}
