// https://www.codewars.com/kata/5f7c38eb54307c002a2b8cc8/train/cpp
#include <string>

std::string remove_parentheses(const std::string &str)
{
    std::string res;
    int count {};
    for (size_t i {}; i<str.length(); i++) {
        if (str[i]=='(') count++;
        if (str[i]==')') {
            count--;
            continue;
        }

        if (count) continue;
        res+=str[i];
    }
    return res;
}
//
#include <string>

std::string remove_parentheses(const std::string &str)
{
    int o = 0;
    std::string s;
    for (const char& c: str) 
        if (c == '(') o++ ;
        else if (c == ')') o--; 
        else if (!o) s = s + c;
        
    return s;
}
