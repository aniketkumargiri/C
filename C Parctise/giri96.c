#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0, su = 0, *p;
    printf("enter a no ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int)); //calloc returns a pointer of void type.so,type-casting.calloc initialises each values to a zero value
    p = ptr;
    printf("memory allocated %u\n", ptr);
    /*if (ptr == NULL)
    {
        printf("Error:out of the program\n");
        exit(0);
    }*/
    printf("enter %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
        sum = sum + *(ptr + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));//for printing we use the initial address stored
    }
    printf("\nsum = %d\n", sum);
    int *q;
    printf("enter new size ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    q = ptr;
    if (ptr == NULL)
    {
        printf("out of memory\n");
        exit(0);
    }
    printf("memory reallocated %u\n", ptr);
    printf("enter %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        su = su + *ptr;
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *q);//for printing we use the initial address stored
        q++;
    }
    printf("%d\n", su);

    return 0;
}