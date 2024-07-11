// https://www.codewars.com/kata/580878d5d27b84b64c000b51/train/cpp
int sumTriangularNumbers(int n) {
    if (n<=0) return 0;
    int cnt {}, sum {};
    for (int i {}; i<n; i++) {
        for (int j {}; j<=i; j++) {
            cnt++;
        }
        sum += cnt;
    }
    return sum;
}
//
// unsigned int sumTriangularNumbers(const int n)
// {
//   return n<0 ? 0 : n*(n+1)*(n+2)/6 ;
// }
