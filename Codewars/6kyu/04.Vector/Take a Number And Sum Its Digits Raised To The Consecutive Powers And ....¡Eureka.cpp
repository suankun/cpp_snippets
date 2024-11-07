// https://www.codewars.com/kata/5626b561280a42ecc50000d1/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
    std::vector<unsigned int> result {};
    for (size_t i {a}; i<=b; i++) {
        if (i>=1 && i<10) result.push_back(i);
        else {
            std::string int_str = std::to_string(i);
            size_t sum {};
            for (size_t j {}; j<int_str.length(); j++) {
                std::string temp_char;
                temp_char.push_back(int_str[j]);
                int temp_num = stoi(temp_char);
                int temp_num_pow {1};
                if (temp_num==0) {
                    temp_num_pow=0;
                    continue;
                } else if (temp_num==1) {
                    temp_num_pow=1;
                    sum+=temp_num_pow;
                    continue;
                }
                for (size_t k {}; k<j+1; k++) {
                    temp_num_pow *= temp_num;
                }
                sum += temp_num_pow;
            }
            if (sum==i) result.push_back(i);
        }
    }
    return result;
}

int main() {

    vector<unsigned int> result = sumDigPow(134, 150);
    for (auto num: result) cout << num << ' ';

    return 0;
}
//
#include <vector>
#include <math.h>
std::vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
    std::vector<unsigned int> res;
    
    for(unsigned int i = a; i <= b; i++ )
    {
        unsigned int sum = 0;
        std::string buf = std::to_string(i);
        for(int j=0; j<buf.length(); j++)
        {
            sum += pow(buf[j]-48, j+1);
        }
        if(sum==i) res.push_back(i);
    }
  
    return res;
}
