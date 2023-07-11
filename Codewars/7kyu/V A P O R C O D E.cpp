// https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string vaporcode(const std::string &str) {
  std::string result;
  for (size_t i {}; i<str.length(); i++) {
    if (str[i] == ' ') continue;
    result += std::toupper(str[i]);
    result += "  ";
  }
  result.pop_back();
  result.pop_back();
  return result;
}

int main() {
    cout << vaporcode("Let's go to the movies") << endl;  // "L  E  T  '  S  G  O  T  O  T  H  E  M  O  V  I  E  S"

    return 0;
}
//
#include<string>

std::string vaporcode(const std::string &str) {
  std::string VAPORWAVE = "";
  
  for( auto i : str ){
    if( i != ' ' ){
      VAPORWAVE += toupper( i );
      VAPORWAVE += "  ";
    }
  }
  
  return VAPORWAVE.substr(0,VAPORWAVE.length()-2);
}
