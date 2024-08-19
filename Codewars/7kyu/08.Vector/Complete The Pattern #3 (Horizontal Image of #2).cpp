// https://www.codewars.com/kata/557341907fbf439911000022/train/cpp
#include <string>
#include <vector>

std::string pattern(int n) {
    std::vector<std::string> res;
    std::string line;

    for (int i = n; i > 0; i--) {
        line += std::to_string(i);
        res.push_back(line);
    }

    std::string result;
    for (size_t j = 0; j < res.size(); j++) {
        result += res[j];
        if (j != res.size() - 1) {
            result += '\n';
        }
    }

    return result;
}
//
#include <string>

std::string pattern(int n){
    std::string res;
    for(int i = 0; i < n; i++){
        for(int j = n; j >= n - i; j--)
        res += std::to_string(j);
        res += "\n";
    }
    return res.substr(0, res.size() - 1);
}
