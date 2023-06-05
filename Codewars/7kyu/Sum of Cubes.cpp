// https://www.codewars.com/kata/59a8570b570190d313000037/train/cpp
unsigned int sum_cubes(unsigned int n) {
  unsigned int sum {};
  for (unsigned int i {1}; i<=n; i++) sum += i*i*i;
  return sum;
}
////////////////
unsigned int sum_cubes(unsigned int n){
  return (n * (n + 1) / 2) * (n * (n + 1) / 2);
}