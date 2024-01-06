#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    cin >> n;

    if (!((n>=100 && n<=200) || n==0)) cout << "invalid" << endl;

    return 0;
}
