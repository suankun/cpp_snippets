// https://www.codewars.com/kata/56606694ec01347ce800001b/train/cpp
namespace Triangle
{
    bool isTriangle(long int a, long int b, long int c)
    {
        return (a+b>c && a+c>b && b+c>a);
    }
};
//
namespace Triangle
{
    bool isTriangle(int a, int b, int c)
    {
        return a-b<c && b-c<a && c-a<b;
    }
};
