// https://www.codewars.com/kata/54b42f9314d9229fd6000d9c/train/cpp
#include <iostream>
#include <string>
using namespace std;	

std::string duplicate_encoder(const std::string& word) {
    std::string result;
    int flag = 0;
    for (size_t i {}; i<word.length(); i++) {
        for (size_t j {}; j<word.length(); j++) {
            if (i == j) continue;
            char check1 = tolower(word[i]);
            char check2 = tolower(word[j]);
            if (tolower(word[i]) == tolower(word[j])) {
                result += ')';
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            result += '(';
        }
        flag = 0;
    }

    return result;
}

int main() {
    string one {"Success"};  // ")())())"
    cout << duplicate_encoder(one) << endl;

	return 0;
}
//////////////
#include <string>
#include <cctype>
#include <map>

std::string duplicate_encoder(const std::string& word){

    std::map<char, int> table;
    for(auto x : word) table[std::tolower(x)]++;
    
    std::string result;
    for(auto x: word) result += (table[std::tolower(x)]==1)? "(":")";
    
    return result;
}
