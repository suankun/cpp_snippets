// https://www.codewars.com/kata/592b7b16281da94068000107/train/cpp
// The GADERYPOLUKI is a simple substitution cypher used in scouting to encrypt messages. The encryption is based on short, easy to remember key. The key is written as paired letters, which are in the cipher simple replacement.

// The most frequently used key is "GA-DE-RY-PO-LU-KI".

//  G => A
//  g => a
//  a => g
//  A => G
//  D => E
//   etc.
// The letters, which are not on the list of substitutes, stays in the encrypted text without changes.

// Other keys often used by Scouts:

// PO-LI-TY-KA-RE-NU
// KA-CE-MI-NU-TO-WY
// KO-NI-EC-MA-TU-RY
// ZA-RE-WY-BU-HO-KI
// BA-WO-LE-TY-KI-JU
// RE-GU-LA-MI-NO-WY
// Task
// Your task is to help scouts to encrypt and decrypt thier messages. Write the Encode and Decode functions.

// Input/Output
// The function should have two parameters.
// The message input string consists of lowercase and uperrcase characters and whitespace character.
// The key input string consists of only lowercase characters.
// The substitution has to be case-sensitive.

// Example
//  Encode("ABCD", "agedyropulik");             // => GBCE 
//  Encode("Ala has a cat", "gaderypoluki");    // => Gug hgs g cgt 
//  Decode("Dkucr pu yhr ykbir","politykarenu") // => Dance on the table
//  Decode("Hmdr nge brres","regulaminowy")  // => Hide our beers

#include <string>
#include <unordered_map>
using namespace std;

string ende(string str, string key) {
    string key_upper = key;
    for (char &c : key_upper) c = toupper(c);
    key += key_upper;

    string rkey;
    for (size_t i = 0; i < key.length(); i += 2) {
        if (i + 1 < key.length()) {
            rkey += key[i + 1];
            rkey += key[i];
        }
    }

    unordered_map<char, char> translation_map;
    for (size_t i = 0; i < key.length(); ++i) {
        translation_map[key[i]] = rkey[i];
    }

    for (char &c : str) {
        if (translation_map.find(c) != translation_map.end()) {
            c = translation_map[c];
        }
    }

    return str;
}

string encode(string str, string key) {
    return ende(str, key);
}

string decode(string str, string key) {
    return ende(str, key);
}
//
#include <string>
#include <map>
#include <cctype>

using namespace std;

string encode(string s, string k) {
    map<char, char> mapping;
    for (size_t i = 0; i < k.length(); i += 2) {
        mapping[k[i]] = k[i + 1];
        mapping[k[i + 1]] = k[i];
        mapping[toupper(k[i])] = toupper(k[i + 1]);
        mapping[toupper(k[i + 1])] = toupper(k[i]);
    }
    string result = "";
    for (size_t i = 0; i < s.length(); i++)
        result += mapping.find(s[i]) != mapping.end() ? mapping[s[i]] : s[i];
    return result;
}
string decode(string s, string k) {
    return encode(s, k);
}
