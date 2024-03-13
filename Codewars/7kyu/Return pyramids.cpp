// https://www.codewars.com/kata/5a1c28f9c9fc0ef2e900013b/train/cpp
#include <string>
std::string pyramid(int n){
  std::string pyr = "";
  for (int i=0; i<n; i++) {
    if (i == n-1) {
      pyr += "/" + std::string(i*2, '_') + "\\\n";
    }
    else {
      pyr += std::string(n-i-1, ' ') + "/" + std::string(i*2, ' ') + "\\\n";
    }
  }
  return pyr;
}
