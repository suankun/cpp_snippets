#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string flowerType;
    int quantity, budget;
    double flowersPrice, flowersTotalPrice;
    cin >> flowerType >> quantity >> budget;

    if (flowerType=="Roses") {
        flowersPrice=5.00;
        if (quantity>80) flowersPrice*=0.9;
    }
    else if (flowerType=="Dahlias") {
        flowersPrice=3.80;
        if (quantity>90) flowersPrice*=0.85;
    }
    else if (flowerType=="Tulips") {
        flowersPrice=2.80;
        if (quantity>80) flowersPrice*=0.85;
    }
    else if (flowerType=="Narcissus") {
        flowersPrice=3.00;
        if (quantity<120) flowersPrice*=1.15;
    }
    else if (flowerType=="Gladiolus") {
        flowersPrice=2.50;
        if (quantity<80) flowersPrice*=1.20;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    flowersTotalPrice=flowersPrice*quantity;
    if (budget>=flowersTotalPrice)
        cout << "Hey, you have a great garden with " << quantity << " " << flowerType << " and " << budget-flowersTotalPrice << " leva left." << endl;
    else
        cout << "Not enough money, you need " << flowersTotalPrice-budget << " leva more." << endl;
    
    return 0;
}
