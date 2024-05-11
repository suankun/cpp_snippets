// https://www.codewars.com/kata/6409aa6df4a0b773ce29cc3d/train/cpp
unsigned int realNumbers(unsigned int n) {
    return n - (n / 2 + n / 3 + n / 5 - n / 6 - n / 10 - n / 15 + n / 30);
}
//
unsigned int realNumbers(unsigned int n) 
{
    unsigned int count2 = n / 2;
    unsigned int count3 = n / 3;
    unsigned int count5 = n / 5;

    unsigned int count23 = n / (2 * 3);
    unsigned int count25 = n / (2 * 5);
    unsigned int count35 = n / (3 * 5);

    unsigned int count235 = n / (2 * 3 * 5);

    unsigned int count = n - count2 - count3 - count5 + count23 + count25 + count35 - count235;
  
  return count;
}
