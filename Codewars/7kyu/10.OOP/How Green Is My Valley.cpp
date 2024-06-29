// https://www.codewars.com/kata/56e3cd1d93c3d940e50006a4/train/cpp
#include <iostream>
using namespace std;


#include <vector>
#include <algorithm>
class Valley
{
public:
    static std::vector<int> makeValley(std::vector<int> &arr);
};

std::vector<int> Valley::makeValley(std::vector<int> &arr) {
    int len = arr.size();
    std::vector<int> res(len, 0);
    std::vector<int> arr_copy = arr;
    sort(arr_copy.begin(), arr_copy.end());
    reverse(arr_copy.begin(), arr_copy.end());

    for (size_t i=0, j=0; i<len/2; i++, j+=2) {
        res[i] = arr_copy[j];
        res[len-i-1] = arr_copy[j+1];
    }
    if (len%2!=0) res[len/2] = arr_copy[len-1];

    return res;
}

int main() {
    Valley v1;
    std::vector<int> d = { 17, 17, 15, 14, 8, 7, 7, 5, 4, 4, 1 };
    // { 17, 15, 8, 7, 4, 1, 4, 5, 7, 14, 17 }
    std::vector<int> res = v1.makeValley(d);
    for (auto n: res) cout << n << ' ';
    cout << endl;

    return 0;
}
//
#include <vector>
#include <algorithm>

class Valley
{
public:
    static std::vector<int> makeValley(std::vector<int> &arr);
};

std::vector<int> Valley::makeValley(std::vector<int> &arr)
{
    std::sort (arr.begin(), arr.end());
    std::vector<int> ans(arr.size());
    for (unsigned int i = 0;i < arr.size();i++)
    {
        if (i % 2 == 0) {
            ans[i / 2] = arr[arr.size() - 1 - i];
        } else {
            ans[arr.size() - 1 - i / 2] = arr[arr.size() - 1 - i];
        }
    }
    return ans;
}
