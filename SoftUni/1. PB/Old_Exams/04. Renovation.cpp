#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int height, width, unpaintedPercent;
    cin >> height >> width >> unpaintedPercent;
    int totalWallsForPainting = ceil((height*width*4) * (1.0 - unpaintedPercent/100.0));

    string command;
    cin >> command;
    while (command != "Tired!") {
        int num = stoi(command);
        totalWallsForPainting -= num;
        if (totalWallsForPainting <= 0) break;
        cin >> command;
    }

    if (command == "Tired!") cout << totalWallsForPainting << " quadratic m left." << endl;
    else {
        if (totalWallsForPainting < 0)
            cout << "All walls are painted and you have " << abs(totalWallsForPainting) << " l paint left!" << endl;
        else 
            cout << "All walls are painted! Great job, Pesho!" << endl;
    }

    return 0;
}
