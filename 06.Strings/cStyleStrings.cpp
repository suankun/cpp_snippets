#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};

    // cout << "Enter your first name: ";
    // cin >> first_name;

    // cout << "Enter your last name: ";
    // cin >> last_name;

    // cout << "Your first name is " << first_name << ". The length of the name is " << strlen(first_name) << endl;
    // cout << "Your last name is " << last_name << ". The length is " << strlen(last_name) << endl;

    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);

    // cout << "Your full name is " << full_name << endl;
////////////////////////////////////////////////////
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);

    cout << "Your full name is " << full_name << endl;

    for (size_t i {}; i < strlen(full_name); i++) {
        if (isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout << "Your full name is " << full_name << endl;

    return 0;
}