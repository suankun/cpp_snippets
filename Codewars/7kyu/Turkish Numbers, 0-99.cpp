// https://www.codewars.com/kata/5ebd53ea50d0680031190b96/train/cpp
#include <iostream>
#include <string>
#include <vector>

std::string getTurkishNumber(unsigned int n) {
  std::cout << n << std::endl;
  std::vector<std::string> oneDigit {"sıfır", "bir", "iki", "üç", "dört", "beş",
                                     "altı", "yedi", "sekiz", "dokuz"};
  std::vector<std::string> twoDigit {"on", "yirmi", "otuz", "kırk", "elli", "altmış",
                                     "yetmiş", "seksen", "doksan"};
  return n<10 ? oneDigit[n] : n%10==0 ? twoDigit[n/10-1] : twoDigit[n/10-1] + " " + oneDigit[n%10];
}
//
#include <string>
#include <map>

using namespace std;

map<int, string>nums = {{0, "sıfır"}, {1, "bir"}, {2, "iki"}, {3, "üç"}, {4, "dört"},
                        {5, "beş"}, {6, "altı"}, {7, "yedi"}, {8, "sekiz"}, {9, "dokuz"},
                        {10, "on"}, {20, "yirmi"}, {30, "otuz"}, {40, "kırk"}, {50, "elli"},
                        {60, "altmış"}, {70, "yetmiş"}, {80, "seksen"}, {90, "doksan"}};

string getTurkishNumber(unsigned int n) {
  return (n > 9 && n%10 != 0)? nums[n - n%10] + " " + nums[n%10] : nums[n]; 
}
