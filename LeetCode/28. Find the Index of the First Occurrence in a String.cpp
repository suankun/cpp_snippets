// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        bool check = haystack.find(needle) != string::npos;
        int idx = -1;
        if (check)
            idx = haystack.find(needle);
        return idx;
    }
};

int main() {
    Solution res;
    cout << res.strStr("sadbutsad", "sad") << endl;  // 0
    cout << res.strStr("leetcode", "leeto") << endl;  // -1

    return 0;
}
//
class Solution {
public:
    int strStr(string s, string t) {
        if(s.size()<t.size()) return -1;
        for(int i=0;i<=s.size()-t.size();i++){
            if(s.substr(i,t.size()) == t) return i;
        }
        return -1;
    }
};