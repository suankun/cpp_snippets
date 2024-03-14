// https://www.codewars.com/kata/5a40fc7ce1ce0e34440000a3/train/cpp
#include <vector>
bool is_dd(int n){
    std::vector<int> map(9, 0);
    while (n) {
        int lastDigit = n%10;
        if (lastDigit == 1) map[0]++;
        else if (lastDigit == 2) map[1]++;
        else if (lastDigit == 3) map[2]++;
        else if (lastDigit == 4) map[3]++;
        else if (lastDigit == 5) map[4]++;
        else if (lastDigit == 6) map[5]++;
        else if (lastDigit == 7) map[6]++;
        else if (lastDigit == 8) map[7]++;
        else if (lastDigit == 9) map[8]++;
        n/=10;
    }
    for (size_t i=0; i<map.size(); i++) {
        if (map[i] == i+1) return true;
    }
    return false;
}
