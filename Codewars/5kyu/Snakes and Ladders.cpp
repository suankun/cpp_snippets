// // https://www.codewars.com/kata/587136ba2eefcb92a9000027/train/cpp
#include <iostream>
#include <string>
using namespace std;

class SnakesLadders
{
private:
    int player1 {};
    int player2 {};
    int turn {};

public:
    SnakesLadders() {
        player1 = 0;
        player2 = 0;
        turn = 0;
    };
    std::string play(int die1, int die2);
    
};

int snakes(int &player) {
    if (player==16) player-=10;
    else if (player==46) player-=21;
    else if (player==49) player-=38;
    else if (player==62) player-=43;
    else if (player==64) player-=4;
    else if (player==74) player-=21;
    else if (player==89) player-=21;
    else if (player==92) player-=4;
    else if (player==95) player-=20;
    else if (player==99) player-=19;

    return player;
}

int ladders(int &player) {
    if (player==2) player+=36;
    else if (player==7) player+=7;
    else if (player==8) player+=23;
    else if (player==15) player+=11;
    else if (player==21) player+=21;
    else if (player==28) player+=56;
    else if (player==36) player+=8;
    else if (player==51) player+=16;
    else if (player==71) player+=20;
    else if (player==78) player+=20;
    else if (player==87) player+=7;

    return player;
}

std::string SnakesLadders::play(int die1, int die2) {
    int flag = 0;
    if (turn % 2 == 0) {
        if (player2==100) return "Game over!";
        player1+=(die1+die2);
        snakes(player1);
        ladders(player1);
        if (die1!=die2) turn++;

    } else {
        if (player1==100) return "Game over!";
        player2+=(die1+die2);
        snakes(player2);
        ladders(player2);
        if (die1!=die2) turn++;
        flag = 1;
    }

    if (player1==100) {
        return "Player 1 Wins!";
    } else if (player2==100) {
        return "Player 2 Wins!";
    }

    if (player1>100) {
        int diff = player1-100;
        player1 -= (diff*2);
        snakes(player1);
        ladders(player1);
    } else if (player2>100) {
        int diff = player2-100;
        player2 -= (diff*2);
        snakes(player2);
        ladders(player2);
    }

    return !flag ? "Player 1 is on square " + std::to_string(player1) : "Player 2 is on square " + std::to_string(player2);
}

int main() {
    SnakesLadders game {};
    cout << game.play(1, 1) << endl;
    cout << game.play(1, 5) << endl;
    cout << game.play(6, 2) << endl;
    cout << game.play(1, 1) << endl << endl;

    SnakesLadders gameTwo {};
    cout << gameTwo.play(1, 4) << endl;
    cout << gameTwo.play(6, 2) << endl;
    cout << gameTwo.play(4, 1) << endl;
    cout << gameTwo.play(1, 1) << endl;
    cout << gameTwo.play(4, 1) << endl;
    cout << gameTwo.play(4, 1) << endl;
    cout << gameTwo.play(2, 4) << endl;
    cout << gameTwo.play(4, 2) << endl;
    cout << gameTwo.play(1, 6) << endl;
    cout << gameTwo.play(3, 6) << endl;
    cout << gameTwo.play(5, 6) << endl;
    cout << gameTwo.play(5, 6) << endl;
    cout << gameTwo.play(6, 3) << endl;
    cout << gameTwo.play(4, 5) << endl;
    cout << gameTwo.play(5, 4) << endl;
    cout << gameTwo.play(3, 2) << endl;
    cout << gameTwo.play(5, 2) << endl;

    return 0;
}
//////////////
// #include <unordered_map>
// using namespace std;
// class SnakesLadders
// {
//   private:
//        unordered_map<int,int> snakes_and_ladders_ = {{2, 38}, {7, 14}, {8, 31}, {16, 6}, {15, 26}, {21, 42}, {28, 84}, {36, 44}, {46, 25}, {49, 11}, {51, 67}, {62, 19}, {64, 60}, {78, 98}, {74, 53}, {71, 91}, {89, 68}, {87, 94}, {92, 88}, {95, 75}, {99, 80}};
//        static int playerPos[2];
//        static int player;
// public:
//   SnakesLadders(){
//     playerPos[0] = 0;
//     playerPos[1] = 0;
//     player = 0;
//   }
//     std::string play(int die1, int die2)
//     {
//       string Message = "Player " + to_string(player + 1);
//       if (player == 2)
//              return "Game over!";
  
//       // Updating the position
//       playerPos[player] += die1 + die2;

//       //Bounce back condition for dice value greater than 100
//       if (playerPos[player] > 100)
//       {
//              playerPos[player] = 100 - (playerPos[player] - 100);
//       }

//       //To climb up the ladder or slide down the snake
//       auto ladder_iter = snakes_and_ladders_.find(playerPos[player]);
//       if (ladder_iter != snakes_and_ladders_.end())
//              playerPos[player] = ladder_iter->second;
      
//       //Win condition
//       if (playerPos[player] == 100)
//       {
//              Message +=  " Wins!";
//              player = 2;
//              return Message;
//       }
//       else
//       {
//              Message += " is on square " + to_string(playerPos[player]);
//       }
//       //Next player decision
//       if (die1 != die2)
//       {
//              player = (player == 0) ? 1 : 0;
//       }
//       return Message;
//   }
// };

// int SnakesLadders::playerPos[2]{};
// int SnakesLadders::player = 0;