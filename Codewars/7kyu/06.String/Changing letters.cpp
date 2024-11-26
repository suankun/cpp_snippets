// https://www.codewars.com/kata/5831c204a31721e2ae000294/train/cpp

// When provided with a String, capitalize all vowels

// For example:

// Input : "Hello World!"

// Output : "HEllO WOrld!"

// Note: Y is not a vowel in this kata.

#include <string>
#include <algorithm>

std::string swap(const std::string& str)
{
    std::string capitalized, v = "aouei";
    for (const char & ch : str)
        std::find(v.begin(), v.end(), ch) == std::end(v)
          ? capitalized += ch
          : (capitalized += toupper(ch));
  
    return capitalized;
}
