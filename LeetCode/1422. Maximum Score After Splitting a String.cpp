// https://leetcode.com/problems/maximum-score-after-splitting-a-string/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        string left, right;
        int left_sum=0, right_sum=0, score=0;
        for (size_t i=0; i<s.length()-1; i++) {
            left= s.substr(0, i+1);
            right=s.substr(i+1, s.length());
            // cout << left << ':' << right << ';';
            for (size_t j=0; j<left.length(); j++) if (left[j]=='0') left_sum++;
            for (size_t k=0; k<right.length(); k++) if (right[k]=='1') right_sum++;
            if (score<(left_sum+right_sum)) score=(left_sum+right_sum);
            // cout << left_sum << ',' << right_sum << ',' << score << endl;
            left_sum=0; right_sum=0;
        }
        return score;
    }
};

int main() {
    Solution s1;
    // cout << s1.maxScore("011101") << endl;  // 5
    cout << s1.maxScore("00111")  << endl;  // 3

    return 0;
}
