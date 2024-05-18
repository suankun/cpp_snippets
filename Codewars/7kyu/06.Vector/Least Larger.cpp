// https://www.codewars.com/kata/5f8341f6d030dc002a69d7e4/train/cpp
#include <iostream>
#include <vector>
#include <climits>
#include <cstddef>
using namespace std;

std::ptrdiff_t least_larger(const std::vector<int>& a, std::size_t i)
{
    ptrdiff_t res = -1;
    int diff = INT_MAX;
    for (size_t idx = 0; idx < a.size(); idx++) {
        int currDiff = a[idx] - a[i];
        if (diff > currDiff && i != idx && currDiff > 0) {
            diff = currDiff;
            res = idx;
        }
    }

    return res;
}

int main() {
    cout << least_larger({ 4, 1, 3, 5, 6 }, 4) << endl;  // -1
    cout << least_larger({ 1, 3, 5, 2, 4 }, 0) << endl;  // 3
    cout << least_larger({ 4, 1, 3, 5, 6 }, 0) << endl;  // 3

    return 0;
}
