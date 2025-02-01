// https://www.codewars.com/kata/586dd26a69b6fd46dd0000c0/train/cpp

// The Language
// MiniStringFuck is a derivative of the famous Brainfuck which contains a memory cell as its only form of data storage as opposed to a memory tape of 30,000 cells in Brainfuck. The memory cell in MiniStringFuck initially starts at 0. MiniStringFuck contains only 2 commands as opposed to 8:

// + - Increment the memory cell. If it reaches 256, wrap to 0.
// . - Output the value of the memory cell as a character with code point equal to the value
// For example, here is a MiniStringFuck program that outputs the string "Hello, World!":

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++.+++++++..+++.+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++.+++.++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.
// And here is another program that prints the uppercase English alphabet:

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.+.
// Any characters in a MiniStringFuck program other than + or . are simply non-command characters (no-ops, i.e. do nothing) and therefore can serve as comments in the program.

// The Task
// Time to write your first Esolang interpreter :D

// Your task is to implement a MiniStringFuck interpreter myFirstInterpreter()/my_first_interpreter()/Interpreter()/interpret() MyFirstInterpreter() (depending on your language) which accepts exactly 1 required argument code/$code/strng which is the MiniStringFuck program to be executed. The output of the program should then be returned by your interpreter as a string.

// Since this is the first time you are about to write an interpreter for an Esolang, here are a few quick tips:

// If you are afraid that your interpreter will be confused by non-command characters appearing in the MiniStringFuck program, you can try to remove all non-command characters from the code input before letting your interpreter interpret it
// The memory cell in MiniStringFuck only ever contains a single integer value - think of how it can be modelled in your interpreter
// If you are stuck as to how to interpret the string as a program, try thinking of strings as an array of characters. Try looping through the "program" like you would an array
// Writing an interpreter for an Esolang can sometimes be quite confusing! It never hurts to add a few comments in your interpreter as you implement it to remind yourself of what is happening within the interpreter at every stage

#include <string>

std::string my_first_interpreter(const std::string& code)
{
    unsigned char i = 0;
    std::string o;
    
    for (char v : code)
    {
        if (v == '+')
            i = (i + 1) % 256;
        else if (v == '.')
            o += static_cast<char>(i);
    }
    
    return o;
}
