// https://www.codewars.com/kata/55ba95a17970ff3e80000064/train/cpp

// Ore Numbers (also called Harmonic Divisor Numbers) are numbers for which the harmonic mean of all their divisors (including the number itself) equals an integer.

// For example, 6 is an Ore Number because its harmonic mean is exactly 2:

// H(6) = 4 / (1/1 + 1/2 + 1/3 + 1/6) = 2
// Your task is to complete the function returns true if the given number is an Ore Number and false otherwise.

// You can assume all inputs will be valid positive integers.

// Hint: The harmonic mean is the total number of divisors divided by the sum of their reciprocals.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isOre(unsigned int n) {
    std::vector<unsigned int> divisors;
    double sum = 0;
    unsigned int count = 0;

    for (unsigned int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            sum += 1.0 / i;
            count++;

            if (i != n / i) {
                divisors.push_back(n / i);
                sum += 1.0 / (n / i);
                count++;
            }
        }
    }

    double d = std::round((count / sum) * 1000) / 1000;
    return d == static_cast<int>(d);
}

int main() {

    cout << boolalpha;
    cout << isOre(6)   << endl; // true
    cout << isOre(10)  << endl; // false
    cout << isOre(28)  << endl; // true
    cout << isOre(32)  << endl; // false
    cout << isOre(125) << endl; // false
        
    return 0;
}
//
bool isOre(unsigned n) {
    unsigned t = 0, c = 0;

    for(unsigned d = 1; d <= n; d++) {
        if(!(n % d)) {
            t += d;
            c += 1;
        }
    }

    return !(n * c % t);
}
