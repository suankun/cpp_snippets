// https://www.codewars.com/kata/62f17be8356b63006a9899dc/train/cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;


char trilingual_democracy(const std::string& group) {
    vector<int> map (4, 0);
    char res;
    for (char ch: group) {
        if (ch == 'D') map[0]++;
        else if (ch == 'F') map[1]++;
        else if (ch == 'I') map[2]++;
        else if (ch == 'K') map[3]++;
    }
  
    bool isFound = false;
    for (size_t i=0; i<map.size(); i++) {
        if (map[i] == 3) {
            if (i == 0) res = 'D';
            else if (i == 1) res = 'F';
            else if (i == 2) res = 'I';
            else if (i == 3) res = 'K';
            isFound = true;
            break;
        }
        else if (map[i] == 2) {
            for (size_t j=0; j<map.size(); j++) {
                if (map[j] == 1) {
                    if (j == 0) res = 'D';
                    else if (j == 1) res = 'F';
                    else if (j == 2) res = 'I';
                    else if (j == 3) res = 'K';
                    isFound = true;
                    break;
                }
            }
            if (isFound) break;
        }
    }
    
    if (!isFound) {
        for (size_t k=0; k<map.size(); k++) {
            if (map[k] == 0) {
                if (k == 0) res = 'D';
                else if (k == 1) res = 'F';
                else if (k == 2) res = 'I';
                else if (k == 3) res = 'K';
                break;
            }
        }
    }

    return res;
}

int main() {
    cout << trilingual_democracy("FFF") << endl;  // 'F'
    cout << trilingual_democracy("III") << endl;  // 'I'
    cout << trilingual_democracy("IIK") << endl;  // 'K'
    cout << trilingual_democracy("DFK") << endl;  // 'I'

    return 0;
}
//
#include <string>
char trilingual_democracy(const std::string& group) {
    if (group[0] == group[1]) return group[2];
    if (group[1] == group[2]) return group[0];
    if (group[0] == group[2]) return group[1];
    if (group[0] != group[1] && group[1] != group[2] && group[0] != group[2]) {
        if (group[0] != 'D' && group[1] != 'D' && group[2] != 'D') return 'D';
        if (group[0] != 'F' && group[1] != 'F' && group[2] != 'F') return 'F';
        if (group[0] != 'K' && group[1] != 'K' && group[2] != 'K') return 'K';
        if (group[0] != 'I' && group[1] != 'I' && group[2] != 'I') return 'I';
    }
  return group[0];
}
//
char trilingual_democracy(const std::string& group) {
    return group[0] xor group[1] xor group[2];
}
