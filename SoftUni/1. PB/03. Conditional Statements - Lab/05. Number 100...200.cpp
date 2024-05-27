#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num=0;
    cin >> num;
    if (num<100) cout << "Less than 100" << endl;
    else if (num>=100 && num<=200) cout << "Between 100 and 200" << endl;
    else cout << "Greater than 200" << endl;
    
    return 0;
}
