#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("a = %d\n", *(int *)ptr);

    ptr = &b;
    printf("a = %f\n", *(float *)ptr);

    return 0;
}

// What ia a void pointer?

// A void pointer is a pointer that has no data type associated with it.
// A void pointer can be easily typecasted to any pointer type.
// In simple language it is a general purpose pointer variable.

// int x;
// char y;

// void *p = &x; // void pointer stores address of int 'x'
// p = &y; // void pointer stores address of char 'y'

// Uses of void pointers:

// In dynamic memory allocation, malloc(), and calloc() return (void *) type pointers
// This allows these dynamic memory functions to be used to allocate memory of any data type. This is because these pointers can be typecasted to any pointer type

// More on void pointers

// It is not possible to dereference void pointers
// Pointer arithmetic is not allowed in C standards with voidf pointers
// Hence it is not recommended to use pointers arithmetic with void pointers