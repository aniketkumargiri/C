#include <stdio.h>
#include <stdlib.h>

// Array: Linear data structure
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
    // Used for requesting memory from the heap
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    // (*a).total_size = tSize;
    a->used_size = uSize;
    // (*a).used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
    // (*a).ptr = (int *)malloc(tSize * sizeof(int));
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setValue(struct myArray *a)
{
    int val;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter element %d\n", i);
        scanf("%d", &val);
        (a->ptr)[i] = val;
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 4);

    printf("We are running setValue now\n");
    setValue(&marks);

    printf("We are running showValue now\n");
    show(&marks);

    return 0;
}