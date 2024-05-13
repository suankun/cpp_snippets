// https://www.codewars.com/kata/57f285c069e09ca1aa000b04/train/cpp
void swap(void*& left, void*& right)
{
    void* temp = left;
    left = right;
    right = temp;
}
