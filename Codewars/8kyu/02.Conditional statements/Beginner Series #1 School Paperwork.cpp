// https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/csharp
int paperwork(int n, int m) {
    if (n < 0 || m < 0) {
        return 0;
    }
    
    return n * m;
}
//
int paperwork(int n, int m) {
  return n < 0 || m < 0 ? 0 : n * m;
}
