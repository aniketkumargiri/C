#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int characters, i = 0;
    char a, b;
    char *ptr;

    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i + 1);
        scanf("%d", &characters);

        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);

        getchar();
        printf("Enter the value of b\n");
        scanf("%c", &b);

        ptr = (char *)malloc((characters + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee id is %s\n", ptr);
        free(ptr);

        i = i + 1;
    }

    return 0;
}