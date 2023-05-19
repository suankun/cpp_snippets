#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int min {list.at(0)};
  for (auto num: list) {
    if (min > num) min = num;
  }
  return min ;
}

///////////////////////////////////////
// #include <vector>
// #include <algorithm>

// int findSmallest(const std::vector<int>& list)
// { 
//   return *std::min_element(list.begin(), list.end());
// }