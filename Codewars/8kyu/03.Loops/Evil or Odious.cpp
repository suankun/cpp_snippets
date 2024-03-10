// https://www.codewars.com/kata/56fcfad9c7e1fa2472000034/train/cpp
#include <string>
#include <vector>

std::string evil(int n)
{
  std::vector<int> evil {0, 3, 5, 6, 9, 10, 12, 15, 17, 18, 20, 23, 24, 27, 30, 33, 34,
                         36, 46, 51, 58, 60, 65, 71, 72, 75, 80, 90, 92, 99, 102,
                         105, 111, 116, 123, 125, 126, 130, 135, 141, 149, 150, 153,
                         154, 159, 163, 170, 172, 175, 177, 178, 180,
                         183, 187, 189, 190, 197, 198, 201, 202, 209, 212,
                         216, 219, 225, 231, 232, 235, 245, 249, 250, 252, 255};
  for (auto num: evil) if (n==num) return "It's Evil!";
  return "It's Odious!";
}
//
std::string evil(int n)
{
  std::bitset<32> bits(n);
  return (bits.count() & 1) ? "It's Odious!" : "It's Evil!";
}
//
std::string evil(int n)
{
	int ones = 0;

	while (n > 0) {
		if (n % 2)
			ones++;
		n /= 2;
	}
  
  return ((ones % 2) == 0 ? "It's Evil!" : "It's Odious!");
}