#include <stdio.h>

void print(char *C)
{
    /*int i = 0;
    while (*(C+i) != '\0') //*(C+i)=C[i]
    {
        printf("%c", C[i]);
        i++;
    }
    printf("\n");*/
    C[0]='A';
    while (*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}
int main()
{
    char C[20] = "HELLO";//string gets stored in the space for array
    //char *C = "HELLO";//string gets stored as compile time constant
    print(C);
    return 0;
}