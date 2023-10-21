#include <iostream>
#include <cmath>

struct Triangle {
    int a;
    int b;
    int c;

    void printTriangle() {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }

    void perimeter() {
        std::cout << "Perimeter is: " << a+b+c << std::endl;
    }

    void area() {
        int p = (a+b+c) / 2;
        int S = sqrt(p*(p-a)*(p-b)*(p-c));
        std::cout << "Area is: " << S << std::endl;
    }
};

int main() {
    Triangle t1 {4, 5, 6}; 
    t1.printTriangle();
    t1.perimeter();
    t1.area();

    return 0;
}