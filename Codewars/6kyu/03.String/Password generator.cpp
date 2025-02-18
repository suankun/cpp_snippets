// https://www.codewars.com/kata/58ade2233c9736b01d0000b3/train/cpp

// You need to write a password generator that meets the following criteria:

// 6 - 20 characters long
// contains at least one lowercase letter
// contains at least one uppercase letter
// contains at least one number
// contains only alphanumeric characters (no special characters)
// Return the random password as a string.

// Note: "randomness" is checked by counting the characters used in the generated passwords - all characters should have less than 50% occurance. Based on extensive tests, the normal rate is around 35%.

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <random>
#include <ctime>

using namespace std;

std::string password_gen() {
    const string lowercase = "abcdefghijklmnopqrstuvwxyz";
    const string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string digits = "0123456789";
    const string all_chars = lowercase + uppercase + digits;
    
    random_device rd;
    mt19937 gen(rd());
    
    uniform_int_distribution<> length_dist(6, 20);
    int length = length_dist(gen);
    
    auto is_valid_password = [](const string& password) {
        bool has_lower = any_of(password.begin(), password.end(), ::islower);
        bool has_upper = any_of(password.begin(), password.end(), ::isupper);
        bool has_digit = any_of(password.begin(), password.end(), ::isdigit);
        return has_lower && has_upper && has_digit;
    };
    
    string password;
    uniform_int_distribution<> char_dist(0, all_chars.length() - 1);
    do {
        password.clear();
        for (int i = 0; i < length; ++i) {
            password += all_chars[char_dist(gen)];
        }
    } while (!is_valid_password(password));
    
    return password;
}

int main() {
    for (unsigned i = 0; i < 40; i++) {
        string pwd = password_gen();
        bool lower = any_of(pwd.begin(), pwd.end(), ::islower),
             upper = any_of(pwd.begin(), pwd.end(), ::isupper),
             digit = any_of(pwd.begin(), pwd.end(), ::isdigit),
             length = pwd.size() >= 6 && pwd.size() <= 20;
        
        if (lower && upper && digit && length)
            printf("%-20s | OK!\n", pwd.c_str());
        else
            printf("%-20s | INVALID\n", pwd.c_str());
    }
    return 0;
}
//
#include <string>
#include <cstdlib>
#include <cctype>
#include <functional>

bool satisfy_generic(std::function<int(int)> f, std::string pwd) {
    for (char c : pwd) {
        if (f(c) != 0) return true;
    }
    return false;
}

char get_random_char() {
    unsigned d = rand() % 62;
    // Lowercase
    if (d < 26) return char(d + 'a');
    // Uppercase
    if (d < 52) return char(d - 26 + 'A');
    // Digits
    if (d < 62) return char(d - 52 + '0');
    
    return 0;
}

std::string generate(unsigned len) {
    std::string pwd = "";
    for (unsigned i = 0; i < len; i++)
        pwd.push_back(get_random_char());

    return pwd;
}

std::string password_gen() {
    std::string pwd = generate(rand() % 15 + 6);
    while (!satisfy_generic(::isupper, pwd) ||
            !satisfy_generic(::islower, pwd) ||
            !satisfy_generic(::isdigit, pwd)) {
        pwd = generate(rand() % 15 + 6);
    }

    return pwd;
}
