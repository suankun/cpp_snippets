// https://www.codewars.com/kata/597eeb0136f4ae84f9000001/train/cpp
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

long parse_bank_account(const std::string &acctNbr) {
    std::string segments = " _ | ||_|     |  | _  _||_  _  _| _|   |_|  | _ |_  _| _ |_ |_| _   |  | _ |_||_| _ |_| _|";
    
    size_t l = acctNbr.find('\n') + 1;

    std::string nums;
    
    for (size_t i = 0; i < l - 2; i += 3) {
        std::string segment = acctNbr.substr(i, 3) +
                                acctNbr.substr(l + i, 3) +
                                acctNbr.substr(2 * l + i, 3);

        size_t index = segments.find(segment) / 9;

        nums += std::to_string(index);
    }

    return std::stol(nums);
}

int main()
{
    // cout << parse_bank_account("    _  _     _  _  _  _  _ \n"
    //                            "  | _| _||_||_ |_   ||_||_|\n"
    //                            "  ||_  _|  | _||_|  ||_| _|\n"
    //                            ) << endl;  // 123456789

    cout << parse_bank_account(" _  _  _  _  _  _  _  _  _ \n"
                               "| | _| _|| ||_ |_   ||_||_|\n"
                               "|_||_  _||_| _||_|  ||_| _|\n"
                               ) << endl;  // 23056789

    // cout << parse_bank_account(" _  _  _  _  _  _  _  _  _ \n"
    //                            "|_| _| _||_||_ |_ |_||_||_|\n"
    //                            "|_||_  _||_| _||_| _||_| _|\n"
    //                            ) << endl;  // 823856989

    
	
	return 0;
}
//
#include <map>
#define c(n, m) acctNbr[i * 3 + m + acctNbr.size() / 3 * n]

long parse_bank_account(const std::string &acctNbr)
{
    long res = 0;
    for (int i = 0; acctNbr[i * 3] != '\n'; ++i)
        res = res * 10 + std::map<std::string, long>{{" _ | ||_|", 0}, {"     |  |", 1}, {" _  _||_ ", 2}, {" _  _| _|", 3}, {"   |_|  |", 4}, {" _ |_  _|", 5}, {" _ |_ |_|", 6}, {" _   |  |", 7}, {" _ |_||_|", 8}, {" _ |_| _|", 9}}[(char[]){c(0, 0), c(0, 1), c(0, 2), c(1, 0), c(1, 1), c(1, 2), c(2, 0), c(2, 1), c(2, 2), '\0'}];
    
    return res;
}
//
#include <string>
#include <map>
using namespace std;

long parse_bank_account(const string &acctNbr)
{
    int lenght = acctNbr.size() / 3;
    map<string, int> vals =
    {    
        {"    | ||_", 0},
        {"     |  |", 1},
        {" _  _||_ ", 2},
        {" _  _| _|", 3},
        {"   |_|  |", 4},
        {" _ |_  _|", 5},
        {" _ |_ |_|", 6},
        {" _   |  |", 7},
        {" _ |_||_|", 8},
        {" _ |_| _|", 9}
    };
    long result = 0;
    for(int i = 0; i < lenght / 3; i++)
    {
        string temp = acctNbr.substr(i * 3, 3);
        temp += acctNbr.substr(i * 3 + lenght, 3);
        temp += acctNbr.substr(i * 3 + lenght * 2, 3);
        result += vals[temp];
        if(i != lenght / 3 - 1)
            result *= 10;
    }
    return result; 
}
