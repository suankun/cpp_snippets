// https://www.codewars.com/kata/5e96332d18ac870032eb735f/train/cpp
#include <string>

std::string womens_age(unsigned n) {
  std::string sec_digit;
  unsigned base;
  for (unsigned i=n-2; i>=0; i--) {
    if (n%i==0) {
      sec_digit="0";
      base = i;
      break;
    } else if (n%i==1) {
      sec_digit="1";
      base = i;
      break;
    }
  }
  std::string res = std::to_string(n) + "? That's just 2" + sec_digit + ", in base " + std::to_string(base) + "!";
  return res;
}
//
#include <string>

std::string womens_age(unsigned n) {
  return std::to_string(n) + "? That's just 2" + std::to_string(n % 2) +
        ", in base " + std::to_string( n / 2) + "!";
}
