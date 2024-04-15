// https://www.codewars.com/kata/5672a98bdbdd995fad00000f/train/cpp

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    std::string winner;
    if (p1 == "scissors" && p2 == "paper") winner = "Player 1 won!";
    else if (p1 == "scissors" && p2 == "rock") winner = "Player 2 won!";
    else if (p1 == "rock" && p2 == "paper") winner = "Player 2 won!";
    else if (p1 == "rock" && p2 == "scissors") winner = "Player 1 won!";
    else if (p1 == "paper" && p2 == "scissors") winner = "Player 2 won!";
    else if (p1 == "paper" && p2 == "rock") winner = "Player 1 won!";
    else if (p1 == "scissors" && p2 == "scissors") winner = "Draw!";
    else if (p1 == "rock" && p2 == "rock") winner = "Draw!";
    else if (p1 == "paper" && p2 == "paper") winner = "Draw!";
    
    return winner;
}

////////////////////

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if(p1 == p2)
      return "Draw!";
    if( ( p1[0] == 's' && p2[0] == 'p' )||
        ( p1[0] == 'p' && p2[0] == 'r' )||
        ( p1[0] == 'r' && p2[0] == 's' ) )
        return "Player 1 won!";
    return "Player 2 won!";
}