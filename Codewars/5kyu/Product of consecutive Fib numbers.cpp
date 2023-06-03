// https://www.codewars.com/kata/5541f58a944b85ce6d00006a/train/cpp
#include <iostream>
using namespace std;

#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod);
};

std::vector<ull> ProdFib::productFib(ull prod) {
    std::vector<ull> res;
    ull t1 {0}, t2 {1}, nextTerm {0};

    nextTerm = t1 + t2;

    while(t1*t2<prod) {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    if (t1*t2==prod) {
        res.push_back(t1);
        res.push_back(t2);
        res.push_back(true);
    } else {
        res.push_back(t1);
        res.push_back(t2);
        res.push_back(false);
    }
    return res;
}

int main() {
    cout << boolalpha;
    ProdFib one;
    ull num {20100270056686};  // 3524578, 5702887, 1
    std::vector<ull> res = one.productFib(num);
    for (auto n: res) cout << n << " ";

    return 0;
}
///////////////
#include <vector>

using ull = unsigned long long;

class ProdFib {
public:
  static std::vector<ull> productFib(ull prod) {
    ull a = 1, b = 1;
    
    while (a * b < prod) {
      ull p = a + b;
      a = b;
      b = p;
    }
    
    return {a, b, a * b == prod};
  }
};