// https://www.codewars.com/kata/647518391e258e80eedf6e06/train/cpp
#include <iostream>
#include <vector>
#include <array>

using namespace std;

std::array<std::vector<int>, 2> createTwoSetsOfEqualSum(int n) {
    std::array<std::vector<int>, 2> sets;

    if (n % 4 != 0 && (n + 1) % 4 != 0)
        return sets;

    if (n%4!=0) {
        sets[0].push_back(1);
        sets[0].push_back(2);
        sets[1].push_back (3);
        if (n>3) {
            for (int i=4;i<n;) {
                sets[0].push_back(i++);
                sets[1].push_back(i++);
                sets[1].push_back(i++);
                sets[0].push_back(i++);
            }
        }
    }
    else{
        for (int i=1;i<n;) {
            sets[0].push_back(i++);
            sets[1].push_back(i++);
            sets[1].push_back(i++);
            sets[0].push_back(i++);
        }
    }
  
    return sets;
}

int main() {
    std::array<std::vector<int>, 2> res = createTwoSetsOfEqualSum(3);
    for (auto n : res[0])
        cout << n << ' ';
    cout << endl;

    for (auto n : res[1])
        cout << n << ' ';
    cout << endl;

    return 0;
}
//
#include <array>
#include <vector>

std::array<std::vector<int>, 2> createTwoSetsOfEqualSum(int n) {
    std::array<std::vector<int>, 2> sets;
    if (n % 4 == 0 || n % 4 == 3) {
        std::array<long, 2> sums{};
        for (int i = n; i > 0; i--) {
            bool j = sums[0] > sums[1];
            sets[j].push_back(i);
            sums[j] += i;
        }
    }
    return sets;
}
