// https://www.codewars.com/kata/5a91a7c5fd8c061367000002/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int minimumSteps (vector <int> numbers ,  int input)
{
  sort(numbers.begin(), numbers.end());
  int number_of_operations {};
  int sum {};
  for (size_t i {}; i<numbers.size(); i++) {
    sum+=numbers[i];
    if (sum>=input) break;
    number_of_operations++;
  }
  return number_of_operations;
}

int main() {
    vector<int> nums {19,98,69,28,75,45,17,98,67};
    int num {464};
    cout << minimumSteps(nums, num) << " ";  // 8
    cout << endl;

    return 0;
}
//
#include <vector>
#include <algorithm>
using namespace std; 

int minimumSteps (vector <int> numbers ,  int input)
{
  sort(numbers.begin(),numbers.end());
  int s=numbers[0];
  int k=0;
  while (s<input)
  {
    k++;
    s+=numbers[k];
  }
  return k;
}
