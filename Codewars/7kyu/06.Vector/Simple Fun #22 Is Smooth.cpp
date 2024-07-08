// https://www.codewars.com/kata/5886d35d4703f125a6000008/train/cpp
#include <iostream>
#include <vector>
using namespace std;

bool isSmooth(const std::vector<int>& arr){
    bool isEven = arr.size() % 2 ? false : true;

    int midElement;
    if (isEven)
        midElement = arr[arr.size() / 2 - 1] + arr[arr.size() / 2];
    else
        midElement = arr[arr.size() / 2];

    return arr[0] == midElement && arr[0] == arr[arr.size() - 1];
}

int main() {
    cout << boolalpha;
    cout << isSmooth({7, 2, 2, 5, 10, 7})                  << endl;  // true
    cout << isSmooth({-12, 34, 40, -5, -12, 4, 0, 0, -12}) << endl;  // true
    cout << isSmooth({-5, -5, 10})                         << endl;  // false
    cout << isSmooth({4, 2})                               << endl;  // false
    cout << isSmooth({45, 23, 12, 33, 12, 453, -234, -45}) << endl;  // false
    cout << isSmooth({9, 0, 15, 9})                        << endl;  // false
    cout << isSmooth({-6, 6, -6})                          << endl;  // false
    cout << isSmooth({26, 26, -17})                        << endl;  // false
    cout << isSmooth({-7, 5, 5, 10})                       << endl;  // false
    cout << isSmooth({-5, 3, -1, 9})                       << endl;  // false

    return 0;
}

