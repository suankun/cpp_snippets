// https://www.codewars.com/kata/56b0f6243196b9d42d000034/train/cpp
#include <iostream>
#include <vector>

unsigned long long int sum_factorial(std::vector<int> vi){
  
  unsigned long long int temp_sum {1}, total_sum {};
  for (size_t i {}; i<vi.size(); i++) {
    unsigned long long int temp_num = vi[i];
    for (unsigned long long int j {temp_num}; j>0; j--) {
      temp_sum *= j;
    }
    total_sum += temp_sum;
    temp_sum = 1;
  }
  return total_sum;
}
//
#include <vector>

unsigned long long int factorial(int n)
{
    return n < 1 ? 1 : n * factorial(n - 1);
}

unsigned long long int sum_factorial(std::vector<int> vi)
{
    unsigned long long int sum = 0;
    
    for(auto value : vi)
        sum += factorial(value);
    
    return sum;
}
//
#include <algorithm>
unsigned long long sum_factorial(std::vector<int> v){
    unsigned long long R = 0, temp = 1, j = 2;
    std::sort(v.begin(), v.end());
    for (int i = 0, len = v.size(); i < len; ++i, R += temp)
        while (j <= v[i])
            temp *= j++;
    return R;
}
