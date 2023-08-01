// https://www.codewars.com/kata/58841cb52a077503c4000015/train/cpp
int circleOfNumbers(int n, int firstNumber)
{
    return (firstNumber + n / 2) % n;
}
//
int circleOfNumbers(int n, int firstNumber)
{
  return n/2 > firstNumber ? firstNumber + n/2 : firstNumber - n/2;
}
