// https://www.codewars.com/kata/5b55c49d4a317adff500015f/train/cpp
#include <cmath>

double distance(int x1, int y1, int x2, int y2)
{
    return std::sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
}

static int pointsNumber(int radius)
{
    int totalPoints = 0;
    double rDist = radius;
    for(int i = -radius; i <= radius; i++)
    {
        for(int j = -radius; j <= radius; j++)
        {
            if(distance(i, j, 0, 0) <= rDist)
                totalPoints++;
        }
    }
    return totalPoints;
}
//
static int pointsNumber( int radius ) {
    radius *= radius;
    int count{}; // one quadrant
    for ( int i{ 1 }; i <= radius; i += 4 )
        count += radius / i - radius / ( i + 2 );
    return 4 * count + 1;
}
