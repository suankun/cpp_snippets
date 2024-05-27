#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int degree;
    string timeOfTheDay, outfit, shoes;
    cin >> degree >> timeOfTheDay;

    if (degree>=10 && degree<=18) {
        if (timeOfTheDay=="Morning") {
            outfit="Sweatshirt";
            shoes="Sneakers";
        }
        else if (timeOfTheDay=="Afternoon" || timeOfTheDay=="Evening") {
            outfit="Shirt";
            shoes="Moccasins";
        }
    }
    else if (degree>18 && degree<=24) {
        if (timeOfTheDay=="Afternoon") {
            outfit="T-Shirt";
            shoes="Sandals";
        }
        else if (timeOfTheDay=="Morning" || timeOfTheDay=="Evening") {
            outfit="Shirt";
            shoes="Moccasins";
        }
    }
    else if (degree>=25) {
        if (timeOfTheDay=="Morning") {
            outfit="T-Shirt";
            shoes="Sandals";
        }
        else if (timeOfTheDay=="Afternoon") {
            outfit="Swim Suit";
            shoes="Barefoot";
        }
        else if (timeOfTheDay=="Evening") {
            outfit="Shirt";
            shoes="Moccasins";
        }
    }

    cout << "It's " << degree << " degrees, get your " << outfit << " and " << shoes << ".";
    
    return 0;
}
