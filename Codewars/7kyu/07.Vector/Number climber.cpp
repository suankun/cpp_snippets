// https://www.codewars.com/kata/559760bae64c31556c00006b/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> climb(int n)
{
    std::vector<int> res;
    res.push_back(n);
    for (int i {n/2}; i>0; i--) {
        if (2*i == res[0] || 2*i+1 == res[0]) {
            res.insert(res.begin(), i);
        }
    }
  
    return res;
}

int main() {
    std::vector res = climb(10);  // 1, 2, 5, 10
    for (auto n: res) cout << n << ' ';
    cout << endl;

    return 0;
}
//
#include<vector>
using namespace std;
vector<int> climb(int n)
{
    vector<int>res;
    while(n>1){
        res.insert(res.begin(),n);
        n=n/2;
    }
    res.insert(res.begin(),1);
    return res;
}
