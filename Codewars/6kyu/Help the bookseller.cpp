// https://www.codewars.com/kata/54dc6f5a224c26032800005c/train/cpp

#include <iostream>
#include <string>
#include <vector>

class StockList {
public:
  static std::string stockSummary(std::vector<std::string> &books, std::vector<std::string> &categories) {
    if (books.empty() || categories.empty())
      return "";

    int stocks['Z' + 1] = {0};
    for (const std::string &book : books) {
        std::size_t position = book.find_first_of(" ", 2, 1);
        stocks[book[0]] += std::atoi(book.data() + position);
    }

    std::string result = "";
    for (const std::string &category : categories) {
      result = result
        + (result.empty() ? "" : " - ")
        + "(" + category[0] + " : " + std::to_string(stocks[category[0]]) + ")";
    }

    return result;
  }
};

int main() {
    std::vector<std::string> lstOfArt = {"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"};
    std::vector<std::string> categories = {"A", "B", "C", "W"};
    
    std::string result = StockList::stockSummary(lstOfArt, categories);
    std::cout << result << std::endl;
    
    return 0;
}

/////////////////
// #include <iostream>
// #include <unordered_map>
// #include <sstream>
// #include <vector>

// class StockList {
// public:
//     static std::string stockSummary(const std::vector<std::string>& lstOfArt, const std::vector<std::string>& categories) {
//         if (lstOfArt.empty() || categories.empty()) {
//             return "";
//         }

//         std::unordered_map<char, int> sums;
        
//         for (const std::string& book : lstOfArt) {
//             std::istringstream iss(book);
//             std::string code;
//             int quantity;
//             iss >> code >> quantity;
            
//             if (!code.empty()) {
//                 char category = code[0];
//                 sums[category] += quantity;
//             }
//         }
        
//         std::stringstream result;
        
//         for (const std::string& category : categories) {
//             char c = category[0];
//             int sum = sums[c];
//             result << "(" << category << " : " << sum << ") - ";
//         }
        
//         std::string resultStr = result.str();
        
//         // Remove the trailing " - " from the result string
//         if (!resultStr.empty()) {
//             resultStr.pop_back();
//             resultStr.pop_back();
//             resultStr.pop_back();
//         }
        
//         return resultStr;
//     }
// };