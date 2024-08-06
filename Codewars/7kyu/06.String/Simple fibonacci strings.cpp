// https://www.codewars.com/kata/5aa39ba75084d7cf45000008/train/cpp
#include <string>

std::string solve(int n) {
    if (n == 0) return "0";
    if (n == 1) return "01";
    
    std::string f0 = "0";
    std::string f1 = "01";
    std::string fn;
    
    for (int i = 2; i <= n; i++) {
        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
    }
    
    return fn;
}
//
std::string solve(int n){
    if (n == 0) return "0";
    std::string f0 = "0", f = "01", temp;
    while (--n > 0) {
        temp = f;
        f += std::move(f0);
        f0 = std::move(temp);
    }
    return f;
}
