// https://www.codewars.com/kata/5873b2010565844b9100026d/train/cpp

// There are no explanations. You have to create the code that gives the following results in Python, Ruby, and Haskell:

// one_two_three(0) == [0, 0]
// one_two_three(1) == [1, 1]
// one_two_three(2) == [2, 11]
// one_two_three(3) == [3, 111]
// one_two_three(19) == [991, 1111111111111111111]
// And it should give the following results in Javascript, Scala, D, Go, Rust, C, and Java:

// oneTwoThree(0) == ['0', '0']
// oneTwoThree(1) == ['1', '1']
// oneTwoThree(3) == ['3', '111']
// oneTwoThree(19) == ['991', '1111111111111111111']
// In C, the results are to be assigned to seperate pointers.

#include <array>
#include <string>

std::array<std::string, 2> oneTwoThree(const unsigned int n) {
    std::string firstPart;
    if (n > 0) {
        firstPart = std::string(n / 9, '9');
        if (n % 9 > 0) {
            firstPart += std::to_string(n % 9);
        }
    } else {
        firstPart = "0";
    }
    
    std::string secondPart = n > 0 ? std::string(n, '1') : "0";
    
    return {firstPart, secondPart};
}
