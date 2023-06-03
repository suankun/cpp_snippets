// https://www.codewars.com/kata/56a5d994ac971f1ac500003e/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string> &strarr, int k);
};

string LongestConsec::longestConsec(const std::vector<std::string> &strarr, int k) {
    std::string longest_str;
    if (strarr.size()==0 || k>strarr.size() || k<=0) return longest_str;
    for (size_t i {}; i<strarr.size()-k+1; i++) {
        std::string temp_word;
        for (int j {}; j<k; j++) {
            temp_word += strarr[i+j];
        }
        if (temp_word.size()>longest_str.size()) longest_str = temp_word;
    }
    return longest_str;
}

int main() {
    std::vector<string> test = {"tree", "foling", "trashy", "blue", "abcdef", "uvwxyz"};
    int k {2};
    // folingtrashy
    // std::vector<string> test = {"ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh"};
    // int k {1};
    // // oocccffuucccjjjkkkjyyyeehh
    LongestConsec one;
    std::string res = one.longestConsec(test, k); 
    cout << res;

    return 0;
}
///////////////
