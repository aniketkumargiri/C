#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n");

    // // infinite for loop
    // int i, j = 0;
    // for (i = 0;;)
    // {
    //     printf("%d %d\n", i, j);
    //     i++;
    //     j++;
    // }

    return 0;
}

// Why use for loop?

// The for loop is used to iterate the statements or a part of the program several times
// It is used to traverse the data structures like arrays and linked list
// It has a little different syntax than while and do while loops

// syntax of for loops

// The syntax of for loops in C language is given below:

// for (expression 1 : expression 2 : expression 3)
// {
//     //code to be run
// }

// Properties of expression 1

// The expression represents the inilialization of the loop variable
// We can initialize more than one variable in the expression 1
// Expression 1 is optional