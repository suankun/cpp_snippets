// https://www.codewars.com/kata/559590633066759614000063/train/cpp
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

std::pair<int, int> min_max(const std::vector<int>& arr)
{
    int min_val = *std::min_element(arr.begin(), arr.end());
    int max_val = *std::max_element(arr.begin(), arr.end());

    return {min_val, max_val};
}

int main() {
    std::pair<int, int> res1 = min_max({ 5 });                       // { 5, 5 }
    std::pair<int, int> res2 = min_max({ 5, 2334454 });              // { 5, 2334454 }
    std::pair<int, int> res3 = min_max({ 2334454, 5 });              // { 5, 2334454 }
    std::pair<int, int> res4 = min_max({ 1, 2, 3, 4, 5 });           // { 1, 5 }
    std::pair<int, int> res5 = min_max({ -93, 0, 1, 100, -94, 8 });  // { -94, 100 }

    return 0;
}
//
#include <algorithm>
#include <utility>
#include <vector>

std::pair<int, int> min_max(const std::vector<int>& arr) {
    const auto [min, max] = std::minmax_element(arr.cbegin(), arr.cend());
    
    return {*min, *max};
}
