// https://www.codewars.com/kata/53697be005f803751e0015aa/train/cpp
#include <iostream>
#include <string>
using namespace std;	

std::string encode(const std::string &str) {
  std::string encodedStr;
  for (size_t i {}; i<str.length(); i++) {
    if (str[i]=='a') encodedStr+='1';
    else if (str[i]=='e') encodedStr+='2';
    else if (str[i]=='i') encodedStr+='3';
    else if (str[i]=='o') encodedStr+='4';
    else if (str[i]=='u') encodedStr+='5';
    else encodedStr+=str[i];
  }
  return encodedStr;
}

std::string decode(const std::string &str) {
  std::string decodedStr;
  for (size_t i {}; i<str.length(); i++) {
    if (str[i]=='1') decodedStr+='a';
    else if (str[i]=='2') decodedStr+='e';
    else if (str[i]=='3') decodedStr+='i';
    else if (str[i]=='4') decodedStr+='o';
    else if (str[i]=='5') decodedStr+='u';
    else decodedStr+=str[i];
  }
  return decodedStr;
}

int main() {

    cout << encode("hello") << endl;
    cout << decode("h2ll4") << endl;

    return 0;
}
/////////
#include <string>

std::string encode(const std::string& str) {
    std::string res = str;
    for (int i = 0; i < res.length(); i++) {
        if (res[i] == 'a') res[i] = '1';
        if (res[i] == 'e') res[i] = '2';
        if (res[i] == 'i') res[i] = '3';
        if (res[i] == 'o') res[i] = '4';
        if (res[i] == 'u') res[i] = '5';
    }
    return res;
}

std::string decode(const std::string& str) {
    std::string res = str;
    for (int i = 0; i < res.length(); i++) {
        if (res[i] == '1') res[i] = 'a';
        if (res[i] == '2') res[i] = 'e';
        if (res[i] == '3') res[i] = 'i';
        if (res[i] == '4') res[i] = 'o';
        if (res[i] == '5') res[i] = 'u';
    }
    return res;
}
