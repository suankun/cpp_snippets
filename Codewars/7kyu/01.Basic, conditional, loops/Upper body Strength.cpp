// https://www.codewars.com/kata/571640812ad763313600132b/train/cpp
unsigned alexMistakes(unsigned numberOfKatas, unsigned timeLimit) {
    unsigned timeSolved=numberOfKatas*6;
    unsigned penalty=5, mistakes=0;
    while(timeSolved<=timeLimit) {
        timeSolved+=penalty;
        penalty*=2;
        if (timeSolved>timeLimit) continue;
            mistakes++;
    }
    
    return mistakes;
}
//
#include<math.h>

unsigned alexMistakes(unsigned numberOfKatas, unsigned timeLimit) {
    return log2((timeLimit - numberOfKatas * 6)/5 +1 );
}
