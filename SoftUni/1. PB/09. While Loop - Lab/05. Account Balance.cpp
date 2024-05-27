#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string command;
    getline(cin, command);

    double total=0.0;
    while (command!="NoMoreMoney")
    {
        double temp=stod(command);
        
        if (temp<0) {
            cout << "Invalid operation!" << endl;
            break;
        }
        total+=temp;
        cout << fixed << setprecision(2) << "Increase: " << temp << endl;
        getline(cin, command);
    }
    
    cout << fixed << setprecision(2) << "Total: " << total << endl;
    
    return 0;
}
