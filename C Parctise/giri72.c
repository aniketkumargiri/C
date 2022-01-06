#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {23, 45, 723, 62, 87};
    int s = 0;
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (p + i));
        printf("%d\n ", *(p + i));
        //printf("%d ", a[i]);

        s += *(p + i);
        //s+=a[i];

    }
    printf("\n%d", s);

    return 0;
}