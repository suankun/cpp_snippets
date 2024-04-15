// https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/cpp
#include <iostream>
#include <vector>

std::vector<int> digitize(unsigned long n) 
{        
  std::vector <int> nums;
  if (n == 0) {
    nums.push_back(n);
  }
  while(n != 0) {
    int temp_num = n % 10;
    nums.push_back(temp_num);
    n /= 10;
  }
  return nums;
}
/////////////
std::vector<int> digitize(unsigned long n) 
{     
    std::vector<int> digits;
   
    do {
        digits.push_back (n % 10);
        n /= 10;
    } while (n > 0);
   
    return digits;
}