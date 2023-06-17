#include <iostream>
#include <cmath>
using namespace std;


class MaxRotate
{
public:
  static long long maxRot(long long n);
};

int number_of_digits(long long n) {
    int digits {};
    while (n>0) {
        digits++;
        n/=10;
    }
    return digits;
}

long long MaxRotate::maxRot(long long n) {
    long long max_num {};
    int digits = number_of_digits(n);
    int multiplier = pow(10, digits-1);
    cout << n % multiplier << ", " << (n % multiplier) * 10 << ", " << n / multiplier << endl;
    max_num = (n % multiplier) * 10 + (n / multiplier);
    return max_num;
}


int main() {
    MaxRotate one;
    long long result = one.maxRot(56789);  // 68957
    
    cout << result << endl;  

    return 0;
}