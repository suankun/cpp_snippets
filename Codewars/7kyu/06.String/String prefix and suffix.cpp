// https://www.codewars.com/kata/5ce969ab07d4b7002dcaa7a1/train/cpp
#include <iostream>
using namespace std;

int solve(std::string s) {
    int len = s.length();
    int cnt = 0;

    for (int i = 1; i < len/2+1; i++) {
        if (s.substr(0, i) == s.substr(len - i, i)) {
            cnt = i;
        }
    }

    return cnt;
}

int main() {
    // cout << solve("abcd")     << endl;  // 0
    // cout << solve("abcda")    << endl;  // 1
    cout << solve("abcdabc")  << endl;  // 3
    // cout << solve("abcabc")   << endl;  // 3
    // cout << solve("abcabca")  << endl;  // 1
    // cout << solve("abcdabcc") << endl;  // 0
    // cout << solve("aaaaa")    << endl;  // 2
    // cout << solve("aaaa")     << endl;  // 2
    // cout << solve("aaa")      << endl;  // 1
    // cout << solve("aa")       << endl;  // 1
    // cout << solve("a")        << endl;  // 0
    // cout << solve("acbacc")   << endl;  // 0

    return 0;
}
