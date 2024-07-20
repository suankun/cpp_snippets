#include "Echo.h"

bool echoOn = true;

void echo(const std::string & str) {
    if (echoOn)
        std::cout << str << std::endl;
}
