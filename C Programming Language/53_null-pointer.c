#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr = &a;
    // printf("The address of a is %d\n", ptr);

    // int *ptr = NULL;
    // printf("The address of pointer is %d\n", ptr);

    if (ptr != NULL)
    {
        printf("The value at address of pointer is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a NULL pointer and can't be dereferenced\n");
    }

    return 0;
}

// Whta is a NULL pointer?

// Null pointer is a pointer has a value reserved for indicating that the pointer or reference does not refer to a valid object
// A null pointer is guaranteed to compare unequal to any pointer that points to a valid object
// Dereferencing a null pointer is undefined behavior in C, and a conforming implementation is allowed to assume thata any pointer that is dereferenced is not null
// NUll pointer is a specific pointer which is mentioned in C standard and it has specific purposes
// Null pointer gives a functionality to C programmer to check whether a pointer is legitimate or not

// NULL pointer: C program

// A null pointer is a pointer that points to NULL(nothing)
// A null pointer should not be dereferenced
// A check must be run by the c programmer to know whether a pointer is null before dereferencing it

// int x;
// int *p = NULL; //  null pointer
// p = &x; // null pointer now holds address of int 'x'

// Uses of NULL pointers

// To initialize a pointer variable in cases where pointer variable has not been assigned any valid address yet.
// To check for legistmate address location before accessing any pointer variable.
// By doing so, we can perform error handling while pointers with c
// Example of such error handling can be : dereference pointer variable only if it's not NULL
// To pass a null pointer to a function argument when wwe don't want to pass any valid memory address

// More on null pointers

// NULL macro is defined as ((void*)0) in header files of most of the C compiler implementations
// NULL pointer vs Uninitialized pointer: An uninitialised pointer contains an undefined value.
// A null pointer stores a defined value, which is the one decided by the environment to not be a valid memory address for any object
// NULL pointer vs Void pointer: NUll pointer is a value where void pointer is a type