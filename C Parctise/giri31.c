#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel", ch);
        break;

    default:
        printf("%c is not a vowel", ch);
        break;
    }
    return 0;
}
/* switch case:
syntax:
switch(expression)
{
    case value1:
    {
        block1;
        break;
    }
    case value2:
    {
        block2;
        break;
    }
    case value3:
    {
        block3;
        break;
    }
    default:
    {
        default block;
        break;
    }

}
//switch condition has only int and char; no float or double

*/