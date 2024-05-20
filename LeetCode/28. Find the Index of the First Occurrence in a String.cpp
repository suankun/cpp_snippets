// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleSize = needle.length();
        for (size_t i = 0; i < haystack.length() - needleSize; i++) {
            string check = haystack.substr(i, needleSize);
            if (check == needle)
                return i;
        }
        return -1;
    }
};

int main() {
    Solution res;
    cout << res.strStr("sadbutsad", "sad") << endl;  // 0
    cout << res.strStr("leetcode", "leeto") << endl;  // -1

    return 0;
}
