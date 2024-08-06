// https://www.codewars.com/kata/56f253dd75e340ff670002ac/train/cpp
#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

class ComposeSqStrings
{
public:
    static std::string compose(const std::string &s1, const std::string &s2);
};

std::string ComposeSqStrings::compose(const std::string &s1, const std::string &s2) {
    std::string composedString;

    std::stack<string> st;

    std::string reversedString;
    std::istringstream issRev(s2);
    std::string tempStr;
    while (issRev >> tempStr)
        st.push(tempStr);

    while (st.size()) {
        reversedString += st.top() + '\n';
        st.pop();
    }
    

    std::istringstream iss1(s1);
    std::istringstream iss2(reversedString);
    std::string curStr1, curStr2;
    int idx = 1;
    while (iss1 >> curStr1 && iss2 >> curStr2) {
        std::string part1 = curStr1.substr(0, idx);
        std::string part2 = curStr2.substr(0, curStr2.length()-idx+1);
        composedString += part1 + part2 + '\n';
        idx++;
    }
    composedString.pop_back();
    
    return composedString;
}

int main()
{
    std::string s1 = "byGt\nhTts\nRTFF\nCnnI";
    std::string s2 = "jIRl\nViBu\nrWOb\nNkTB";

    cout << ComposeSqStrings::compose(s1, s2) << endl;

    // result has to be "bNkTB\nhTrWO\nRTFVi\nCnnIj"

    return 0;
}
//
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

class ComposeSqStrings
{
private:
    static std::vector<std::string> split(const std::string &s);
public:
    static std::string compose(const std::string &s1, const std::string &s2);
};

std::vector<std::string> ComposeSqStrings::split(const std::string &s)
{
    std::vector<std::string> out;
    std::istringstream ss(s);
    std::string next;
    while (std::getline(ss, next, '\n'))
        out.push_back(next);
    return out;
}

std::string ComposeSqStrings::compose(const std::string &s1, const std::string &s2)
{
    std::vector<std::string> arr2 = split(s2);
    unsigned int l = arr2.size();
    std::reverse(std::begin(arr2), std::end(arr2));
    std::vector<std::string> arr1 = split(s1);
    std::string res = "";
    for (unsigned int i = 0; i < l; i++)
        res += arr1[i].substr(0, i+1) + arr2[i].substr(0, l-i) + "\n";
    return res.substr(0,  res.length()-1);
}
