// https://leetcode.com/problems/valid-anagram/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s==t) ? true : false;
    }
};

int main() {
    Solution s1;
    string s = "anagram", t = "nagaram";
    cout << s1.isAnagram(s, t) << endl;
    // Output: true

    string s2 = "rat", t2 = "car";
    cout << s1.isAnagram(s2, t2);
    // Output: false

    return 0;
}
