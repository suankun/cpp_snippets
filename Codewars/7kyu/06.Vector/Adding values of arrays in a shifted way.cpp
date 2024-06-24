// https://www.codewars.com/kata/57c7231c484cf9e6ac000090/train/cpp
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> addingShifted(std::vector<std::vector<int>> arrayOfArrays, int shift) {
    int n = arrayOfArrays.size();
    int m = arrayOfArrays[0].size();
    std::vector<int> result;

    result.resize((n - 1) * shift + m, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            result[i * shift + j] += arrayOfArrays[i][j];
        }
    }

    return result;
}

void printVec(const std::vector<int>& v) {
    for (const int& n: v)
        cout << n << ' ';
    cout << endl;
}

int main()
{
    // std::vector<std::vector<int>> arrayOfArrays1 = { { 1, 2, 3, 4, 5, 6 }, { 7, 7, 7, 7, 7, -7 } };
    // std::vector<int> res1 = addingShifted(arrayOfArrays1, 0);
    // printVec(res1);
    // // { 8, 9, 10, 11, 12, -1 }

    // std::vector<std::vector<int>> arrayOfArrays2 = { { 1, 2, 3, 4, 5, 6 }, { 7, 7, 7, 7, 7, 7 } };
    // std::vector<int> res2 = addingShifted(arrayOfArrays2, 3);
    // printVec(res2);
    // // { 1, 2, 3, 11, 12, 13, 7, 7, 7 }

    std::vector<std::vector<int>> arrayOfArrays3 = { { 1, 2, 3, 4, 5, 6 }, { 7, 7, 7, -7, 7, 7 }, { 1, 1, 1, 1, 1, 1 } };
    std::vector<int> res3 = addingShifted(arrayOfArrays3, 3);
    printVec(res3);
    // { 1, 2, 3, 11, 12, 13, -6, 8, 8, 1, 1, 1 }

    return 0;
}
