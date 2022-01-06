#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int a = 34;
    // int *ptra = &a;

    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1);

    // printf("%d\n", *ptra);
    // printf("%d\n", *ptra + 1);

    int arr[] = {311, 52, 3, 4, 5, 6, 67};
    int *arrptr = arr;

    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);

    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the second element of the array is %d\n", arr + 1);

    printf("The address of the third element of the array is %d\n", &arr[2]);
    printf("The address of the third element of the array is %d\n", arr + 2);
    // arr++; // this line will throw an error
    arrptr++; // can't change the original address of the array

    printf("The value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", arr[0]);
    printf("The value at address of the first element of the array is %d\n", *arr);

    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of the second element of the array is %d\n", arr[1]);
    printf("The value at address of the second element of the array is %d\n", *(arr + 1));

    return 0;
}

// Pointers arithmetic

// Pointers arithmetic can be used to write powerful c programs
// There are four arithmetic operations that can be used on pointers(++, --, +, -);

// arrays and pointers

// consider the following declaration : int arr[10];
// What is the type of arr? // integer array
// However, arr, by itself, without any inedx subscripting, can be assigned to an integer pointer

// arr[i] using pointer arithmetic

// What type does arr[i] have? // *(arr + i)
// If arr is a pointer to an integer arr[0] then arr + i is a pointer to arr[i]