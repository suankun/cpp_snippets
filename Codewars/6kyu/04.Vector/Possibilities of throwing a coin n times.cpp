// https://www.codewars.com/kata/5ad6266b673f2f067b000004/train/cpp
#include <iostream>
#include <string>
#include <vector>

void generateFlips(int n, std::string current, std::vector<std::string>& results) {
    if (current.length() == n) {
        results.push_back(current);
        return;
    }
    
    generateFlips(n, current + "H", results);
    
    generateFlips(n, current + "T", results);
}

std::string coin(int n) {
    std::vector<std::string> results;
    std::string output = "";
    
    generateFlips(n, "", results);
    
    for (size_t i = 0; i < results.size(); ++i) {
        output += results[i];
        if (i != results.size() - 1) {
            output += ",";
        }
    }
    
    return output;
}
//
#include <cmath>

std::string coin(int n){
    std::string result(n, 'H'), key(result);
    for (int i(1); i < std::pow(2, n); i++) {
        for (int j(n - 1); j >= 0; j--){
            if (key[j] == 'T') {
                key[j] = 'H';
            } else {
                key[j] = 'T';
                break;
            }
        }
        result += ',' + key;
    }
    return result;
}
