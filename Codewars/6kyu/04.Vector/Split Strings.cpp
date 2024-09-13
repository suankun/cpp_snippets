// https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> separated;
    
    for (size_t curChars = 0; curChars < s.length(); curChars += 2)
        separated.push_back(s.substr(curChars, 2));
  
    if (s.length() % 2 != 0)
        separated[separated.size() - 1] += "_";
    
    return separated;
}
//
#include <string>
#include <vector>
#include <regex>

std::vector<std::string> solution(const std::string &s)
{
    std::regex r{".."};
    auto str = s + '_';
    return {std::sregex_token_iterator(str.begin(), str.end(), r), {}};
}
