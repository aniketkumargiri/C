#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("no of arguments= %d", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("\nargument %d= %s\n",i,argv[i]);
    }

    return 0;
}
/*command - line argument 
1.int argc(argument counter) 
2.char * argv[](stores the given argument) */