// https://www.codewars.com/kata/5a29a0898f27f2d9c9000058/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;	

std::vector<int> solve(std::string s){
    std::vector<int> result;
    int upperCase {}, lowerCase {}, numbers {}, specialCharacters {};
    for (size_t i {}; i<s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') upperCase++;
        else if (s[i] >= 'a' && s[i] <= 'z') lowerCase++;
        else if (isdigit(s[i])) numbers++;
        else specialCharacters++;

    }
    result.push_back(upperCase);
    result.push_back(lowerCase);
    result.push_back(numbers);
    result.push_back(specialCharacters);

    return result;
}

int main() {
    string one {"*'&ABCDabcde12345"};  // 4,5,5,3
    vector<int> result = solve(one);
    for (auto num: result) cout << num << ' ';
    cout << endl;

	return 0;
}
////////////
std::vector<int> solve(std::string s){
    std::vector <int> v = {0,0,0,0};
    for(char& ch : s) {
        if (isupper(ch)) v[0]++;
        else if (islower(ch)) v[1]++;
        else if (isdigit(ch)) v[2]++;
        else v[3]++;
    }
    return v;
}
