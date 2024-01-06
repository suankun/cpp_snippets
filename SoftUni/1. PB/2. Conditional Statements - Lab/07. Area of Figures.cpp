#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string figure;
    cin >> figure;
    double area=0.0;
    double pi=3.14159265359;
    if (figure=="square") {
        double num=0.0;
        cin >> num;
        area=num*num;
    }
    else if (figure=="rectangle") {
        double a, b;
        cin >> a >> b;
        area=a*b;
    }
    else if (figure=="circle") {
        double r=0.0;
        cin >> r;
        area=r*r*pi;
    }
    else if (figure=="triangle") {
        double a, h;
        cin >> a >> h;
        area=(a*h)/2;
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;
    
    return 0;
}
