#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int input, sum=0;
    cin >> input;
    while (sum<input)
    {
        int num;
        cin >> num;
        sum+=num;
    }
    cout << sum << endl;

    return 0;
}
