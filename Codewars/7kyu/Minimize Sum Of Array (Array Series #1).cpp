// https://www.codewars.com/kata/5a523566b3bfa84c2e00010b/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSum (std::vector<int>passed)
{
    int min_prod {};
    sort(passed.begin(), passed.end());
    for (size_t i {}; i<passed.size()/2; i++) {
        min_prod+=(passed[i]*passed[passed.size()-i-1]);
    }
    return min_prod; 
}

int main() {
    vector<int> nums {5,4,2,3};  // 22   (5*2 + 3*4 = 22)
    cout << minSum(nums) << endl;

    return 0;
}
///////////////
