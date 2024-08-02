// https://www.codewars.com/kata/5a512f6a80eba857280000fc/train/cpp
#include <vector>
#include <algorithm>
using namespace std ;

int nthSmallest (vector<int> passed , int nSmallest)
{
  sort(passed.begin(), passed.end());
  return passed[nSmallest-1]; 
}
//
#include <vector>
using namespace std;

int nthSmallest (vector<int> passed, int n)
{
   sort(passed.begin(), passed.end());
   return passed[--n]; 
}
