#include <stdio.h>

#define N 64

void traverseArray(int a[], int n)
{
    printf("Traversing and displaying the elements of the array...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int a[N];
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    traverseArray(a, n);

    return 0;
}

// 2D - Array Using pointers to pointer :

// int r = 3, c = 3;
// int **a;
// a = (int **)malloc(r * sizeof(int *));
// for (int i = 0; i < r; i++)
// {
//     a[i] = (int *)malloc(c * sizeof(int));
// }

// for (int i = 0; i < r; i++)
// {
//     for (int j = 0; j < c; j++)
//     {
//         scanf("%d", &a[i][j]);
//     }
//     printf("\n");
// }