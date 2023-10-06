// https://www.codewars.com/kata/59c62f1bdcc40560a2000060/train/cpp
#include <string>
#include <vector>
int solve(std::vector<std::string>v){
    int count_even = 0;
    int count_odd = 0;
    for (size_t i {}; i < v.size(); i++) {
        if (v[i] >= "a" && v[i] <= "z" || v[i] >= "A" && v[i] <= "Z") continue;
        int temp_num = stoi(v[i]);
        if (temp_num % 2 == 0) count_even++;
        else count_odd++;
    }
    return count_even-count_odd;
}
//
#include <string>
#include <vector>

int solve(std::vector<std::string>v){
    int a = 0;
    for (std::string s : v)
        if(isdigit(s[0]))
            stoi(s) % 2 == 0 ?  a++ : a--;             
    return a;
}
