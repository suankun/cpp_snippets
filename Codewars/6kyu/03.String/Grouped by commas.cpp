// https://www.codewars.com/kata/5274e122fc75c0943d000148/train/cpp
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// 1000000
// 1.000.000

std::string group_by_commas(int n)
{
    std::ostringstream ostr;
    std::string grouped = std::to_string(n);
    for (int i = grouped.length(); i > 0; i -= 2) {
            grouped.insert(i, ",");
            i--;
    }
    grouped.pop_back();

    return grouped;
}

int main() {
	cout <<          group_by_commas(1) << endl;  //              "1"
    cout <<         group_by_commas(12) << endl;  //             "12"
    cout <<        group_by_commas(123) << endl;  //            "123"
    cout <<       group_by_commas(1234) << endl;  //          "1,234"
    cout <<      group_by_commas(12345) << endl;  //         "12,345"
    cout <<     group_by_commas(123456) << endl;  //        "123,456"
    cout <<    group_by_commas(1234567) << endl;  //      "1,234,567"
    cout <<   group_by_commas(12345678) << endl;  //     "12,345,678"
    cout <<  group_by_commas(123456789) << endl;  //    "123,456,789"
    cout << group_by_commas(1234567890) << endl;  //  "1,234,567,890"

    return 0;
}
//
#include <string>

std::string group_by_commas(int n)
{
    std::string strNumber = std::to_string(n);

    for (int i = strNumber.length() - 3; i > 0; i -= 3)
        strNumber.insert(i, ",");


    return strNumber;
}
//
#include <string>
#include <locale>
#include <sstream>
#include <memory>

struct separate_thousands : std::numpunct<char> {
    char_type do_thousands_sep() const override { return ','; }  // separate with commas
    string_type do_grouping() const override { return "\3"; } // groups of 3 digit
};

std::string group_by_commas(int n)
{
    auto thousands = std::make_unique<separate_thousands>();
    std::stringstream str;
    str.imbue(std::locale(str.getloc(), thousands.release()));
    
    str << n;
    std::string res;
    str >> res;
    return res;
}
