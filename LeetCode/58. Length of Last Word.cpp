// https://leetcode.com/problems/length-of-last-word/description/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
        string word;
        int len;
        while (iss >> word)
            len = word.length();

        return len;
    }
};
//
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int f;
        char p = ' ';
        for(int i=n-1;i>=0;i--){
            if(s[i] != p){
                f=i;
                break;
            }
        }
        int count=0;
        for(int i=f; i>=0; i--){
            if(s[i] == p)
            break;

            count++;
        }

        return count;


    }
};
