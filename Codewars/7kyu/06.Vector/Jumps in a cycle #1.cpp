// https://www.codewars.com/kata/63f844fee6be1f0017816ff1/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long getJumps(const std::vector<int>& cycle, long long k) {
    size_t cycle_size = cycle.size();
    long long gcd_value = gcd(cycle_size, k);
    return cycle_size / gcd_value;
}

int main() {
    cout << getJumps({1, 5, 7, 8, 9}, 1) << endl; // 5
    cout << getJumps({1, 5, 7, 8, 9}, 2) << endl; // 5
    cout << getJumps({1, 5, 1}, 1)       << endl; // 3

    return 0;
}
