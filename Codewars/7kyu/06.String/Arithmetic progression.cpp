// https://www.codewars.com/kata/55caf1fd8063ddfa8e000018/train/cpp
#include <string>

std::string arithmeticSequenceElements(int a, int d, int n)
{
    std::string sequence;
    int element {a};
    while(n>0) {
        sequence+=std::to_string(a);
        if (n>1) sequence+=", ";
        a+=d;
        n--;
    }
    return sequence;
}
//
#include <string>

std::string arithmeticSequenceElements(int a, int r, int n)
{
    std::string result = "";
    
    for(int i=0;i<n;i++) {
        result+= std::to_string(a) + ", ";
        
        a+=r;
    }
    
    
    return result.substr(0, result.size()-2);
}
