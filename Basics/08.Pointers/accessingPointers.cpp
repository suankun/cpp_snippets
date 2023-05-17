#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_vector(vector <string> &list);

int main() {
    // int *p;
    // cout << "Value of 'p' before initializing: " << p << endl;
    // cout << "Address of 'p': " << &p << endl;
    // cout << "Size of 'p': " << sizeof p << endl;
    // p = nullptr;
    // cout << "Value of 'p' after initializing: " << p << endl;
/////////////////////////////////////////////
    // int num {10};
    // cout << "Value of num: " << num << endl;
    // cout << "Address of num: " << &num << endl;
    // cout << "Size of num: " << sizeof num << endl;
    // cout << "------------------------------" << endl;

    // int *p = nullptr;
    // cout << "Value of p: " << p << endl;
    // cout << "Address of p: " << &p << endl;
    // cout << "Size of p: " << sizeof p << endl;
    // cout << "------------------------------" << endl;

    // p = &num;
    // cout << "New value of p: " << *p << endl;
/////////////////////////////////////////////
    int num {5};
    int *pNum {nullptr};
    pNum = &num;
    cout << "Value of num: " << num << endl;
    cout << "Value of pNum: " << *pNum << endl;
    *pNum = 10;
    cout << "Value of num after changing pNum: " << num << endl;
    cout << "Value of pNum after changing pNum: " << *pNum << endl;
    num = 15;
    cout << "Value of num after changing num: " << num << endl;
    cout << "Value of pNum after changing num: " << *pNum << endl;
    cout << "-------------------------------------------" << endl;

    string name {"Edmont"};
    string *pStr {nullptr};
    pStr = &name;
    cout << "Value of name: " << name << endl;
    cout << "Value of pStr: " << *pStr << endl;
    *pStr = "Edi";
    cout << "Value of name after changing pStr: " << name << endl;
    cout << "Value of pStr after changing pStr: " << *pStr << endl;
    name = "Edmont Budakyan";
    cout << "Value of name after changing name: " << name << endl;
    cout << "Value of pStr after changing name: " << *pStr << endl;
    cout << "-------------------------------------------" << endl;

    vector <string> list {"Tomatoes", "Cucumber", "Lemons"};
    vector <string> *pVec {nullptr};

    pVec = &list;
    cout << "Value of list: ";
    print_vector(list);
    cout << "Value of pVec: " << (*pVec).at(0) <<
    ", " << (*pVec).at(1) << ", " << (*pVec).at(2) << endl;

    (*pVec).at(0) = "Oranges";
    cout << "Value of list after changing pVec: ";
    print_vector(list);
    cout << "Value of pVec after changing pVec: " << (*pVec).at(0) <<
    ", " << (*pVec).at(1) << ", " << (*pVec).at(2) << endl;

    list.at(1) = "Тangerines";
    cout << "Value of list after changing list: ";
    print_vector(list);
    cout << "Value of pVec after changing list: " << (*pVec).at(0) <<
    ", " << (*pVec).at(1) << ", " << (*pVec).at(2) << endl;

    return 0;
}

void print_vector(vector <string> &list) {
    for (auto elem: list)
        cout << elem << ", ";
    cout << endl;
}
