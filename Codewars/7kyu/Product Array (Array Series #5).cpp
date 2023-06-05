// https://www.codewars.com/kata/5a905c2157c562994900009d/train/cpp
#include <iostream>
#include <vector>
using namespace std;


vector <int> productArray (vector <int> numbers)
{
  vector<int> res;
  int prod {1};
  for (size_t i {}; i<numbers.size(); i++) {
    prod=1;
    for (size_t j {}; j<numbers.size(); j++) {
      if (j==i) continue;
      prod*=numbers[j];
    }
    res.push_back(prod);
  }
  return res;
}
int main() {
    vector<int> nums {1,5,2};  // 10,2,5
    vector<int> res = productArray(nums);
    for (auto num: res) cout << num << " ";
    cout << endl;

    return 0;
}
///////////////
