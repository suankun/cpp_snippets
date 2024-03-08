#include <iostream>
using namespace std;

string sign(int number) {
    string res = "The number " + to_string(number) + " is ";

    if (number > 0) res += "positive.";
    else if (number < 0) res += "negative.";
    else res += "zero.";

    return res;
}

int main() {
    int n;
    cin >> n;
	cout << sign(n) << endl;

    return 0;
}
