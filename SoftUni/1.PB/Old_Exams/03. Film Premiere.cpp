#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

int main() {
    string name, package;
    int tickets=0;
    double total=0.0;
    getline(cin, name);
    cin >> package;
    cin >> tickets;

    if (name=="John Wick") {
        if (package=="Drink") total=tickets*12;
        else if (package=="Popcorn") total=tickets*15;
        else if (package=="Menu") total=tickets*19;
    }

    if (name=="Star Wars") {
        if (package=="Drink") total=tickets*18;
        else if (package=="Popcorn") total=tickets*25;
        else if (package=="Menu") total=tickets*30;
        if (tickets>=4) total*=0.7;
    }

    if (name=="Jumanji") {
        if (package=="Drink") total=tickets*9;
        else if (package=="Popcorn") total=tickets*11;
        else if (package=="Menu") total=tickets*14;
        if (tickets==2) total*=0.85;
    }

    cout << fixed << setprecision(2) << "Your bill is " << total << " leva." << endl;

    return 0;
}
