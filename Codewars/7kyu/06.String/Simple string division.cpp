// https://www.codewars.com/kata/5b83c1c44a6acac33400009a/train/cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long solve(std::string st, int k) {
    long long res = 0;
    if (k == 0)
        return stoll(st);
    
    size_t subStrLen = st.length() - k;

    for (size_t i = 0; i < st.length(); i++) {
        long long tempNum = stoll(st.substr(i, subStrLen));
        if (res < tempNum)
            res = tempNum;
    }

    return res;
}

int main() {
    cout << solve("123",1)   << endl;  //  23
    cout << solve("1234",1)  << endl;  // 234
    cout << solve("1234",2)  << endl;  //  34
    cout << solve("1234",3)  << endl;  //   4
    
    return 0;
}
//
long long solve(const std::string &s, size_t k) {
    long long max = 0;
    for (size_t i = 0, h = s.size() - k; i <= k; ++i)
        max = std::max(max, std::stoll(s.substr(i, h)));
    return max;
}
