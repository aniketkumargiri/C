#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    // Sorted array for binary search
    int arr[] = {1, 2, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int element = 56;
    int searchIndex = binarySearch(arr, size, 56);
    printf("The element %d is found at index %d\n", element, searchIndex);

    return 0;
}

// Binary search::

// Divide the array by two each time
// search the element and compare with mid
// Array must be sorted
//time-complexity=O(log2(n))