#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;

    // char string[64];
    // ****** Reading a file ******
    // ptr = fopen("64_myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has: %s\n", string);

    // char string[64] = "This content is produced by 64_file-handling.c\n";
    // ****** Writing a file ******
    // ptr = fopen("64_myfile.txt", "w");
    // fprintf(ptr, "%s", string);

    char string[256] = "\nThe content is appended in file.\n";
    // ****** Writing a file ******
    ptr = fopen("64_myfile.txt", "a");
    fprintf(ptr, "%s", string);

    return 0;
}

// Working with files in C:

// When working with files, we have to declare a pointer of type FILE
// This declaration helps us to work with files through C program

// Opening  file - Creating or editing a file:

// stdio.h contains a function called fopen() for opening files in C
// The syntax for opening a file in standard I/O is:
// ptr = fopen("fileopen","mode");
// For example:
// fopen("E:\\Code\\ani.txt", "w");
// fopen("E:\\Programming\kthe.bin", "rw");

// Closing a file:

// Any file which is opened in a C program needs to be closed
// Closing a file is accomplished by the library function fclose()
// fclose(fptr); // fptr is the file pointer associated with file to be closed

// Reading a file:

// In order to read a file, we can use fscanf function
// This function is file version of scanf function
// fscanf expects a file pointer in addtion to the other arguments which scanf expects
// We will have to open the file in read mode in order to use this functions
// fscanf(ptr, "%s", string);

// Writing to a file:
// In order to write a file, we can use fprintf function
// This function is file version of printf function
// fprintf expects a file pointer in addtion to the other arguments which printf expects
// We will have to open the file in write mode in order to use this functions
// fprintf(ptr, "%s", string);
