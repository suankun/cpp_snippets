// https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <algorithm>

bool cmp(const std::string lhs, const std::string rhs) {
   return lhs.length() < rhs.length();
}

class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
    	std::sort(array.begin(), array.end(), cmp);
        return array;
    }
};


int main() {
    std::vector<std::string> arr {"Telescopes", "Glasses", "Eyes", "Monocles"};
    Kata one;
    std::vector<string> sorted = one.sortByLength(arr);
    // "Eyes", "Glasses", "Monocles", "Telescopes"
    for (auto str: sorted) cout << str << " ";
    cout << endl;

    return 0;
}
//
class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
        std::sort(array.begin(), array.end(), [](std::string const& s1, std::string const& s2) { return s1.size() < s2.size(); });
        return array;
    }
};
