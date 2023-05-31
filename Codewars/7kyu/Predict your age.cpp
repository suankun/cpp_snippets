// https://www.codewars.com/kata/5aff237c578a14752d0035ae/train/cpp

#include <iostream>
using namespace std;

#include <math.h>
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
    int age = (sqrt((age1*age1) + (age2*age2) + (age3*age3) + (age4*age4) + (age5*age5) + (age6*age6) + (age7*age7) + (age8*age8)))/2;
    return age;
}

int main() {
    
    int age1 {65}, age2 {60}, age3 {75}, age4 {55}, age5 {60}, age6 {63}, age7 {64}, age8 {45};
    int res = predictAge(age1, age2, age3, age4, age5, age6, age7, age8);
    cout << res << endl;

    return 0;
}
//////////////
#include <math.h>
int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8)
{
  int a[8] = {age1, age2, age3, age4, age5, age6, age7, age8};
    int s = 0;
    for( int i = 0; i < 8; i++)
    {
        a[i] *= a[i];
        s += a[i];
    }
    return sqrt(s)/2;
}