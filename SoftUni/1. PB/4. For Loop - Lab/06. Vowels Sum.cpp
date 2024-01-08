#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string text;
    getline(cin, text);

    int sum=0;
    for (int i=0; i<text.length(); i++) {
        switch (text[i])
        {
            case 'a': sum+=1; break;
            case 'e': sum+=2; break;
            case 'i': sum+=3; break;
            case 'o': sum+=4; break;
            case 'u': sum+=5; break;
        }
    }

    cout << sum << endl;

    return 0;
}
