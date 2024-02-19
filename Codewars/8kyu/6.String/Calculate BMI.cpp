// https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp
#include <string>


std::string bmi(double w, double h) 
{
    return w/(h*h) <= 18.5 ? "Underweight" :
           w/(h*h) <= 25.0 ? "Normal" :
           w/(h*h) <= 30.1 ? "Overweight" : "Obese";
}