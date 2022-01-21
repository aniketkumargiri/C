#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int n)
{
    // loop for passes
    for (int i = 0; i < n - 1; i++)
    {
        // loop for each pass

        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int b[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    bubbleSort(a, n);
    printArray(a, n);
    printf("\n");

    int b[] = {1, 2, 3, 4, 5, 6};
    printArray(b, n);
    bubbleSortAdaptive(b, n);
    printArray(b, n);

    return 0;
}