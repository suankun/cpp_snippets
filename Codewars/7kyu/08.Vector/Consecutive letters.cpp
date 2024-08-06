// https://www.codewars.com/kata/5ce6728c939bf80029988b57/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(std::string s){
    // put the letters in vector with corresponding ascii number
    std::vector<int> letters;
    for (auto ch: s) letters.push_back(ch);

    // sort the vector
    sort(letters.begin(), letters.end());

    // check if the numbers are consecutive
    for (size_t i {}; i<letters.size()-1; i++) if (letters[i]+1 != letters[i+1]) return false;

    return true;
}

int main() {
    string one {"abc"};
    string two {"abd"};
    string three {"dabc"};
    cout << boolalpha;
    cout << solve(one) << endl;  // true
    cout << solve(two) << endl;  // false
    cout << solve(three) << endl;  // true
    return 0;
}
//
bool solve(std::string s){
  std::sort(s.begin(), s.end());
  for (int i = 0; i < s.size()-1; i++)
  {
    if (s[i]+1 != s[i+1]) return false;
  }
  return true;
}
