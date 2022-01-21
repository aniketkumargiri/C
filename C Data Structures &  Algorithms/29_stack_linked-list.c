#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Implemenatation of stack using linked list\n");

    return 0;
}

// Implemenatation of stack using linked list:

// insertion(push) & deletion(pop) from head -> O(1);
// struct Node{
//     int data;
//     struct Node *next;
// }
// head points to -> top;
// stack empty condition: (top == NULL)
// stack full when: heap memory is exhausted, practically not possible;
// we can always set a custom size;