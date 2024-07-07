// https://www.codewars.com/kata/55fd2d567d94ac3bc9000064/train/cpp
#include <iostream>
using namespace std;

long long rowSumOddNumbers(unsigned n){
    long long sum {}, cnt {1};
    for (unsigned i {}; i<n; i++) {
        sum = 0;
        for (unsigned j {}; j<=i; j++) {
            sum+=cnt;
            cnt+=2;
        }
    }
    return sum;
}

int main() {
    cout << rowSumOddNumbers(2);  // 8

    return 0;
}
//
long long rowSumOddNumbers(unsigned n){
    //n - элементов на уровне n
    //1+2+3+4+5+...+n= (n+1)n/2 - элементов в пирамиде из n уровней
    //0+1+2+3+4+...+(n-1) = (n-1)n/2 - столько раз прибавляется 2 к предыдущему числу
    //1+(n-1)n - с этого элемента начинается уровень n
    //[1+(n-1)n]+[1+(n-1)n+2]+[1+(n-1)n+4]+...+[1+(n-1)n+2(n-1)] - элементы последнего уровня
    //([1+(n-1)n] + [1+(n-1)n+2(n-1)])n/2 = n^3
        
    return (long long)n*n*n;
}
