// https://www.codewars.com/kata/55a70521798b14d4750000a4/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string greet(const std::string& n){
    return "Hello, " + n + " how are you doing today?";
}

int main() {
    std::string name = "Ryan";
    cout << greet(name) << endl;

    return 0;
}
