// https://www.codewars.com/kata/606efc6a9409580033837dfb/train/cpp
#include <string>

std::string plant(char seed, int water, int fert, int temp) {
    std::string res;
    std::string flower;
    if (temp<20 || temp>30) {
        for (int i=0; i<water*water; i++) res+='-';
        return res+seed;
    }
    for (int i=0; i<water; i++) flower+='-';
    for (int i=0; i<fert; i++) flower+=seed;
    for (int i=0; i<water; i++) res+=flower;
    
    return res;
}
