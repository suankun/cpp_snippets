// https://www.codewars.com/kata/590fd3220f05b4f1ad00007c/train/cpp
#include <string>
#include <cctype>

bool cool_string(const std::string& s) {
    std::string string_without_whitespace;
    for (char ch : s) {
        if (!std::isspace(static_cast<unsigned char>(ch))) {
            string_without_whitespace += ch;
        }
    }

    for (char ch : string_without_whitespace) {
        if (!std::isalpha(static_cast<unsigned char>(ch))) {
            return false;
        }
    }

    for (size_t i = 0; i < string_without_whitespace.length() - 1; ++i) {
        if ((std::islower(static_cast<unsigned char>(string_without_whitespace[i])) && 
             std::islower(static_cast<unsigned char>(string_without_whitespace[i + 1]))) || 
            (std::isupper(static_cast<unsigned char>(string_without_whitespace[i])) && 
             std::isupper(static_cast<unsigned char>(string_without_whitespace[i + 1])))) {
            return false;
        }
    }

    return true;
}
//
#include <string>
#include <cctype>

bool cool_string(const std::string& s) {
    if (!std::isalpha(s[0])) return false;
    for (unsigned i = 1; i < s.size(); i ++)
        if (std::isupper(s[i-1]) == std::isupper(s[i]))
            return false;
    return true;
}
//
#include <regex>
#include <string>
bool cool_string(const std::string& s) {
  return !(regex_search(s, std::regex("[^A-Za-z]|[A-Z]{2,}|[a-z]{2,}"))); 
}
