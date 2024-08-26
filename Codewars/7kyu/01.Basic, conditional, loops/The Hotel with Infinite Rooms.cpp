// https://www.codewars.com/kata/5b9cf881d6b09fc9ee0002b1/train/cpp
#include <iostream>
#include <cmath>

using namespace std;

long long int groupSize(long long int S, long long int D) {
    long long int discriminant = (2 * S - 1) * (2 * S - 1) + 8 * D;
    
    long long int sqrtDiscriminant = sqrt(discriminant);
    
    long long int n = (- (2 * S - 1) + sqrtDiscriminant) / 2;

    long long int curDays = S * n + (n * (n - 1)) / 2;

    while (curDays < D) {
        n++;
        curDays += S + n - 1;
    }

    return S + n - 1;
}

int main() {
    cout << groupSize(1, 6)  << endl;  // 3
    cout << groupSize(3, 10) << endl;  // 5
    cout << groupSize(3, 14) << endl;  // 6

    return 0;
}
