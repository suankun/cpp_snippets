// https://www.codewars.com/kata/58065440a4647e0ed3000230/train/cpp

// Give you an array, like this:

// ["from 1 to 3","from 2 to 6","from -100 to 0"]
// Find out the maximum range, return by an array:

// findMaxRange(["from 1 to 3","from 2 to 6","from -100 to 0"])
// return:
// ["from -100 to 0"]
// If more than one elements have the maximum range, return them according to the order of the original array.

// Input data is always an array. The format of all elements is always "from m to n". The value of from and to can be an integer or float. These are all possible: m > n or m == n or m < n

// Examples
// findMaxRange(["from 1 to 3","from 2 to 4","from 1 to 1"])
// should return:
// ["from 1 to 3","from 2 to 4"]

// findMaxRange(["from 1 to 10","from 10 to 1","from -1 to -10"])
// should return:
// ["from 1 to 10","from 10 to 1","from -1 to -10"]

// findMaxRange(["from 1 to 10","from 10.1 to 1","from -1 to -10"])
// should return:
// ["from 10.1 to 1"]

// findMaxRange([]) should return: []

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <limits>
using namespace std;

std::vector<std::string> find_max_range(const std::vector<std::string>& ranges)
{
    std::vector<std::string> res;
    double curMax = -std::numeric_limits<double>::infinity();

    for (const std::string& str : ranges) {
        double start, end;
        std::istringstream istr(str);
        std::string from, to;
        istr >> from >> start >> to >> end;

        double rangeDiff = std::abs(start - end);
        if (rangeDiff > curMax) {
            res.clear();
            res.push_back(str);
            curMax = rangeDiff;
        } else if (rangeDiff == curMax) {
            res.push_back(str);
        }
    }

    return res;
}

int main() {
    std::vector<std::string> v;
    std::vector<std::string> result;

    v = {"from 1 to 3","from 2 to 6","from -100 to 0"};
    result = find_max_range(v);  // {"from -100 to 0"}
    cout << v[0] << endl;

    // v = {"from 1 to 3","from 2 to 4","from 1 to 1"};
    // result = find_max_range(v);  // {"from 1 to 3","from 2 to 4"}
    // cout << v[0] << endl;

    // v = {"from 1 to 10","from 10 to 1","from -1 to -10"};  // {"from 1 to 10","from 10 to 1","from -1 to -10"}
    // result = find_max_range(v);
    // cout << v[0] << endl;

    // v = {"from 1 to 10","from 10.1 to 1","from -1 to -10"};  // {"from 10.1 to 1"}
    // result = find_max_range(v);
    // cout << v[0] << endl;

    // v = {};  // {}
    // result = find_max_range(v);
    // cout << v[0] << endl;
    
    return 0;
}
