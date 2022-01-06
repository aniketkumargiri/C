#include<stdio.h>

void a()
{
    printf("Hello");
}
void b(void (*ptr)())
{
    ptr();
}
int main()
{
    void (*p)()=a;
    b(p);
    return 0;
}