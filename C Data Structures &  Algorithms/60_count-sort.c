#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

// Time-complexity = O(n + m) = O(n)
// Space-complexity = (max + 1) --> very large
void countSort(int a[], int n)
{
    int i,j;
    //Find the maximum element in a
    int max = maximum(a, n);

    // create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialise the array elements to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for ( i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }


    i=0;
    j=0;
    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    // int a[] = {12, 54, 65, 7, 23, 9};
    int a[] = {9, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    countSort(a, n);
    printArray(a, n);

    return 0;
}