/*
Author: Aniket umar Giri
Purpose: learning C Programming
Date: 14th December 2020
*/
#include <stdio.h>

#define PI 3.141592653589

int main(int argc, char const *argv[])
{
    int a = 8;
    const float b = 7.333;
    // b = 3.14; //--> can't change the value of a constant
    printf("The value of a is %11.4d and \t the value of b is %-12.3f hai\n", a, b);

    // Pi = 3.159; //--> can't change the value of a constant
    printf("PI = %lf", PI);

    printf("tab character is \\t and new line character is \\n");

    return 0;
}

// What is a format specifier?

// Format specifier is a way to tell the compiler what type of data is in a variable duting taking input displaying output to the user
// printf("This is a good boy %a.bf", var);
// will print var with b decimal points in a 'a' character space

// Constants in C

// A constant is a value that can't be changed by the program.
// For example: 15, 23, 'a', 3.4, "code with ani" etc
// There are two ways to define constant in C programming
// const keyword
// #define preprocessor

// Escape sequences in C

// An escape sequence in C programming language is a sequence of characters
// It doesn't represent itself when used inside string literal or character
// It is composed of two or more characters starting with backslash(\)
// For example: \n represents new line character

// Comments in C

// Available in virtual assistant library
// Compiler simply ignore the things while preprocessing written inside it
/*
Multiline 
comments
*/