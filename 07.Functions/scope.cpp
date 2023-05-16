#include <iostream>
using namespace std;

int num {10};

void increase_num(int n) {
    static int number {1}; // the variable keeps its value
    cout << "Print number before add 'n': " << number << endl;
    number += n;
    cout << "Print number after add 'n': " << number << endl;
}

void print_num(int number) {
    cout << "Print number from this scope: " << number << endl; 
    cout << "Print number from global scope: " << num << endl; 
}

int main() {
    int num {1};
    // increase_num(num);
    // increase_num(num);
    print_num(num);

    return 0;
}