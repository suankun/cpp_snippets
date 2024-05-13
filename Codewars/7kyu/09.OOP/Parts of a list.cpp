// https://www.codewars.com/kata/56f3a1e899b386da78000732/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PartList
{
public:
    static std::vector<std::pair<std::string, std::string>> partlist(std::vector<std::string>& arr) {
    std::vector<std::pair<std::string, std::string>> result;
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        std::string first = "";
        std::string second = "";
        
        for (int j = 0; j < n; j++) {
            if (j < i)
                first += arr[j] + " ";
            else
                second += arr[j] + " ";
        }
        
        // Remove the trailing space
        first.pop_back();
        second.pop_back();
        
        result.push_back(std::make_pair(first, second));
    }
    
    return result;
  };
};

int main() {
    vector<string> one = {"cdIw", "tzIy", "xDu", "rThG"};
    PartList two;
    vector<pair<string, string>> result = two.partlist(one);
    for (auto& w: result) {
        cout << w.first << ", " << w.second << endl;
    }

    return 0;
}
///////////////////
// using namespace std;

// class PartList
// {
// public:
//     static std::vector<std::pair <std::string, std::string>> partlist(std::vector<std::string> &arr)
//     {
//       vector<pair<string, string>> result;
//       auto combine = [](string a, string b) { return a + ' ' + b; };
//       for (int i = 1; i < arr.size(); i++)
//       {
//         result.emplace_back(
//           accumulate(arr.begin() + 1, arr.begin() + i, arr[0], combine),
//           accumulate(arr.begin() + i + 1,  arr.end(), arr[i], combine));
//       }
//       return result;
//     }
// };
