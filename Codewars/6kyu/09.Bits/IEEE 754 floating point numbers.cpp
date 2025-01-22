// https://www.codewars.com/kata/5efcaedf95d7110017896ced/train/cpp

// IEEE 754 is a standard for representing floating-point numbers (i.e. numbers that can have a fractional part and emulate real numbers).

// Its use is currently ubiquitous in both software (programming languages implementations) and hardware (Floating Point Units (FPU) chips embedded in processors).

// The 2 most widely used IEEE 754 formats are called the single precision (SP, encoded on 32 bits) and double precision (DP, encoded on 64 bits) formats.

// In C/C++, these correspond respectively to the types float and double, in virtually every implementation that supports floating-point numbers
// The default Python implementation, CPython, is written in C and represents Python floats internally as C doubles, and thus as IEEE 754 DP
// In JavaScript, all Numbers are IEEE 754 DP values.
// In Rust, these correspond respectively to the types f32 and f64.
// In Java, these correspond respectively to the types float and double.
// Before Lua 5.3, all numbers were IEEE 754 DP. Since Lua 5.3, numbers can be either IEEE 754 DP or 2's complement integers.
// As you can see on the images below, IEEE 754 numbers are divided into 3 fields :

// a sign bit;
// an exponent encoded on 8 (SP) or 11 (DP) bits;
// a mantissa (also called significand) encoded on 23 (SP) or 52 (DP) bits.
// The IEEE 754 single-precision encoding schemeThe IEEE 754 double-precision encoding scheme
// Your task is to write a function that takes as input a floating point number, and returns the binary IEEE 754 encoding of this number as a string, with fields separated by spaces for readability. If your programming language supports both SP and DP, you will have 2 functions to write, one for each type.

// Example
// Single Precision
// input:
// 15.875
// output:
// "0 10000010 11111100000000000000000"
// Double Precision
// input:
// 15.875
// output:
// "0 10000000010 1111110000000000000000000000000000000000000000000000"
// Note
// If you find yourself writing overly complex code, you are probably on the wrong path. Your solution should only be concerned with the bit-pattern of the number, without dealing with its value.

#include <string>
#include <bitset>
#include <cstdint>
#include <sstream>

std::string fp32_to_ieee754(float num)
{
    uint32_t bits = *reinterpret_cast<uint32_t*>(&num);

    uint32_t sign = (bits >> 31) & 1;
    uint32_t exponent = (bits >> 23) & 0xFF; 
    uint32_t mantissa = bits & 0x7FFFFF;

    std::ostringstream result;
    result << sign << " "
           << std::bitset<8>(exponent) << " "
           << std::bitset<23>(mantissa);

    return result.str();
}

std::string fp64_to_ieee754(double num)
{
    uint64_t bits = *reinterpret_cast<uint64_t*>(&num);

    uint64_t sign = (bits >> 63) & 1;
    uint64_t exponent = (bits >> 52) & 0x7FF;
    uint64_t mantissa = bits & 0xFFFFFFFFFFFFF;

    std::ostringstream result;
    result << sign << " "
           << std::bitset<11>(exponent) << " "
           << std::bitset<52>(mantissa);

    return result.str();
}
