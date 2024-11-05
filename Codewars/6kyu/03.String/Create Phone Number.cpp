// https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp
// Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

// Example
// createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"
// The returned format must be correct in order to complete this challenge.

// Don't forget the space after the closing parentheses!

#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr[10]) {
    std::string res;
    for (size_t i = 0; i < 10; i++)
        res += std::to_string(arr[i]);
    
    res.insert(0, "(");
    res.insert(4, ") ");
    res.insert(9, "-");
    
    return res;
}
//
#include <string>

std::string createPhoneNumber(const int arr [10]){
    char buf[15];
    snprintf(buf, sizeof(buf), "(%d%d%d) %d%d%d-%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
    return buf;
}
