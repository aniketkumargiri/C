#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; //goes on stack
    int *p;
    p = (int *)malloc(sizeof(int));
    *p = 10;
    printf("%d\n\n", *p);
    free(p);
    p = (int *)malloc(sizeof(int));
    *p = 20;
    printf("%d\n\n", *p);
    free(p);
    p = (int *)malloc(20 * sizeof(int));
    p[0] = 10, p[1] = 20, p[2] = 30, p[3] = 40, *(p + 4) = 50;
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);
    printf("%d\n", p[4]);
    printf("%d\n", p[10]); //malloc initialises every uninitialised values by garbage values
    printf("\n");
    free(p);

    p = (int *)calloc(20, sizeof(int));
    p[0] = 20, p[1] = 30, p[2] = 50, p[3] = 90, *(p + 4) = 50;
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);
    printf("%d\n", p[4]);
    printf("%d\n", p[10]); //calloc initialises every uninitialised values by zero

    p=(int*)realloc()

    return 0;
}