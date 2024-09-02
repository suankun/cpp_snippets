// https://www.codewars.com/kata/66cdc6ab9e7a9f009e0ca8f6/train/cpp
bool canSnailReachEnd(double length, double speed, double lengthIncreases)
{
    return (speed - lengthIncreases) * 60 * 24 * 365 > length ? true : false;
}
//
bool canSnailReachEnd(double length, double speed, double lengthIncreases)
{
    return (speed - lengthIncreases) * 60 * 24 * 365 > length;
}
