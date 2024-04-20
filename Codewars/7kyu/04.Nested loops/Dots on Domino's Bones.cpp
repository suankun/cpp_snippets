// https://www.codewars.com/kata/6405f2bb2894f600599172fd/train/cpp
int dots_on_domino_bones(int number)
{
    int dots_count=0;
    for (int i=0; i<=number; i++) {
        for (int j=i; j<=number; j++) {
            dots_count+= (i+j);
        }
    }
    return dots_count;
}
//
int dots_on_domino_bones(int n)
{
    return n > -1 ? n * (n + 1) * (n + 2) / 2 : -1;
}
