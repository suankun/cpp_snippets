// https://www.codewars.com/kata/5738f5ea9545204cec000155/train/cpp
#include <iostream>
#include <string>

int countLettersAndDigits(std::string input)
{
    int count {};
    for (size_t i {}; i<input.length(); i++) {
        if (isalpha(input[i]) || isdigit(input[i])) count++;
    }
    return count;
}
//
// int countLettersAndDigits(std::string input)
// {
//     return count_if( input.begin(), input.end(), isalnum );
// }
