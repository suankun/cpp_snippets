// https://www.codewars.com/kata/5dad6e5264e25a001918a1fc/train/cpp

// Suppose we know the process by which a string s was encoded to a string r (see explanation below). The aim of the kata is to decode this string r to get back the original string s.

// Explanation of the encoding process:
// input: a string s composed of lowercase letters from "a" to "z", and a positive integer num
// we know there is a correspondence between abcde...uvwxyzand 0, 1, 2 ..., 23, 24, 25 : 0 <-> a, 1 <-> b ...
// if c is a character of s whose corresponding number is x, apply to x the function f: x-> f(x) = num * x % 26, then find ch the corresponding character of f(x)
// Accumulate all these ch in a string r
// concatenate num and r and return the result
// For example:

// encode("mer", 6015)  -->  "6015ekx"

// m --> 12,   12 * 6015 % 26 = 4,    4  --> e
// e --> 4,     4 * 6015 % 26 = 10,   10 --> k
// r --> 17,   17 * 6015 % 26 = 23,   23 --> x

// So we get "ekx", hence the output is "6015ekx"
// Task
// A string s was encoded to string r by the above process. complete the function to get back s whenever it is possible.

// Indeed it can happen that the decoding is impossible for strings composed of whatever letters from "a" to "z" when positive integer num has not been correctly chosen. In that case return "Impossible to decode".

// Examples
// decode "6015ekx" -> "mer"
// decode "5057aan" -> "Impossible to decode"

#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

namespace process
{
    int modular_inverse(int a, int m)
    {
        a = a % m;
        for (int x = 1; x < m; x++)
        {
            if ((a * x) % m == 1)
                return x;
        }
        return -1;
    }

    std::string decode(const std::string &r)
    {
        size_t i = 0;
        while (i < r.size() && std::isdigit(r[i]))
            i++;
        
        if (i == 0)
            return "Impossible to decode";
        
        int key = std::stoi(r.substr(0, i));
        std::string encoded_str = r.substr(i);
        std::string decoded_str;
        
        int inverse_key = modular_inverse(key, 26);
        if (inverse_key == -1)
            return "Impossible to decode";
        
        for (char c : encoded_str)
        {
            if (!std::islower(c))
                return "Impossible to decode";
            
            int encoded_value = c - 'a';
            int decoded_value = (encoded_value * inverse_key) % 26;
            decoded_str += static_cast<char>('a' + decoded_value);
        }
        
        return decoded_str;
    }
}

int main() {

    cout << process::decode("6015ekx") << endl;  // "mer"
    cout << process::decode("1273409kuqhkoynvvknsdwljantzkpnmfgf") << endl;  // "uogbucwnddunktsjfanzlurnyxmx"
    cout << process::decode("1544749cdcizljymhdmvvypyjamowl") << endl;       // "mfmwhbpoudfujjozopaugcb"
    cout << process::decode("105860ymmgegeeiwaigsqkcaeguicc") << endl;       // "Impossible to decode"
    cout << process::decode("1122305vvkhrrcsyfkvejxjfvafzwpsdqgp") << endl;  // "rrsxppowmjsrclfljrajtybwviqb"
    cout << process::decode("7235897srigyvazffyrtxizwgpmvpts") << endl;      // "qfkoexapddefbtkpiojcxjbq"
        
    return 0;
}
//
#include <string>

namespace process
{
    std::string decode(const std::string &r) {
        size_t pos;
        int num = std::stoi(r, &pos);
        
        int table[26];
        for (auto i = 0; i < 26; i ++)
            table[i] = -1;

        for (auto i = 0; i < 26; i ++) {
            int j = (i * num) % 26;
            if (table[j] == -1)
                table[j] = i;
            else
                table[j] = -2;
        }
        
        std::string result;
        for (; pos < r.size(); pos++) {
            int j = table[r[pos] - 'a'];

            if (j == -2)
                return "Impossible to decode";
                
            result.push_back('a' + j);
        }

        return result;
    }
}
