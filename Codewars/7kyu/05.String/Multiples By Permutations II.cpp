// https://www.codewars.com/kata/5ba178be875de960a6000187/train/cpp
#include <iostream>
using namespace std;

// #include <string>
// #include <cstring>
#include <algorithm>

unsigned long findLowestInt(unsigned int k) {
    unsigned int k1 = k;
    unsigned int k2 = k+1;

    unsigned long n = 1;
    while (true) {
        std::string k1_str = std::to_string(k1*n);
        sort(k1_str.begin(), k1_str.end());
        std::string k2_str = std::to_string(k2*n);
        sort(k2_str.begin(), k2_str.end());
        // cout << n << ',';
        if (k1_str == k2_str) break;
        n++;
    }

    return n;
}

int main() {
    // cout << findLowestInt(100) << endl;  // 8919
    cout << findLowestInt(325) << endl;  // 477
    // cout << findLowestInt(599) << endl;  // 2394

    return 0;
}
//
unsigned long findLowestInt(unsigned int k) {
    unsigned long n = 1;
    while (true) {
        unsigned long product1 = n * k;
        unsigned long product2 = n * (k + 1);
        std::string digits1 = std::to_string(product1);
        std::string digits2 = std::to_string(product2);
        std::sort(digits1.begin(), digits1.end());
        std::sort(digits2.begin(), digits2.end());
        if (digits1 == digits2) {
            return n;
        }
        n++;
    }
}
//
#include <climits>
unsigned long findLowestInt( unsigned k ) {
    for ( unsigned long n{ 1 }; n < ULONG_MAX; ++n ) {
        auto nk1{ n * k }, nk2{ n * ( k + 1 )};
        int m[ 10 ]{};
        do ++m[ nk1 % 10 ]; while ( nk1 /= 10 );
        do --m[ nk2 % 10 ]; while ( nk2 /= 10 );
        for ( int i{}; i < 10 && !m[ i ]; ++i )
        if ( i == 9 ) return n;
    }
    return {};
}
