#include <iostream>
#include <string>
using namespace std;

int main() {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string user_input;

    cout << "Enter a message for encryption: ";
    getline(cin, user_input);

    string encrypted_message {};
    cout << "Encrypting message..." << endl;

    for (char c: user_input) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char { key.at(position)};
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }

    cout << "\nEncrypted message: " << encrypted_message << endl;

    string decrypted_message {};
    cout << "\nDecrypting message..." << endl;

    for (char c: encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
        }
    }

    cout << "\nDecrypted message: " << decrypted_message << endl;

    return 0;
}