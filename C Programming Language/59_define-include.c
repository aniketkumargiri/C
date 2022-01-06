#include <stdio.h>
#include "59_preprocessor.c"

#define PI 3.14

#define SQUARE(r) r *r

int main(int argc, char const *argv[])
{
    float var = 0;
    printf("This is me %d\n", var);

    var = PI;
    printf("The value of PI is %f\n", var);

    int r = 4;
    printf("The area of the circle is %f\n", PI * SQUARE(r));
    return 0;
}

// The #include directive

// The #include directive causes the preprocessor to fetch the contents of some other file to be included in the present file
// This file may in turn #include some other files(s) which may in turn do the same
// Most commonly used the #included files have a ".h" extension, indicating that they are headers files

// Two common #include formats

// 1. In C programming there are two common formats for #includes:

// #include<headerFile.h> // The angle brackets sya to look in the standard system directories
// #include "myFile.h" // The quotation marks say to look in the current directory

// 2. Disk drive full path is allowed, but discouraged since it is not portable:

// #include<C:\Program Files\Ani\kthe\somefile.h> // Too specific
// #include <sys/file.h> // Relative and portable path to the standard locations

// The #define directive:

// The #define directive is used to "define" preprocessor "variables"
// The #define preprocessor directive can be used to globally repalce a word witha a number
// #define PI 3.141592653589
// It acts as if an editor did a global search - and - repalce edit of the file

// Using #define for debugging

// #define directive scan be used for debugging
// We can have printing statements that we can only want active when debugging
// We can "protect" them in a "ifdef" block

// Macros using #define:

// We can also create macros using #define
// Macros operate much like functions, but because they are expanded in places and are generally faster
// #define PI 3.141592653589
