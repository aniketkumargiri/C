#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning%d\n");
}

int main()
{
    // printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // Testing the function

    int (*fPtr)(int, int); // Declaring a function pointer
    fPtr = &sum;           // Creating a function pointer
    int d = (*fPtr)(4, 6); // Dereferencing a function pointer
    printf("The value of d is %d\n", d);

    return 0;
}

// Function pointer:
// We can have pointers pointing to functions as well
// Function pointers points to code and not data
// Function pointers are useful to implement callback functions
// Compiler takes one or more source files and converts them to machine code
// Unlike normal pointers, we do not allocate de-allocate memory using function pointers