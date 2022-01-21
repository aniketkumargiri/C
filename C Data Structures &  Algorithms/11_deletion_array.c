#include <stdio.h>

#define N 64

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]); //traversal
    }
    printf("\n");
}

void indexDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return;
}

int main()
{
    int arr[N] = {7, 8, 12, 27, 88};
    int size = 5;
    display(arr, size);

    int index = 2;
    indexDeletion(arr, size, index);
    size -= 1;

    display(arr, size);

    return 0;
}

// Best case: O(1) --> deleting the element at the last position in the array;
// Worst case: O(n) --> deleting the element at the first position in the array;