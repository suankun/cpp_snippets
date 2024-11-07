// https://www.codewars.com/kata/54e6533c92449cc251001667/train/cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
    std::vector<T> result;

    for (size_t i {}; i<iterable.size(); i++) {
        if (iterable[i] == iterable[i+1]) continue;
        else result.push_back(iterable[i]);
    }

    return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable){
    std::vector<char> res;

    for (size_t i {}; i<iterable.length(); i++) {
        if (iterable[i] == iterable[i+1]) continue;
        else res.push_back(iterable[i]);
    }
    
    return res;
}
int main() {
    std::string one {"AAAABBBCCDAABBB"}; // 'A', 'B', 'C', 'D', 'A', 'B'
    std::vector<char> res = uniqueInOrder(one);
    for (auto ch: res) cout << ch << " ";

    return 0;
}
//
#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
    std::vector<T> result;
    for (const auto& c : iterable) if (result.empty() || c != result.back()) result.push_back(c);
    return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
    std::vector<char> result;
    for (auto c : iterable) if (result.empty() || c != result.back()) result.push_back(c);
    return result;
}
