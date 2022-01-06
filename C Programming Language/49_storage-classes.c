#include <stdio.h>
#include "49_temp.c"

int sum; // default initializes to zero
// int sum = 343;
int myfunc(int a, int b)
{
    // auto int sum;
    // sum = a + b;
    extern int sum;

    return sum;
}

void myVar()
{
    static int myVar;
    printf("The value of myVar is: %d\n", myVar);
    myVar++;
}

int main(int argc, char const *argv[])
{
    // Declaration - Telling the compiler abou the variable(No space reserved)
    // Definition - Declaration + space reservation

    // int sum = myfunc(3, 4);
    // int sum = 98;
    printf("The sum is %d\n", sum);

    myVar();
    myVar();
    myVar();

    return 0;
}

// What is a storage class?

// A storage class defines scope,default initial values & lifetime of a variable.

// A storage class defines following attributes about a variable in C:
// 1. scope: where will this variable be available
// 2. default initial value:
// 3. lifetime

// Storage classes in C:

// In c language, following storage classes are most often used:
// 1. Automatic variables
// 2. External variables
// 3. Static variables
// 4. Register variables

// Automatic variables: auto storage class
// scope : Local to the functio body they are defined in
// default value: garbage value(a random value)
// lifetime: till the end of the function block they are defined in
// A variable defined without any storage class specification is by default an automatic variable
// int ani and auto int ani are same

// External variables: External storage class
// They are same as global variables
// Scope : Global to the program they are defined in
// Default initial value: 0
// Lifetime: These variables are declared outside any function. They are available throughout the lifetime of the program.
// A global variable can be changed by any function in the program
// int ani written outside function will tell the compiler that ani is a global variable.
// It is recommended to minimize the use of unnecessary global variables in a program.

// External variables: External keyword
// extern keyword is used to inform our C compiler that a given variable is declared somewhere else
// Using extern will not allocate space for the variable

// int main(int argc, char const *argv[])
// {
//     int ani = 27;
//     printf("%d\n", ani);

//     return 0;
// }

// #include "ani.c"
// extern int ani;

// int main(int argc, char const *argv[])
// {
//     ani = 9;
//     printf("%d\n", ani);

//     return 0;
// }

// static variables : static storage class
// Scope: Local to the block they are defined in
// Default initial value: 0
// Lifetime: They are available throughout the lifetime of the program.
// A static variables remains under existence for use within the function for entire program run
// static int ani written inside any function will tell the compiler that ani is a static variable.
// It is recommended to minimize the use of unnecessary static variables in a program.

// Memory layout during program execution:
// Heap
// Stack
// Global &Static Variables
// Code

// Register Variables : Register storage class
// Scope : Local to the function they are defined in
// Default initial value: Garbage value
// Lifetime: They are available till the end of the function block, in which the variable is defined
// Register variables requests the compiler to store the variable in the CPU register insted of storing in the memory to have faster access
// Generally this is done for the variables which are being used frequently