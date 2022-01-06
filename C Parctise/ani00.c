#include <stdio.h>

void Bubblesort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {2, 3, 4, 5, 67, 7};
    Bubblesort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}