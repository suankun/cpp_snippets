#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream iss(line);

    multiset< int, greater<int> > numbers;

    int num;
    while (iss >> num) {
        double sqr = sqrt(num);
        if (sqr == trunc(sqr))
            numbers.insert(num);
    }

    for (int n : numbers)
        cout << n << ' ';

    return 0;
}
