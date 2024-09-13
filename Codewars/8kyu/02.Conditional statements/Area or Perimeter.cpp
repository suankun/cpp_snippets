// https://www.codewars.com/kata/5ab6538b379d20ad880000ab/train/cpp
#include <iostream>

using namespace std;

// You are given the length and width of a 4-sided polygon. The polygon can either be a rectangle or a square.
// If it is a square, return its area. If it is a rectangle, return its perimeter.

// Example(Input1, Input2 --> Output):

// 6, 10 --> 32
// 3, 3 --> 9
// Note: for the purposes of this kata you will assume that it is a square if its length and width are equal, 
// otherwise it is a rectangle.

int area_or_perimeter(int l , int w) {
    return l==w ? l*w : (l*2)+(w*2);
}
/// oop solution ///
class AreaOrPerimeter {
    int l;
    int w;

public:
    AreaOrPerimeter(int lenght, int width)
        : l(lenght), w(width) {}

    int area() {
        return l * w;
    }

    int perimeter() {
        return (l * 2) + (w * 2);
    }
};

int area_or_perimeter(int l , int w) {
    AreaOrPerimeter aop(l, w);
    if (l == w)
        return aop.area();
    
    return aop.perimeter();
}

int main() {
    cout << area_or_perimeter(4 , 4) << endl;   // 16
    cout << area_or_perimeter(6 , 10) << endl;  // 32

    return 0;
}