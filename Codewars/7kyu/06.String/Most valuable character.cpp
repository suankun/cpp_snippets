// https://www.codewars.com/kata/5dd5128f16eced000e4c42ba/train/cpp
#include <string>
#include <unordered_map>
#include <limits>
#include <cmath>

using namespace std;

char solve(string s) {
    struct Stats {
        int maxIdx;
        int minIdx;
    };

    unordered_map<char, Stats> chars;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == ' ') {
            continue;
        }

        if (chars.find(c) == chars.end()) {
            chars[c] = {i, i};
        } else {
            chars[c].maxIdx = i;
        }
    }

    char result = '\0';
    int maxDiff = numeric_limits<int>::min();

    for (const auto& pair : chars) {
        char c = pair.first;
        Stats stats = pair.second;
        int diff = stats.maxIdx - stats.minIdx;

        if (maxDiff == numeric_limits<int>::min()) {
            result = c;
            maxDiff = diff;
            continue;
        }

        if (diff == maxDiff && c < result) {
            result = c;
        } else if (diff > maxDiff) {
            result = c;
            maxDiff = diff;
        }
    }

    return result;
}
//
#include <vector>
#include <algorithm>
char solve( std::string s ) {
    std::vector< int > v( 26 + 'a' );
    for ( const char c : s ) if ( !v[ c - 'a' ] )
        v[ c - 'a' ] = 1, v[ c ] = s.find_last_of( c ) - s.find_first_of( c );
    return std::max( max_element( v.cbegin() + 'a', v.cend() ) - v.cbegin(),
        max_element( v.cbegin(), v.cbegin() + 26 ) - v.cbegin() + 'a' );
}