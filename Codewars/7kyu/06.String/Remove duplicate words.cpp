// https://www.codewars.com/kata/5b39e3772ae7545f650000fc/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using std::cout;
using std::endl;

std::string removeDuplicateWords(const std::string& str)
{
    if (str.length() == 0)
        return "";

    std::string res;
    std::unordered_set<std::string> seenWords;

    std::stringstream ss(str);
    std::string word;
    
    while (getline(ss, word, ' '))
    {
        if (seenWords.find(word) == seenWords.end()) {
            seenWords.insert(word);
            res += word + " ";
        }
    }

    res.pop_back();
    return res;
}

int main() {
    cout << removeDuplicateWords("alpha beta beta gamma gamma gamma delta alpha beta beta gamma gamma gamma delta") << endl;
        // Equals("alpha beta gamma delta"));

    cout << removeDuplicateWords("my cat is cat fat") << endl;
        // Equals("my cat is fat"));

    return 0;
}
