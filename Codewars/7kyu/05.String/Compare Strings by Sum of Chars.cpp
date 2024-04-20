// https://www.codewars.com/kata/576bb3c4b1abc497ec000065/train/cpp
#include <iostream>
#include <string>
using namespace std;

bool compare(std::string s1, std::string s2)
{
    std::cout << s1 << ',' << s2 << std::endl;
    if (s1.length() == 0 || s2.length() == 0) return true;
    int sumS1 {}, sumS2 {};
    for (size_t i {}; i<s1.length(); i++) {
        char temp = toupper(s1[i]);
        if (temp < 'A' || temp > 'Z') return true;
        sumS1 += temp;
    }
    for (size_t j {}; j<s2.length(); j++) {
        char temp = toupper(s2[j]);
        if (temp < 'A' || temp > 'Z') return true;
        sumS2 += temp;
    }

    return sumS1 == sumS2;
}

int main() {
    cout << boolalpha;
    cout << compare("gF", "FG") << endl;  // true

    return 0;
}
//
// Calculate the char-value of the string
int charvalue(std::string s){
  int sum = 0;

  for(char &c : s){
    if(!std::isalpha(c))
      return 0;
    
    sum += std::toupper(c);
  }
  
  return sum;
}

bool compare(std::string s1, std::string s2)
{
    return charvalue(s1) == charvalue(s2);
}
