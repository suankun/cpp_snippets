#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

int main() {
    set<string> cars;

    while (true)
    {
        string line, command, car;
        getline(cin, line);

        if (line == "END")
            break;

        istringstream iss(line);
        iss >> command >> car;
        if (command == "IN,")
            cars.insert(car);
        else
            cars.erase(car);
    }
    
    if (cars.empty()) 
        cout << "Parking Lot is Empty" << endl;
    else
        for (string c : cars)
            cout << c << endl;

    return 0;
}
