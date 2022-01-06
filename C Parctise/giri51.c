#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10], n;
    printf("enter size of array");
    scanf("%d", &n);

    printf("enter elements of array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int b[5] = {1, 2, 3, 4, 5};
    printf("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum += b[j];
    }
    printf("sum is:%d\n", sum);
    int avg = sum / 5;
    printf("avg is :%d", avg);

    return 0;
}
/*array is a collection of similar kinds of data-types 
1. one-dimentional array:
syntax:
       int a[10];
2. two-dimentional array
syntax:
       int a[10][20];//size=row*column=10*20=200
3. multi-dimentional array
*/