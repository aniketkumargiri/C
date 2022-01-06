#include <stdio.h>

int returnMax(int a[], int n)
{
    int max;
    for (int i = 0; i < n; i++)
    {
        max = a[0];
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 12, 3, 54, 5, 67, 654};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = returnMax(arr, size);
    printf("The maximum element of the array is %d", max);

    return 0;
}