// https://www.codewars.com/kata/568018a64f35f0c613000054/train/cpp
#include <stdexcept>

class Guesser
{
public:
    Guesser(int number, int lives)
        : number(number), lives(lives)
    {
    }

    bool guess(int n)
    {
        if (lives <= 0)
        {
            throw std::runtime_error("Out of lives! Game Over.");
        }

        if (n == number)
        {
            return true;
        }
        else
        {
            lives--;
            return false;
        }
    }

private:
    int number;
    int lives;
};
//
#include <stdexcept>

class Guesser
{
public:
    Guesser(int number, int lives)
      : number(number), lives(lives)
    { }
    bool guess(int n)
    {
        if(lives<=0)
        {
          throw std::exception();
        }
        if(n==number)
        {
          return true;
        }
        else
        {
          lives--;
          return false;
        }
    }
private:
    int number, lives;
};
