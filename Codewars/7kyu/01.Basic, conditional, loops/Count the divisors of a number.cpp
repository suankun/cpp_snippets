// https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/cpp
#include <iostream>
using namespace std;

int divisors(int n) {
    int counter {};
    for (int i {1}; i <= n; i++) {
        double temp = static_cast<double>(n)/i;
        if (temp == n/i) counter++;
    }
    return counter;
}

int main() {
    int num {12};  // 6
    cout << divisors(num) << endl;

    return 0;
}
//
int divisors(int n){  
    int cnt = 1;
    for (int i = 1 ; i <= n/2 ; i++)
        if (n%i==0)
            cnt++;
    return cnt;
}
