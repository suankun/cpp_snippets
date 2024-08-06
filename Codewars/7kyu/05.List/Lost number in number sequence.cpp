// https://www.codewars.com/kata/595aa94353e43a8746000120/train/cpp
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int findDeletedNumber(list<int> startingList, list<int> mixedList)
{
    for (int num : startingList)
        if (find(mixedList.begin(), mixedList.end(), num) == mixedList.end())
            return num;
  
    return 0;
}
//
#include <numeric>

using namespace std;


int findDeletedNumber(list<int> startingList, list<int> mixedList)
{
    int sumStarting = std::accumulate(startingList.begin(), startingList.end(), 0);
    
    int sumMixed = std::accumulate(mixedList.begin(), mixedList.end(), 0);
    
    return sumStarting - sumMixed;
}
