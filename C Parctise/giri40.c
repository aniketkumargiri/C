#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch[50];
    int u = 0, l = 0, i = 0;
    printf("enter any character string\n");
    gets(ch);
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            u++;
        }
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            l++;
        }
        i++;
    }
    printf("%d upper letters and %d lower letters are there in the given string",u,l);

    return 0;
}
/*In string last character is terminated by NULL character('\0')
ASCII code of A to Z is 65 to 90
ASCII code of a to z is 97 to 122
*/