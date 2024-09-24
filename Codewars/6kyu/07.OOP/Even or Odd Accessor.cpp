// https://www.codewars.com/kata/6656a4687f3e4eb5fb520817/train/cpp
#include <iostream>
#include <string>

class EvenOrOdd {
public:
    std::string operator()(int number) const {
        return (number % 2 == 0) ? "Even" : "Odd";
    }

    std::string operator[](int number) const {
        return (number % 2 == 0) ? "Even" : "Odd";
    }
};

EvenOrOdd evenOrOdd;

int main() {

    std::cout << evenOrOdd(2) << std::endl;  // Output: Even
    std::cout << evenOrOdd(7) << std::endl;  // Output: Odd

    std::cout << evenOrOdd[2] << std::endl;  // Output: Even
    std::cout << evenOrOdd[7] << std::endl;  // Output: Odd

    return 0;
}
