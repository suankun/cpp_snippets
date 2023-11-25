// https://www.codewars.com/kata/5572f7c346eb58ae9c000047/train/cpp
#include <string>
std::string pattern(int n){
    std::string result;
    for (int i=1; i<=n; i++) {
      for (int j=0; j<i; j++) {
        result+=std::to_string(i);
      }
      if (i==n) break;
      result+='\n';
    }
    return result;
}
