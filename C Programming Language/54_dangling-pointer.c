#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;

    return &sum;
}

int main(int argc, char const *argv[])
{
    // case 1 : Deallocation of a memory block
    int *ptr = (int *)malloc(8 * sizeof(int));
    ptr[0] = 23;
    ptr[1] = 12;
    ptr[2] = 45;
    ptr[3] = 8;
    free(ptr); // ptr is now a dangling pointer

    // case 2 : function returning local variable address
    int *dangPtr = functionDangling(); // ptr is now a dangling pointer

    // case 3: variable is out of scope
    int *danglingPtr;
    {
        int a = 12;
        danglingPtr = &a;
    }
    // Here variable a goes out of scope which means danglingPtr is pointing to a localation which is freed and hence danglingPtr is a dangling pointer.

    return 0;
}

// What is a dangling pointer?

// A pointer pointing to a freed memory memory location or the location whose content has been dleted is called a dangling pointer.
// dangling pointer arise during destruction when an object that has an incoming reference is deleted or deallocated, without modifying the value of the pointer, so that the pointer still points to the memory location of the deallocated memory

// causes of dangling pointers

// 1. Deallocation of memory:
// When memory is allocated, the pointer keeps pointing to the freed space
// example:
// char *str;
// int a;
// int *ptr = (int *)malloc(sizeof(int));
// free(ptr); // ptr now becomes a dangling pointer
// ptr = NULL; // ptr no longer dangling

// 2. Returning local variable in function calls:
// #include <stdio.h>

// int *myfunc()
// {
//     // a is local variable and goes out of scope on function return over
//     int a = 34;
//     return &a;
// }

// int main(int argc, char const *argv[])
// {
//     int *ptr = myfunc(); // ptr points to invalid location
//     printf("%d\n", *ptr);

//     return 0;
// }

// 3. variable going out of scope:
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int *ptr;
//     {
//         int i = 0;
//         ptr = &i; // ptr points to invalid location
//     }
//     // ptr is now a dangling pointer
//     printf("%d\n", *ptr);

//     return 0;
// }

// Is dangling pointer a good thing to have?

// dangling pointers can introduce nasty bugs in our C programs
// dangling pointer bugs frequently become security holes at times
// We can avoid issues caused by dangling pointer by initializing pointers to NULL;
// After de - allocating memory, pointer will be no longer dangling
// Assigning NULL values means pointer is a null pointer now