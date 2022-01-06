#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ch;
    printf("enter your choice ch\n");
    printf(" your choice ch-1 for add\n");
    printf(" your choice ch-2 for edit\n");
    printf(" your choice ch-3 for delete\n");
    printf(" your choice ch-4 for exit\n");
    scanf("%d", &ch);

    if (ch == 1)
    {
        printf("add option selected");
    }
    else if (ch == 2)
    {
        printf("edit option selected");
    }
    else if (ch == 3)
    {
        printf("delete option selected");
    }
    else if (ch == 4)
    {
        printf("exit option selected");
    }
    else
    {
        printf("none of the option was selected");
    }
    return 0;
}