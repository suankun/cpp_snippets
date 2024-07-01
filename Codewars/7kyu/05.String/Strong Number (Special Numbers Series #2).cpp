// https://www.codewars.com/kata/5a4d303f880385399b000001/train/cpp
#include <iostream>
#include <string>
using namespace std;

string strong_num(int number ) {
    int sum {}, num {number};
    while (num > 0) {
        int temp = num % 10;
        int temp_sum {1};
        for (int i {1}; i <= temp; i++) {
            temp_sum *= i; 
        }
        sum += temp_sum;
        num /= 10;
    }
    return sum==number ? "STRONG!!!!" : "Not Strong !!"; 
}

int main() {
    cout << strong_num(145) << endl;  // "STRONG!!!!"
    cout << strong_num(93) << endl;  // "Not Strong !!"
    cout << strong_num(185) << endl;  // "5,678,545"
    return 0;
}
//
#include <string>
using namespace std; 

int Factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; ++i)
    {
        f *= i;
    }
    return f;
}

string strong_num(int number)
{
    int n = 0;
    for (int i = number; i > 0; i /= 10)
    {
        n += Factorial(i % 10);
    }
    return number == n ? "STRONG!!!!" : "Not Strong !!";
}
