#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Introduction to linked list\n");

    return 0;
}

// linked list:

// size of linked list is dynamically generated and depends on the present scenario and choice of the user
// elements are stored at random locations in the memory through the linked list
// address of next node is stored in the link part of present node 
// extra memory is needed for the address of the next node through pointers
// last node of linked list points to NULL
// direct access of elements is not possible like array, we have to trverse till that element is found --> O(n)
// insertion and deletion of elements is easy through only changing the links --> O(n)
