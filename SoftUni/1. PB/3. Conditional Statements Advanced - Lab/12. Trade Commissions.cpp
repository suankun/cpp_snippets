#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;

int main() {
    string city;
    double sales, comission=-1;
    cin >> city >> sales;

    if (sales<0) {
        cout << "error" << endl;
        return 1;
    }
    if (city=="Sofia") {
        if (sales<=500) comission=5/100.0;
        else if (sales<=1000) comission=7/100.0;
        else if (sales<=10000) comission=8/100.0;
        else comission=12/100.0;
    }
    else if (city=="Varna") {
        if (sales<=500) comission=4.5/100.0;
        else if (sales<=1000) comission=7.5/100.0;
        else if (sales<=10000) comission=10/100.0;
        else comission=13/100.0;
    }
    else if (city=="Plovdiv") {
        if (sales<=500) comission=5.5/100.0;
        else if (sales<=1000) comission=8/100.0;
        else if (sales<=10000) comission=12/100.0;
        else comission=14.5/100.0;
    }
    else {
        cout << "error" << endl;
        return 1;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (comission>=0) cout << sales*comission << endl;
    else cout << "error" << endl;
    
    return 0;
}
