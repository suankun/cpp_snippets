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

void print_person(const Person& P) {
    cout << "First name: " << P.f_name << endl << "Last name: " << P.l_name << endl;
}

struct Client {
    Person name;
    double account;
};

void read_client(Client& C) {
    cout << "Name of the client: \n"; read_person(C.name);
    cout << "Account balance: "; cin >> C.account; 
}

void print_client(const Client& C) {
    cout << "Name of the client: \n";
    print_person(C.name);
    cout << "Balance: " << C.account << endl;
}

int main() {
    cout << "Enter value for 'n' from 1 to " << MAX_SIZE << ": ";
    int n; cin >> n;
    Client a[MAX_SIZE];
    int i;
    for (i=0; i<n; i++) {
        read_client(a[i]);
    }

    // for (i=0; i<n; i++) {
    //     cout << "Name: " << a[i].name.f_name << " " << a[i].name.l_name << ", balance: " << a->account << endl;
    // }
    for (i=0; i<n; i++) {
        print_client(a[i]);
    }

    return 0;
}