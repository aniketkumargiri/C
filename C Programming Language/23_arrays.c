#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int marks[4];
    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 445;
    // marks[1] = 23;
    // marks[2] = 203;
    // marks[3] = 323;

    // printf("Marks of student 1 is %d\n", marks[0]);
    // printf("Marks of student 2 is %d\n", marks[1]);
    // printf("Marks of student 3 is %d\n", marks[2]);
    // printf("Marks of student 4 is %d\n", marks[3]);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }

    // int marks[4] = {23, 45, 12, 91};
    // int marks[] = {23, 17, 45, 12, 91};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("The value of %d element of the array is %d\n", i, marks[i]);
    // }

    int marks[2][4] = {{12, 34, 23, 45}, {65, 45, 29, 94}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// What is an array?

// An array is a collection of data of the same type
// Items are stored at contiguous memory locations
// It can also store the location of derived data types, such as pointers, structures etc
// A one dimensional array is lika a list
// A two dimensional array is like a table
// The C language places no limits on the number of dimensions in an array
// Some texts refer one dimensional array as vectors, two dimensional arrays ar matrices, and use the general term arrays when the number of dimensions is unspecified or unimportant

// Why do we need arrays?

// Code that use arrays is sometimes more organized and readable
// If you were to store marks in a test of 56 students, creating 56 variables will make program look cluttering and messy
// Solution to this is arrays
// We can create arrays of integers and store the consecutive marks corresponding to the roll number in the array

// Advantages of arrays

// It is used to represent multiple data items of same type by using only single name
// Accessing an item in a given array is very fast
// 2 Dimensional array makes it easy in mathematical applications as it is used to represent matrices

// Properties of array

// Data in an array is stored in contiguous memory locations
// Each element of an array is of same size
// Any element of the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index

// syntax for declaring and initializing an array

// data_type name[size];
// data_type name[size] = {x, y, z}; // size not required in this case
// data_type name[rows][columns];// for 2-d arrays
// We can also initialize the array one by one by accessing the array's index
// name[0] = 0;

// Disadvantages of using the array

// Poor time complexity of insertion and deletion operation
// Wastage of memory since arrays are fixed in size
// If there is enough space present in the memory but not in contiguous form, you will not be able to initialize your array
// It is not possible to increase the size of the array, once you have declared the array