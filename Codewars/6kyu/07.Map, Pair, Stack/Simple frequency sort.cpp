// https://www.codewars.com/kata/5a8d2bf60025e9163c0000bc/train/cpp

// In this kata, you will sort elements in an array by decreasing frequency of elements. If two elements have the same frequency, sort them by increasing value.

// solve({2,3,5,3,7,9,5,3,7}) == {3,3,3,5,5,7,7,2,9}
// We sort by highest frequency to lowest frequency.
// If two elements have same frequency, we sort by increasing value.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <tuple>

std::vector<int> solve(const std::vector<int> &vec) {
    std::unordered_map<int, int> frequency;
    for (int num : vec) {
        frequency[num]++;
    }
    
    std::vector<int> result = vec;

    std::sort(result.begin(), result.end(), [&](int a, int b) {
        if (frequency[a] != frequency[b]) {
            return frequency[a] > frequency[b];
        }
        return a < b;
    });

    return result;
}


void print(std::vector<int> v) {
    for (int n : v)
        std::cout << n << ' ';
    std::cout << std::endl;
}

int main() {
    std::vector<int> res;

    res = solve({2,3,5,3,7,9,5,3,7});         print(res); // {3,3,3,5,5,7,7,2,9}
    // res = solve({1,2,3,0,5,0,1,6,8,8,6,9,1}); print(res); // {1,1,1,0,0,6,6,8,8,2,3,5,9}
    // res = solve({5,9,6,9,6,5,9,9,4,4});       print(res); // {9,9,9,9,4,4,5,5,6,6}
    // res = solve({4,4,2,5,1,1,3,3,2,8});       print(res); // {1,1,2,2,3,3,4,4,5,8}
    // res = solve({4,9,5,0,7,3,8,4,9,0});       print(res); // {0,0,4,4,9,9,3,5,7,8}


    return 0;
}
//
// #include <vector>
// #include <map>

// std::vector<int> solve(std::vector<int> v) {
//     std::map<int, int> fr;

//     for(int n : v)
//         fr[n]++;

//     std::sort(v.begin(), v.end(), [&](int a, int b){ return (fr[a]>fr[b]) || (fr[a]==fr[b] && a < b); });

//     return v;
// }
