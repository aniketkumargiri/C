#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    // Unsorted array for linear search
    int arr[] = {1, 2, 5, 56, 4, 3, 23, 5, 4, 54634, 56, 34};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int element = 23;
    int searchIndex = linearSearch(arr, size, 23);
    printf("The element %d is found at index %d\n", element, searchIndex);

    return 0;
}

// Linear search::

// Through array traversal
// For both sorted and unsorted array
// time - complexity = O(n)