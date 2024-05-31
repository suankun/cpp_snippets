#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    map<string, double> exchange;
    vector<string> order;

    string command, currency, money;
    while (getline(cin, command) && command != "END")
    {
        istringstream iss(command);
        iss >> currency;
        iss >> money;

        if (exchange.find(currency) == exchange.end())
            order.push_back(currency);

        exchange[currency] += stod(money);
    }
    
    string operation, currency2, rate;
    while (getline(cin, command) && command != "END") {
        istringstream iss(command);
        iss >> operation;

        if (operation == "+") {
            iss >> currency;
            iss >> money;
            exchange[currency] += stod(money);
        }
        else if (operation == "-") {
            iss >> currency;
            iss >> money;
            exchange[currency] -= stod(money);
        }
        else if (operation == "X") {
            iss >> currency;
            iss >> money;
            iss >> currency2;
            iss >> rate;
            exchange[currency] -= stod(money);
            exchange[currency2] += stod(money) * stod(rate);
        }
        else if (operation == "P") {
            cout << fixed << setprecision(2);
            for (string curr : order) {
                cout << curr << ": " << exchange[curr] << endl;
            }
        }

    }

    return 0;
}
