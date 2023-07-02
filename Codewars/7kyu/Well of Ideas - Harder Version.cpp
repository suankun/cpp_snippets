// https://www.codewars.com/kata/57f22b0f1b5432ff09001cab/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string well(const std::vector<std::vector<std::string>>& arr) {
    int count {};
    for (size_t i {}; i<arr.size(); i++) {
        for (size_t j {}; j<arr[i].size(); j++) {
            std::string temp;
            for (size_t k {}; k<arr[i][j].length(); k++) {
                temp += tolower(arr[i][j][k]);
            }
            if (temp == "good") count++;
        }
    }

    return count==0 ? "Fail!" : count>2 ? "I smell a series!" : "Publish!";
}

int main() {
    std::vector<std::vector<std::string>> one = {{"gOOd", "bad", "BAD", "bad", "bad"},
                                     {"bad", "bAd", "bad"},
                                     {"GOOD", "bad", "bad", "bAd"}};
    cout << well(one) << endl;  // "Publish!"
    
    return 0;
}
//
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

std::string well(const std::vector<std::vector<std::string>>& arr) {
  unsigned count  = 0;
  for (auto& array : arr) 
    for (auto idea : array) {
      std::transform(idea.begin(), idea.end(), idea.begin(), tolower);
      if (idea == "good") count++;
    }
  return (count == 0) ? "Fail!" : (count < 3) ? "Publish!" : "I smell a series!";
}
