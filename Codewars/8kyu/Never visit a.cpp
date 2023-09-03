// https://www.codewars.com/kata/56c5847f27be2c3db20009c3/train/cpp
#include <iostream>
#include <string>

std::string SubtractSum(int n)
{
    while (true) {
        int temp_n = n;
        int sum = 0;
        while (temp_n!=0) {
            int last_digit = temp_n%10;
            sum += last_digit;
            temp_n/=10;
        }
        n -= sum;
        if (n==1 || n==3 || n==24 || n==26 || n==47 || n==49 
                || n==68 || n==70 || n==91 || n==93) return "kiwi";
        if (n==2 || n==21 || n==23 || n==42 || n==44 || n==46 
                || n==65 || n==67 || n==69 || n==88) return "pear";
        if (n==4 || n==6 || n==25 || n==29 || n==48 || n==50 
                || n==71 || n==73 || n==92 || n==94 || n==96) return "banana";
        if (n==5 || n==7 || n==28 || n==30 || n==32 || n==51 
                || n==53 || n==74 || n==76 || n==95 || n==97) return "melon";
        if (n==8 || n==10 || n==12 || n==31 || n==33 || n==52 
                || n==56 || n==75 || n==77 || n==79 || n==98 || n==100) return "pineapple";
        if (n==9 || n==18 || n==27 || n==36 || n==45 || n==54 
                || n==63 || n==72 || n==81 || n==90 || n==99) return "apple";
        if (n==11 || n==13 || n==34 || n==55 || n==57 || n==59 
                || n==78 || n==80) return "cucumber";
        if (n==14 || n==16 || n==35 || n==37 || n==39 || n==58 
                || n==60 || n==83) return "orange";
        if (n==15 || n==17 || n==19 || n==38 || n==40 || n==61 
                || n==82 || n==84 || n==86) return "grape";
        if (n==20 || n==22 || n==41 || n==43 || n==62 || n==64 
                || n==66 || n==85 || n==87 || n==89) return "cherry";
    }
    return "";
}

int main() {
    std::cout << SubtractSum(10) << std::endl;
    
    return 0;
}
//
#include <string>
using namespace std;

string SubtractSum(int n)
{
// "THE FINAL NUMBER SHOULD BE x TIMES OF NINE"
    return "apple";// fruit name like "apple"
}
