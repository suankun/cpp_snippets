#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int time=0, scenesNum=0, duration=0;
    cin >> time;
    cin >> scenesNum;
    cin >> duration;

    int preparation=time*0.15;
    int totalScenesDuration=scenesNum*duration;

    int total=preparation+totalScenesDuration;
    if (total>time) cout << "Time is up! To complete the movie you need " << total-time << " minutes." << endl;
    else cout << "You managed to finish the movie on time! You have " << time-total << " minutes left!" << endl;

    return 0;
}
