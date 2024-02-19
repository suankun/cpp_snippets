// https://www.codewars.com/kata/55ad04714f0b468e8200001c/train/cpp
char get_char(int i) {
  return i-'0'+48;
}
////////////////
char get_char(int i)
{
    return static_cast<char>(i);
}
