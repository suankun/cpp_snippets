// https://www.codewars.com/kata/560a4962c0cc5c2a16000068/train/cpp
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#include <vector>

std::vector<int> eqSumPowdig(const int hMax, const int exp) {
    std::vector<int> list;

    for (int i = 2; i <= hMax; i++) {

        int temp = i;
        int curSum = 0;
        while (temp)
        {
            int curDigit = temp % 10;
            curSum += (pow(curDigit, exp));

            temp /= 10;
        }
        
        if (i == curSum)
            list.push_back(i);
    }

    return list;
}

int main() {

    int hMax = 370, exp = 3;
    std::vector<int> res = eqSumPowdig(hMax, exp);
        // sequence = {153, 370};

    for (int & n : res)
        cout << n << ' ';
    cout << endl;

    return 0;
}
//
#include <cmath>
#include <vector>

bool test(const int val, const int exp) {
    int res = 0;
    for (int v = val; v; v /= 10) res += std::pow(v % 10, exp);
    return val == res;
}

std::vector<int> eqSumPowdig(const int hMax, const int exp) {
    std::vector<int> result;
    for (int n = 2; n <= hMax; ++n)
        if (test(n, exp)) result.push_back(n);
    return result;
}
