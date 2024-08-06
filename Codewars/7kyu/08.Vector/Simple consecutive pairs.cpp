// https://www.codewars.com/kata/5a3e1319b6486ac96f000049/train/cpp
#include <vector>
int pairs(std::vector<int>arr){
    int count {};
    for (size_t i {}; i<arr.size(); i+=2) {
        if (arr[i]==arr[i+1]-1 || arr[i]==arr[i+1]+1) count++;
    }
    return count;
}
//
#include <cstdlib>

int pairs(std::vector<int>arr){
  int res=0;
  for (size_t i=0; i<arr.size()-1; i+=2) {
    if (abs(arr[i+1]-arr[i]) == 1)  res++;
  }
  return res;
}