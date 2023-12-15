// https://leetcode.com/problems/destination-city
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isFind(vector<vector<string>>& route, string& city) {
        for (size_t j=0; j<route.size(); j++) if (route[j][0]==city) return false;
        return true;
    }

    string destCity(vector<vector<string>>& paths) {
        for (size_t i=0; i<paths.size(); i++) {
            if (isFind(paths, paths[i][1])) {
                return paths[i][1];
            }
        }
        return "";
    }
};

int main() {
    Solution s1;
    vector<vector<string>> paths = {{"London","New York"}, {"New York","Lima"}, {"Lima","Sao Paulo"}};
    cout << s1.destCity(paths) << endl;  // "Sao Paulo"

    return 0;
}
