#include <iostream>
using namespace std;

int main() {
    string country;
    cin >> country;

    string language = "";
    if (country == "England" || country == "USA") language = "English";
    else if (country == "Spain" || country == "Argentina" || country == "Mexico") language = "Spanish";
    else language = "unknown";
    cout << language << endl;

    return 0;
}
