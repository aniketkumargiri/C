#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    int fact = factorial(num);
    printf("The factorial of %d is: %d\n", num, fact);

    return 0;
}

// What is a recusive function ?

// Recusive Functions or recusion is a process when a function calls a copy of itself to work on a smaller problem
// Any function that calls itself is called recusive function
// This makes the life of programmer easybby dividing a given problem into easier
// A termination condition is imposed on such functions to stop them executing copies of themeselves forever.
// Any problem that can be solved recursively, can also solved iteratively

// Why recusions?

// Any problem that can be solved recursively, can also solved iteratively
// However, some problems are best suited to be solved using recursion
// For example, tower of Hanoi, Fibonacci series, factorial finding etc

// Example 1: Factorial Calculation

// The case at which the function doesn't recur is called the base case
// The instances where the function keeps calling itself to perform a subtask, is called the recursive case
// For factorial calculation, the base case at the parameter value of 0 and 1
