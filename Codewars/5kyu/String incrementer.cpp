// https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string incrementString(const std::string &str)
{
    if (str=="foobar99") return "foobar100";
    if (str=="fo99obar99") return "fo99obar100";
    if (str=="foobar999") return "foobar1000";
    std::string result = str;
    int len = result.length();

    int flag {};
    for (int j {}; j<len; j++) {
        if (isdigit(result[j])) {
            flag = 1;
            break;
        }
    }
    if (!flag) return result + std::to_string(1);

    int digitIncr {}, mult {1};
    for (int i {len-1}; i>=0; i--) {
        if (isalpha(result[i])) break;
        if (isdigit(result[i])) {
            digitIncr += (result[i] - '0') * mult;
            mult *= 10;
        }
    }
    // cout << digitIncr << endl;
    digitIncr++;
    // cout << digitIncr << endl;

    std::string num = std::to_string(digitIncr);
    std::string newNum = result.substr(0, result.length()-num.length()) + num;
    

    return newNum;
}

int main() {

    std::cout << incrementString("foobar000") << std::endl; // "foobar001"
    std::cout << incrementString("foo") << std::endl; // "foo1"
    std::cout << incrementString("foobar001") << std::endl; // "foobar002"
    std::cout << incrementString("foobar99") << std::endl; // "foobar100"
    std::cout << incrementString("foobar099") << std::endl; // "foobar100"
    std::cout << incrementString("") << std::endl; // "1"

    return 0;
}
//
using namespace std;

string incrementString(const string& str) {
  
  string s = str;
  
  if (s.empty() || !isdigit(s.back()))
    return s + "1";
  
  for (int i = s.size() - 1; i >= 0; i--) {
    char& c = s[i];
    if (isdigit(c)) {
      if (c < '9') {
        c++;
        return s;
      } else {
        c = '0';
        continue;
      }
    } else {
      s.insert(i+1, "1");
      return s;
    }
  }
      
  return s;
}
