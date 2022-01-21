#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Insertion a node in the linked list.\n");

    return 0;
}

// Insertion in a linked list:

// 1. Insert at the beginning --> O(1) --> best case --> constant
// 2. Insert at the end --> O(n) --> worst case --> linear
// 3. Insert in between nodes --> O(n) --> average case --> linear
// 4. Insert after a node --> O(1) --> best case --> constant
