#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count {};
  for (auto sheep: arr){
    if (sheep == true) count++;
  }
  return count;
}


//////////////////////////////////////////////////
#include <algorithm>
#include <vector>
int count_sheep(std::vector<bool> arr) 
{
    return std::count(arr.begin(), arr.end(), true);
}