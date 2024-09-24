// https://www.codewars.com/kata/5340298112fa30e786000688/train/cpp

// The objective is to return all pairs of integers from a given array of integers that have a difference of 2.

// The result array should be sorted in ascending order of values.

// Assume there are no duplicate integers in the array. The order of the integers in the input array should not matter.

// Examples
// [1, 2, 3, 4]  should return [[1, 3], [2, 4]]

// [4, 1, 2, 3]  should also return [[1, 3], [2, 4]]

// [1, 23, 3, 4, 7] should return [[1, 3]]

// [4, 3, 1, 5, 6] should return [[1, 3], [3, 5], [4, 6]]

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<std::pair<int, int>> twos_difference(const std::vector<int> &vec) {
    std::vector<std::pair<int, int>> res;
    std::vector<int> sorted = vec;
    std::sort(sorted.begin(), sorted.end());
    for (int n : sorted) {
        if (std::find(vec.begin(), vec.end(), n + 2) != vec.end())
            res.push_back({n, n + 2});
    }
    return res;
}

typedef std::vector<std::pair<int, int>> VecOfPairs;

void print(VecOfPairs v) {
    for (pair<int, int> p : v)
        cout << p.first << ',' << p.second << ';';
    cout << endl;
}

int main() {
    std::vector<std::pair<int, int>> res;
    res = twos_difference({1, 2, 3, 4}); //  {{1, 3}, {2, 4}}
    print(res);
    res = twos_difference({1, 3, 4, 6}); //  {{1, 3}, {4, 6}}
    print(res);
    res = twos_difference({0, 3, 1, 4}); //  {{1, 3}}
    print(res);
    res = twos_difference({4, 1, 2, 3}); //  {{1, 3}, {2, 4}}
    print(res);
    res = twos_difference({6, 3, 4, 1, 5}); //  {{1, 3}, {3, 5}, {4, 6}}
    print(res);
    res = twos_difference({3, 1, 6, 4}); //  {{1, 3}, {4, 6}}
    print(res);
    res = twos_difference({1, 3, 5, 6, 8, 10, 15, 32, 12, 14, 56}); //  {{1, 3}, {3, 5}, {6, 8}, {8, 10}, {10, 12}, {12, 14}}
    print(res);
    res = twos_difference({1, 4, 7, 10}); //  {}
    print(res);
    res = twos_difference({}); //  {}
    print(res);

    return 0;
}
