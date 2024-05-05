#include <iostream>
#include "account.cpp"
#include "account.h"
using namespace std;

int main() {
    Account my_account;
    my_account.set_name();
    my_account.set_balance();
    my_account.get_name();
    my_account.get_balance();
    
    my_account.deposit();

    my_account.withdraw();
    my_account.withdraw();
    my_account.withdraw();

    return 0;
}