// https://www.codewars.com/kata/5a092d9e46d843b9db000064/train/cpp
#include <vector>
int solve (std::vector<int> v){
  for (auto num: v) {
    if (std::count(v.begin(), v.end(), (num*-1))) continue;
    else return num;
  }
  return 0;
}
