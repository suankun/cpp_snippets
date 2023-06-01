// https://www.codewars.com/kata/550f22f4d758534c1100025a/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DirReduction {

public: static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
          {
                std::vector<std::string> res; 
                for (std::string & str : arr) 
                    { 
                          if (res.empty()) res.push_back(str); 
                          else 
                          { 
                            switch (str[0]) 
                                { 
                                  case 'N' : (res.back()[0] == 'S') ? res.pop_back() : res.push_back(str); break; 
                                  case 'S' : (res.back()[0] == 'N') ? res.pop_back() : res.push_back(str); break;
                                  case 'W' : (res.back()[0] == 'E') ? res.pop_back() : res.push_back(str); break; 
                                  case 'E' : (res.back()[0] == 'W') ? res.pop_back() : res.push_back(str); break; 
                                } 
                         }
                    } 
                  return res; 
        } 
};

int main() {
    vector <string> initial_directions {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"}; // "WEST"
    DirReduction one;
    vector <string> res = one.dirReduc(initial_directions);
    for (auto dir: res) cout << dir << " ";

    return 0;
}
