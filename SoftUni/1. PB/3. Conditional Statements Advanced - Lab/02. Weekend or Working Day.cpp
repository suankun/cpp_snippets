#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string dayOfTheWeek;
    cin >> dayOfTheWeek;
    if (dayOfTheWeek=="Monday" || dayOfTheWeek=="Tuesday" || 
        dayOfTheWeek=="Wednesday" || dayOfTheWeek=="Thursday" ||
        dayOfTheWeek=="Friday")
        cout << "Working day" << endl;
    else if (dayOfTheWeek=="Saturday" || dayOfTheWeek=="Sunday")
        cout << "Weekend" << endl;
    else
        cout << "Error" << endl;

    return 0;
}
