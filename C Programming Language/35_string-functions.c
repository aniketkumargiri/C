#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "hello";
    char s2[] = "world";
    char s3[256];

    // puts(strcat(s1, s2));

    // printf("The length of the string s1 is: %d\n", strlen(s1));
    // printf("The length of the string s2 is: %d\n", strlen(s2));

    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));
    // puts(strcpy(s1, s2));

    // strcpy(s3, strcat(s1, s2));
    // puts(s3);

    printf("The strcmp for s1, s2 returns %d\n", strcmp(s1, s2));

    return 0;
}

// C Library <string.h>

// strcat(): This function is used to concatenate or combine two given strings
// strlen(): This function is used to show length of a string
// strrev(): This function is used to show the reverse of a string
// strcpy(): This function is used to copy one string into another
// strcmp() : This function is used to compare two given strings