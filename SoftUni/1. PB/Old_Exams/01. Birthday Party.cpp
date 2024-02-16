#include <iostream>
using namespace std;

int main() {
    double rent;
    cin >> rent;

    double birthdayCake = rent * 0.2;
    double beverages = birthdayCake * 0.55;
    double animation = rent / 3.0;

    cout << rent + birthdayCake + beverages + animation << endl;

    return 0;
}
