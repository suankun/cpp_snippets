#include <iostream>
using namespace std;

int rectangleArea(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    cin >> a >> b;
	cout << rectangleArea(a, b) << endl;

    return 0;
}
