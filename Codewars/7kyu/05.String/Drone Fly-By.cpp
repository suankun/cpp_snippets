// https://www.codewars.com/kata/58356a94f8358058f30004b5/train/cpp
#include <string>

std::string flyBy(std::string lamp, std::string drone){
    for (size_t idx = 0; idx < drone.length(); idx++)
        lamp[idx] = 'o';
  
    return lamp;
}
