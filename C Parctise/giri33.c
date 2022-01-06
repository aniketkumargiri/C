#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i <= 100)
    {
        printf("%d\t", i++);
    }
    printf("\n");
    for (i = 0; i <= 100; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}
/*loops:
1.while
syntax:
while(condition)
{
    body of loop;
}

2.do-while
3.for

*/
