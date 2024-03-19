#include <iostream>
using namespace std;

string dayOfTheWeek(int num) {
    string days[7] = {"Monday", "Tuesday" ,"Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if (num >= 1 && num <= 7) return days[num-1];
    return "Invalid day!";
}

int main() {
    int num;
    cin >> num;

    cout << dayOfTheWeek(num) << endl;

    return 0;
}
