// https://www.codewars.com/kata/57f037927b45ef77b3000260/train/cpp
class Person
{
public:
    Person(int x, int y, int z)
        : m_x(x), m_y(y), m_z(z)
    {
    }

    void location(int &x, int &y, int &z)
    {
        x = m_x;
        y = m_y;
        z = m_z;
    }

private:
    int m_x;
    int m_y;
    int m_z;
};
