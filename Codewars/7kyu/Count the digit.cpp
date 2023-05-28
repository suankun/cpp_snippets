class CountDig
{
public:
    static int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d) {
  int result {};
  for (int i {1}; i <= n; i++) {
    int temp_num = i*i;
    while (temp_num != 0) {
      if (temp_num % 10 == d) result++;
      temp_num /= 10;
    }
  }
  return (d==0) ? result+1 : result;
}

///////////////////////////////////////
class CountDig
{
public:
    static int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d) { 
  int count = 0;
  for (int k = 0; k <= n; ++k) {
    int m = k*k;
    do {
      if ((m % 10) == d) count += 1;
      m /= 10;
    } while(m);
  }
  return count;
}