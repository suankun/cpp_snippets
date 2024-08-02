// https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    return numbers[0] + numbers[1];
}

int main() {
    std::vector<int> num = {19, 8, 12, 5, 22};
    cout << sumTwoSmallestNumbers(num) << endl;

    return 0;
}
//
#include <climits>

using namespace std;

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long min1 = std::min(numbers[0],numbers[1]);
    long min2 = std::max(numbers[0],numbers[1]);
    
    for (int i=2; i<numbers.size(); ++i)
    {
        if (numbers[i] <= min1)
        {
            min2 = min1;
            min1 = numbers[i];
        }
        else if (numbers[i] > min1 && numbers[i] <= min2)
        {
            min2 = numbers[i];
        }
    }
    
    return min1 + min2;
}
