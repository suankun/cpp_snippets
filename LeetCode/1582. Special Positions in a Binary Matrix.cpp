// https://leetcode.com/problems/special-positions-in-a-binary-matrix/description
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int countSpecialNum=0;
        for (size_t i=0; i<mat.size(); i++) {
            for (size_t j=0; j<mat[i].size(); j++) {
                int temp=mat[i][j];
                if (temp==0) continue;
                int flag=0;
                for (size_t k=0; k<mat[i].size(); k++) {
                    if (mat[i][k]==1 && k!=j) {
                        flag=1;
                        break;
                    }
                }
                for (size_t l=0; l<mat.size(); l++) {
                    if (mat[l][j]==1 && l!=i) {
                        flag=1;
                        break;
                    }
                }
                if (!flag) countSpecialNum++;
            }
        }
        return countSpecialNum;
    }
};

int main() {
    // vector<vector<int>> mat = {{1,0,0},
    //                            {0,1,0},
    //                            {0,0,1}};

    // Solution s1;
    // cout << s1.numSpecial(mat) << endl;

    vector<vector<int>> mat = {{1,0,0},
                               {0,0,1},
                               {1,0,0}};

    Solution s2;
    cout << s2.numSpecial(mat) << endl;

    return 0;
}
