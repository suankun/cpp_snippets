// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1, w2;
        for (auto w: word1) w1+=w;
        for (auto w: word2) w2+=w;

        return w1==w2;
    }
};

int main() {
    Solution s1;
    cout << boolalpha;
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    cout << s1.arrayStringsAreEqual(word1, word2) << endl;

    return 0;
}
