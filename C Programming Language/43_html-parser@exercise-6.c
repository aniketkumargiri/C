#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; //Variable to track whether we are inside the tag1
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // remove the trailing spaces from the beginning of the string
    while (string[0] == ' ')
    {
        // shift the string to the left
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }

    // remove the trailing spaces from the end of the string
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main(int argc, char const *argv[])
{
    char string[] = "     <ani>    This is a heading    </ani>   ";
    parser(string);
    printf("The parsed string is ~~%s~~ ", string);

    return 0;
}