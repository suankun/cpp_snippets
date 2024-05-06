// https://www.codewars.com/kata/5b93636ba28ce032600000b7/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void printVec(vector<int>& v) {
//     for (int n : v) cout << n << ' ';
//     cout << endl;
// }

void reversePos(vector<int>& v, int beginIndex) {
    reverse(v.begin()+beginIndex, v.end());
}

int solve(int n, int k) {
    vector<int> res;
    for (int i = 0; i < n; i++) {
        res.push_back(i);
    }

    for (int i = 0; i < n - 1; i++) {
        reversePos(res, i);
    }

    int pos = 0;
    for (int i = 0; i < res.size(); i++) {
        if (res[i] == k) {
            pos = i;
            break;
        }
    }

    return pos;
}

int main() {
    cout << solve(4,1) << endl;  // 3
    cout << solve(4,2) << endl;  // 2
    cout << solve(4,3) << endl;  // 0
    cout << solve(20,8) << endl;  // 17
    cout << solve(20,9) << endl;  // 19
    cout << solve(20,10) << endl;  // 18

    return 0;
}
//
constexpr int solve(const int n, const int k) {
    return k < n / 2 ? 2 * k + 1 : 2 * (n - k - 1);
}
