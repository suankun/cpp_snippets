#include <iostream>
using namespace std;
const int SIZE = 16;
const int MAX_SIZE = 20;

struct Person {
    // char first_name[20];
    // char last_name[20];
    char f_name[SIZE];
    char l_name[SIZE];
};

void read_person(Person& P) {
    cout << "Enter first name: \n"; cin >> P.f_name;
    cout << "Enter last name: \n"; cin >> P.l_name;
}

struct Client {
    Person name;
    double account;
};

void read_client(Client& C) {
    cout << "Name of the client: \n"; read_person(C.name);
    cout << "Account balance: "; cin >> C.account; 
}

int main() {
    cout << "Enter value for 'n' from 1 to " << MAX_SIZE << ": ";
    int n; cin >> n;
    Client a[MAX_SIZE];
    for (int i=0; i<n; i++) {
        read_client(a[i]);
    }

    return 0;
}