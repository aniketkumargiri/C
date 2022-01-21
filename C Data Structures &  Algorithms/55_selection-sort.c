#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// selectionSort is a non-stable non-adaptive algorithm
void selectionSort(int a[], int n)
{
    int indexOfMin, temp;
    // loop for passes
    for (int i = 0; i < n - 1; i++)
    {
        // loop for each pass
        indexOfMin = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[indexOfMin] > a[j])
            {
                indexOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}

int main()
{

    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    selectionSort(a, n);
    printArray(a, n);

    return 0;
}