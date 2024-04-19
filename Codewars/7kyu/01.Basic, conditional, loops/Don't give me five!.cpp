// https://www.codewars.com/kata/5813d19765d81c592200001a/train/cpp
int dontGiveMeFive(int start, int end)
{
    int result=0;
    for (int i=start; i<=end; i++) {
        if (i%5==0 && i%10!=0) continue;
        if (i>=50 && i<60) continue;
        if (i>-60 && i<=-50) continue;
        result++;
    }
    return result;
}
//
#include <iostream>
int dontGiveMeFive(int start, int end) {
    using namespace std;

    int j = 0;
    for (int i = start; i <= end; i++)
        if (to_string(i).find_first_of('5') == string::npos)
        j++;

  return j;
}
