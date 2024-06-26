#include <iostream>
#include <string>

using namespace std;

bool solve(std::string a, std::string b) {
    int lenA = a.length();
    int lenB = b.length();
    
    size_t pos = a.find('*');
    
    if (pos == std::string::npos) {
        return a == b;
    }
    
    for (int i = 0; i < pos; i++) {
        if (i >= lenB || a[i] != b[i]) {
            return false;
        }
    }
    
    for (int i = 1; i <= lenA - pos - 1; i++) {
        if (lenB - i < 0 || a[lenA - i] != b[lenB - i]) {
            return false;
        }
    }
    
    return true;
}

int main()
{
    cout << boolalpha;
    cout << solve("code*s","codewars")       << endl;  // true
    // cout << solve("codewar*s","codewars")    << endl;  // true
    // cout << solve("code*warrior","codewars") << endl;  // false
    // cout << solve("*c", "c")                 << endl;  // true
    // cout << solve("*s","codewars")           << endl;  // true
    // cout << solve("*s","s")                  << endl;  // true
    // cout << solve("s*","s")                  << endl;  // true
    // cout << solve("aa*", "aaa")              << endl;  // true

    return 0;
}
//
// #include <string>
// #include <fnmatch.h>

// bool solve(const std::string& a, const std::string& b) { 
//     return fnmatch(a.c_str(), b.c_str(), 0) == 0;
// }
//
bool solve(std::string a, std::string b){  
    return (b.find(a.substr(0, a.find("*"))) != std::string::npos) &&
            (b.find(a.substr(a.find("*") + 1)) != std::string::npos);
}
