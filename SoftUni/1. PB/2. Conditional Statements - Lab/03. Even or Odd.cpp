#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num=0;
    cin >> num;
    
    if (num%2==0) cout << "even" << endl;
    else cout << "odd" << endl;
    
    return 0;
}
