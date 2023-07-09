// https://www.codewars.com/kata/565c4e1303a0a006d7000127/train/cpp
#include <iostream>
#include <string>
using namespace std;


std::string numberFormat(long long n){
    std::string num = std::to_string(n);
    std::string res;
    std::string temp;
    int count {};
    if (n<0) {
        for (size_t i {num.length()-1}; i>0; i--) {
            if (count==3) {
                res.insert(0, ",");
                count = 0;
            }
            temp = std::to_string(num[i]-48);
            res.insert(0, temp);
            count++;
        }
        res.insert(0, "-");
    } else {
        for (size_t i {num.length()-1}; i>0; i--) {
            if (count==3) {
                res.insert(0, ",");
                count = 0;
            }
            temp = std::to_string(num[i]-48);
            res.insert(0, temp);
            count++;
        }
        if (count==3) {
            res.insert(0, ",");
            count = 0;
        }
        temp = std::to_string(num[0]-48);
        res.insert(0, temp);
    }
    return res;
}

int main() {
    // cout << numberFormat(100000) << endl;  // "100,000"
    // cout << numberFormat(-420902) << endl;  // "-420,902"
    cout << numberFormat(5678545) << endl;  // "5,678,545"
    return 0;
}
//
#include<string>

std::string numberFormat(long long n) {
	std::string str = std::to_string(n);
	for (int i = str.size() - 3; i > 0; i-=3)
	{
		if (str.at(i-1) == '-') break;
		str.insert(str.begin() + i, ',');
	}
	return str;
}
