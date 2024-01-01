#include <iostream>
using namespace std;

int main() {
    int red=0, orange=0, blue=0, green=0;
    int max=0;
    string maxColor;

    int eggs=0;
    cin >> eggs;

    string color;
    for (int i=0; i<eggs; i++) {
        cin >> color;
        if (color=="red") {
            red++;
            if (red>max) {
                max=red;
                maxColor=color;
            }
        }
        else if (color=="orange") {
            orange++;
            if (orange>max) {
                max=orange;
                maxColor=color;
            }
        }
        else if (color=="blue") {
            blue++;
            if (blue>max) {
                max=blue;
                maxColor=color; 
            }
        }
        else if (color=="green") {
            green++;
            if (green>max) {
                max=green;
                maxColor=color;
            }
        }
    }

    cout << "Red eggs: " << red << endl;
    cout << "Orange eggs: " << orange << endl;
    cout << "Blue eggs: " << blue << endl;
    cout << "Green eggs: " << green << endl;
    cout << "Max eggs: " << max << " -> " << maxColor << endl;

    return 0;
}
