// https://www.codewars.com/kata/57d532d2164a67cded0001c7/train/cpp
#include <iostream>
using namespace std;

#include <vector>
#include <string>

std::string histogram(const std::vector<int>& results) {
    std::string result;

    for (int i = 6; i >= 1; i--) {
        result += std::to_string(i) + '|';

        // Append '#' for each count, or a space if count is 0
        for (int j = 0; j < results[i - 1]; j++) {
            result += '#';
        }

        // Append the count if it's greater than 0
        if (results[i - 1] > 0) {
            result += ' ' + std::to_string(results[i - 1]);
        }

        result += '\n';
    }

    return result;
}

int main() {
    std::vector hist = {7, 3, 10, 1, 0, 5};

    cout << histogram(hist) << endl;
    // "6|##### 5\n"
    // "5|\n"
    // "4|# 1\n"
    // "3|########## 10\n"
    // "2|### 3\n"
    // "1|####### 7\n";

    return 0;
}
//
// #include <string>

// std::string histogram(std::vector<int> results)
// {
//     std::string histogram;
    
//     int length = results.size();
//     for(int i = length - 1; i >= 0; i--)
//     {
//         int item = results[i];
        
//         histogram += std::to_string(i + 1) + "|" + std::string(item, '#') + (item == 0 ? "" : " " + std::to_string(item)) + "\n";
//     }
    
//     return histogram;
// }
