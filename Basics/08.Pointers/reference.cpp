#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // int num {59};
    // int &ref {num};

    // cout << "num: " << num << ", ref: " << ref << endl;
    // num = 79;
    // cout << "num: " << num << ", ref: " << ref << endl;
    // ref = 99;
    // cout << "num: " << num << ", ref: " << ref << endl;
    //////////////////////////////////////////////////////
    // vector <string> names {"Edi", "Kevi"};
    // vector <string> &ref_names {names};

    // for (size_t i {}; i < names.size(); i++) {
    //     cout << names.at(i) << " ";
    // }
    // cout << endl;

    // for (size_t i {}; i < names.size(); i++) {
    //     cout << ref_names.at(i) << " ";
    // }
    // cout << endl;
    //////////////////////////////////////////////////////
    vector <string> names {"Edi", "Kevi"};

    for (auto &name: names) {
        name = "clear";
    }

    for (auto name: names) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}