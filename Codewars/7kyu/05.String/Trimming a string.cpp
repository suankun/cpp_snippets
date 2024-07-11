// https://www.codewars.com/kata/563fb342f47611dae800003c/train/cpp
#include <iostream>
#include <string>

std::string trim(const std::string& phrase, size_t size) {
    std::cout << phrase << ',' << size << std::endl;
    if (phrase.length() <= size) return phrase;
    std::string result;
    if (phrase.length() <= 3 || size <=3) {
        for (size_t i {}; i<size; i++) {
        result += phrase[i];
        }
        result += "...";
        return result;
    }
    for (size_t j {}; j<size-3; j++) {
        result += phrase[j];
    }
    result += "...";
    return result;
}
//
#include <string>

std::string trim(const std::string& phrase, size_t size) {
    if(phrase.length() <= size){
        return phrase;
    } else if (size <= 3) {
        return phrase.substr(0, size) + "...";
    } else {
        return phrase.substr(0, size - 3) + "...";
    }  
}
