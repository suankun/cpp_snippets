// https://www.codewars.com/kata/568dcc3c7f12767a62000038/train/cpp
bool set_alarm(const bool& employed,const bool& vacation){
  return (employed == true && vacation == false);
}
//
bool set_alarm( const bool& employed, const bool& vacation )
{
  return (employed && !vacation);
}