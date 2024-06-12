#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main()
{
    string str;
    getline(cin, str);

    char * lowerCase, * upperCase;
    
    lowerCase = new char[str.length() + 1];
    upperCase = new char[str.length() + 1];

    size_t cur = 0;
    for (; cur < str.length(); cur++) {
        lowerCase[cur] = ::tolower(str[cur]);
        upperCase[cur] = ::toupper(str[cur]);
    }

    lowerCase[cur] = '\0';
    upperCase[cur] = '\0';

    cout << lowerCase << endl << upperCase << endl;

    delete [] upperCase;
    delete [] lowerCase;
    
    return 0;
}
