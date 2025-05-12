// https://www.codewars.com/kata/5efae11e2d12df00331f91a6/train/cpp

// Given is a md5 hash of a five digits long PIN. It is given as string. Md5 is a function to hash your password: "password123" ===> "482c811da5d5b4bc6d497ffa98491e38"

// Why is this useful? Hash functions like md5 can create a hash from string in a short time and it is impossible to find out the password, if you only got the hash. The only way is cracking it, means try every combination, hash it and compare it with the hash you want to crack. (There are also other ways of attacking md5 but that's another story) Every Website and OS is storing their passwords as hashes, so if a hacker gets access to the database, he can do nothing, as long the password is safe enough.

// What is a hash?

// What is md5?

// Note: Many languages have build in tools to hash md5. If not, you can write your own md5 function or google for an example.

// Here is another kata on generating md5 hashes!

// Your task is to return the cracked PIN as string.

// This is a little fun kata, to show you, how weak PINs are and how important a bruteforce protection is, if you create your own login.

#include <string>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <iostream>

#include <openssl/md5.h>

std::string md5(const std::string& str) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(str.c_str()), str.length(), digest);

    std::ostringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++)
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)digest[i];

    return ss.str();
}

std::string crack(const std::string& hash) {
    for (int i = 0; i <= 99999; i++) {
        std::ostringstream ss;
        ss << std::setw(5) << std::setfill('0') << i;
        std::string pin = ss.str();

        if (md5(pin) == hash) {
            return pin;
        }
    }
    return "";
}
