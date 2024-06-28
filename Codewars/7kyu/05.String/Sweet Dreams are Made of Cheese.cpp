// https://www.codewars.com/kata/5ab7ee556a176b1043000047/train/cpp
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>

using namespace std;
using V = std::vector<int>;

std::string payCheese(const std::vector<int>& arr) {
    int sum = std::accumulate(arr.begin(), arr.end(), 0);

    int ceilValue = std::ceil(sum / 100.0);

    int result = ceilValue * 35;

    return "£" + std::to_string(result);
}

int main()
{
    cout << payCheese(V{750,750,750,750,600}) << endl;  // "£1260"
    cout << payCheese(V{700,750,700,750,600}) << endl;  // "£1225"
    cout << payCheese(V{574,574,574,574,574}) << endl;  // "£1015"
    cout << payCheese(V{0,0,0,0,0}) << endl;  // "£0"
    cout << payCheese(V{1,1,1,1,1}) << endl;  // "£35"

    return 0;
}
