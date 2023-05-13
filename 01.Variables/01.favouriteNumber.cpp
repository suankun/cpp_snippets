#include <iostream>

int main () {
    int favourite_number = 0;

    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> favourite_number;
    std::cout << "Amazing!!! That's my favourite number too!" << std::endl;
    std::cout << "No really!!, " << favourite_number << " is my favourite number!" << std::endl;
    return 0;
}