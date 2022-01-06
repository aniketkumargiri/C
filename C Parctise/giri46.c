#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[50];
    int i, l, v = 0, c = 0, w = 0;
    printf("enter a string");
    gets(str);

    l = strlen(str);

    for (i = 0; i < l; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || str[i] >= 'A' && str[i] <= 'Z')
        {
            c++;
        }
        else if (str[i] == ' ')
        {
            w++;
        }
    }
    printf("\nvowels=%d\tconsonents=%d\twords=%d", v, c, w);

    return 0;
}