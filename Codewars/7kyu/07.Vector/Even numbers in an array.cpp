// https://www.codewars.com/kata/5a431c0de1ce0ec33a00000c/train/cpp
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
    std::vector<int> buffer;
    for (auto num: arr) {
        if (num % 2 == 0) {
            buffer.push_back(num);
        }
    }
    std::vector<int> res;
    for (int i {n}; i>0; i--) res.push_back(buffer[buffer.size()-i]);

    return res;
}

int main() {
    std::vector one {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int condition {3};
    std::vector res = evenNumbers(one, condition);
    for (auto num: res) cout << num << " ";

    return 0;
}
//
#include <vector>
#include <algorithm>

using namespace std;

vector<int> evenNumbers(vector<int> v, int n) {
    vector<int> result;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (result.size() >= n) break;
        if (v[i] % 2 == 0) result.push_back(v[i]);
    }
    reverse(result.begin(), result.end());
    return result;
}
