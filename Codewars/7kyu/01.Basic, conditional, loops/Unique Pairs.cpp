// https://www.codewars.com/kata/540c013634e6bac0350000a5/train/cpp
int projectPartners(int n){
    // triangular numbers formula (n * (n + 1)) / 2
    return ((n-1) * ((n-1) + 1)) / 2;
}
//
int projectPartners(int n){
    return n * (n - 1) / 2;
}
