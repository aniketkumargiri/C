#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Application of stack Data Structure: Parenthesis Matching Problem");

    return 0;
}

// Whenever we find opening parenthesis (, push it into the stack
// Whenever we find closing parenthesis ), pop from the stack until the open parenthesis ( is found

// Worst case time - complexity = O(n); n is the size of stack

// Conditions for a balanced expression:
// while popping stack underflow should not happen. If it happens -> unbalanced expression
// At End Of Expression(EOF), the stack must be empty. If it happens -> unbalanced expression
