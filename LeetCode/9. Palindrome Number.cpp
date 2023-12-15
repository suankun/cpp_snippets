// https://leetcode.com/problems/palindrome-number/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str_x=std::to_string(x);
        for (size_t i=0; i<str_x.length()/2; i++) if (str_x[i]!=str_x[str_x.length()-i-1]) return false;
        return true;
    }
};

int main() {
    Solution s1;
    cout << boolalpha;
    cout << s1.isPalindrome(121) << endl;
    cout << s1.isPalindrome(-121) << endl;

    return 0;
}
