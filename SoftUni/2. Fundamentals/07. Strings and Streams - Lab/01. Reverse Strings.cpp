#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    // while (text != "end")
    // {
    //     int len = text.length();
    //     cout << text + " = ";
    //     for (int i = len-1; i >= 0; i--) cout << text[i];
    //     cout << endl;
    //     getline(cin, text);
    // }

    while (text != "end")
    {
        string reversedText = "";
        int len = text.length();
        for (int i = len-1; i >= 0; i--) reversedText += text[i];
        reversedText += "\0";
        cout << text + " = " + reversedText << endl;
        getline(cin, text);
    }
    

    return 0;
}
