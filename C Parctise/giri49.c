#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no, f = 0, s = 1, next;
    printf("enter upper limit of fibonacci series\t");
    scanf("%d", &no);

    for (int i = 0; i < no; i++)
    {

        if (i <= 1)
        {
            next = i;
        }
        else
        {
            next = f + s;
            f = s;
            s = next;
        }
        printf("%d\t", next);
    }

    return 0;
}