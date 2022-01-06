#include <stdio.h>

// // function definition to swap the values
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x; // save the value at address x
//     *x = *y; // put y into x
//     *y = temp; // put temp into y

//     return;
// }

void changeValue(int *a){
    *a = 234;
}

int main(int argc, char const *argv[])
{
    int a = 37;
    int b = 73;

    // printf("%d and %d\n", a, b);
    // swap(&a, &b);
    // printf("%d and %d\n", a, b);

    printf("The value of a is %d\n", a);
    changeValue(&a);
    printf("The value of a is %d\n", a);

    return 0;
}

// Actual and formal parameters

// When a function is called, the value(expression) that are passed in the call are called the arguments or actual parameters
// Formal parameters are local variables which are assigned values from the arguments when the function is called

// Types of functions calls in C Programming

// In c programming language, we can call a function intwo different ways, based on how we specify and these two ways are:

// call by value

// When we call a function by value, it means that we are passing the values of the arguments which are copied intothe formal parameters of the function
// which means that the original function values remains unchanged and only the parameters inside the function changes

// call by reference

// The call by reference method of passing arguments to a C function copies the address of the arguments into the formal parameters
// Addresses of the actual arguments are copied and then assigned to the corresponding formal parameters