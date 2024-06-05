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

bool isPrime(int number) {
    if (number <= 2)
        return true;
    if (number % 2 == 0)
        return false;

    for (int i = 3; i < number / 2; i += 2)
        if (number % i == 0)
            return false;
    return true;
}

// 00 01 02 03 04
// 10 11 12 13 14
// 20 21 22 23 24
// 30 31 32 33 34
// 40 41 42 43 44

int sumOfPrimeNumbers(vector<vector<int>>& mat) {
    int sum = 0;
    int len = mat.size();
    for (int row = len / 2; row < len; row++)
        for (int col = 0; col < len; col++)
            if (col < row && col + row >= len && col + row <= len * 2 - 2)
                if (isPrime(mat[row][col]))
                    sum += mat[row][col];

    return sum;
}

int main(void) {
    vector<vector<int>> mat;
    readMatrix(cin, mat);
    
    cout << sumOfPrimeNumbers(mat) << endl;

    return 0;
}
