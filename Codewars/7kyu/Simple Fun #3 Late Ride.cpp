// https://www.codewars.com/kata/588422ba4e8efb583d00007d/train/cpp
int lateRide(int n) {
  int hours = n/3600;
  n%=3600;
  int min = n/60;
  n%=60;
  int sec = n;
  int sum_of_digits = hours%10 + (hours/=10) +
                      min%10   + (min/=10)   +
                      sec%10   + (sec/=10);
  return sum_of_digits;
}
//
int lateRide(int n) {
  int hours = n / 60;
  int minutes = n % 60;
  return (hours / 10) + (hours % 10) + (minutes / 10) + (minutes % 10);
}
