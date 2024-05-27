#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int n;
    string day;
    cin >> n >> day;

    if (day=="Sunday" || (n<10 || n>18)) cout << "closed" << endl;
    else cout << "open" << endl;

    return 0;
}
