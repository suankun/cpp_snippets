// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int int_num;
    long long_num; 
    char ch;
    float fl_num;
    double d;
    cin >> int_num >> long_num >> ch >> fl_num >> d;
    // printf("%d\n%lld\n%c\n%.3f\n%.9lf", int_num, long_num, ch, fl_num, d);
    cout << int_num << "\n"
         << long_num << "\n"
         << ch << endl;
    cout << fixed << setprecision(3) << fl_num << "\n";
    cout << fixed << setprecision(9) << d << "\n";
    return 0;
}