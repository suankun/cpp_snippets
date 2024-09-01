#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> towerBuilder(unsigned nFloors) {
    std::vector<std::string> res {};
    for (unsigned i {}; i < nFloors; i++) {
        std::string temp_str;
        for (unsigned j {nFloors-i-1}; j > 0; j--) {
            temp_str += " ";
        }
        for (unsigned k {}; k < i*2+1; k++) {
            temp_str += "*";
        }
        for (unsigned l {nFloors-i-1}; l > 0; l--) {
            temp_str += " ";
        }
        res.push_back(temp_str);
    }
    return res;
}

// [
//   "  *  ",
//   " *** ", 
//   "*****"
// ]

int main() {
    unsigned floors {3};
    vector <string> pyramid (towerBuilder(floors));
    for (auto el: pyramid) cout << '"' << el << '"' << endl;

    return 0;
}

/////////////////////////////////////////////////////
#include <string>
#include <vector>

using namespace std;

vector<string> towerBuilder(unsigned nFloors) {
  vector <string> vect;
  for(unsigned i = 0, k = 1; i < nFloors; i++, k+=2)
    vect.push_back(string(nFloors-i-1, ' ') + string(k, '*') + string(nFloors-i-1, ' '));
  return {vect};
}
