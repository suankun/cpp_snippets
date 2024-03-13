// https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp
#include <vector>
#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  int cat {}, dog {};
  for (int i {1}; i<=humanYears; i++) {
    if (i==1) {
      cat += 15;
      dog += 15;
    }
    if (i==2) {
      cat += 9;
      dog += 9;
    }
    if (i>2) {
      cat += 4;
      dog += 5;
    }
  }
  std::vector<int> res;
  res.push_back(humanYears);
  res.push_back(cat);
  res.push_back(dog);
  return res;
}
//////////
#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  //your code here
  if (humanYears==1)
  return {1,15,15};
  if (humanYears==2)
  return {2,24,24};
  return {humanYears,24+(humanYears-2)*4,24+(humanYears-2)*5};
}