#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void printStar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
}

int takeNumber()
{
    int i;
    printf("Enter the i\n");
    scanf("%d", &i);

    return i;
}

int main(int argc, char const *argv[])
{
    // int a, b;
    // a = 9;
    // b = 87;
    // int c = sum(a, b);
    // printf("%d\n", c);

    // printStar(7);

    int t = takeNumber();
    printf("%d\n", t);

    return 0;
}

// What is a function

// Functions are used to divide a large c program into smaller pieces
// A function can be called multiple times to provide reusibility and moularity to the C program
// Also called procedure or subroutine functions

// Advantages of C Functions:

// We can avoid rewriting same logic through functions
// We can divide work among programmers using functions
// We can esaily debug a program using functions

// Declaration, Definition and call

// A function is declared to tell the compiler about its existence
// A function is defined to get some task done
// A function is called in order to be used

// Types of Functions

// Library functions - functions included in c header files
// User defined functions - functions created by the C programmer to reduce the complexity of a program

// Function code examples

// without agrument and without return value
// without agrument and with return value
// with agrument and without return value
// with agrument and with return value