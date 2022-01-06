#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int count = 255;
    for (i = 0; i < count; i++)
    {
        printf("ASCII value of %c is %d\n", i, i);
    }

    return 0;
}
