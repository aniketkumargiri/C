#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0, su = 0, *p;
    printf("enter a no ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int)); //malloc returns a pointer of void type.so,type-casting.malloc initialises each values to a garbage value
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
    int *r;
    int s;
    printf("enter new size ");
    scanf("%d", &s);
    q = (int *)realloc(ptr, s * sizeof(int));
    r = q;
    if (ptr == NULL)
    {
        printf("out of memory\n");
        exit(0);
    }
    printf("memory reallocated %u\n", ptr);
    printf("enter %d elements\n", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", q);
        su = su + *q;
        q++;
    }
    for (int i = 0; i < s; i++)
    {
        printf("%d\n", *r);//for printing we use the initial address stored
        r++;
    }
    printf("%d", su);

    return 0;
}