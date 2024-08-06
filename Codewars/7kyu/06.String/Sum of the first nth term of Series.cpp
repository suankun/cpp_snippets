// https://www.codewars.com/kata/555eded1ad94b00403000071/train/cpp
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

std::string seriesSum(int n) {
    if (n == 0) return "0.00";
    double sum {1};
    for (int i {1}; i<n; i++) {
        sum += 1.0/(1+(3*i));
    }

    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2) << sum;
    std::string formattedNumber = oss.str();

    return formattedNumber;
}

int main() {
    
    int num {9};
    string res = seriesSum(num);
    cout << res << endl;

    return 0;
}
//
#include <iomanip>

using namespace std;

string seriesSum(int n)
{
    double ret = 0.0;
    double base = 1.0;
    while (n--) {
        ret += 1 / base;
        base += 3;
    }
    stringstream retss;
    retss << setprecision(2) << fixed << ret;
    return retss.str();
}
//
std::string seriesSum(int n)
{
    float sum = 0;
    char str[3];
    for(auto i = 0; i < n; i++) sum += 1./(3*i+1);
    sprintf(str, "%.2f", sum);
    return str;
}
//
#include <iomanip>
#include <algorithm>

std::string seriesSum(int n)
{
    float f = 0.0;
    for (int i = 0; i < n; i++) {
        f += 1.0/double(1 + 3*i);
    }
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << f;
    return ss.str();
}
