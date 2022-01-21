#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int a[], int n)
{
    int key, j;
    // loop for passes
    for (int i = 1; i <= n; i++)
    {
        // loop for each pass
        key = a[i];
        j = i - 1;

        while (a[j] > key && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
   
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    insertionSort(a, n);
    printArray(a, n);

    return 0;
}