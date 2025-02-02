#include <iostream>

// Enumerations contain a fixed list of special constants values. They have some semantic meaning in the real world
// colors (red, green, blue ..), curencies (usd, bgn, gbp ..)

// Two types 'enum' and 'enum class'
// Differences: The enumerator names (red, green, blue) are in the global scope, which can cause name conflicts.
// Implicit conversion to int may lead to unintended bugs.
// Advantages of enum class: Stronger scoping: The enumerators are inside cColor, preventing conflicts.
// Type safety: No accidental implicit conversion to int, reducing errors.

// implicitly - conversions occur automatically (Can lead to unintended behavior if not handled carefully)
// explicitly - conversions occur with manual instruction

enum color {red, green, blue};

enum class cColor {red, green, blue};

int main() {
    color c1 = blue;
    int n1 = c1;  // Implicit conversion to int (Green = 1)
    std::cout << n1 << std::endl;  // Outputs: 1

    cColor c2 = cColor::green;
    // int n2 = c2;  // ERROR: No implicit conversion to int.
    int n2 = static_cast<int>(c2);  // Explicit conversion required
    std::cout << n2 << std::endl;  // Outputs: 1

    return 0;
}