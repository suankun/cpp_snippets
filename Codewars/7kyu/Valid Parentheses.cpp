// https://www.codewars.com/kata/6411b91a5e71b915d237332d/train/cpp
#include <iostream>
#include <string>

bool validParentheses(const std::string& str) {
    int parentheses {};
    for (size_t i {}; i<str.length(); i++) {
        if (str[i]=='(') parentheses++;
        else parentheses--;
        if (parentheses<0) return false;
    }
    if (parentheses!=0) return false;
    return true;
}

int main() {
    std::cout << std::boolalpha;
    std::cout << validParentheses("()") << std::endl;  // true
    std::cout << validParentheses(")(") << std::endl;  // false
    std::cout << validParentheses("((())") << std::endl;  // false

    return 0;
}
//
#include <string>

bool validParentheses(const std::string& str) {
  int count = 0;

  for (auto ch : str) {
    ch == '(' ? count++ : count--;
    if (count < 0) return false;
  }
  
  return !count;
}
