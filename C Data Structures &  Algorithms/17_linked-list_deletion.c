#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Deletion in a linked list\n");

    return 0;
}

// Deletion in a linked list:

// 1. Delete at the beginning --> O(1) --> best case --> constant
// 2. Delete at the end --> O(n) --> worst case --> linear
// 3. Delete in between nodes --> O(n) --> average case --> linear
// 4. Delete after a node --> O(1) --> best case --> constant
