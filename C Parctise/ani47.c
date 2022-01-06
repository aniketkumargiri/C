#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter size of the array\n");
    scanf("%d", &n);
    int *p;
    p = (int *)malloc(n * sizeof(int)); //dynamically allocated array
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
    p = NULL; //after free, adjust pointer to NULL
    printf("\n");
    p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]); //garbage values
    }
    free(p);
    p = NULL;
    printf("\n");

    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
    p = NULL;
    printf("\n");
    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]); //all zero
    }
    printf("\n");

    int *a = (int *)realloc(p, 2 * n * sizeof(int));
    printf("previous address = %d, new address = %d\n", p, a);
    for (int i = 0; i < 2 * n; i++)
    {
        a[i] = 2 * (i * i);
    }
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", *(a + i));
    }
    free(a);
    a = NULL;
    printf("\n");

    a = (int *)realloc(a, (n / 2) * sizeof(int));
    for (int i = 0; i < (n / 2); i++)
    {
        a[i] = 2 * (i * i * i);
    }
    for (int i = 0; i < (n / 2); i++)
    {
        printf("%d ", *(a + i));
    }
    free(a);
    a = NULL;
    printf("\n");

    a = (int *)realloc(a, 0); //equivalent to free(a)
    for (int i = 0; i < n ; i++)
    {
        a[i] = 2 * (i * i * i);
    }
    for (int i = 0; i < (n); i++)
    {
        printf("%d ", *(a + i));
    }
    free(a);
    a = NULL;
    printf("\n");

    a = (int *)realloc(NULL, n * sizeof(int));//equivalent to malloc
    for (int i = 0; i < n ; i++)
    {
        a[i] = 2 * (i * i * i);
    }
    for (int i = 0; i < (n); i++)
    {
        printf("%d ", *(a + i));
    }
    free(a);
    a = NULL;
    printf("\n");

    return 0;
}
