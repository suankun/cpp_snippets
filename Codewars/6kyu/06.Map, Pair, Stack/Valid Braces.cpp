// https://www.codewars.com/kata/5277c8a221e209d3f6000b56/train/cpp

// Write a function that takes a string of braces, and determines if the order of the braces is valid. It should return true if the string is valid, and false if it's invalid.

// This Kata is similar to the Valid Parentheses Kata, but introduces new characters: brackets [], and curly braces {}. Thanks to @arnedag for the idea!

// All input strings will be nonempty, and will only consist of parentheses, brackets and curly braces: ()[]{}.

// What is considered Valid?
// A string of braces is considered valid if all braces are matched with the correct brace.

// Examples
// "(){}[]"   =>  True
// "([{}])"   =>  True
// "(}"       =>  False
// "[(])"     =>  False
// "[({})](]" =>  False

#include <string>
#include <stack>
#include <unordered_map>

bool valid_braces(const std::string &braces) 
{
    std::stack<char> stack;
    std::unordered_map<char, char> matching_brace = {{')', '('}, {']', '['}, {'}', '{'}};
    
    for (char ch : braces) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push(ch);
        } 
        else {
            if (stack.empty() || stack.top() != matching_brace[ch]) {
                return false;
            }
            stack.pop();
        }
    }
    
    return stack.empty();
}
