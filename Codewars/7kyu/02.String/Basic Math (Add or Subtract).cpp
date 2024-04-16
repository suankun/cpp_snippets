// https://www.codewars.com/kata/5809b62808ad92e31b000031/train/cpp
#include <iostream>
#include <string>

using namespace std;

std::string calculate(std::string str)
{
    int sum = 0;
    char currentOp = 'p';
    for (size_t i = 0; i < str.length(); i++) {
        int currentNum = 0;
        char op = currentOp;
        if (isdigit(str[i])) {
            while (isdigit(str[i]))
            {
                currentNum = (currentNum * 10) + (str[i] - '0');
                i++;
            }
            if (op == 'p') {
                sum += currentNum;
            }
            else if (op == 'm') {
                sum -= currentNum;
            }
        }
        if (str[i] == 'p') currentOp = 'p';
        else if (str[i] == 'm') currentOp = 'm';
    }

    return std::to_string(sum);
}

int main() {
    // cout << calculate("1plus2plus3plus4") << endl;  // ("10")
    // cout << calculate("1minus2minus3minus4") << endl;  // ("-8")
    // cout << calculate("1plus2plus3minus4") << endl;  // ("2")
    // cout << calculate("759minus405minus471") << endl;  // ("-117")
    cout << calculate("707minus238plus794plus778") << endl;  // ("2041")

    return 0;
}
//
std::string calculate(std::string str) {
    std::size_t pos = 0;
    int result = std::stoi(str, &pos);
    while (pos < str.size()) {
        if (str[pos] == 'p') {
            pos += 4;
            str = str.substr(pos);
            result += std::stoi(str, &pos);
        }
        else {
            pos += 5;
            str = str.substr(pos);
            result -= std::stoi(str, &pos);
        }
    }
    
    return std::to_string(result);
}
//
#include <string>
#include <vector>
#include <cctype>
#include <sstream>

std::string calculate(std::string str)
{
    int result = 0;  
    std::vector<char> oper;
    
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'p') oper.push_back('+');
        if(str[i] == 'm') oper.push_back('-');
        if(std::isalpha(str[i])) str[i] = ' ';
    }
        
    std::string one_num;
    std::istringstream words(str);
    
    words >> one_num;
    result += std::stoi(one_num);
    int index_oper = 0;
    
    while(words >> one_num){    
        if(oper[index_oper++] == '+') result += std::stoi(one_num);
        else result -= std::stoi(one_num);
    }
    
    return std::to_string(result);
}
