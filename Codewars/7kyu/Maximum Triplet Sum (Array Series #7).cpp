// https://www.codewars.com/kata/5aa1bcda373c2eb596000112/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int maxTriSum (vector <int> numbers)
{
    sort(numbers.begin(), numbers.end(), greater<int>());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());

    return numbers[0]+numbers[1]+numbers[2];
}

int main() {
    vector<int> nums {-7,12,-7,29,-5,0,-7,0,0,29};  // 41
    cout << maxTriSum(nums) << endl;

    return 0;
}
///////////////
// #include <vector>
// #include <algorithm>
// #include <numeric>
// int maxTriSum (std::vector<int> numbers)
// {
//     std::sort(numbers.begin(), numbers.end());
//     numbers.erase( std::unique( numbers.begin(), numbers.end() ), numbers.end() );
//     return std::accumulate(numbers.end()-3, numbers.end(), 0);
// }
