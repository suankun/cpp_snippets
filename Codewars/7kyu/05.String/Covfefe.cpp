// https://www.codewars.com/kata/592fd8f752ee71ac7e00008a/train/cpp
#include <string>
#include <regex>

std::string covfefe(std::string s){
    std::regex pattern("coverage");
    std::string currentStr = std::regex_replace(s, pattern, "covfefe");

    if (currentStr == s) {
        currentStr += " covfefe";
    }

    return currentStr;
}
//
using namespace std;
string covfefe(string s){
    if (s.find("coverage") == -1)
        return s + " covfefe";
        
    while (s.find("coverage") != -1) 
        s.replace(s.find("coverage"), 8,"covfefe");

    return s;
}
