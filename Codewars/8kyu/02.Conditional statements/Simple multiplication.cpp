// https://www.codewars.com/kata/583710ccaa6717322c000105/train/cpp
int simpleMultiplication(int a){
    return a%2==0 ? a*8 : a*9;
}
//
int simpleMultiplication(int a){
    return a % 2 ? 9*a : 8*a;
}
