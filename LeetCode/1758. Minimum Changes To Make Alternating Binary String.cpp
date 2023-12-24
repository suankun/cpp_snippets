// https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int minOperations(string s) {
        int op_cnt1=0, op_cnt2=0;  // op_cnt1 when the str starting with 0 and op_snt2 when starts with 1
        for (size_t i=0; i<s.length(); i++)  s[i]!=((i%2==0) ? '0' : '1') ? op_cnt1++ : op_cnt2++;
        return op_cnt1<=op_cnt2 ? op_cnt1 : op_cnt2;
    }
};

int main() {
    Solution s1;
    cout << s1.minOperations("0100") << endl;  // 1
    cout << s1.minOperations("10")   << endl;  // 0
    cout << s1.minOperations("1111") << endl;  // 2
    cout << s1.minOperations("10010100") << endl;  // 3
    cout << s1.minOperations("101101111") << endl;  // 4

    return 0;
}
