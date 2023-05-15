int final_grade(int exam, int projects){
  int result {};
  if (exam > 90 || projects > 10)
    result = 100;
  else if (exam > 75 && projects >= 5)
    result = 90;
  else if (exam > 50 && projects >= 2)
    result = 75;
  
  return result;
}

// int final_grade(int exam, int projects){
//    return exam > 90 || projects > 10? 100: exam > 75 && projects >= 5? 90: exam > 50 && projects >= 2? 75: 0;
// }