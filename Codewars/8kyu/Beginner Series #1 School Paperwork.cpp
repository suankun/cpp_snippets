// https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/csharp
  using System;
  public static class Paper
  {
    public static int Paperwork(int n, int m)
    {
      return n<0 ? 0 : m<0 ? 0 : n*m;
    }
  }
//
  using System;
  public static class Paper
  {
    public static int Paperwork(int n, int m)
    {
      //#Happy Coding! ^_^
      return (n < 0 | m < 0) ? 0 : n * m;
    }
  }
