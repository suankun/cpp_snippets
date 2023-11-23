// https://www.codewars.com/kata/6512b3775bf8500baea77663/train/cpp
#include <string>

std::string gimme_the_letters(const std::string& sp)
{
    std::string letters;
    for (size_t i=sp[0]; i<=sp[2]; i++) {
        letters += i;
    }

    return letters;
}
//
std::string gimme_the_letters( const std::string& s ) {
  std::string r{ s.front() };
  while ( r.back() != s.back() ) r += r.back() + 1;
  return r;
}
