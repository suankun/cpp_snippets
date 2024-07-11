// https://www.codewars.com/kata/5a87449ab1710171300000fd/train/cpp
#include <string>

using namespace std; 

bool tidyNumber (int number)
{
    while(number>0) {
        int temp1 = number%10;
        number/=10;
        int temp2 = number%10;
        if (temp1<temp2) return false;
    }
    return true;
}
//
#include <bits/stdc++.h>
using namespace std; 

bool tidyNumber (int number)
{
    string convNum = to_string(number); return is_sorted(convNum.begin(),convNum.end());
}
