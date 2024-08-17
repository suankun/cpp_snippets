// https://www.codewars.com/kata/592eaf848c91f248ca000012/train/cpp
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Arith{
private:
    string name;
    map<string, int> obj = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
        {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10}, 
        {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14},
        {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, 
        {"nineteen", 19}, {"twenty", 20}
    };

public:
    Arith(string name){
        this->name = name;
    }

    string add(string name){
        int sum = obj[this->name] + obj[name];
        for (const auto& pair : obj) {
            if (pair.second == sum) {
                return pair.first;
            }
        }
        return "undefined";
    }
};

int main() {
    Arith arith("three");
    cout << arith.add("seven") << endl;  // Outputs "ten"
    return 0;
}
//
#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <vector>

class Arith
{
public:
    Arith(const std::string & start) : start_(lookup_int[start]) {}
    
    std::string add(const std::string & x)
    {
        return std::string(
          lookup_str[start_ + lookup_int[x]]);
    }

private:
    static std::vector<std::string> lookup_str;
    static std::map<std::string, int> lookup_int;

    int start_;
};

std::vector<std::string> Arith::lookup_str {
  "zero",    "one",       "two",      "three",    "four",
  "five",    "six",       "seven",    "eight",    "nine",    "ten",
  "eleven",  "twelve",    "thirteen", "fourteen", "fifteen",
  "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
};

std::map<std::string, int> Arith::lookup_int {
  { "zero",  0}, { "one",   1}, { "two",   2},
  { "three", 3}, { "four",  4}, { "five",  5},
  { "six",   6}, { "seven", 7}, { "eight", 8},
  { "nine",  9}, { "ten",   10}, };
