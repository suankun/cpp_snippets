// https://www.codewars.com/kata/57f59da8d3978bb31f000152/train/cpp
void make_me_slow()
{
    for (int x = 0; x < 1000000; x++)
    {
        volatile int y = 0;
        while (y < 3500) {
            y++;
        }
    }
}
