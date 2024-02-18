#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    string numToStr = to_string(num);
    int firstMultiplier = numToStr[2] - '0';
    int secondMultiplier = numToStr[1] - '0';
    int thirdMultiplier = numToStr[0] - '0';

    for (int i=1; i<=firstMultiplier; i++)
        for (int j=1; j<=secondMultiplier; j++)
            for (int k=1; k<=thirdMultiplier; k++)
                cout << i << " * " << j << " * " << k << " = " << i*j*k  << ";" << endl;


    return 0;
}
