#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<double, greater<double> > numbers;

    istringstream iss(line);
    double num;
    while (iss >> num)
        numbers.insert(num);

    set<double>::iterator it = numbers.begin();
    int count = 3;
    while (count-- && it != numbers.end())
        cout << *it++ << " ";
    

    return 0;
}
