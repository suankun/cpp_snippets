// https://www.codewars.com/kata/57bfea4cb19505912900012c/train/cpp
#include <iostream>
#include <utility>

std::pair<int, int> symmetricPoint(const std::pair<int, int>& p,
                                   const std::pair<int, int>& q) {
    return std::pair<int, int>(q.first+(q.first-p.first), q.second+(q.second-p.second));
}

int main() {
    std::pair<int, int> res = symmetricPoint({2, 6}, {-2, -6});
    std::cout << res.first << ',' << res.second << std::endl;  // {-6, -18}

    return 0;
}
