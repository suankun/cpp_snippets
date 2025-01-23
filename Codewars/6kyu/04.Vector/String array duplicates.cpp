// https://www.codewars.com/kata/59f08f89a5e129c543000069/train/cpp

// In this Kata, you will be given an array of strings and your task is to remove all consecutive duplicate letters from each string in the array.

// For example:

// dup(["abracadabra","allottee","assessee"]) = ["abracadabra","alote","asese"].

// dup(["kelless","keenness"]) = ["keles","kenes"].

// Strings will be lowercase only, no spaces.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> dup(std::vector<std::string> arr){    
    std::vector<std::string> res;
    for(std::string w : arr) {
        std::string tempWord;

        if (w.length() >= 2)
            if (w[0] != w[1])
                tempWord += w[0];
        
        for (int curChar = 1; curChar < w.length(); curChar++) {
            if (w[curChar] != w[curChar + 1])
                tempWord += w[curChar];
        }

        res.push_back(tempWord);
    }

    return res;
}

void print(std::vector<std::string> & v) {
    for (string st : v)
        cout << st << ' ';
    cout << endl;
}

int main() {
    std::vector<std::string> v;

    v = dup(vector<string>{"ccooddddddewwwaaaaarrrrsssss","piccaninny","hubbubbubboo"});
    print(v);
    // Equals(vector<string>{"codewars","picaniny","hubububo"}));
    
    v = dup(vector<string>{"abracadabra","allottee","assessee"});
    print(v);
    // Equals(vector<string>{"abracadabra","alote","asese"}));
    
    v = dup(vector<string>{"kelless","keenness"});
    print(v);
    // Equals(vector<string>{"keles","kenes"}));

    return 0;
}
