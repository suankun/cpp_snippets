// https://www.codewars.com/kata/64fbfe2618692c2018ebbddb/train/cpp
#include <vector>
#include <string>

std::vector<bool> flick_switch(const std::vector<std::string>& arr)
{
    std::vector<bool> result;
    bool value = true;
    for (const std::string& word : arr) {
        if (word == "flick") {
            value = value == true ? false : true;
        }
        result.push_back(value);
    }
    return result;
}
//
#include <vector>
#include <string>
using namespace std ;
vector<bool> flick_switch(const vector<string>& arr)
{
    vector<bool> flick ;
    bool flic = true ;
    for (string str : arr) {
        if (str == "flick")
            flic = !flic ;
        flick.push_back(flic);
    }
  
    return flick;
}
