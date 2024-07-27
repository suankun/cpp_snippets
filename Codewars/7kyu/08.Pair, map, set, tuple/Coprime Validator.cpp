// https://www.codewars.com/kata/585c50e75d0930e6a7000336/train/cpp
#include <set>
#include <algorithm>

bool are_coprime(unsigned int a, unsigned int b) {
    std::set<unsigned int> factors_a;
    std::set<unsigned int> factors_b;

    for (unsigned int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            factors_a.insert(i);
        }
    }

    for (unsigned int i = 1; i <= b; ++i) {
        if (b % i == 0) {
            factors_b.insert(i);
        }
    }

    std::set<unsigned int> intersection;
    std::set_intersection(factors_a.begin(), factors_a.end(),
                          factors_b.begin(), factors_b.end(),
                          std::inserter(intersection, intersection.begin()));

    return intersection.size() == 1;
}
