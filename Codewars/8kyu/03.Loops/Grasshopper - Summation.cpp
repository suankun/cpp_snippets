// https://www.codewars.com/kata/55d24f55d7dd296eb9000030/train/cpp
int summation(int num){
 int sum {};
  for (int i {1}; i <= num; i++) sum += i;
  return sum;
}
//
int summation(int num){
 return num*(num+1)/2;
}