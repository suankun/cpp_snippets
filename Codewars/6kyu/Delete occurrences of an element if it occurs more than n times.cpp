#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/cpp

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::vector <int> res;
    int counter {};
    for (size_t i {0}; i < arr.size(); i++) {
        for (auto num: arr) {
            if (arr[i] == num) counter++;
        }
        if (counter >= n) {
            counter = 0;
            for (auto num: res) {
                if (arr[i] == num) counter++;
            }
            if (counter < n) res.push_back(arr[i]);
        } else {
            res.push_back(arr[i]);
        }
        counter = 0;
    }
    return res;
}

int main() {
    // vector <int> images {20,37,20,21};  // {20, 37, 21}   n = 1
    vector <int> images {1,1,3,3,7,2,2,2,2};  // {1, 1, 3, 3, 7, 2, 2, 2}   n = 3

    vector <int> res = deleteNth(images, 3);
    for (auto img: res) cout << img << " ";
    cout << endl;

    return 0;
}

//////////////

// std::vector<int> deleteNth(const std::vector<int>& xs, int n) {
//   std::vector<int> res;
//   std::unordered_map<int, int> ns;
//   for (int x : xs)
//     if (ns[x]++ < n)
//       res.push_back(x);
//   return res;
// }

///////////////

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
 std::vector<int> result;
  for (int x:arr)
    if (std::count(result.begin(),result.end(), x) < n) result.push_back(x);
  return result;
}