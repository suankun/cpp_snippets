// https://www.codewars.com/kata/5970df092ef474680a0000c9/train/cpp
#include <iostream>
using namespace std;

#include <string>
#include <algorithm>
std::string alphabetized(const std::string& str){
    std::string res;
    for (size_t i=0; i<str.length(); i++) {
        if (str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z') res+=str[i];
    }
    // sort(res.begin(), res.end());
    stable_sort(res.begin(), res.end(), [](char a, char b) {
        return tolower(a) < tolower(b);
    });

    return res;
}

int main() {
    // cout << alphabetized("") << endl;  // ""
    // cout << alphabetized(" ") << endl;  // ""
    // cout << alphabetized(" a") << endl;  // "a"
    // cout << alphabetized("a ") << endl;  // "a"
    // cout << alphabetized(" a ") << endl;  // "a"
    cout << alphabetized("A b B a") << endl;  // "AabB"
    // cout << alphabetized(" a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z") << endl;  // "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"
    // cout << alphabetized("!@$%^&*()_+=-`,") << endl;  // ""
    // cout << alphabetized("The Holy Bible") << endl;  // "BbeehHilloTy"
    // cout << alphabetized("CodeWars can't Load Today") << endl;  // "aaaaCcdddeLnooorstTWy"
    
    return 0;
}
//
#include <string>
#include <algorithm>

std::string alphabetized(const std::string& str){
    auto s = str;
    s.erase(std::remove_if(s.begin(), s.end(), [](auto c){ return !isalpha(c); }), s.end());
    std::stable_sort(s.begin(), s.end(), [=](auto a, auto b){ return std::tolower(a) < std::tolower(b);});
    return s;
}
