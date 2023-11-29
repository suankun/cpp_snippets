// https://www.codewars.com/kata/59ca8e8e1a68b7de740001f4/train/cpp
#include <iostream>
using namespace std;

#include <vector>

std::vector<int> solve(std::vector<std::string>a,std::vector<std::string>b){
    int len = b.size();
    std::vector<int> count(len, 0);
    for (size_t i=0; i<a.size(); i++) {
        for (size_t j=0; j<b.size(); j++) {
            int found = b[j].find(a[i]);
            if (found != std::string::npos) {
                count[j]++;
            }
        }
    }

    return count;
}

int main() {
    std::vector<int> res1 = solve({"abc", "abc","xyz","abcd", "cde"}, {"abc", "cde", "uap"}); // {2,1,0}
    std::vector<int> res2 = solve({"abc", "xyz","abc", "xyz","cde"}, {"abc", "cde", "xyz"});  //{2,1,2}

    for (auto n: res1) cout << n << ' ';
    cout << endl;
    for (auto n: res2) cout << n << ' ';
    cout << endl;

    return 0;
}
