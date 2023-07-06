// https://www.codewars.com/kata/57ee31c5e77282c24d000024/train/cpp
#include <string>
#include <vector>

std::string paul(const std::vector<std::string>& x) {
  int sum {};
  for (int i {}; i<x.size(); i++) {
    if (x[i] == "kata") sum += 5;
    else if (x[i] == "Petes kata") sum += 10;
    else if (x[i] == "eating") sum += 1;
  }
  
  return sum<40 ? "Super happy!" : sum<70 ? "Happy!" : sum<100 ? "Sad!" : "Miserable!";
}
//
#include <string>
#include <vector>

std::string paul(const std::vector<std::string>& x) {
  unsigned count = 0;
  for (auto& s : x) count += (s == "eating") ? 1 : (s == "kata") ? 5 : (s == "Petes kata") ? 10 : 0;
  return (count < 40) ? "Super happy!" : (count < 70) ? "Happy!" : (count < 100) ? "Sad!" : "Miserable!";
}
