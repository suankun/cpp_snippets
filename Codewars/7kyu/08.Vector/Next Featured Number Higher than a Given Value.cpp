// https://www.codewars.com/kata/56abc5e63c91630882000057/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

bool isDigitsOccurOnlyOnce(const long& num) {
    std::vector<int> occ(10, 0);
    std::string numStr = std::to_string(num);
    for (const char& ch : numStr)
        occ[ch - '0']++;

    for (const int& n : occ)
        if (n > 1)
            return false;

    return true;
}

bool isOdd(const long& num) {
    return num % 2 != 0;
}

bool isMultipleOfThree(const long& num) {
    return num % 3 == 0;
}

long nextNumb(const long val) {
    if (val > 2147483647)
        return -1;

    int curNum = val + 1;

    while (true)
    {
        if (isDigitsOccurOnlyOnce(curNum) && isOdd(curNum) && isMultipleOfThree(curNum))
            return curNum;

        curNum++;
    }

    return 0;
}

int main() {
    cout << nextNumb(12)         << endl;  // 15
    cout << nextNumb(13)         << endl;  // 15
    cout << nextNumb(99)         << endl;  // 105
    cout << nextNumb(999999)     << endl;  // 1023459
    cout << nextNumb(9999999999) << endl;  // -1
    

    return 0;
}
//
bool test(long val) {
    if (val % 3 != 0) return false;
    if (val % 2 != 1) return false;
    bool sample[10] = {};
    for (; val; val /= 10) {
        const unsigned d = val % 10;
        if (sample[d]) return false;
        sample[d] = true;
    }
    return true;
}

long nextNumb(long val) {
    if (val >= 9999999999) return -1;
    while (!test(++val));
    return val;
}
