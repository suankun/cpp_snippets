// https://www.codewars.com/kata/58880c6e79a0a3e459000004/train/cpp
#include <vector>
int house_numbers_sum(const std::vector<int> &arr)
{
    int sum=0;
    for (auto n: arr) {
      if (n!=0) sum+=n;
      else break;
    }
    return sum;
}
//
int house_numbers_sum(const std::vector<int> &arr)
{
    int result=0,i=0;
    while(arr[i]) result+=arr[i++];
    return result;
}
