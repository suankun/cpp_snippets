#include <string>

std::string countSheep(int number) {
  std::string murmur;
  for (int i {1}; i <= number; i++) {
    murmur += std::to_string(i) + " sheep...";
  }
  return murmur;
}

///////////////////////////////////////////////

#include <string>

std::string countSheep(int number) {
  return number ? countSheep(number - 1) + std::to_string(number) + " sheep..." : "";
}