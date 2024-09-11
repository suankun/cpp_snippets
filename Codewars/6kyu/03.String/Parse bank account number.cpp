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
