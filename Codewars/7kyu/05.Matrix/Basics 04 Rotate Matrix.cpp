// https://www.codewars.com/kata/56b5dd1702a30326ce000b02/train/cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<std::vector<int>> rotateMatrixLeft(std::vector<std::vector<int>> matrix)
{
    int n=matrix[0].size();
    int m=matrix.size();
    std::vector<std::vector<int>> rotated(n, vector<int>(m, 0));

    for (size_t i=0; i<rotated.size(); i++) {
        for (size_t j=0; j<rotated[i].size(); j++) {
            rotated[i][j]=matrix[j][i];
        }
    }
    reverse(rotated.begin(), rotated.end());

    return rotated;
}

int main() {
    std::vector<std::vector<int>> input = {{-1, 4, 5},
                                           { 2, 3, 4}};

    std::vector<std::vector<int>> output = rotateMatrixLeft(input);
    for (size_t i=0; i<output.size(); i++) {
        for (size_t j=0; j<output[i].size(); j++) {
            cout << output[i][j] << ' ';
        }
        cout << endl;
    }

    // Output: {{ 5, 4},
    //          { 4, 3},
    //          {-1, 2}}

    return 0;
}
//
std::vector<std::vector<int>> rotateMatrixLeft(std::vector<std::vector<int>> matrix)
{
    std::vector<std::vector<int>> rotated (matrix[0].size());

    for (size_t i = 0; i < rotated.size(); i++)
        for (size_t j = 0; j < matrix.size(); j++)
            rotated[i].push_back(matrix[j][matrix[0].size()-i-1]);

    return rotated;
}
