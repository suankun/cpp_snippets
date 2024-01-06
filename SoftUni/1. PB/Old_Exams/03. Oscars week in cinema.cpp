#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string movie, hall;
    getline(cin, movie);
    getline(cin, hall);
    int tickets=0;
    double totalPrice=0.0;
    cin >> tickets;


    if (movie=="A Star Is Born") {
        if (hall=="normal") totalPrice=tickets*7.50;
        else if (hall=="luxury") totalPrice=tickets*10.50;
        else if (hall=="ultra luxury") totalPrice=tickets*13.50;
    }

    if (movie=="Bohemian Rhapsody") {
        if (hall=="normal") totalPrice=tickets*7.35;
        else if (hall=="luxury") totalPrice=tickets*9.45;
        else if (hall=="ultra luxury") totalPrice=tickets*12.75;
    }

    if (movie=="Green Book") {
        if (hall=="normal") totalPrice=tickets*8.15;
        else if (hall=="luxury") totalPrice=tickets*10.25;
        else if (hall=="ultra luxury") totalPrice=tickets*13.25;
    }

    if (movie=="The Favourite") {
        if (hall=="normal") totalPrice=tickets*8.75;
        else if (hall=="luxury") totalPrice=tickets*11.55;
        else if (hall=="ultra luxury") totalPrice=tickets*13.95;
    }

    cout << fixed << setprecision(2) << movie << " -> " << totalPrice << " lv." << endl;

    return 0;
}
