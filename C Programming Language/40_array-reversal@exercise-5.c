#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrayRev(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(&a[i], &a[n - i - 1]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    int n = (sizeof(arr) / sizeof(arr[0])); 

    printf("Before reversing\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    arrayRev(arr, n);
    printf("\nAfter reversing\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}