// codewars.com/kata/54147087d5c2ebe4f1000805/train/cpp
void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
    value==true ? func1() : func2();
}
/////////
void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
  value ? func1() : func2();
}