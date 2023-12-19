// https://leetcode.com/problems/image-smoother/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res(img.size(), vector<int>(img[0].size(), 0));
        if (img.size()==1 && img[0].size()==1) {
            return img;
        }
        else if (img.size()==1 && img[0].size()==2) {
            for (size_t i=0; i<img.size(); i++) {
                for (size_t j=0; j<img[i].size(); j++) {
                    int temp_cell=0;
                    if (j==0) temp_cell=floor(img[i][j]+img[i][j+1])/2;
                    else temp_cell=floor(img[i][j-1]+img[i][j])/2;

                    res[i][j]=temp_cell;
                }
            }
        }
        else if (img.size()==1 && img[0].size()>2) {
            for (size_t i=0; i<img.size(); i++) {
                for (size_t j=0; j<img[i].size(); j++) {
                    int temp_cell=0;
                    if (j==0) temp_cell=floor(img[i][j]+img[i][j+1])/2;
                    else if (j==img[i].size()-1) temp_cell=floor(img[i][j-1]+img[i][j])/2;
                    else temp_cell=floor(img[i][j-1]+img[i][j]+img[i][j+1])/3;

                    res[i][j]=temp_cell;
                }
            }
        }
        else if (img.size()==2 && img[0].size()==1) {
            for (size_t i=0; i<img.size(); i++) {
                for (size_t j=0; j<img[i].size(); j++) {
                    int temp_cell=0;
                    if (i==0) temp_cell=floor(img[i][j]+img[i+1][j])/2;
                    else temp_cell=floor(img[i-1][j]+img[i][j])/2;

                    res[i][j]=temp_cell;
                }
            }
        }
        else if (img.size()>=3 && img[0].size()==1) {
            for (size_t i=0; i<img.size(); i++) {
                for (size_t j=0; j<img[i].size(); j++) {
                    int temp_cell=0;
                    if (i==0) temp_cell=floor(img[i][j]+img[i+1][j])/2;
                    else if (i==img.size()-1) temp_cell=floor(img[i-1][j]+img[i][j])/2;
                    else temp_cell=floor(img[i-1][j]+img[i][j]+img[i+1][j])/3;

                    res[i][j]=temp_cell;
                }
            }
        }
        else {
            for (size_t i=0; i<img.size(); i++) {
                for (size_t j=0; j<img[i].size(); j++) {
                    int temp_cell=0;
                    if (i==0 && j==0) temp_cell=floor(img[i][j]+img[i][j+1]+img[i+1][j]+img[i+1][j+1])/4;
                    else if (i==0 && j==img[i].size()-1) temp_cell=floor(img[i][j-1]+img[i][j]+img[i+1][j-1]+img[i+1][j])/4;
                    else if (i==img.size()-1 && j==0) temp_cell=floor(img[i-1][j]+img[i-1][j+1]+img[i][j]+img[i][j+1])/4;
                    else if (i==img.size()-1 && j==img[i].size()-1) temp_cell=floor(img[i-1][j-1]+img[i-1][j]+img[i][j-1]+img[i][j])/4;
                    else if (i==0) temp_cell=floor(img[i][j-1]+img[i][j]+img[i][j+1]+img[i+1][j-1]+img[i+1][j]+img[i+1][j+1])/6;
                    else if (j==0) temp_cell=floor(img[i-1][j]+img[i][j]+img[i+1][j]+img[i-1][j+1]+img[i][j+1]+img[i+1][j+1])/6;
                    else if (j==img[i].size()-1) temp_cell=floor(img[i-1][j-1]+img[i][j-1]+img[i+1][j-1]+img[i-1][j]+img[i][j]+img[i+1][j])/6;
                    else if (i==img.size()-1) temp_cell=floor(img[i-1][j-1]+img[i-1][j]+img[i-1][j+1]+img[i][j-1]+img[i][j]+img[i][j+1])/6;
                    else temp_cell=floor(img[i-1][j-1]+img[i-1][j]+img[i-1][j+1]+img[i][j-1]+img[i][j]+img[i][j+1]+img[i+1][j-1]+img[i+1][j]+img[i+1][j+1])/9;

                    res[i][j]=temp_cell;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution s1;
    // vector<vector<int>> img={{100, 200, 100},
    //                          {200,  50, 200},
    //                          {100, 200, 100}};
    vector<vector<int>> img={{1}};
    vector<vector<int>> res=s1.imageSmoother(img);
    // Output: [[137,141,137],
    //          [141,138,141],
    //          [137,141,137]]
    for (size_t i=0; i<res.size(); i++) {
        for (size_t j=0; j<res[i].size(); j++) {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}
