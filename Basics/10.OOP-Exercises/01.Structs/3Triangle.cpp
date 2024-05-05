#include <iostream>
#include <cmath>

struct Triangle {
    // int a;
    // int b;
    // int c;
    double a, b, c;

    void create_triangle(Triangle& t) {
        bool tri;
        do {
            std::cout << "a, b, c (sides of a triangle): ";
            std::cin >> t.a >> t.b >> t.c;
            tri = (t.a > 0) && (t.b > 0) && (t.c > 0) &&
                  (t.a + t.b > t.c) && (t.a + t.c > t.b) &&
                  (t.b + t.c > t.a);
        } while (!tri);
    }

    void show_triangle(const Triangle& t) {
        std::cout << "triangle(" << t.a << ", " << t.b << ", " << t.c << ")\n";
    }

    double perimeter(const Triangle& t) {
        return t.a + t.b + t.c;
    }

    double surface(const Triangle& t) {
        double p = perimeter(t)/2;
        return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
    }

    // void printTriangle() {
    //     std::cout << a << ", " << b << ", " << c << std::endl;
    // }

    // void perimeter() {
    //     std::cout << "Perimeter is: " << a+b+c << std::endl;
    // }

    // void area() {
    //     int p = (a+b+c) / 2;
    //     int S = sqrt(p*(p-a)*(p-b)*(p-c));
    //     std::cout << "Area is: " << S << std::endl;
    // }
};

int main() {
    // Triangle t1 {4, 5, 6}; 
    // t1.printTriangle();
    // t1.perimeter();
    // t1.area();

    Triangle t2;
    t2.create_triangle(t2);
    t2.show_triangle(t2);
    std::cout << "Perimeter: " << t2.perimeter(t2) << std::endl;
    std::cout << "Surface: " << t2.surface(t2) << std::endl;

    return 0;
}