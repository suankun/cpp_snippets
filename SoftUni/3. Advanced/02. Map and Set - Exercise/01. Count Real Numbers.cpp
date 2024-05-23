#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    map<double, unsigned> numbers;

    istringstream iss(line);
    double num;
    while (iss >> num)
        numbers[num]++;
    
    for (map<double, unsigned>::iterator itC = numbers.begin(); itC != numbers.end(); itC++)
        cout << itC->first << " -> " << itC->second << endl;

    for (pair<double, unsigned> p : numbers)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}
