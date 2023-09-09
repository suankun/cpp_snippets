// https://www.codewars.com/kata/56b97b776ffcea598a0006f2/train/cpp
#include <iostream>
#include <vector>

std::vector<int> bubbleSortOnce(const std::vector<int> &input) {
    std::vector<int> sortedArray = input;

    for (size_t i = 0; i < sortedArray.size() - 1; i++) {
        if (sortedArray[i] > sortedArray[i + 1]) {
            std::swap(sortedArray[i], sortedArray[i + 1]);
        }
    }

    return sortedArray;
}
//
std::vector<int> bubbleSortOnce(std::vector<int> input) {
    for (int i = 0; i < input.size() - 1; i++) {
        int c = input[i];
        if (input[i] > input[i + 1]) {
            input[i] = input[i + 1];
            input[i + 1] = c;
        }
    }
    return input;
}
