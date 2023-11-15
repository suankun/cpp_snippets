// https://www.codewars.com/kata/5b2f6ad842b27ea689000082/train/cpp
#include <iostream>
using namespace std;

#include <string>

bool isPrime(unsigned long n) {
    for (unsigned long i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

std::string isSmooth(unsigned long n){
    unsigned long res=0;
    unsigned long cond = n;
    for (unsigned long i=2; i<=cond; i++) {
        if (!isPrime(i)) continue;
        while (n%i==0) {
            res=i;
            n/=i;
            if (n==1) break;
        }
        if (n==1) break;
    }
    
    if (res==2) return "power of 2";
    else if (res==3) return "3-smooth";
    else if (res==5) return "Hamming number";
    else if (res==7) return "humble number";
    
    return "non-smooth";
}

int main() {
    cout << isSmooth(16) << endl;  // "power of 2"
    cout << isSmooth(36) << endl;  // "3-smooth"
    cout << isSmooth(60) << endl;  // "Hamming number"
    cout << isSmooth(98) << endl;  // "humble number"
    cout << isSmooth(111) << endl;  // "non-smooth"
    cout << isSmooth(4096) << endl;  // "power of 2"
    cout << isSmooth(729) << endl;  // "3-smooth"
    cout << isSmooth(3125) << endl;  // "Hamming number"
    cout << isSmooth(7) << endl;  // "humble number"
    cout << isSmooth(17) << endl;  // "non-smooth"

    return 0;
}
//
#include <string>

std::string isSmooth(unsigned long n)
{
  while (n%2==0) n=n/2;
  if (n==1) return ("power of 2");
  while (n%3==0) n=n/3;
  if (n==1) return ("3-smooth");
  while (n%5==0) n=n/5;
  if (n==1) return ("Hamming number");
  while (n%7==0) n=n/7;
  if (n==1) return ("humble number");
  return "non-smooth";

}

