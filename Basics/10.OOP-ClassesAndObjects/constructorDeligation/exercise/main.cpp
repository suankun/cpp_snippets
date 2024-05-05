#include <iostream>
#include "box.h"

int main() {
    Box b1(3,3,10);
    Box b2(3,3);
    std::cout << "b1-volume : " << b1.volume() << std::endl;  // 90
    std::cout << "b2-volume : " << b2.volume() << std::endl;  // 9

    return 0;
}
