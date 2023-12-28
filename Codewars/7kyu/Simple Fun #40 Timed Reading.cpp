// https://www.codewars.com/kata/588817db5fb13af14a000020/train/cpp
#include <iostream>
#include <regex>

int timed_reading(int n, const std::string& s) {
    std::regex wordRegex("\\b\\w+\\b");
    std::sregex_iterator wordsBegin = std::sregex_iterator(s.begin(), s.end(), wordRegex);
    std::sregex_iterator wordsEnd = std::sregex_iterator();

    int count = 0;
    for (std::sregex_iterator it = wordsBegin; it != wordsEnd; ++it) {
        std::smatch match = *it;
        std::string word = match.str();
        if (static_cast<int>(word.length()) <= n) {
            count++;
        }
    }

    return count;
}
