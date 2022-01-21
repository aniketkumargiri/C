#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Queue Implemenatation: Array Implemenatation of Queue in Data Structure\n");

    return 0;
}

// Insert(Enqueue): O(1)
// increment backIndex
// insert at backEnd

// Remove(Dequeue): O(n)
// remove element at index 0
// shift all elements

// Remove(Dequeue): O(1)
// increment frontIndex
// remove form frontEnd

// first element = frontEnd + 1
// rearEnd = backEnd 

// Queue Empty : front = back
// Queue Full : back = size - 1