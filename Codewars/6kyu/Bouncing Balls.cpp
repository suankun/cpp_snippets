#include <iostream>
using namespace std;

class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
    if (h <= 0 || bounce >= 1 || bounce <= 0 || window >= h) return -1;

    int ballSeen {0};
    while (h >= window)
    {
        ballSeen++;
        h *= bounce;
        if (h <= window) break;
        ballSeen++;
    }
    
    return ballSeen;
};

int main() {
    Bouncingball one;
    double result = one.bouncingBall(3, 0.66, 1.5); // 3
    // double result = one.bouncingBall(30, 0.66, 1.5); // 15

    cout << result << endl;

    return 0;
}

/////////////////////////////////////////////////////
using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
        if (h <= 0 || bounce <= 0 || bounce >=1 || window >= h) return -1;
        int count = 1;
        while (true){
            h *= bounce;
            if (h <= window) break;
            count += 2;
        }
        return count;
    }
};