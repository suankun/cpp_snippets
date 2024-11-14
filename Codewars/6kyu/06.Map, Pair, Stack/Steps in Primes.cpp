// https://www.codewars.com/kata/5613d06cee1e7da6d5000055/train/cpp
#include <iostream>
using namespace std;


class StepInPrimes
{
public:
    static bool isPrime(int num) {
        if (num <= 1)
            return false;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }

        return true;
    }
    // if there are no such primes return {0, 0}
    static std::pair <long long, long long> step(int g, long long m, long long n) {
        for (int i = m; i <= n - g; i++) {
        if (isPrime(i) && isPrime(i + g))
            return {i, i + g};
        }

        return {};  // Empty pair if no pair found
    };
};
int main() {
    StepInPrimes one;
    // pair <long long, long long> result = one.step(6, 100, 110);  // 101, 107
    pair <long long, long long> result = one.step(2, 100, 110);  // 101, 103
    
    cout << result.first << ", " << result.second << endl;  

    return 0;
}
//
#include <cmath>
#include <iostream>

class StepInPrimes
{
public:
    static bool isPrime(long long n) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
    
        return true;
    }
    
    static std::pair <long long, long long> step(int g, long long m, long long n) {
        for(m; m <= n; m++) {
            if (isPrime(m) && isPrime(m + g)) 
                return {m, m + g};
        }
        return {0, 0};
    }
};