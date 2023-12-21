// https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> y_axis;
        for (size_t i=0; i<points.size(); i++) {
            y_axis.push_back(points[i][0]);
        }
        sort(y_axis.begin(), y_axis.end());
        int max_y=0;
        for (size_t i=0; i<y_axis.size()-1; i++) {
            if ((y_axis[i+1]-y_axis[i])>max_y) max_y=(y_axis[i+1]-y_axis[i]);
        }
        return max_y;
    }
};

int main() {
    Solution s1;
    vector<vector<int>> points = {{3,1}, {9,0}, {1,0}, {1,4}, {5,3}, {8,8}};
    cout << s1.maxWidthOfVerticalArea(points) << endl;

    return 0;
}
