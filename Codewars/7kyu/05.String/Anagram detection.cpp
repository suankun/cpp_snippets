#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

bool isAnagram(std::string test, std::string original){
    // create two strings to make them lower case and compare
    std::string test1, origin1;
    for (size_t i {}; i < test.length(); i++) {
        char temp_ch = tolower(test[i]);
        test1.push_back(temp_ch);
    }
    for (size_t i {}; i < original.length(); i++) {
        char temp_ch = tolower(original[i]);
        origin1.push_back(temp_ch);
    }
    // sort new strings alphabetically
    sort(test1.begin(), test1.end());
    sort(origin1.begin(), origin1.end());
    // compare
    return test1 == origin1;
}

int main() {
    cout << boolalpha;
    // string text {"Buckethead"}, origin {"DeathCubeK"}; // true
    // string text {"foefet"}, origin {"toffee"}; // true
    string text {"dumble"}, origin {"bumble"}; // false
    bool result = isAnagram(text, origin);
    cout << result << endl;

    return 0;
}
//
#include <string>

bool isAnagram(std::string t, std::string o){

    if(t.size() != o.size())
    return false;
    
    std::transform(t.begin(),t.end(),t.begin(),::tolower);
    std::transform(o.begin(),o.end(),o.begin(),::tolower);
    std::sort(t.begin(),t.end());
    std::sort(o.begin(),o.end());
    
    return t==o;
  
}
