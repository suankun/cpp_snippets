#include <iostream>
#include "account.h"
using namespace std;

void Account::set_name() {
    string user_input_name;
    cout << "Enter account name: ";
    getline(cin, user_input_name);
    name = user_input_name;
}

void Account::set_balance() {
    int initial_balance {};
    cout << "Enter your initial balance: ";
    cin >> initial_balance;
    balance = initial_balance;
}

string Account::get_name() {
    cout << "Account name is: " << name << endl;
}

void Account::get_balance() {
    cout << "Balance is: " << balance << endl;
}

void Account::deposit() {
    int deposit_amount {};
    cout << "Enter your deposit: ";
    cin >> deposit_amount;
    balance += deposit_amount;
    cout << "Deposit accepted" << endl;
}

void Account::withdraw() {
    int withdraw_amount {};
    cout << "Enter amount that you want to withdwaw: ";
    cin >> withdraw_amount;
    if (balance >= withdraw_amount) {
        balance -= withdraw_amount;
        cout << "Success. Current balance: " << balance << endl;
    } else {
        cout << "Not enough money! Current balance: " << balance << endl;
    }
}
