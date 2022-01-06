#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Is recursion always good?\nWhy is recursion approach slow?\n");

    return 0;
}

// In a nut shell...

// Recusions is a good approach when it comes to problem solving
// However, programmer needs to evaluate the need and impact of using recursive/iterative approach while solving a particular problem.
// In case of factorial calculation, recursion saves a lot of lines of code
// However, in case of fibonacii series, recursion resulted in some extra unnecessary function calls which was an extra overhead 
// Running time for fibonacii series grows exponentially with input in case of recursive approach
