// https://www.codewars.com/kata/577b9960df78c19bca00007e/train/cpp
#include <iostream>
using namespace std;

int findDigit(int num, int nth){
    int nth_digit {};
    if (nth<=0) return -1;
    for (int i {}; i<nth; i++) {
        nth_digit = num%10;
        num/=10;
    }
  
    return num<0 ? nth_digit*-1 : nth_digit;
}

int main() {
    cout << findDigit(5673, 4) << endl;  // 5
    cout << findDigit(65, 0) << endl;    // -1

    return 0;
}
//
int findDigit(int num, int nth){
    int pos = 0, digit;
    if (nth < 1) return -1;              //return -1 if nth position is 0 or negative
    if (num < 0) num *= -1;              //make number positive if it's negative
    while (num > 0)                      //while there are digits in the number
    {
        pos++;                             //increase the position counter
        digit = num % 10;                  //get the last digit of the number
        if (pos == nth) return digit;      //return digit if we are on the right position
        num /= 10;                         //cut the last digit by dividing number 10
    }
    return 0;                            //if we haven't reached the nth position, it means that nth is bigger 
}                                        //than number length, return 0
