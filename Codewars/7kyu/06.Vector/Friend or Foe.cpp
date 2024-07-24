// https://www.codewars.com/kata/55b42574ff091733d900002f/train/cpp
#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input)
{
    std::vector<std::string> friends;
    for (const std::string & name : input)
        if (name.length() == 4)
            friends.push_back(name);
  
    if (friends.size() == 0)
        friends.push_back("");

    return friends;
}
//
#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input)
{
    std::vector<std::string> friends;
    std::copy_if(input.begin(), input.end(), std::back_inserter(friends), [](const std::string& s)
    {
            return s.size() == 4;
    });

    return friends.empty() ? std::vector<std::string>{""} : friends;
}
