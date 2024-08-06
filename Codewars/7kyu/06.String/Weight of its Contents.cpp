// https://www.codewars.com/kata/53921994d8f00b93df000bea/train/cpp
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int content_weight(int bottle_weight, std::string scale)
{
    std::vector<std::string> sc;
    std::istringstream istr(scale);
    std::string curr;
    while (istr >> curr)
        sc.push_back(curr);

    int times = stoi(sc[0]);
    char op = sc[2] == "larger" ? 'l' : 's';

    return op == 'l' ? bottle_weight - (bottle_weight / (times + 1)) : bottle_weight / (times + 1);
}

int main() {
    std::cout << content_weight(120, "2 times larger") << std::endl;  // 80

    return 0;
}
//
int content_weight(int bottle_weight, std::string scale)
{
    int n = std::stoi(scale);
    bottle_weight /= n + 1;
    return scale.find("larger") != std::string::npos ? bottle_weight * n : bottle_weight; 
}
