// https://www.codewars.com/kata/57a98e8172292d977b000079/train/cpp

// In Germany we have "LOTTO 6 aus 49". That means that 6 of 49 numbers are drawn as winning combination.
// There is also a "Superzahl", an additional number, which can increase your winning category.

// In this kata you have to write two methods.

// std::vector<int> numberGenerator()

// int checkForWinningCategory(std::vector<int> checkCombination, std::vector<int> winningCombination)
// The first method is for drawing the lottery numbers.
// You have to create an array with 7 random numbers. 6 from these are from 1 - 49.
// Of course every number may only occur once.
// And the 7th number is the "Superzahl". A number from 0 - 9. This number is independent from the first six numbers.
// The first 6 numbers have to be in ascending order.

// A result could be:
// 4, 9, 17, 22, 25, 35, 0
// Or:
// 4, 18, 22, 34, 41, 44, 4

// The second method should check a given number against the winning combination and have to return the winning category:

// 1  - 6 numbers and Superzahl match
// 2  - 6 numbers match
// 3  - 5 numbers and Superzahl match
// 4  - 5 numbers match
// 5  - 4 numbers and Superzahl match
// 6  - 4 numbers match
// 7  - 3 numbers and Superzahl match
// 8  - 3 numbers match
// 9  - 2 numbers and Superzahl match
// -1 - if the numbers do not match any of the rules above

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

int getRandomIntInclusive(int min, int max) {
    static std::mt19937 rng(static_cast<unsigned>(std::time(nullptr)));
    std::uniform_int_distribution<int> dist(min, max);
    return dist(rng);
}

std::vector<int> numberGenerator() {
    std::vector<int> arr;
    while (arr.size() != 6) {
        int x = getRandomIntInclusive(1, 49);
        if (std::find(arr.begin(), arr.end(), x) == arr.end()) {
            arr.push_back(x);
        }
    }
    std::sort(arr.begin(), arr.end());
    arr.push_back(getRandomIntInclusive(0, 9));
    return arr;
}

int checkForWinningCategory(std::vector<int> checkCombination, std::vector<int> winningCombination) {
    bool s = false;
    int count = 0;

    for (int i = 0; i < 6; ++i) {
        if (std::find(winningCombination.begin(), winningCombination.begin() + 6, checkCombination[i]) != winningCombination.begin() + 6) {
            ++count;
        }
    }

    if (checkCombination.back() == winningCombination.back()) {
        s = true;
    }

    if (count == 6 && s) return 1;
    if (count == 6 && !s) return 2;
    if (count == 5 && s) return 3;
    if (count == 5 && !s) return 4;
    if (count == 4 && s) return 5;
    if (count == 4 && !s) return 6;
    if (count == 3 && s) return 7;
    if (count == 3 && !s) return 8;
    if (count == 2 && s) return 9;
    return -1;
}
