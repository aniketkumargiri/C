#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int a = 76;
    // int *ptr = &a;

    // printf("The value of a is %d\n", a);
    // printf("The value at address of a is %d\n", *ptr);

    // printf("The address of a is %d\n", &a);
    // printf("The address of a is %p\n", &a);

    // printf("The address of a is %d\n", ptr);
    // printf("The address of a is %p\n", ptr);

    // printf("The address of ptr is %d\n", &ptr);
    // printf("The address of ptr is %p\n", &ptr);

    int *p = NULL;
    printf("The address of p is %d\n", &p);
    printf("The address of p is %p\n", &p);

    printf("The value of p is %p\n", p);

    return 0;
}

// What is a pointer?

// Variable which stores the address of another variable
// Can be of type int, char, float, array, function or any other pointer
// Size depends on the architecture. Ex 2 bytes for 32 bit architectures
// pointer in C programming language can be declared using *(asterisk symbol)
// The address of operator '&' returns the address of variable
// * is the dereference operator ( also called indirection operator) used to get the value at a given address

// Null pointer

// A pointer that is not assigned any value but NULL is known as the null pointer.
// In computer programming, a null pointer is a pointer that doesn't point to any object or function
// We can use it to initialize a pointer variable when that pointer variable isn't assigned any valid memory address yet
// int *ptr = NULL;

// Use of pointer 

// Dynamic memory allocation 
// arrays, functions, and structures
// return multiple values from a function
// pointer reduces the code and improves the performance
