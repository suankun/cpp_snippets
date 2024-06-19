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
