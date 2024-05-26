// https://www.codewars.com/kata/5cb05eee03c3ff002153d4ef/train/cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#include <vector>

int get_section_id(int n, std::vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        n -= a[i];
        if (n < 0)
            return i;
    }
    return -1;
}

// int get_section_id(int n, std::vector<int> a) {
//     int i = 0, check = 0;
//     for (; i < a.size(); i++) {
//         check += a[i];
//         if (n < check)
//             return i;
//     }
//     return -1;
// }

int main() {
    cout << get_section_id(1, {300, 200, 400, 600, 100})    << endl;  //  0
    cout << get_section_id(299, {300, 200, 400, 600, 100})  << endl;  //  0
    cout << get_section_id(300, {300, 200, 400, 600, 100})  << endl;  //  1
    cout << get_section_id(1599, {300, 200, 400, 600, 100}) << endl;  //  4
    cout << get_section_id(1600, {300, 200, 400, 600, 100}) << endl;  // -1

    return 0;
}
