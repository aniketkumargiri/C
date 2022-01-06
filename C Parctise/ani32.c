#include<stdio.h>

int main()
{
    int a=1025;
    int *p;
    p=&a;
    printf("%d",sizeof(int));
    printf("address = %d , value = %d\n",p,*p);
    void *q;
    q=p;
    printf("address = %d\n",q);

    return 0;
}