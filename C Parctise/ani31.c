#include <stdio.h>

int main()
{
    int a;
    int *p;
    p = &a;
    a = 5;
    printf("%d bytes\n", sizeof(int));
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);
    printf("%d\n", a);
    *p = 12;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);
    printf("%d\n", a);

    char *q;
    q = (char *)p;//type-casting
    printf("%d bytes\n", sizeof(char));
    printf("%d\n", q);
    printf("%d\n", *q);

    int b = 20; //Addresses doesnot change.Only the value corresponding pointer will change
    *p = b;
    printf("%d\n", p);
    printf("%d\n", *p);

    printf("%d\n", p + 1);
    printf("%d\n", p++);
    printf("%d\n", ++p);

    return 0;
}