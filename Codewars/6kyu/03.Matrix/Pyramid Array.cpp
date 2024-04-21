// https://www.codewars.com/kata/515f51d438015969f7000013/train/cpp
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

std::vector<std::vector<int>> pyramid(std::size_t n) {
    std::vector<std::vector<int>> res;
    std::size_t i, j;
    for (i = 0; i < n; i++) {
        std::vector<int> currentVector;
        for (j = 0; j < i+1; j++) {
            currentVector.push_back(1);
        }
        res.push_back(currentVector);
    }
    return res;
}

int main() {
    std::vector<std::vector<int>> res = pyramid(3);  // Equals(ivv{iv{1}, iv{1, 1}, iv{1, 1, 1}}));
    for (std::size_t i = 0; i < res.size(); i++) {
        for (std::size_t j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
//
#include <vector>
#include <cstdlib>

std::vector<std::vector<int>> pyramid(std::size_t n) {
    std::vector<std::vector<int>> result;
    for (auto i = 1; i <= n; i ++)
    {
        result.push_back(std::vector<int>(i, 1));
    }
    return result;
}
// best
#include <vector>
#include <cstddef>

std::vector<std::vector<int>> pyramid(std::size_t n) {
    std::vector<std::vector<int>> res;
    res.reserve(n);
    for (std::size_t i = 1; i <= n; i++)
        res.emplace_back(i, 1);
    return res;
}
