// https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/cpp
#include <iostream>
#include <string>
#include <map>
using namespace std;

std::map<char, unsigned> count(const std::string& string) {
    std::map<char, unsigned> res;
    for (size_t i {}; i<string.length(); i++) {
        res[string[i]]++; 
    }
    return res;
}

int main() {

    string one {"aba"};  // { 'a', 2 }, { 'b', 1 }
    std::map<char, unsigned> res = count(one);
    for (auto &pair: res) std::cout << pair.first << ", " << pair.second << endl;
    

    return 0;
}
//
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
  std::map<char, unsigned> chars;
  for(char x : string) chars[x]++;
  return chars;
}
