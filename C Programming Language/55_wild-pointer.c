#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 334;
    int *ptr; // This is a wild pointer
    // *ptr = 34; // This is not a good practice to do
    ptr = &a; // ptr is no longer wild pointer
    printf("The value of a is %d\n", *ptr);

    return 0;
}

// What ia a wild pointer?

// Uninitialized pointers are known as wild pointers.
// These pointers points to some arbitrary location in memory and may cause a program to crash or behave badly
// Dereferencing wild pointers can cause nasty bugs
// It is suggested to always initialize unused pointers to NULL

// An example of wild program
// In the following program, ptr is a wild pointer until it is given the address of a

// int a;
// int *ptr; // wild pointer
// ptr = &a; // ptr is no longer wild