#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(2, 3));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    // greetHelloAndExecute(ptr);
    greetGmAndExecute(ptr);

    return 0;
}

// Callback functions:
// Function pointers are used to pass a function to a function
// This passed function can then be called again(hence the name callback function)
// This provides programmer to write less code to do more stuff