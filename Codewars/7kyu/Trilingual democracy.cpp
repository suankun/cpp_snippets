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
