// https://www.codewars.com/kata/5a05fe8a06d5b6208e00010b/train/cpp
#include <vector>
std::vector<int> seqToOne(int n) {
  std::vector<int> seq;
  if (n>0) for (int i=n; i>0; i--) seq.push_back(i);
  else for (int i=n; i<=1; i++) seq.push_back(i);
  return seq;
}
//
std::vector<int> seqToOne(int n) {
    std::vector<int> s;
    while (n != 1) {
        s.push_back(n);
        n>1 ? n-- : n++;
    }
    s.push_back(n);
    return s;
}
