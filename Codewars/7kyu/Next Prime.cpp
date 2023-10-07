// https://www.codewars.com/kata/58e230e5e24dde0996000070/train/cpp
#include <iostream>

int nextPrime(int n) {
    if (n == 0) return 2;
    int next_prime = n;
    while (true) {
        int flag = 0;
        n += 1;
        for (long long int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            };
        }
        if (!flag) {
            next_prime = n;
            break;
        }
    }
    return next_prime;
}

int main() {
    std::cout << nextPrime(5) << std::endl;  // 7
    return 0;
}
