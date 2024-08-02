// https://www.codewars.com/kata/54f9c37106098647f400080a/train/cpp
#include <iostream>
#include <vector>
#include <functional>

std::vector<int> dropWhile(std::vector<int> arr, std::function<bool(int)> pred)
{
    std::vector<int>::iterator it = arr.begin();
    
    while (it != arr.end() && pred(*it)) // Find the first element that does not satisfy the predicate
        it++;
    
    std::vector<int> result(it, arr.end());  // Create a new vector from the first element that does not satisfy the predicate to the end
    
    return result;
}
//
#include <algorithm>
#include <vector>

template <class Pred>
std::vector<int> dropWhile(const std::vector<int>& arr, Pred pred)
{
    return {std::find_if_not(arr.begin(), arr.end(), pred), arr.end()};
}
