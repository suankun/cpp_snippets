#include <iostream>
using namespace std;

void printTeens(int n) {
    switch (n)
    {
        case 0: cout << "ten"; break;
        case 1: cout << "eleven"; break;
        case 2: cout << "twelve"; break;
        case 3: cout << "thirteen"; break;
        case 4: cout << "fourteen"; break;
        case 5: cout << "fifteen"; break;
        case 6: cout << "sixteen"; break;
        case 7: cout << "seventeen"; break;
        case 8: cout << "eighteen"; break;
        case 9: cout << "nineteen"; break;
    }
    cout << ' ';
}

void printTens(int n) {
    switch (n)
    {
        case 2: cout << "twenty"; break;
        case 3: cout << "thirty"; break;
        case 4: cout << "forty"; break;
        case 5: cout << "fifty"; break;
        case 6: cout << "sixty"; break;
        case 7: cout << "seventy"; break;
        case 8: cout << "eighty"; break;
        case 9: cout << "ninety"; break;
    }
    cout << ' ';
}

void printUnits(int n) {
    switch (n)
    {
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
    }
    cout << ' ';
}

int main() {
    int n;
    cin >> n;

    int units     = n % 10;
    int tens      = (n/10) % 10;
    int hundreds  = (n/100) % 10;
    int thousands = n/1000;

    if (thousands) {
        printUnits(thousands);
        cout << "thousand ";
    }

    if (hundreds) {
        printUnits(hundreds);
        cout << "hundred ";
    }

    if (tens == 1) printTeens(units);
    else if (tens) printTens(tens);

    if (units == 0 && n<10) cout << "zero";
    else if (units && tens!=1) printUnits(units);

    return 0;
}
