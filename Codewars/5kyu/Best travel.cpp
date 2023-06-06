// https://www.codewars.com/kata/55e7280b40e1c4a06d0000aa/train/cpp
#include <iostream>
#include <vector>
using namespace std;

class BestTravel
{
public:
    static int chooseBestSum(int t, int k, const vector<int>& ls);
};

int BestTravel::chooseBestSum(int t, int k, const vector<int>& ls) {
    //cout << t << ' ' << k << endl;
    int n = ls.size();
    if (n < k) return -1;
    int ret{0};
    string bitmask(k, 1);
    bitmask.resize(n, 0);
    do {
      //for (int b:bitmask) cout << b << ' ';
      //cout << endl;
      int sum{0};
      for (int i = 0; i < n; ++i)
        if (bitmask[i]) sum += ls[i];
      if (sum <= t && sum > ret) ret = sum; 
    } while (prev_permutation(bitmask.begin(), bitmask.end()));
    if (ret > 0) return ret;
    return -1;
}

int main() {
    // vector<int> nums {50, 55, 56, 57, 58};
    // int distance {163}, cities {3};  // 163

    vector<int> nums {91, 74, 73, 85, 73, 81, 87};
    // int distance {331}, cities {1};  // 91
    // int distance {331}, cities {2};  // 178
    // int distance {331}, cities {4};  // 331
    int distance {331}, cities {5};  // -1
    // int distance {700}, cities {8};  // -1

    BestTravel one;

    cout << one.chooseBestSum(distance, cities, nums) << endl;

    return 0;
}
///////////////
// #include <vector>
// #include <algorithm>
// using namespace std; 

// class BestTravel
// {
// public:
//     static int chooseBestSum(int t, int k, const std::vector<int>& ls) {
//     int maxSum = -1;

//     if (k > ls.size()) {
//         return -1;
//     }

//     std::function<void(int, int, int)> backtrack = [&](int index, int selectedTowns, int currentSum) {
//         if (selectedTowns == k) {
//             if (currentSum <= t && currentSum > maxSum) {
//                 maxSum = currentSum;
//             }
//             return;
//         }

//         for (int i = index; i < ls.size(); i++) {
//             backtrack(i + 1, selectedTowns + 1, currentSum + ls[i]);
//         }
//     };

//     backtrack(0, 0, 0);

//     return maxSum;
//     };
// };
