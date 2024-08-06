// https://www.codewars.com/kata/56a4872cbb65f3a610000026/train/cpp
#include <iostream>
#include <string>
using namespace std;

class MaxRotate
{
public:
    static long long maxRot(long long n) {
        std::string numStr = std::to_string(n);
        std::string maxNumStr = numStr;
        
        for (size_t i = 0; i < numStr.size() - 1; i++) {
            char temp = numStr[i];
            numStr.erase(i, 1);
            numStr += temp;
            long long rotatedNum = std::stoll(numStr);
            if (rotatedNum > std::stoll(maxNumStr)) {
                maxNumStr = numStr;
            }
        }
        
        return std::stoll(maxNumStr);
    }
};

int main() {
    cout << MaxRotate::maxRot(56789)     << endl;  // 68957
    // cout << MaxRotate::maxRot(38458215)  << endl;  // 85821534
    // cout << MaxRotate::maxRot(195881031) << endl;  // 988103115
    // cout << MaxRotate::maxRot(896219342) << endl;  // 962193428
    // cout << MaxRotate::maxRot(69418307)  << endl;  // 94183076

    return 0;
}
//
#include <algorithm>
#include <string>

class MaxRotate
{
public:
    static long long maxRot(long long n);
};

long long MaxRotate::maxRot(long long n) 
{
    std::string s = std::to_string(n);
    for (int i = 0; i < s.length()-1; ++i)
    {
        std::rotate(s.begin()+i, s.begin()+i+1, s.end());
        n = std::max(stoll(s), n);
    }
    return n;
}
