// https://www.codewars.com/kata/5a66ea69e6be38219f000110/train/cpp
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(std::string &s) {
    for (size_t i=0; i<s.length()/2; i++) {
        if (s[i]!=s[s.length()-i-1]) return false;
    }
    return true;
}

bool solve(std::string s){
    if (isPalindrome(s) && s.length()%2==0) return false;
    int cnt=0;
    for (size_t i=0; i<s.length()/2; i++) {
        if (s[i]!=s[s.length()-i-1]) {
            cnt++;
            if (cnt>1) return false;
        }
    }

    return true;
}

int main() {
    cout << boolalpha;
    cout << solve("abba")  << endl;  // false
    cout << solve("abbaa")  << endl;  // true
    cout << solve("abbx")  << endl;  // true
    cout << solve("aa")  << endl;  // false
    cout << solve("ab")  << endl;  // true
    cout << solve("abcba")  << endl;  // true
    cout << solve("tdivcbtidgwrbkuxgisdyffydsigxukbrwgditbcvidtv")  << endl;  // false

    return 0;
}
//
bool solve(std::string s)
{
	int count = 0, n = s.length();
	for (int i = 0; i < n; i++) if (s[i] == s[n - i - 1]) count++;

	return count == n && (n & 1) || count == n - 2;
}
