// https://www.codewars.com/kata/5b190aa7803388ec97000054/train/cpp
#include <iostream>
#include <vector>
using namespace std;

int tram(int stops, const std::vector<int>& a, const std::vector<int>& b) {
    int max_capacity {}, temp_capacity {};
    for (size_t i {}; i<stops; i++) {
        temp_capacity -= a[i];
        if (max_capacity<temp_capacity)
            max_capacity = temp_capacity;
        temp_capacity += b[i];
        if (max_capacity<temp_capacity)
            max_capacity = temp_capacity;
    }

    return max_capacity;
}

int main() {
    std::vector<int> a {0, 2, 4, 4};
    std::vector<int> b {3, 5, 2, 0};
    cout << tram(4, a, b) << endl;  // 6
    return 0;
}
//
int tram( int stops, const std::vector< int >& a, const std::vector< int >& b ) {
    int r{};
    for ( int i{}, c{}; i < stops; ++i )
        r = std::max( r, c += b[ i ] - a[ i ] );
    return r;
}
