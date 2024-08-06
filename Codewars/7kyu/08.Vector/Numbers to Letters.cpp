// https://www.codewars.com/kata/57ebaa8f7b45ef590c00000c/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

std::string switcher(const std::vector<std::string>& arr) {
    std::string res;
    for (size_t i {}; i<arr.size(); i++) {
        int charNum = stoi(arr[i]) - 27;
        if (charNum == 0) res+="!";
        else if (charNum == 1) res+="?";
        else if (charNum == 2) res+=" ";
        else {
            char temp = abs(charNum) + 96;
            res+=temp;
        }
    }
    return res;
}

int main() {
    std::vector<std::string> one{"24", "12", "23", "22", "4", "26", "9", "8"};
    std::vector<std::string> two {"12", "28", "25", "21", "25", "7", "11", "22", "15"};
    cout << switcher(one) << endl;  // "codewars"
    cout << switcher(two) << endl;  // "o?bfbtpel"
    
    return 0;
}
//
#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
  std::string s = " zyxwvutsrqponmlkjihgfedcba!? ";
  std::string r;
  for (const std::string& n: arr) r += s[stoi(n)];
  return r;
}
