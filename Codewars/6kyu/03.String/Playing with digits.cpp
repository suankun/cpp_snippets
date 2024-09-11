// https://www.codewars.com/kata/5552101f47fc5178b1000050/train/cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class DigPow
{
public:
  static int digPow(int n, int p);
};

int DigPow::digPow(int n, int p) {
    int sum {};
    std::string num_str = to_string(n);
    for (size_t i {}; i<num_str.length(); i++) {
        int temp_num = pow(num_str[i] - '0', p+i);
        sum += temp_num;
    }

    return (sum%n==0) ? sum/n : -1;
}

int main()
{
    DigPow one;
    std::cout << one.digPow(89, 1) << std::endl;  // 1
    std::cout << one.digPow(92, 1) << std::endl;  // -1
    std::cout << one.digPow(46288, 3) << std::endl;  // 51

    return 0;
}
//
#include <cmath>
using namespace std;
class DigPow
{
public:
    static int digPow(int n, int p) {
        long long sum=0;
        for(char digit : to_string(n)){
            sum+=pow(digit-'0',p++);
        }
        return (sum/n)*n==sum ? sum/n : -1;
    }
};
