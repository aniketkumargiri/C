#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Memory layout of a C program\n");
    // gcc .\45_memory-layout.c ; size .\a.exe;

    // text data bss dec hex filename
    // 8836 1552 1004 11392 2c80.\a.exe

    return 0;
}

// What & why dynamic memory allocation?

// An statically allocated variable or array has fixed size in memory.
// We have learnt to create big enough array to fit in our inputs but doesnot seem like an optional way to allocate memory.
// Memory is a very useful resource
// Clearly we need a way to request memory on runtime
// Dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime.

// static vs dynamic memory allocation

// static memory allocation

// allocation is done before the program's execution
// There is no memory reusibility and the memory allocated cannot be freed
// Less efficient

// dynamic memory allocation

// allocation is done during the program's execution
// There is memory reusibility and the allocated memory can be freed when not required
// More efficient

// Memory allocation in c programs

// Memory assigned to a program in atypical architectures can be broken down into four segments
// 1. code: text segment
// 2. static/global variables: data, bss segment
// 3. stack: list of all programs
// 4. heap: dynamic memory allocation

// C program: Stack overflow:

// Compiler allocates some space for the stack part of the memory
// When this space gets exhausted for some bad reason, this situation is called as stack overflow
// typical example includes recursion with wrong/no base condition

// C program : Use of heap
// There are a lot of limitations of stack(static memory allocation)
// some of the examples includes variables sized array, freeing memory no longer required etc.
// heap can be used flexibly by the programmer as per hisd needs
// We can create a pointer in our main function and point to a memory block in the heap
// The address is stored by the local variable in the main function
// The memory consumed will not get freed automatically in case we overwrite the pointer
