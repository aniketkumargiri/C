#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // // Use of malloc
    // int n;
    // printf("enter the size of the array you want to create\n");
    // scanf("%d", &n);
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("the value at %d of this array is: ", i);
    //     printf("%d\n", ptr[i]);
    // }

    // Use of calloc
    int n;
    printf("enter the size of the array you want to create\n");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is: ", i);
        printf("%d\n", ptr[i]);
    }

    // Use of realloc
    printf("enter the size of the new array you want to create\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("the value at %d of this array is: ", i);
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}

// Functions for dynamic memory allocation in c:

// In dynamic memory allocation, the memory is allocated at runtime from the heap segment
// We have four functions that help us achieve this task:
// malloc
// calloc
// realloc
// free

// C malloc()

// malloc() stands for memory allocation
// it reserves a block of memory with the given amount of bytes
// the return value is a void pointer to the allocated space
// therefore the void pointer needs to be casted to the appropriate type as per the requirements
// however, if the space is insufficient, allocation of memory fails and it returns a NULL pointer
// all the values at the allocated memory are initialized to garbage values

// syntax:
// ptr = (ptr-type*)malloc(size_in_bytes));

// C calloc()

// malloc() stands for comtiguous allocation
// it reserves n block of memory with the given amount of bytes
// the return value is a void pointer to the allocated space
// therefore the void pointer needs to be casted to the appropriate type as per the requirements
// however, if the space is insufficient, allocation of memory fails and it returns a NULL pointer
// all the values at the allocated memory are initialized to 0

// syntax:
// ptr = (ptr-type*)calloc(n,size_in_bytes));

// C realloc()

// realloc() stands for reallocation
// if the dynamically allocated memory is insufficient we can change the size of previously allocated memory using realloc() function

// syntax:
// ptr = (ptr-type*)realloc(ptr,new_size_in_bytes);

// C free

// free() is used to free the allocated memory.
// if the dynamically allocated memory is not required anymore then we can free it using free() function
// This will free the memory being used by the program in the heap

// syntax:
// free(ptr);