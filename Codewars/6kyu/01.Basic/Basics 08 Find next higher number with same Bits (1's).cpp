// https://www.codewars.com/kata/56bdd0aec5dc03d7780010a5/train/cpp
#include <iostream>

using namespace std;

int countOnes(int n)
{
    int cntOnes = 0;
    int binaryNum[32];

    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int n : binaryNum)
        if (n == 1)
            cntOnes++;

    return cntOnes;
}

int nextHigher(int value)
{
    int check = countOnes(value);
    int nextHigherValue = value + 1;
    int nextHigherValueOnes = 0;

    while (check != nextHigherValueOnes)
        nextHigherValueOnes = countOnes(nextHigherValue++);
    
    return --nextHigherValue;
}

int main() {
    cout << nextHigher(128) << endl;  // 256

    return 0;
}
