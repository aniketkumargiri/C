#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b=100;
    int *p=&b;
    printf("value of b: %d\n",b);
    printf("value of b: %d\n",*p);
    printf("address of b: %d\n",&b);
    printf("address of b: %d\n",p);
    printf("address of b: %u\n",p);
    printf("address of b: %x\n",p);
    printf("address of b: %X\n",p);
    printf("address of b: %p\n",p);
    int **q=&p;
    printf("value at address of p: %d\n",**q);
    printf("address of p: %d\n",q); 
    printf("address of p: %d\n",&p); 
    printf("address of q: %d\n",&q);

    return 0;
}
//pointer holds the address of another variable