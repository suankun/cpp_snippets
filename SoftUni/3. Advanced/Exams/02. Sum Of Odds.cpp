#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void readMatrix(istream& in, vector<vector<int>>& mat) {
    int num;
    cin >> num;

    mat = vector <vector<int>>(num, vector<int>(num, 0));

    for (size_t row = 0; row < num; row++)
        for (size_t col = 0; col < num; col++)
            in >> mat[row][col];
}

int sumOfOdds(vector<vector<int>>& mat) {
    int sum = 0;
    for (size_t row = 0; row < mat.size(); row++)
        for (size_t col = 0; col < mat[row].size(); col++)
            if (row != col && row + col != mat.size() - 1 && mat[row][col] % 2 != 0)
                sum += mat[row][col];
    return sum;
}

int main(void) {
    vector<vector<int>> mat;
    readMatrix(cin, mat);
    
    cout << "The sum is: " << sumOfOdds(mat) << endl;

    return 0;
}
