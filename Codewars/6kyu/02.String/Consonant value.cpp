// https://www.codewars.com/kata/59c633e7dcc4053512000073/train/cpp
#include <iostream>
#include <string>
using namespace std;


int solve(const std::string &s)
{
    int maxSubstr {};
    int tempSum {};
    std::string vowels = "aouei";
    for (auto ch: s) {
        if (vowels.find(ch) != std::string::npos) {
            if (tempSum > maxSubstr) maxSubstr = tempSum;
            tempSum = 0;
            continue;
        }
        tempSum+=(ch-'a'+1);
    }
    if (tempSum > maxSubstr) maxSubstr = tempSum;
    
    return maxSubstr;
}

int main() {
    cout << solve("az") << endl;  // 26

    return 0;
}
//
#include <string>

int solve(const std::string &s) {
    int max = 0, test = 0;
    for (auto c: s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            max = std::max(max, test);
            test = 0;
        }
        else test += c - 'a' + 1;
    }
    return std::max(max, test);
}