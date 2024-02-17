#include <iostream>
using namespace std;

int main() {
    double budget;
    char sex;
    int age;
    string sport;

    cin >> budget >> sex >> age >> sport;

    double price;
    if (sex == 'm') {
        if (sport == "Gym") price = 42;
        else if (sport == "Boxing") price = 41;
        else if (sport == "Yoga") price = 45;
        else if (sport == "Zumba") price = 34;
        else if (sport == "Dances") price = 51;
        else if (sport == "Pilates") price = 39;
    }
    else if (sex == 'f') {
        if (sport == "Gym") price = 35;
        else if (sport == "Boxing") price = 37;
        else if (sport == "Yoga") price = 42;
        else if (sport == "Zumba") price = 31;
        else if (sport == "Dances") price = 53;
        else if (sport == "Pilates") price = 37;
    }

    if (age <= 19) price *= 0.8;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= price)
        cout << "You purchased a 1 month pass for " << sport << "." << endl;
    else
        cout << "You don't have enough money! You need $" << price - budget << " more." << endl;

    return 0;
}
