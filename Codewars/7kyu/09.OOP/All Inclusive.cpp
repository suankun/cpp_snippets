// https://www.codewars.com/kata/5700c9acc1555755be00027e/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Rotations
{
public:
    static bool containAllRots(const std::string &strng, std::vector<std::string> &arr);
};

bool Rotations::containAllRots(const std::string &strng, std::vector<std::string> &arr) {
    std::string copy_strng = strng;
    int flag {};
    for (size_t i {}; i<copy_strng.length(); i++) {
        for (size_t j {}; j<arr.size(); j++) {
            if (copy_strng == arr[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) return false;
        flag = 0;
        copy_strng = copy_strng[copy_strng.length()-1] + copy_strng.substr(0, copy_strng.length()-1);
    }
    return true;
}

int main() {
    std::string s1 = "bsjq";
    std::vector<std::string> v1 = {"bsjq", "qbsj", "sjqb", "twZNsslC", "jqbs"};
    Rotations one;
    cout << boolalpha;
    cout << one.containAllRots(s1, v1) << endl;  // true

    return 0;
}
//
// class Rotations
// {
// public:
//   static bool containAllRots(std::string& str, const std::vector<std::string>& arr)
//   {
//       for (int i = 0; i < str.length(); ++i)
//       {
//           if(find(arr.begin(), arr.end(), str) == arr.end())
//               return false;
//           rotate(str.begin(), str.begin()+1, str.end());
//       }
//       return true;
//   }
// };
