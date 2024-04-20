// https://www.codewars.com/kata/5697fb83f41965761f000052/train/cpp
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

std::vector<std::string> filter_long_words(const std::string& sentence, int n) {
    std::vector<std::string> result;
    std::stringstream ss(sentence);
    std::string word;
    while (std::getline(ss, word, ' ')) if (word.length() > n) result.push_back(word);

    return result;
}

int main() {
    std::vector<string> result = filter_long_words("The quick brown fox jumps over the lazy dog", 4);
    for (auto word: result) cout << word << ' ';
    cout << endl;

    return 0;
}
