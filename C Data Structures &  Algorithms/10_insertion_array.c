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

int indexInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        // printf("%d\n", arr[i]); // debugging elements w.r.t. index in the array
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
}

int main()
{
    int arr[N] = {7, 8, 12, 27, 88};
    int size = 5;
    display(arr, size);

    int capacity = N;
    int index = 3;
    int element = 45;
    int ret = indexInsertion(arr, size, element, capacity, index);
    size += 1;

    if (ret)
    {
        display(arr, size);
    }
    else
    {
        printf("Insertion at given index failed\n");
    }

    return 0;
}

// Best case: O(1) --> inserting the element at the last position in the array;
// Worst case: O(n) --> inserting the element at the first position in the array;