#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    int index = 0;
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;

    } while (index < num);

    return 0;
}

// do while loops executes at least once irrespective of the condition is whether true or false