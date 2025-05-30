// https://www.codewars.com/kata/640aa37b431f2da51c7f27ae/train/cpp

// Pythagorean Triples
// A Pythagorean triple consists of three positive integers a, b, c, which satisfy the Pythagorean formula for the sides of a right-angle triangle: a² + b² = c². For simplicity we assume a < b < c.

// A easy way of generating Pythagorean triples is to rewrite the equation as a² = c² - b² = (c-b)(c+b). So if we know the difference c-b between the other two sides of the triangle, then, given any positive integer a, we just have to find b and c such that c+b = a²/(c-b).

// Task
// Create a function that takes positive integers diff, low, high, and returns a list of all Pythagorean triples whose smallest side a lies between low and high inclusive (assume low <= high) and whose other sides satisfy c-b = diff. The list should be in ascending order by a.

// Examples: 
// (1, 2, 10)    ->  [(3,4,5), (5,12,13), (7,24,25), (9,40,41)]
// (3, 10, 25)   ->  [(15,36,39), (21,72,75)](4, 100, 100) ->  [(100,1248,1252)](10, 91, 99)  ->  []

// The random tests have diff <= 9,999 and low <= high <= 9,999,999.

#include <vector>
#include <array>

std::vector<std::array<int, 3>> generatePythagoreanTriples(int diff, int low, int high) {
    std::vector<std::array<int, 3>> triples;

    for (int a = low; a <= high; a++) {
        int a2 = a * a;
        if (a2 % diff != 0) continue;

        int cb_sum = a2 / diff;
        if ((cb_sum - diff) % 2 != 0) continue;

        int b = (cb_sum - diff) / 2;
        int c = b + diff;

        if (a < b && b < c && a * a + b * b == c * c) {
            triples.push_back({a, b, c});
        }
    }

    return triples;
}
