#include <stdio.h>

void Double(int *a, int size) //int a[],int size
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        a[i] = 2 * a[i];
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    Double(a, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}