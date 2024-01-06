#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    string type, ticket;
    int ticketNum=0;
    char picture;

    getline(cin, type);
    cin >> ticket >> ticketNum >> picture;

    double total=0;
    if (type=="Quarter final") {
        if (ticket=="Standard") {
            total = 55.50 * ticketNum;
        }
        else if (ticket=="Premium") {
            total = 105.20 * ticketNum;
        }
        else if (ticket=="VIP") {
            total = 118.90 * ticketNum;
        }
    }

    if (type=="Semi final") {
        if (ticket=="Standard") {
            total = 75.88 * ticketNum;
        }
        else if (ticket=="Premium") {
            total = 125.22 * ticketNum;
        }
        else if (ticket=="VIP") {
            total = 300.40 * ticketNum;
        }
    }

    if (type=="Final") {
        if (ticket=="Standard") {
            total = 110.10 * ticketNum;
        }
        else if (ticket=="Premium") {
            total = 160.66 * ticketNum;
        }
        else if (ticket=="VIP") {
            total = 400 * ticketNum;
        }
    }

    if (total>4000) {
        total-=(total*0.25);
    }
    else if (total>2500) {
        total-=(total*0.1);
        if (picture=='Y') total+=(40*ticketNum);
    }
    else {
        if (picture=='Y') total+=(40*ticketNum);
    }

    cout << fixed << setprecision(2) << total;

    return 0;
}