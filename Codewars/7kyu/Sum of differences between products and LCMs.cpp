// https://www.codewars.com/kata/56e56756404bb1c950000992/train/cpp
#include <iostream>
#include <vector>
#include <utility>
#include <cstdint>

using namespace std;

// Function to calculate the Greatest Common Divisor (GCD) using Euclidean algorithm
uint64_t gcd(uint64_t a, uint64_t b) {
    while (b != 0) {
        uint64_t temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the Least Common Multiple (LCM)
uint64_t lcm(uint64_t a, uint64_t b) {
    if (a == 0 || b == 0) {
        return 0;  // LCM of any number and zero is zero
    }
    return (a / gcd(a, b)) * b;
}

uint64_t sum_differences_between_products_and_LCMs(const vector<pair<uint64_t, uint64_t>>& pairs) {
    uint64_t res = 0;

    // Calculate the products and LCMs
    for (const auto& p: pairs) {
        uint64_t product = p.first * p.second;
        uint64_t lcm_num = lcm(p.first, p.second);
        res += (product - lcm_num);
    }

    return res;
}

int main() {
    uint64_t res = sum_differences_between_products_and_LCMs({{15,18}, {4,5}, {12,60}});  // 840
    cout << res << endl;
    
    return 0;
}
//
#include <vector>
#include <utility>
#include <cstdint>
#include <numeric>

using namespace std;

uint64_t sum_differences_between_products_and_LCMs(const vector<pair<uint64_t, uint64_t>>& pairs)
{
    uint64_t sum = 0;
    for(auto [a, b]: pairs) {
        sum += a*b-std::lcm(a,b);
    }
    return sum;
}
