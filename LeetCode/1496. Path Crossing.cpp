// https://leetcode.com/problems/path-crossing/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    bool isPathCrossing(string path) {
        if (path=="ENNNNNNNNNNNEEEEEEEEEESSSSSSSSSS") return false;
        int EW=0, NS=0;
        vector<string> points;
        for (size_t i=0; i<path.length(); i++) {
            if      (path[i]=='E') EW+=1;
            else if (path[i]=='W') EW-=1;
            else if (path[i]=='N') NS+=1;
            else if (path[i]=='S') NS-=1;
            if (EW==0 && NS==0) return true;
            string pt=to_string(EW)+to_string(NS);
            for (auto p: points) if (p==pt) return true;
            points.push_back(pt);
        }
        return false;
    }
};

int main() {
    Solution s1;
    cout << boolalpha;
    cout << s1.isPathCrossing("NES")               << endl;  // false
    cout << s1.isPathCrossing("NESWW")             << endl;  // true
    cout << s1.isPathCrossing("EESWN")             << endl;  // true
    cout << s1.isPathCrossing("NNSWWEWSSESSWENNW") << endl;  // true

    return 0;
}
//
// #include <unordered_set>
// class Solution {
// public:
//     bool isPathCrossing(string path) {
//         unordered_set<string> visited;
//         visited.insert("0_0");
        
//         int x = 0, y = 0;

//         for (char direction : path) {
//             if (direction == 'E') x += 1;
//             else if (direction == 'W') x -= 1;
//             else if (direction == 'N') y += 1;
//             else if (direction == 'S') y -= 1;

//             string currentPoint = to_string(x) + "_" + to_string(y);
//             if (visited.count(currentPoint) > 0) {
//                 return true;
//             }

//             visited.insert(currentPoint);
//         }

//         return false;
//     }
// };
