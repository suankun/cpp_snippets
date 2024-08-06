// https://www.codewars.com/kata/51f2b4448cadf20ed0000386/train/cpp

#include <iostream>
#include <string>
using namespace std;

std::string replaceAll(std::string str) {
    std::string res;
    for (size_t i {}; i<str.length(); i++) {
        if (str[i] == '#') break;
        res.push_back(str[i]);
    }
    return res;  
}

int main() {
    
    string one = {"www.codewars.com#about"};
    string res = replaceAll(one);
    std::cout << res << endl;

    return 0;
}
//
std::string replaceAll(std::string str) {
    return str.substr(0, str.find('#'));
}
