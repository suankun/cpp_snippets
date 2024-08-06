// https://www.codewars.com/kata/5a145ab08ba9148dd6000094/train/cpp
#include <iostream>
#include <string>

std::string doubles(std::string s){
    for (size_t i=0; i<s.length()-1; i++) {
        if (s[i]==s[i+1]) {
            s.erase(i,2);
            if (i==s.length()-1) continue;
            i--;
        }
    }
    for (size_t i=0; i<s.length()-1; i++) {
        if (s[i]==s[i+1]) {
            s.erase(i,2);
            if (i==s.length()-1) continue;
            i--;
        }
    }
    for (size_t i=0; i<s.length()-1; i++) {
        if (s[i]==s[i+1]) {
            s.erase(i,2);
            if (i==s.length()-1) continue;
            i--;
        }
    }
    for (size_t i=0; i<s.length()-1; i++) {
        if (s[i]==s[i+1]) {
            s.erase(i,2);
            if (i==s.length()-1) continue;
            i--;
        }
    }

    return s;
}
//
std::string doubles(std::string s){
    std::string r = "";
    for (auto i:s)
    {
        if (r.back()!=i)
        r.push_back(i);
        else
        r.pop_back();
    }
    return r;
}
