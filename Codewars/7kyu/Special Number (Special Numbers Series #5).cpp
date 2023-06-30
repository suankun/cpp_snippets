// https://www.codewars.com/kata/5a55f04be6be383a50000187/train/cpp
#include <string>

using namespace std; 

string specialNumber (int number)
{
  while (number>0) {
    int temp_num = number%10;
    if (temp_num>5) return "NOT!!";
    number/=10;
  }
  return "Special!!";
}
//
#include <string>

std::string specialNumber(int number) {
  while (number != 0) {
    if (number % 10 > 5)
      return "NOT!!";
    number /= 10;
  }
  return "Special!!";
}
