#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45545)
    {
        printf("Welcome to Code With Harry\n");
        i2 = malloc(34444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2); // Without this we will encounter a situation of memory leak
    }

    return 0;
}

// What is memory leak?
// Dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime
// Memory assigned to a program in a typical architecture can be broken down into four segments:
// 1. code
// 2. static/global variables
// 3. Stack
// 4. Heap

// What causes memory leak in C?
// With great power comes great responsibility
// Memory leak is caused when we don't use dynamic memory properly
// When we keep on allocating memory in the heap without freeing, the overall memory usage keeps on increasing
// This situation is the cause of memory leak i.e, the programmer creates a memory block in the memory and forgets to delete it
// To avoid these memory leak situations, memory allocated on th heap should always be freed when not needed
