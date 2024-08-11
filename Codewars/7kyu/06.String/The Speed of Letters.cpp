// https://www.codewars.com/kata/5fc7caa854783c002196f2cb/train/cpp
#include <string>
#include <algorithm> // for std::max

std::string speedify(const std::string &input)
{
    std::string push(input.size() + 25, ' ');

    for (size_t i = 0; i < input.size(); i++) {
        int j = i + (input[i] - 'A');

        if (j < push.size()) {
            push[j] = input[i];
        }
    }

    push.erase(push.find_last_not_of(' ') + 1);

    return push;
}
