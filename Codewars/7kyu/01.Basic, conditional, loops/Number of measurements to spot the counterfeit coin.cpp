// https://www.codewars.com/kata/59530d2401d6039f8600001f/train/cpp
#include <iostream>
#include <cmath>
using namespace std;

unsigned int howManyMeasurements(unsigned int n) {
    // Base case: If there is only one coin, no weighings are needed.
    if (n == 1) {
        return 0;
    }

    // Calculate the logarithm base 3 of n to determine the number of levels in the binary search tree.
    unsigned int levels = static_cast<unsigned int>(std::ceil(std::log2(n) / std::log2(3)));

    // The minimum number of weighings is equal to the number of levels.
    return levels;
}

int main() {
    cout << howManyMeasurements(1) << endl;    // 0
    cout << howManyMeasurements(2) << endl;    // 1
    cout << howManyMeasurements(3) << endl;    // 1
    cout << howManyMeasurements(8) << endl;    // 2
    cout << howManyMeasurements(100) << endl;  // 5

    return 0;
}
//
#include <cmath>

unsigned int howManyMeasurements(unsigned int n){
    return ceil(log(n)/log(3));
}
//
#include <cmath>

unsigned int howManyMeasurements(unsigned int n){
    int r = 0;
    while (n > 1) {
        n = ceil(n/3.0);
        ++r;
    }
    return r;
}
