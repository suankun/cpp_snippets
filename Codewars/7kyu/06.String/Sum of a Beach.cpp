// https://www.codewars.com/kata/5b37a50642b27ebf2e000010/train/cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string toLower(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), 
                   [](unsigned char c) { return std::tolower(c); });
    return lowerStr;
}

int countOccurrences(const std::string& str, const std::string& word) {
    int count = 0;
    std::string::size_type pos = 0;
    while ((pos = str.find(word, pos)) != std::string::npos) {
        ++count;
        pos += word.length();
    }
    return count;
}

int sum_of_a_beach(std::string s) {
    std::string lowerBeach = toLower(s);
    std::string words[] = {"sand", "water", "fish", "sun"};
    int total = 0;

    for (const std::string& word : words) {
        total += countOccurrences(lowerBeach, word);
    }
    return total;
}
//
int sum_of_a_beach(std::string s)
{
    std::transform(s.cbegin(), s.cend(), s.begin(), tolower);
    int i = 0, sum = 0;
    for (auto e : {"sand", "sun", "fish", "water"})
        for (auto pos = 0; (i = s.find(e, pos)) != std::string::npos; pos = i + 1, ++sum);

    return sum;
}
