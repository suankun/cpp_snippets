// https://www.codewars.com/kata/5a04133e32b8b998dc000089/train/cpp
#include <iostream>
#include <vector>

std::vector<int> solve(std::vector<int> array){
    std::vector<int> solution;
    for (size_t i {}; i<array.size()-1; i++) {
        for (size_t j {i+1}; j<array.size(); j++) {
            if (array[i]<=array[j]) break;
            if (j == array.size()-1) solution.push_back(array[i]); 
        }
    }
    solution.push_back(array[array.size()-1]);
  
    return solution;
}
//
#include <vector>

std::vector<int> solve(std::vector<int> array){
  std::vector<int> output;
  for (int i = 0; i < array.size(); i++)
  {
    bool dom = true;
    for (int j = i+1; j < array.size(); j++)
    {
      if (array[i] <= array[j]) dom = false;
    }
    if (dom) output.push_back(array[i]);
  }
  return output;
}