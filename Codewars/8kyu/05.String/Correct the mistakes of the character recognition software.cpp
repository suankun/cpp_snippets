// https://www.codewars.com/kata/577bd026df78c19bca0002c0/train/cpp
#include <string>

std::string correct(std::string str){
    for (size_t i {}; i<str.length(); i++) {
        if (str[i]=='5') str[i]='S';
        else if (str[i]=='0') str[i]='O';
        else if (str[i]=='1') str[i]='I';
    }
    return str;
}
//
#include <string>
#include <algorithm>

std::string correct(std::string str){
    replace(str.begin(), str.end(), '5', 'S');
    replace(str.begin(), str.end(), '0', 'O');
    replace(str.begin(), str.end(), '1', 'I');
    return str;
}