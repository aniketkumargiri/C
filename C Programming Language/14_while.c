#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    int index = 0;

    while (index < num)
    {
        printf("%d\n", index + 1);
        index = index + 1;
    }

    return 0;
}