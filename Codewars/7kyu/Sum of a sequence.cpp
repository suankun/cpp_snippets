// https://www.codewars.com/kata/586f6741c66d18c22800010a/train/cpp
#include <iostream>

using namespace std;

int sequenceSum(int start, int end, int step)
{
    int sum = 0;
    while (start <= end) {
        sum += start;
        start += step;
    }
    return sum;
}

int main() {
    cout << sequenceSum(2, 6, 2) << endl;  // 12
    cout << sequenceSum(1, 5, 1) << endl;  // 15
    cout << sequenceSum(1, 5, 3) << endl;  // 5
    cout << sequenceSum(0, 15, 3) << endl;  // 45
    cout << sequenceSum(16, 15, 3) << endl;  // 0
    cout << sequenceSum(2, 24, 22) << endl;  // 26
    cout << sequenceSum(2, 2, 2) << endl;  // 2
    cout << sequenceSum(2, 2, 1) << endl;  // 2
    cout << sequenceSum(1, 15, 3) << endl;  // 35
    cout << sequenceSum(15, 1, 3) << endl;  // 0

    return 0;
}
//
int sequenceSum(int start, int end, int step)
{
  int num = 0;
  for(int i=start; i<=end; i+=step) num +=i;
  return num;
}
