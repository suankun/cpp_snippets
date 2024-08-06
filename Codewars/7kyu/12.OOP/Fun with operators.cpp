// https://www.codewars.com/kata/5813084c6858b6ba7b00006a/train/cpp
class Person
{
  public:
    Person(int age) : m_age(age) {}
  
    bool operator==(const Person& other) const
    {
      return m_age == other.m_age;
    }
    
    bool operator!=(const Person& other) const
    {
      return m_age != other.m_age;
    }
    
    bool operator<=(const Person& other) const
    {
      return m_age <= other.m_age;
    }
    
    bool operator>=(const Person& other) const
    {
      return m_age >= other.m_age;
    }
    
    bool operator<(const Person& other) const
    {
      return m_age < other.m_age;
    }
    
    bool operator>(const Person& other) const
    {
      return m_age > other.m_age;
    }
    
  private:
    const int m_age;
};
//
#include <utility>

using namespace std::rel_ops;

class Person {
public:
  Person(int age) : m_age(age) {}

  bool operator==(const Person& other) const
  {
    return m_age == other.m_age;
  }

  bool operator<(const Person& other) const
  {
    return m_age < other.m_age;
  }
  
private:
  const int m_age;
};
