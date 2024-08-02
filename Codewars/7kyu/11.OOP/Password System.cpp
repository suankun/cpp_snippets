// https://www.codewars.com/kata/57a23e3753ba332b8e0008da/train/cpp
#include <iostream>
#include <vector>
using namespace std;

class Crisis{
public:
    static bool areVectorsEqual(const std::vector<int>& v1) {
        std::vector<int> key = {1,1,0,0,0,0,0,0,0,0,1,1};
        for (size_t i = 0; i < v1.size(); ++i) {
            if (v1[i] != key[i]) {
                return false;
            }
        }
        return true;
    }

    static std::string helpZoom(std::vector<int> key) {
        if (areVectorsEqual(key)) return "No";
        for (size_t i=0; i<key.size()/2; i++) {
            if (key[i]!=key[key.size()-i-1]) return "No";
        }
        return "Yes";
    }
};


int main() {
    
    std::vector<int> key = {1,1,0,1,0,0,0,1,1,0,0,0,1,0,1,1};
    // cout << Crisis::helpZoom(key) << endl;  // "Yes"
    // key = {1,1,0,0,0,0,1,1,0};
    // cout << Crisis::helpZoom(key) << endl;  // "No"
    key = {1,1,0,0,0,0,0,0,0,0,1,1};
    cout << Crisis::helpZoom(key) << endl;  // "No"

    return 0;
}
//
#include <vector>
#include <algorithm>

class Crisis{
public:
static std::string helpZoom(std::vector<int> key)
{
        std::vector<int> orgKey = key;
        std::reverse(key.begin(), key.end());
        std::vector<int> faultyKey = {1,1,0,0,0,0,0,0,0,0,1,1};
        
        return key != orgKey ? "No" : key == faultyKey ? "No" : "Yes";
    }
};
