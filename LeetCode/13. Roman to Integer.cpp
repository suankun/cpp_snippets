// https://leetcode.com/problems/roman-to-integer/
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        size_t i;
        for (i=0; i<s.length(); i++) {
            if (s[i]=='I' && s[i+1]=='V' && i<s.length()) {
                num+=4;
                i++;
            } else if (s[i]=='I' && s[i+1]=='X' && i<s.length()) {
                num+=9;
                i++;
            } else if (s[i]=='I') {
                num+=1;
            }

            else if (s[i]=='V') {
                num+=5;
            }

            else if (s[i]=='X' && s[i+1]=='L' && i<s.length()) {
                num+=40;
                i++;
            } else if (s[i]=='X' && s[i+1]=='C' && i<s.length()) {
                num+=90;
                i++;
            } else if (s[i]=='X') {
                num+=10;
            }
            
            else if  (s[i]=='L') {
                num+=50;
            }
            
            else if (s[i]=='C' && s[i+1]=='D' && i<s.length()) {
                num+=400;
                i++;
            } else if (s[i]=='C' && s[i+1]=='M' && i<s.length()) {
                num+=900;
                i++;
            } else if (s[i]=='C') {
                num+=100;
            }
            
            else if (s[i]=='D') {
                num+=500;
            }
            
            else if (s[i]=='M') {
                num+=1000;
            }
        }

        return num;
    }
};

int main() {
    Solution s1;
    // cout << s1.romanToInt("III") << endl;  // 3; III = 3
    // cout << s1.romanToInt("LVIII") << endl;  // 58; L = 50, V= 5, III = 3
    cout << s1.romanToInt("MCMXCIV") << endl;  // 1994; M = 1000, CM = 900, XC = 90 and IV = 4

    return 0;
}
//
#include <unordered_map>
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
};
