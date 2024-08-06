// https://www.codewars.com/kata/592a6ad46d6c5a62b600003f/train/cpp
#include <iostream>
#include <string>
using namespace std;

std::string encode (const std::string& str)
{
    std::string en;
    for (int i=0; i<str.length(); i++) {
        if (str[i]=='G') en+='A';
        else if (str[i]=='A') en+='G';
        else if (str[i]=='D') en+='E';
        else if (str[i]=='E') en+='D';
        else if (str[i]=='R') en+='Y';
        else if (str[i]=='Y') en+='R';
        else if (str[i]=='P') en+='O';
        else if (str[i]=='O') en+='P';
        else if (str[i]=='L') en+='U';
        else if (str[i]=='U') en+='L';
        else if (str[i]=='K') en+='I';
        else if (str[i]=='I') en+='K';
        else if (str[i]=='g') en+='a';
        else if (str[i]=='a') en+='g';
        else if (str[i]=='d') en+='e';
        else if (str[i]=='e') en+='d';
        else if (str[i]=='r') en+='y';
        else if (str[i]=='y') en+='r';
        else if (str[i]=='p') en+='o';
        else if (str[i]=='o') en+='p';
        else if (str[i]=='l') en+='u';
        else if (str[i]=='u') en+='l';
        else if (str[i]=='k') en+='i';
        else if (str[i]=='i') en+='k';
        else en+=str[i];
    }

    return en;
}

std::string decode (const std::string& str)
{
    std::string de;
    for (int i=0; i<str.length(); i++) {
        if (str[i]=='G') de+='A';
        else if (str[i]=='A') de+='G';
        else if (str[i]=='D') de+='E';
        else if (str[i]=='E') de+='D';
        else if (str[i]=='R') de+='Y';
        else if (str[i]=='Y') de+='R';
        else if (str[i]=='P') de+='O';
        else if (str[i]=='O') de+='P';
        else if (str[i]=='L') de+='U';
        else if (str[i]=='U') de+='L';
        else if (str[i]=='K') de+='I';
        else if (str[i]=='I') de+='K';
        else if (str[i]=='g') de+='a';
        else if (str[i]=='a') de+='g';
        else if (str[i]=='d') de+='e';
        else if (str[i]=='e') de+='d';
        else if (str[i]=='r') de+='y';
        else if (str[i]=='y') de+='r';
        else if (str[i]=='p') de+='o';
        else if (str[i]=='o') de+='p';
        else if (str[i]=='l') de+='u';
        else if (str[i]=='u') de+='l';
        else if (str[i]=='k') de+='i';
        else if (str[i]=='i') de+='k';
        else de+=str[i];
    }

    return de;
}

// GA-DE-RY-PO-LU-KI
int main() {
    cout << encode("Ala has a cat") << endl;  // "Gug hgs g cgt"
    cout << decode("Gug hgs g cgt") << endl;  // "Ala has a cat"
    cout << encode("ABCD") << endl;  // "GBCE"
    cout << decode("GBCE") << endl;  // "ABCD"
    cout << encode("gaderypoluki") << endl;  // "agedyropulik"
    cout << decode("agedyropulik") << endl;  // "gaderypoluki"
    
    return 0;
}
//
#include <string>

std::string encode (const std::string& str)
{
    std::string key = "gaderypolukiGADERYPOLUKI";
    std::string res = str;
    
    for(int i=0; i<res.length(); i++)
    {
        for(int k=0; k<key.length(); k++)
        {
            if (res[i]==key[k])
            {
                res[i] = k%2==0 ? key[k+1] : key[k-1];
                break;
            }
        }
    }
    return res;
}

std::string decode (const std::string& str)
{
    return encode(str);
}
