// https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/train/cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
    string res;                 // result string
    sort(s.begin(), s.end());   // sort vector alphabetically
    res = s[0];                 // assign first value to res string
    string one;
    // insert stars
    for (int i {}; i < res.length(); i++) {
        one += res[i];
        if (i == res.length()-1) break;
        one += "***";
    }
    return one;
}

int main() {
    vector <string> one {"bitcoin", "take", "over", "the", "world", "maybe", "who", "knows", "perhaps"};
    // result should be: "b***i***t***c***o***i***n"
    string result = twoSort(one);
    std::cout << "Result is: " << result << endl;

    return 0;
}
//
#include <algorithm>
#include <string>

using namespace std;

std::string twoSort(std::vector<std::string> s)
{
    string result = *min_element(s.begin(), s.end());
    for (int i = 1; i < result.size(); i += 4)
      result.insert(i, "***");
    return result;
}
