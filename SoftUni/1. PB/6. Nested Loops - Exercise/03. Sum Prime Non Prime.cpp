#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i=2; i<=num/2; i++) if (num%i==0) return false;
    return true;
}

int main() {
    string command;
    cin >> command;
    int sumPrime=0, sumNonprime=0;

    while (command!="stop")
    {
        int num = stoi(command);
        if (num<0) {
            cout << "Number is negative." << endl;
            cin >> command;
            continue;
        }

        isPrime(num) ? sumPrime+=num : sumNonprime+=num;
        cin >> command;
    }

    cout << "Sum of all prime numbers is: " << sumPrime << endl;
    cout << "Sum of all non prime numbers is: " << sumNonprime << endl;
    
    return 0;
}
