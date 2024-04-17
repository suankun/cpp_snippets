// https://www.codewars.com/kata/5a58d889880385c2f40000aa/train/cpp
#include <iostream>
#include <string>

using namespace std; 

string autoMorphic (int number)
{
    int square_num=number*number;
    int num_length {}, num_copy=number;
    while (num_copy!=0) {
        num_length++;
        num_copy/=10;
    }
    int extract_last_digits {}, digit_position {1};
    while (num_length>0) {
        extract_last_digits+=(square_num%10)*digit_position;
        square_num/=10;
        digit_position*=10;
        num_length--;
    }
    return number==extract_last_digits ? "Automorphic" : "Not!!" ;
}


int main() {
    cout << autoMorphic(25) << endl;
    cout << autoMorphic(13) << endl;

    return 0;
}
//
std::string autoMorphic (int n)
{
    unsigned long long m=n*n;
    while (n) if (n%10==m%10) {n/=10;m/=10;} else return "Not!!";
    return "Automorphic";
}