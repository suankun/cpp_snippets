// https://www.codewars.com/kata/5a53a17bfd56cb9c14000003/train/cpp
#include <iostream>
#include <string>
using namespace std;

string disariumNumber(int number) {
    std::string num_to_str = std::to_string(number);
    int sum {};
    for (size_t i {}; i<num_to_str.length(); i++) {
        char digit = num_to_str[i];
        std::string digit_to_str = std::to_string(digit);
        int str_to_int = stoi(digit_to_str)-48;
        for (size_t j {}; j<i; j++) {
            str_to_int*=str_to_int;
        }
        sum += str_to_int;
    }
    
    return sum==number ? "Disarium !!" : "Not !!";
}

int main() {

    cout << disariumNumber(89) << endl;

    return 0;
}
//////////
#include <string>

std::string disariumNumber (int number)
{
  std::string s=std::to_string(number); int t=0;
  for(int i=0; i<s.size(); i++) {
    int d=s[i]-'0', q=d;
    for(int j=0; j<i; j++) q*=d;
    t+=q;
  }
  return t==number? "Disarium !!" : "Not !!";
}