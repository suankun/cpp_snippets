// https://www.codewars.com/kata/5ad29cd95e8240dd85000b54/train/cpp
#include <cmath>

int friends(int n) {
    return n <= 1 ? 0 : static_cast<int>(ceil(log2(n))) - 1;
}
//
#include <math.h>
int friends(int n){
    return n<3 ? 0 : log2(n-1) ;
}
