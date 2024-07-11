// https://www.codewars.com/kata/56ed20a2c4e5d69155000301/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class ScalingSqStrings
{
public:
    static std::string scale(const std::string &strng, int k, int v);
};

std::string ScalingSqStrings::scale(const std::string &strng, int k, int v) {
    if (strng.empty()) return "";

    std::istringstream istr(strng);
    std::string line;
    std::vector<std::string> lines;

    // while (std::getline(istr, line))
    //     lines.push_back(line);

    while (istr >> line)
        lines.push_back(line);

    std::string scaledStrings;
    
    for (const std::string& originalLine : lines) {
        std::string horizontalScaledLine;
        for (char ch : originalLine)
            horizontalScaledLine.append(k, ch);
        
        for (int i = 0; i < v; ++i)
            scaledStrings += horizontalScaledLine + "\n";
    }
    
    if (!scaledStrings.empty() && scaledStrings.back() == '\n')
        scaledStrings.pop_back();
    
    return scaledStrings;
}

int main() {
    std::string d = "abcd\nefgh\nijkl\nmnop";
    cout << ScalingSqStrings::scale(d, 2, 3) << endl;
    // "aabbccdd\naabbccdd\naabbccdd\neeffgghh\neeffgghh\neeffgghh\niijjkkll\niijjkkll\niijjkkll\nmmnnoopp\nmmnnoopp\nmmnnoopp"

    return 0;
}
//
class ScalingSqStrings
{
public:
    static std::string scale(const std::string &strng, int k, int n);
};

std::string ScalingSqStrings::scale(const std::string &strng, int k, int n)
{
    if (strng == "")
        return "";

    std::string line;
    std::stringstream res;
    std::stringstream ss(strng);
    while (getline(ss, line, '\n')) {
        std::string newLine = "\n";
        for (auto c : line)
            newLine += std::string(k, c);

        for (int i = 0; i < n; i++)
            res << newLine;
    }
    
    return res.str().substr(1);
}
