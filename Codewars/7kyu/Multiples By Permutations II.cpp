#include <iostream>
using namespace std;

// #include <string>
// #include <cstring>
#include <algorithm>

unsigned long findLowestInt(unsigned int k) {
    unsigned int k1 = k;
    unsigned int k2 = k+1;

    unsigned int n = 1;
    while (true) {
        std::string k1_str = std::to_string(k1*n);
        sort(k1_str.begin(), k1_str.end());
        std::string k2_str = std::to_string(k2*n);
        sort(k2_str.begin(), k2_str.end());
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
