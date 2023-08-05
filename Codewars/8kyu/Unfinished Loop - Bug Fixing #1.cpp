// codewars.com/kata/55c28f7304e3eaebef0000da/train/cpp
#include <vector>

std::vector<int> createVector(const int n)
{
	std::vector<int> res;

	for (int i = 1; i <= n; i++)
	{
		res.push_back(i);
	}

	return res;
}
//
#include <numeric>
std::vector<int> createVector(const int n)
{
	std::vector<int> res(n);
  std::iota(res.begin(), res.end(), 1);
	return res;
}
