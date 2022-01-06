#include <stdio.h>

int main(int argc, char const *argv[])
{
    void *p;//void pointer can hold the address of any type of data-type
    int a = 100;
    float b = 3.14;
    char c = 'A';
    p = &a;
    printf("%d\n", *((int *)p)); //for accessing the value within the pointer,type-casting of the same data-type is must
    p = &b;
    printf("%f\n", *((float *)p));
    p = &c;
    printf("%c\n", *((char *)p));

    return 0;
}
/*void(general/generic) pointer
syntax
void *p */