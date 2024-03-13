// https://www.codewars.com/kata/59859f435f5d18ede7000050/train/cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::string decToBinary(int n) { 
	string resultNum = "";

	while (n > 0) { 
		string currNum = std::to_string(n % 2);
        resultNum.insert(0, currNum);
		n /= 2;
	}

    for (size_t i=resultNum.length(); i<8; i++) {
        resultNum.insert(0, "0");
    }

    return resultNum;
}

std::vector<std::string> word_to_bin(std::string word) {
    std::vector<std::string> res;
    std::string currNum = "";
    for (size_t i=0; i<word.length(); i++) {
        int currentChar = word[i];
        std::string currentNum = decToBinary(currentChar);
        res.push_back(currentNum);
    }
    return res;
}

int main() {
    std::vector<std::string> res = word_to_bin("man");
    for (string s: res) cout << s << ' ';
    cout << endl;  // "01101101", "01100001", "01101110"

    return 0;
}
