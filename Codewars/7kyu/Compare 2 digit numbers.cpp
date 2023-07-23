// https://www.codewars.com/kata/63f3c61dd27f3c07cc7978de/train/cpp
#include <string>
std::string compare(unsigned short a, unsigned short b){
  int cnt {};
  for (int i {}; i<2; i++) {
    int save_b = b;
    int temp_a = a%10;
    for (int j {}; j<2; j++) {
      int temp_b = save_b%10;
      if (temp_a == temp_b) {
        cnt++;
        if (j==0) b/=10;
        else b%=10;
        break;
      }
      save_b/=10;
    }
    a/=10;
  }
  return cnt==0 ? "0%" : cnt==1 ? "50%" : "100%";
}
//
std::string compare(unsigned short a, unsigned short b){
  int d = std::max((a % 10 == b % 10) + (a / 10 == b / 10), (a % 10 == b / 10) + (a / 10 == b % 10));
  return std::to_string(50*d) + "%";
}
