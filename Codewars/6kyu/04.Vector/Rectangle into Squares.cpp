// https://www.codewars.com/kata/55466989aeecab5aac00003e/train/cpp

// The drawing below gives an idea of how to cut a given "true" rectangle into squares ("true" rectangle meaning that the two dimensions are different).

// (drawning 5 x 3 sq)

// Can you translate this drawing into an algorithm?

// You will be given two dimensions

// a positive integer length
// a positive integer width
// You will return a collection or a string (depending on the language; Shell bash, PowerShell, Pascal and Fortran return a string) with the size of each of the squares.

// Examples in general form:
// (depending on the language)

//   sqInRect(5, 3) should return [3, 2, 1, 1]
//   sqInRect(3, 5) should return [3, 2, 1, 1]
  
//   You can see examples for your language in **"SAMPLE TESTS".**
// Notes:
// lng == wdth as a starting case would be an entirely different problem and the drawing is planned to be interpreted with lng != wdth. (See kata, Square into Squares. Protect trees! http://www.codewars.com/kata/54eb33e5bc1a25440d000891 for this problem).

// When the initial parameters are so that lng == wdth, the solution [lng] would be the most obvious but not in the spirit of this kata so, in that case, return None/nil/null/Nothing or return {} with C++, Array() with Scala, [] with Perl, Raku.

// In that case the returned structure of C will have its sz component equal to 0.

// Return the string "nil" with Bash, PowerShell, Pascal and Fortran.

#include <iostream>
#include <vector>
#include <algorithm> // For std::min

using namespace std;

class SqInRect
{
public:
    static std::vector<int> sqInRect(int lng, int wdth) {
        if (lng == wdth)
            return {};

        std::vector<int> res;

        while (lng > 0 && wdth > 0) {
            int squareSide = std::min(lng, wdth);
            res.push_back(squareSide);
            
            lng > wdth ? (lng -= squareSide) : (wdth -= squareSide);
        }

        return res;
    }
};

void print(const std::vector<int> &v) {
    for (int n : v)
        cout << n << ' ';
    cout << endl;
}

int main() {
    SqInRect s;
    std::vector<int> res;

    res = SqInRect::sqInRect(5, 3);
    print(res); // [3, 2, 1, 1]

    res = SqInRect::sqInRect(20, 14);
    print(res); // [14, 6, 6, 2, 2, 2]

    return 0;
}
//
using namespace std;

class SqInRect
{
  public:
  static vector<int> sqInRect(int lng, int wdth);
};

vector<int> SqInRect::sqInRect(int l, int w) {
    vector<int> ret;

    if (w == l)
        return ret;

    if (w > l)
        swap(l, w);

    while (w > 0) {
        ret.push_back(w);

        int t = w;
        w = l - w;
        l = t;

        if (w > l)
            swap(l, w);
    }

    return ret;
}
