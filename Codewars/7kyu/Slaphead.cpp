// https://www.codewars.com/kata/57efab9acba9daa4d1000b30/train/cpp
#include <iostream>
#include <string>
#include <utility>
using namespace std;

std::pair<std::string, std::string> bald(const std::string& s) {
    std::pair<std::string, std::string> res;
    std::string shaved;
    std::string second_el;
    int count=0;
    for (size_t i=0; i<s.length(); i++) {
        if (s[i]=='/') {
            count++;
            shaved+='-';
        } 
        else shaved+=s[i];
    }
    if (count==0) second_el="Clean!";
    else if (count==1) second_el="Unicorn!";
    else if (count==2) second_el="Homer!";
    else if (count>=3 && count<=5) second_el="Careless!";
    else if (count>5) second_el="Hobo!";
    res.first=shaved;
    res.second=second_el;
    return res;
}

int main() {
    // std::pair<std::string, std::string> res = bald("/----/--/---");  // "------------", "Careless!"
    std::pair<std::string, std::string> res = bald("//////---------");  // "------------", "Hobo!"
    cout << res.first << ", " << res.second << endl;

    return 0;
}
//
#include <algorithm>  // for count
std::pair< std::string, std::string> bald( const std::string& s ) {
    const long c{ count( s.cbegin(), s.cend(), '/' )};
    return make_pair( std::string( s.size(), '-' ),
        c > 5 ? "Hobo!" : c > 2 ? "Careless!" : c > 1 ? "Homer!" : c ? "Unicorn!" : "Clean!" );
}
