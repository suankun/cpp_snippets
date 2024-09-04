// https://www.codewars.com/kata/5262119038c0985a5b00029f/train/cpp
bool isPrime(int num) {
    if (num<=1) return false;
    for (int j = 2; j*j<=num; j++) {
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}
//
// bool isPrime(int num) {
//   for(int i = 2; i <= sqrt(num); i++) if(num % i == 0) return false;
//   return num <= 1? false : true;
// }