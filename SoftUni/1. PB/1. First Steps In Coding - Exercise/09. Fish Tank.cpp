#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int l=0, w=0, h=0;
    double per=0.0;
    cin >> l;
    cin >> w;
    cin >> h;
    cin >> per;

    double volume=l*w*h;
    volume*=0.001;
    double space=per/100;
    double liters=volume*(1-space);

    cout << liters << endl;
    
    return 0;
}
