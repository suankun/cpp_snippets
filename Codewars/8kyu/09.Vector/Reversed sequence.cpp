// https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/cpp
#include <vector>
std::vector<int> reverseSeq(int n) {
    std::vector<int> res;
    for (int i {n}; i>0; i--) res.push_back(i);
    return res;
}
//
std::vector<int> reverseSeq(int n) {
    std::vector<int> v;
    while ( n ) v.push_back(n--);
    return v;
}
