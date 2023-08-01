// https://www.codewars.com/kata/5bd776533a7e2720c40000e5/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> Pendulum(std::vector<int> arr) {
    // Sort the array in ascending order
    std::sort(arr.begin(), arr.end());

    // Create a new array to store the pendulum arrangement
    std::vector<int> result(arr.size(), 0);

    // Start with the smallest element in the center position
    int middle = (arr.size()%2==0) ? (arr.size()-1) / 2 : arr.size() / 2;
    result[middle] = arr[0];

    // Arrange the remaining elements in a to-and-fro manner
    int left = middle - 1;
    int right = middle + 1;
    bool goRight = true;

    for (size_t i = 1; i < arr.size(); i++) {
        if (goRight) {
            result[right] = arr[i];
            right++;
        } else {
            result[left] = arr[i];
            left--;
        }
        goRight = !goRight;
    }

    return result;
}


int main() {
    std::vector<int> arr1 {4,10,9};  // 10,4,9
    std::vector<int> arr2 {8,7,10,3};  // 8,3,7,10
    std::vector<int> res1 = Pendulum(arr1);
    std::vector<int> res2 = Pendulum(arr2);
    for (auto n: res1) cout << n << ' ';
    cout << endl;
    for (auto n: res2) cout << n << ' ';
    cout << endl;

    return 0;
}
