// https://leetcode.com/problems/plus-one/description/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& v) {
    for (int& n : v)
        cout << n;
    cout << endl;
}

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // case if all number are 9s
        bool allNines = std::all_of(digits.begin(), digits.end(), [](int i){ return i == 9; });
        if (allNines) {
            std::fill(digits.begin(), digits.end(), 0);
            digits.insert(digits.begin(), 1);
            return digits;
        }

        // last 5 number of the vector to number
        long long toNum = 0;
        int idx = digits.size() <= 9 ? 0 : digits.size() - 10;
        for (size_t i = idx; i < digits.size(); i++)
            toNum = toNum * 10 + digits[i];

        // add one to the nubmer
        toNum++;

        // pop last 5 numbers
        string toStr = std::to_string(toNum);
        int n = toStr.length() > digits.size() ? digits.size() : toStr.length();
        while (n--)
            digits.pop_back();        

        // push back the last five numbers to the vector
        for (size_t i = 0; i < toStr.length(); i++)
            digits.push_back(toStr[i] - '0');

        return digits;
    }
};

int main() {
    Solution res;

    // vector<int> oneVec = {9};
    // vector<int> one = res.plusOne(oneVec);
    // printVector(one);

    // vector<int> twoVec = {4, 3, 2, 1};
    // vector<int> two = res.plusOne(twoVec);
    // printVector(two);

    // vector<int> threeVec = {1, 2, 3};
    // vector<int> three = res.plusOne(threeVec);
    // printVector(three);

    // vector<int> fourVec = {1, 0};
    // vector<int> four = res.plusOne(fourVec);
    // printVector(four);

    // vector<int> fiveVec = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    // vector<int> five = res.plusOne(fiveVec);
    // printVector(five);

    // vector<int> sixVec = {5, 6, 2, 0, 0, 4, 6, 2, 4, 9};
    // vector<int> six = res.plusOne(sixVec);
    // printVector(six);

    vector<int> sevenVec = {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};
    vector<int> seven = res.plusOne(sevenVec);
    printVector(seven);

    return 0;
}
