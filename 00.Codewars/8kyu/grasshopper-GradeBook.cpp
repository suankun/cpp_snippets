char getGrade(int a, int b, int c) {
    int average {};
    char result {};
    average = (a + b + c) / 3;
    if (average >= 90 && average <= 100)
      result = 'A';
    else if (average >= 80 && average < 90)
      result = 'B';
    else if (average >= 70 && average < 80)
      result = 'C';
    else if (average >= 60 && average < 70)
      result = 'D';
    else if (average >= 0 && average < 60)
      result = 'F';
  
    return result;
}



// char getGrade(int a, int b, int c) {
//   int avg = (a + b + c) / 3;
//   switch(avg){
//   case 90 ... 100: return 'A';
//   case 80 ... 89: return 'B';
//   case 70 ... 79: return 'C';
//   case 60 ... 69: return 'D';
//   default: return 'F';
//   }
// }