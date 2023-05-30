// https://www.codewars.com/kata/5865918c6b569962950002a1/train/cpp
#include <string>

unsigned int strCount(const std::string& word, char letter){
    unsigned int counter {};
    for (size_t i {}; i<word.length(); i++) {
        if (word[i] == letter) counter++;
    }
    return counter;
}
//////////
#include <algorithm>
#include <string>

unsigned strCount(const std::string& word, char letter) {
  return std::count(word.cbegin(), word.cend(), letter);
}
//////////
#include <string>

unsigned int strCount(std::string word, char letter){
  return count(word.begin(), word.end(), letter);
}