// https://www.codewars.com/kata/5a262cfb8f27f217f700000b/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string solve(std::string a, std::string b) {
    std::string res;
  
    for (size_t i {}; i<a.length(); i++) {
        for (size_t j {}; j<b.length(); j++) {
            if (a[i] == b[j]) break;
            if (j == b.length()-1) res+=a[i];
        }
    }
  
    for (size_t i {}; i<b.length(); i++) {
        for (size_t j {}; j<a.length(); j++) {
            if (b[i] == a[j]) break;
            if (j == a.length()-1) res+=b[i];
        }
    }
  
    return res;
}

int main() {

    cout << solve("abcd","xyz") << endl;  // "abcdxyz"
    
    return 0;
}
//
#include <unordered_set>

std::string solve(std::string a, std::string b) 
{
  std::string res;
  std::unordered_set<char> setA(a.begin(), a.end());
  std::unordered_set<char> setB(b.begin(), b.end());
  for(char ch : a)
    if(setB.find(ch) == setB.end())
      res.append(1, ch);
  for(char ch : b)
    if(setA.find(ch) == setA.end())
      res.append(1, ch);
  return res;
}
