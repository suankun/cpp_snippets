// https://www.codewars.com/kata/5bdc191306a8a678f6000187/train/cpp
#include <string>
long long shiftLeft(std::string s, std::string t){
    return s == t ? 0 : (s.length() > t.length() ? shiftLeft(s.substr(1), t) : shiftLeft(s, t.substr(1))) + 1;
}
// 
// #include <algorithm>
// #include <string>

// long long shiftLeft(const std::string& s, const std::string& t) {
//     auto mm = std::mismatch(s.crbegin(), s.crend(), t.crbegin());
//     return (s.crend() - mm.first) + (t.crend() - mm.second);
// }

//

// long long shiftLeft( std::string s, std::string t ) {
//     const auto [ is, it ]{ mismatch( s.crbegin(), s.crend(), t.crbegin() ) };
//     return distance( is, s.crend() ) + distance( it, t.crend() );
// }
