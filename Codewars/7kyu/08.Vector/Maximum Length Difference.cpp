// https://www.codewars.com/kata/5663f5305102699bad000056/train/cpp
#include <iostream>
#include <vector>
using namespace std;

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2) {
        if (empty(a1) || empty(a2)) return -1;
        int max_diff {};
        for (size_t i {}; i<a1.size(); i++) {
            for (size_t j {}; j<a2.size(); j++) {
                int first_string = a1[i].length();
                int second_string = a2[j].length();
                if (abs(first_string-second_string) > max_diff) max_diff=abs(first_string-second_string);
            }
        }
        return max_diff;
    };
};


int main() {

    MaxDiffLength one;
    vector<string> arr1 {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
    vector<string> arr2 {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
    cout << one.mxdiflg(arr1, arr2);

    return 0;
}