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
