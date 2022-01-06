#include <stdio.h>

int sumOfElements(int a[], int n) //int *a,int size
{
    int s = 0;
    printf("size of a = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));
    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }
    return s;
}
int main()
{
    int a[] = {12, 34, 45, 67, 94};
    int size = sizeof(a) / sizeof(a[0]);
    int total = sumOfElements(a, size);
    printf("%d\n ", total);
    printf("size of a in main = %d, size of a[0] = %d\n", sizeof(a), sizeof(a[0]));

    return 0;
}