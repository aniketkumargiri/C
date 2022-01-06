#include <stdio.h>

int b = 23; //This is a global variable since it is declared outside main()

int func1(int b)
{
    static int myvar = 0;
    printf("The value of myvar = %d\n", myvar);
    myvar++;

    // printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b * 10 + myvar;
}

int main(int argc, char const *argv[])
{
    int b = 34;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    // int *ptr = &val;
    // printf("The value of func1 is %d\n", val);

    return 0;
}

// Local variables(recap)

// Scope is a region of the program where as defined variable can exist and beyond which it cannot be accessed.
// Variables which are accessed inside a function or a block are called local variables.
// They can only be accessed by the function they are declared in
// They are inaccessible to the functions outside the function they are declared in

// Global variable(recap)

// These are variables defined outside the main method
// Global variables are accessible throughout the entire program form any function
// If a local and global variable has the same name, the local variable will take preference

// Formal arguments

// These are variables treated as local variables within a function.
// These variables take preference over global variables.

// Static variables in C

// static variables are variables which have a property of preserving their values even when they go out of scope
// They preserve their value from the previous scope and are not initialize again;
// static variables remains in memory throughout the span of the program
// static variables are initialized to 0 if not initialized explicitly.
// In C, static variables can only be initialized using constant literals.
// Static variables are executed before main() is called, so they prefer constant literals.