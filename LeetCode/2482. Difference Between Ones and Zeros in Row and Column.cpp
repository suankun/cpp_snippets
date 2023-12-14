// https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> onesRow(n, 0);
        vector<int> zerosRow(n, 0);
        vector<int> onesCol(m, 0);
        vector<int> zerosCol(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                onesRow[i] += (grid[i][j] == 1);
                zerosRow[i] += (grid[i][j] == 0);
                onesCol[j] += (grid[i][j] == 1);
                zerosCol[j] += (grid[i][j] == 0);
            }
        }

        vector<vector<int>> res(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                res[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return res;
    }
};

int main() {
    vector<vector<int>> mat = {{0,1,1},
                               {1,0,1},
                               {0,0,1}};

    Solution s1;
    vector<vector<int>> res=s1.onesMinusZeros(mat);
    for (size_t i=0; i<res.size(); i++) {
        for (size_t j=0; j<res[i].size(); j++) {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
    // Output:   [[0,0,4],
    //            [0,0,4],
    //          [-2,-2,2]]

    ///////////////////////////////////////////////

    // vector<vector<int>> mat2 = {{1,1,1},
    //                            {1,1,1}};

    // Solution s2;
    // vector<vector<int>> res2=s2.onesMinusZeros(mat2);
    // for (size_t i=0; i<res2.size(); i++) {
    //     for (size_t j=0; j<res2[i].size(); j++) {
    //         cout << res2[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // // Output: [[5,5,5],[5,5,5]]

    return 0;
}
