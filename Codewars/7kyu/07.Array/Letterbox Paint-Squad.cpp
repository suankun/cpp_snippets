// https://www.codewars.com/kata/597d75744f4190857a00008d/train/cpp
#include <iostream>
#include <array>

using namespace std;

array<int, 10> paint_letterboxes(int start, int end)
{
    array<int, 10> digitFrequencies = {};
    
    for (int begin = start; begin <= end; begin++) {
        int curNum = begin;
        while (curNum)
        {
            int tempDigit = curNum % 10;
            digitFrequencies[tempDigit]++;
            curNum /= 10;
        }
        
    }

    return digitFrequencies;
}

int main() {
    array<int, 10> res = paint_letterboxes(125, 132);  // {1,9,6,3,0,1,1,1,1,1}

    for (int & n : res)
        cout << n << ' ';

    cout << endl;

    return 0;
}
//
#include <array>

using namespace std;

array<int, 10> paint_letterboxes(int start, int end)
{
    array<int, 10> frequencies = { 0 };
    for (int i = start; i <= end; i++)
        for (int n = i; n > 0; n /= 10)
            frequencies[n % 10]++;
    return frequencies;
}
