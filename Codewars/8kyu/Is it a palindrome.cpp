// https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/cpp
#include <iostream>
#include <string>
using namespace std;

bool isPalindrom (const std::string& str)
{
    // make string case insensitive
    std::string lowercase_str;
    for (auto ch: str) lowercase_str+=tolower(ch);

    // compare the chars from the first part with those from the second part of the word
    int len = lowercase_str.length();
    for (size_t i {}; i<len/2; i++) {
        char check1 = lowercase_str[i];
        char check2 = lowercase_str[len-i-1];
        if (lowercase_str[i]==lowercase_str[len-i-1]) continue;
        else return false;
    }

    return true;
}

int main() {
    cout << isPalindrom("Abba") << endl;

    return 0;
}
////////////
#include <string>

bool isPalindrom (const std::string& str) {
  std::string::size_type slen = str.size();
  for(std::string::size_type i=0;i<slen/2;i++)
    if(std::tolower(str[i]) != std::tolower(str[slen-i-1])) return false;
  return true;
}
