#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("67_myfile.txt", "r+");
    // char *c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    char str[4];
    fgets(str, 3, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is harry",ptr);

    fclose(ptr);
    return 0;
}

// Mode & Discriptions

// r: opens an existing text file for reading
// w : opens a file for writing. If it does not exist, a new file is created. Writing starts form the beginning of the file.
// a : Opens a text file for writing in appending mode. If it does not exist, a new file is created. The program will start appending content to the existing file content.
// r+ : This mode will open a text file for both reading and writing
// w+ : Open a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.
// a+ : Opens a text file for both reading and writing. It creates a new file if it does not exist. The reading will start form the beginning but writing can only append to file.

// Other file I/O functions in C:

// There are various functions provided by C standard library to read and write a file, character by character, or in the form of a fixed length string.
// Some of them are:
// fputc;
// fputs;
// fgetc;
// fgets;

// fputc function in C::
// Simplest function to write characters to a file in fputc
// syntax of fputc goes as follows:
// int fputc(character, FILE pointer);
// It returns the written character written on success
// On failure it returns EOF
// The EOF is a constant defined in the header stdio.h

// fputs in C:

// fputs function is used to write a null terminated string to a file in c
// int fputs(const char *s, FILE *fp);

// fgetc function in C::
// Simplest function to read characters to a file in fgetc
// syntax of fgetc goes as follows:
// int fgetc(FILE *fp);
// It returns the read character on success
// On failure it returns EOF
// The EOF is a constant defined in the header stdio.h

// fgets in C:

// fgets function is used to read a null terminated string to a file in c
// int len = 4;
// int fgets(const char *s, int len FILE *fp);