#include <stdio.h>

int main()
{
    int a[5];
    int *p = a; //p=&a[0]
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p + i)); //(p+i)=&a[i]
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i)); //*(p+i)=a[i]
    }

    return 0;
}