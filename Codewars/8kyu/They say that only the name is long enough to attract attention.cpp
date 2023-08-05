// https://www.codewars.com/kata/574b1916a3ebd6e4fa0012e7/train/cpp
#include <iostream>
using namespace std;

#include <string>

bool isOpposite(const std::string& s1, const std::string& s2) {
    if (s1.length()==0) return false;
    if (s1.length() != s2.length()) return false;
    for (size_t i {}; i<s1.length(); i++) {
    // char check1 = s1[i];
    // char check2 = s2[i]+32;
    if (s1[i] >= 'a' && s1[i] <= 'z') {
        if (s1[i] == s2[i]+32) continue;
        else return false;
    }
    if (s1[i] >= 'A' && s1[i] <= 'Z') {
        if (s1[i] == s2[i]-32) continue;
        else return false;
    }
    }
    return true;
}
//
bool isOpposite(const std::string& s1, const std::string& s2) {
  if(s1.empty() || s1.size() != s2.size()) return 0;
  
  for(int i=-1;++i<s1.size();)
    if(::abs(s1[i] - s2[i]) != 32) return 0;
  
  return 1;
}


int main() {
    cout << isOpposite("vEMARnkeAY", "VemarNKEayJp") << endl;  // false

    return 0;
}
