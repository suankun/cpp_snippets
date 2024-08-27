// https://www.codewars.com/kata/5aea1b7fd2ee276c4b000011/train/cpp
#include <string>
#include <iomanip>
#include <sstream>

std::string createIngredients(double sand = 0, double seaweed = 0, double chalk = 0) {
    double ratio_sand = 60.0;
    double ratio_seaweed = 180.0;
    double ratio_chalk = 5.0;
    
    if (sand < 0 || seaweed < 0 || chalk < 0)
        return "";

    if (sand != 0) {
        seaweed = (sand * ratio_seaweed) / ratio_sand;
        chalk = (sand * ratio_chalk) / ratio_sand;
    } else if (seaweed != 0) {
        sand = (seaweed * ratio_sand) / ratio_seaweed;
        chalk = (seaweed * ratio_chalk) / ratio_seaweed;
    } else if (chalk != 0) {
        sand = (chalk * ratio_sand) / ratio_chalk;
        seaweed = (chalk * ratio_seaweed) / ratio_chalk;
    } else {
        sand = ratio_sand;
        seaweed = ratio_seaweed;
        chalk = ratio_chalk;
    }

    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "[" << sand << ";" << seaweed << ";" << chalk << "]";
    return oss.str();
}
//
#include <string>
using namespace std;

string createIngredients(double sand = 0, double seaweed = 0, double chalk = 0)
{
    double x;
    char buf[10000];
    if (sand<0 || seaweed<0 || chalk<0) return "";
    x=max(max(sand/60,seaweed/180),chalk/5);
    if (x==0) x=1;
    sprintf(buf,"[%.2f;%.2f;%.2f]",60*x,180*x,5*x);
    return buf;
}
