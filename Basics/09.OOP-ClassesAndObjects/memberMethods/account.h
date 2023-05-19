#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
using namespace std;

class Account {
private:
    string name;
    int balance;

public:
    void set_name();
    void set_balance();
    void get_name();
    void get_balance();
    void deposit();
    void withdraw();
};

#endif