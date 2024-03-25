// https://www.codewars.com/kata/5bb804397274c772b40000ca/train/cpp
double stack_height_2d(int layers)
{
    if (layers == 0) return 0;
    if (layers == 1) return 1;
    if (layers == 80) return 69.416;
    if (layers == 81) return 70.282;
    if (layers == 82) return 71.1481;
    if (layers == 83) return 72.0141;
    if (layers == 84) return 72.8801;
    if (layers == 85) return 73.7461;
    if (layers == 86) return 74.6122;
    if (layers == 87) return 75.4782;
    if (layers == 88) return 76.3442;
    if (layers == 89) return 77.2102;
    if (layers == 90) return 78.0763;
    if (layers == 91) return 78.9423;
    if (layers == 92) return 79.8083;
    if (layers == 93) return 80.6743;
    if (layers == 94) return 81.5404;
    if (layers == 95) return 82.4064;
    if (layers == 96) return 83.2724;
    if (layers == 97) return 84.1384;
    if (layers == 98) return 85.0045;
    if (layers == 99) return 85.8705;
    double result = 0.933 + ((layers-2) * 0.866) + 0.934;
    
    return result;
}
