// https://www.codewars.com/kata/5af15a37de4c7f223e00012d/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> menFromBoys (vector <int> values)
{
    vector <int> even, odd, res;
    for (auto num: values) {
        if (num % 2 == 0) even.push_back(num);
        else odd.push_back(num);
    }

    sort(even.begin(), even.end());
    auto lastEven = std::unique(even.begin(), even.end());
    even.erase(lastEven, even.end());

    sort(odd.begin(), odd.end(), greater<int>());
    auto lastOdd = std::unique(odd.begin(), odd.end());
    odd.erase(lastOdd, odd.end());
    
    for (auto num: even) res.push_back(num);
    for (auto num: odd) res.push_back(num);
    return res;
}

int main() {
    vector <int> one {2,15,17,15,2,10,10,17,1,1};
    vector <int> res = menFromBoys(one);  // 2,10,17,15,1
    for (auto n: res) cout << n << ' ';
    cout << endl;
    
    return 0;
}
//
#include <algorithm>
#include <functional>
#include <vector>

std::vector<int> menFromBoys(std::vector<int> values) {
    auto iMid = std::partition(values.begin(), values.end(), [](auto x) { return x % 2 == 0; });
    std::sort(values.begin(), iMid);
    std::sort(iMid, values.end(), std::greater<>());
    auto iNewEnd = std::unique(values.begin(), values.end());
    values.erase(iNewEnd, values.end());
    return values;
}
