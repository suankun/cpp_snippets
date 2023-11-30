// https://www.codewars.com/kata/5418a1dd6d8216e18a0012b2/train/cpp

#include <iostream>
using namespace std;
#include <string>

class Kata {
    public:
    static bool validate(long long int n);
};

bool Kata::validate(long long int n) {
    std::cout << n << std::endl;
    // Check the length of the number 'n'
    std::string str_n = std::to_string(n);
    size_t len = str_n.length();

    // Double every odd digits starting from right to left. Or double every other digit starting with the first
    // if the len is even and opposite
    if (len%2==0) {
        for (size_t i=0; i<len; i+=2) {
            long long int num = (str_n[i]-'0')*2;
            long long int num_digit=0;
            if (num>9) {
                while (num>0)
                {
                    num_digit+=(num%10);
                    num/=10;
                }
                num=num_digit;
            }
            str_n[i] = num+'0';
        }
    } else {
        for (size_t i=1; i<len; i+=2) {
            long long int num = (str_n[i]-'0')*2;
            long long int num_digit=0;
            if (num>9) {
                while (num>0)
                {
                    num_digit+=(num%10);
                    num/=10;
                }
                num=num_digit;
            }
            str_n[i] = num+'0';
        }
    }

    // Sum all digits.
    long long int sum=0, digits=0;
    digits=stoull(str_n);
    while (digits>0)
    {
        sum+=(digits%10);
        digits/=10;
    }
    return sum%10==0 ? true : false;
}

int main() {
    Kata k1;
    cout << boolalpha;
    // cout << k1.validate(891) << endl;  // false
    // cout << k1.validate(2121) << endl;  // true
    cout << k1.validate(4111111111111111) << endl;  // true

    return 0;
}
//
class Kata {
    public:
    static bool validate(long long int n) {
            long long int res = 0;
        while(n > 0){
            res += (n % 10);
            n /= 10;
            res += ((n % 10) * 2 - ((n % 10) >= 5 ? 9 : 0));
            n /= 10;
        }
        return ((res % 10) == 0);
    }
};
