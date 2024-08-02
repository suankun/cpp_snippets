// https://www.codewars.com/kata/5b93f268563417c7ed0001bd/train/cpp
#include <vector>

int solve(int a, int b) {
    int countEviternityNumber = 0;
    
    if (a == 0)
        a = 1;
    for (int i = a; i < b; ++i) {
        int cnt[10] = {0};
        int currentNum = i;
        bool isValid = true;

        while (currentNum) {
            int lastDigit = currentNum % 10;
            if (lastDigit != 3 && lastDigit != 5 && lastDigit != 8) {
                isValid = false;
                break;
            }
            cnt[lastDigit]++;
            currentNum /= 10;
        }
        
        if (isValid) {
            if (cnt[8] >= cnt[5] && cnt[5] >= cnt[3]) {
                countEviternityNumber++;
            }
        }
    }
    
    return countEviternityNumber;
}
//
int solve( int a, int b ) {
    int n{};
    for ( int i{ a }; i < b; ++i ) {
        int t{ i }, c3{}, c5{}, c8{}, f{ 1 };
        do switch ( t % 10 ) {
            case 3: ++c3; break;
            case 5: ++c5; break;
            case 8: ++c8; break;
            default: f = 0;
        } while ( f && ( t /= 10 ));
        if ( f && c3 <= c5 && c5 <= c8 ) ++n;
    }
    return n;
}
