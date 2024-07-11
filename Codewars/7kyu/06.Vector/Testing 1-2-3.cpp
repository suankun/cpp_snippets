// https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    std::vector<std::string> res;
    for (size_t i {}; i<lines.size(); i++) {
        std::string temp_line = std::to_string(i+1);
        std::string temp_str = temp_line + ": " + lines[i]; 
        res.push_back(temp_str);
    }
    return res;
}

int main() {
    vector<string> list = {"a", "b", "c"};   // ["1: a", "2: b", "3: c"]
    vector<string> one = number(list);
    for (auto line: one) cout << line << " ";
    cout << endl;

    return 0;
}
///////////////

std::vector<std::string> number(const std::vector<std::string> &lines)
{ 
  std::vector<std::string> list;
  for(unsigned int i=0; i<lines.size(); i++)
    list.push_back( std::to_string(i+1) + ": " + lines[i]);
  
    return list;
}