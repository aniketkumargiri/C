#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main(int argc, char const *argv[])
{
    // char *str;
    // gets(str);
    // puts(str);
    // printf("%s", str);

    // char str[] = {'a', 'n', 'i', 'k', 'e', 't', '\0'};
    char str[] = "aniket";
    printStr(str);

    return 0;
}

// Is string a data type in C?

// No;
// We have char, int, long, float, double and other data type but no string data type in c
// String is a not supported data type in C but it is very useful concept used to model real world entities like name, city etc;
// We express strings using an array of characters terminated by a null character('\0');

// What are strings in C

// array of characters terminated by a null character('\0')
// strings in c created by creating an array of characters
// We need an extra character('\0' or null character) to tell the compiler that the string ends here

// creating string in C

// we can create array in the following ways:

// char name[] = "anni";
// char name[] = {'a', 'n', 'n', 'i','\0'};
