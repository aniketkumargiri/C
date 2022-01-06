#include <stdio.h>

int main()
{
    char c1[6] = "HELLO";
    char *c2;
    c2 = c1;
    printf("%s\n", c2);
    c2[0] = 'A';
    printf("%s\n", c2);
    
    return 0;
}
//arrays are always passed to function by reference