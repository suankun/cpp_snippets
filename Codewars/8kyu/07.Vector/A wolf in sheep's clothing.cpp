// https://www.codewars.com/kata/5c8bfa44b9d1192e1ebd3d15/train/cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::string warn_the_sheep(const std::vector<std::string>& queue)
{
    std::string res;
    int len = queue.size();
    for (int i=0; i<len; i++) {
        if (queue[i]=="wolf" && i==(len-1)) {
            res =  "Pls go away and stop eating my sheep";
            break;
        }
        else if (queue[i]=="wolf") {
            std::string sheep_number = std::to_string(abs((i+1)-(len)));
            res = "Oi! Sheep number " + sheep_number + "! You are about to be eaten by a wolf!";
            break;
        }
    }
    
    return res;
}

int main() {
    std::vector<std::string> queue1 = { "wolf", "sheep", "sheep", "sheep", "sheep", "sheep", "sheep" };
    cout << warn_the_sheep(queue1) << endl;  // "Oi! Sheep number 6! You are about to be eaten by a wolf!"
    std::vector<std::string> queue2 = { "sheep", "wolf" };
    cout << warn_the_sheep(queue2) << endl;  // "Pls go away and stop eating my sheep"

    return 0;
}
//
#include <vector>
#include <string>
#include <algorithm>

std::string warn_the_sheep(const std::vector<std::string>& queue)
{
    auto pos = std::find(queue.crbegin(), queue.crend(), "wolf") - queue.crbegin();
    return pos ? "Oi! Sheep number " + std::to_string(pos) + "! You are about to be eaten by a wolf!"
               : "Pls go away and stop eating my sheep";
}
