// https://www.codewars.com/kata/57f759bb664021a30300007d/train/cpp
#include <string>

std::string switcheroo(const std::string &s) {
  std::string res;
  for (size_t i {}; i<s.length(); i++) {
    if (s[i]=='a') res+='b';
    else if (s[i]=='b') res+='a';
    else res+=s[i];
  }
  return res;
}
///////////
#include <string>
#include <algorithm>

std::string switcheroo(const std::string &s) {
  std::string r = s;
  transform(r.begin(),r.end(),r.begin(),[](char c) {return c == 'a' ? 'b' : c == 'b' ? 'a' : c;});
  return r;
}