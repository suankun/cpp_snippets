// https://www.codewars.com/kata/55c0a79e20be94c91400014b/train/cpp
class Cube {
private:
  int Side {};
  
public:
  int GetSide() {
    return Side;
  }
  void SetSide(int user_side) {
    Side = user_side;
  }
};
//
class Cube
{
  private:
    int Side = 0;
   
  public:
    int GetSide();
    void SetSide(int);
};

int Cube::GetSide()
{
  return this->Side;
}

void Cube::SetSide(int n)
{
  this->Side = n;
}
