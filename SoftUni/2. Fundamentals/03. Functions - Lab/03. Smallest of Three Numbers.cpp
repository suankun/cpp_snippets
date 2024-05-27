#include <iostream>
using namespace std;

int smallestNum(int a, int b, int c) {
    int res = (min(min(a, b), c));

    return res;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
	cout << smallestNum(a, b, c) << endl;

    return 0;
}
