#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int a;
    // printf("Enter the value of a: ");
    // scanf("%d", &a);

    // float b;
    // printf("Enter the value of b: ");
    // scanf("%f", &b);

    // double sum = a + b;

    // printf("The result is: %lf\n", sum);

    printf("size of int is %d bytes\n", sizeof(int));
    printf("size of int is %d bytes\n", sizeof(short));
    printf("size of int is %d bytes\n", sizeof(long));
    printf("size of int is %d bytes\n", sizeof(char));
    printf("size of int is %d bytes\n", sizeof(float));
    printf("size of int is %d bytes\n", sizeof(double));

    return 0;
}

// What is a Variable?

// A name given to a memory location
// Declared by writing type variable_name;
// Inintialized by type variable_name = value

// Rules for defining a variable in C

// Can contain alphabets, digits and underscores(_)
// A variable name can start with an alphabet and underscores only
// Can't start with a digit
// No whitespace & reserved keywords is allowed
// valid variable names : int ani, float ani123, char _ani27;
// Invalid Variable Name: $ani, int 27ani, char long

// Data types in C

// Basic data types : int, char, float, double
// Derived Data Type : array, pointer, structure, union
// Enumeration Data Types : emum
// Void data types : void
