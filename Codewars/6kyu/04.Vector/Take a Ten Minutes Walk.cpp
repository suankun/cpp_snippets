#include <iostream>
#include <vector>
using namespace std;

// https://www.codewars.com/kata/54da539698b8a2ad76000228/solutions/cpp

bool isValidWalk(std::vector<char> walk) {
    int e {}, w {}, n {}, s {};
    int min {};
    for (auto side: walk) {
        if (side == 'e') {
            min++;
            e++;
        } else if (side == 'w') {
            min++;
            w++;
        } else if (side == 'n') {
            min++;
            n++;
        } else if (side == 's') {
            min++;
            s++;
        }
    }

    return (e == w && n == s && min == 10) ? true : false;
}

int main() {
    vector <char> walk1 {'n','s','e','w','n','s','e','w','n','s'}; // true
    vector <char> walk2 {'n','s','n','s','n','s','n','s','n','n'}; // false
    cout << boolalpha;
    cout << isValidWalk(walk1) << endl;
    cout << isValidWalk(walk2) << endl;

    return 0;
}
//
#include<vector>
#include <algorithm> 

bool isValidWalk(std::vector<char> walk) {
  return walk.size() == 10 and 
         std::count(walk.begin(), walk.end(), 'e') == std::count(walk.begin(), walk.end(), 'w') and
         std::count(walk.begin(), walk.end(), 'n') == std::count(walk.begin(), walk.end(), 's');
}
