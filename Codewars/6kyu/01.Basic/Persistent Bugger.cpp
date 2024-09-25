// https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/cpp
#include <iostream>
using namespace std;

int persistence(long long n){
    int res {};
    while (n >= 10)
    {
        int temp_sum {1};
        for (long long i {n}; i!=0; i/=10) {
            int temp_num = i % 10;
            temp_sum *= temp_num;
        }
        res++;
        if (temp_sum<10) break;
        n = temp_sum;
    }

    return res;
}

int main() {
    long long num {999};
    cout << persistence(num);

    return 0;
}
//
int persistence(long long n) {
    long long p = 1;
    if (n < 10) { return 0; } 
    while (n > 0) { p = (n % 10) * p; n = n/10; }
    return persistence(p) + 1;
}
