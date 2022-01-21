#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Introduction to Stack in Data Structure\n");

    return 0;
}

// Stack Data Structure: Stack is a linear data structure. Operations on stack are performed in LIFO(Last In First Out) order. It can be implemented using arrays and linked list

// Applications of stack:
// 1. Used in function calls
// 2. Infix to postfix conversion(and other similar conversions)
// 3. Balanced parenthesis matching and more

// Stack ADT:
// In order to create a stack we need a pointer to the topmost element along with other elements which are stored inside the stack

// Some of the operations of stack ADT are:
// 1. push(): insert an element into the stack
// 2. pop(): remove the topmost element from the stack
// 3. peak(index): value at a given position is returned
// 4. isEmpty(): Determine whether the stack is empty or not
// 5. isFull(): Determine whether the stack is full or not
