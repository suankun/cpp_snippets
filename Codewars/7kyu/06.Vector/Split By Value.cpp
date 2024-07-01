// https://www.codewars.com/kata/5a433c7a8f27f23bb00000dc/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> split_by_value(int k, std::vector<int> elements)
{
    std::vector<int> res;
    for (auto n: elements) if (n<k) res.push_back(n);
    for (auto n: elements) if (n>=k) res.push_back(n);

    return res;
}

int main() {
    vector<int> res1 = split_by_value(5, {1, 3, 5, 7, 6, 4, 2});  // 1, 3, 4, 2, 5, 7, 6
    vector<int> res2 = split_by_value(0, {5, 2, 7, 3, 2});  // 5, 2, 7, 3, 2
    vector<int> res3 = split_by_value(6, {6, 4, 10, 10, 6});  // 4, 6, 10, 10, 6

    for (auto n: res1) cout << n << ' ';
    cout << endl;
    for (auto n: res2) cout << n << ' ';
    cout << endl;
    for (auto n: res3) cout << n << ' ';
    cout << endl;

    return 0;
}
//
#include <algorithm>
std::vector<int> split_by_value(int k, std::vector<int> elements) {
    stable_partition(elements.begin(), elements.end(), [k] (auto x) { return x < k; });
    return elements;
}
