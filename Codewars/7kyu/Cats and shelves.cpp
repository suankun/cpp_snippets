// https://www.codewars.com/kata/62c93765cef6f10030dfa92b/train/cpp
#include <iostream>

unsigned int Cats(unsigned int start, unsigned int finish) {
    unsigned int res = 0;
    if (start==finish) return 0;
    while (start<finish)
    {
        start+3 > finish ? start+=1 : start+=3;
        // unsigned int term = start+3;
        // if (term > finish) start+=1;
        // else start+=3;
        res++;
    }
    
    return res;
}

int main() {
    std::cout << Cats(1, 2) << std::endl;  // 1
    std::cout << Cats(2, 2) << std::endl;  // 0
    std::cout << Cats(2, 5) << std::endl;  // 1
    std::cout << Cats(1, 3) << std::endl;  // 2

    return 0;
}
//
unsigned int Cats(unsigned int start, unsigned int finish) {
    //Simple one-liner.
    //If the start to finish is a multiple of 3, we greedily get to the answer by dividing by 3.
    //If the division has a remainder of 1, we need to make one extra jump to get to our answer.
    //If the division has a remainder of 2, we need to make two extra jump (since we can't jump directly up).
    return (finish - start) / 3 + (finish - start) % 3;
}
