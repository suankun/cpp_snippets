int twice_as_old(int dad, int son) {
  int result = dad - (son * 2);
  return result < 0 ? result * (-1) : result;
}


// #include <stdlib.h>

// int twice_as_old(int dad, int son) {
//   return abs(dad-son*2);
// }
