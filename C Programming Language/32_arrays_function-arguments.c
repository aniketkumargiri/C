#include <stdio.h>

void func1(int a[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n", i, a[i]);
    }
    a[0] = 17;
}

void func2(int *p)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at index %d is %d\n", i, p[i]);
        printf("The value at index %d is %d\n", i, *(p + i));
    }
    p[2] = 39;
}

void func3(int a[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at index %d, %d is %d\n", i, j, a[i][j]);
        }
    }
}

int main(int argc, char const *argv[])
{
    // int arr[] = {23, 13, 3, 4};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);

    // printf("The value at index 2 is %d\n", arr[2]);
    // func2(arr);
    // printf("The value at index 2 is %d\n", arr[2]);

    int arr[][2] = {2, 43, 52, 14};
    func3(arr);

    return 0;
}

// Why and how to pass arrays?

// We pass arrays to functions when need to pass a list of values to a given function
// We can pass the arrays to functions
// 1. By declaring array as parameter in the function
// 2. By declaring a pointer in the function to hold the base address of the array

// If you change the value of the array, it gets reflected in te main function