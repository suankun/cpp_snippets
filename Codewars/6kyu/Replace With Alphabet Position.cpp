// https://www.codewars.com/kata/546f922b54af40e1e90001da/train/cpp
#include <iostream>
#include <string>
using namespace std;

#include <string>
using namespace std;

std::string alphabet_position(const std::string &text) {
  std::string res;
  for (size_t i {}; i<text.length(); i++) {
    int temp_num {};
    if (isupper(text[i])) {
        temp_num=text[i]-64;
    } else if (islower(text[i])) {
        temp_num=text[i]-96;
    } else continue;
    res+=to_string(temp_num);
    res+=' '; 
  }
  
  return res.substr(0, res.size() - 1);
}

int main() {
    cout << alphabet_position("The sunset sets at twelve o' clock."); 
    // "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"
    // cout << alphabet_position("e."); 
    // // "5"

    return 0;
}
///////////////
#include <string>

using namespace std;

std::string alphabet_position(const std::string &text) {
  string res = "";
  
  for (char c : text) {
    c = tolower(c);
    if ('a' <= c && c <= 'z') {
      if (res != "") {
        res += " ";
      }
      res += to_string(c - 'a' + 1);
    }
  }
  
  return res;
}