// https://www.codewars.com/kata/5a8bcd980025e99381000099/train/cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> squareUp(int n)
{
    vector<int> res;
    for (int i=0; i<n; i++) {
        for (int j=n; j>0; j--) {
            int temp=0;
            if (j-1<=i) temp=j;
            res.push_back(temp);
        }
    }
    return res;
}

int main() {
    vector<int> nums2 = squareUp(2);  // 0, 1, 2, 1
    for (auto n: nums2) cout << n << ' ';
    cout << endl;

    vector<int> nums3 = squareUp(3);  // 0, 0, 1, 0, 2, 1, 3, 2, 1
    for (auto n: nums3) cout << n << ' ';
    cout << endl;

    vector<int> nums4 = squareUp(4);  // 0, 0, 0, 1,     0, 0, 2, 1,     0, 3, 2, 1,     4, 3, 2, 1
    for (auto n: nums4) cout << n << ' ';
    cout << endl;

    return 0;
}
//
std::vector<int> squareUp(int n)
{
    std::vector<int> result(n * n);
    
    for (auto i=1; i<=n; i++) {
        for (auto j=i; j<=n; j++) {
        result[j*(n-i)]=i;
        }
    }
    
    return result;
}
