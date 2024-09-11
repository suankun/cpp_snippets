// https://www.codewars.com/kata/5410c0e6a0e736cf5b000e69/train/cpp
#include <string>

unsigned hamming(const std::string &a, const std::string &b)
{
    int count = 0;
  
    for (size_t idx = 0; idx < a.length(); idx++)
        if (a[idx] != b[idx])
            count++;
  
    return count;
}
//
#include <string>

unsigned hamming(const std::string& a, const std::string& b)
{
	unsigned hamming{ 0u };

	std::string::const_iterator aIt{ std::cbegin(a) };
	std::string::const_iterator bIt{ std::cbegin(b) };

	const std::string::const_iterator aLast{ std::cend(a) };
	const std::string::const_iterator bLast{ std::cend(b) };

	for (; aIt != aLast && bIt != bLast; ++aIt, ++bIt)
	{
		if (*aIt != *bIt)
			++hamming;
	}

	return hamming;
}
