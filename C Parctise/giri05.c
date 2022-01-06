#include<stdio.h>
#define pie 3.14
int main(int argc, char const *argv[])
{
    int rad;
    float area;
    printf("enter raidus of circle ");
    scanf("%d",&rad);

    area= pie*rad*rad;
    printf("%f",area);
    return 0;
}
/*preprocessing-->compiling-->linking
preprocessor directives:no semi-colon is used at the last of these
#include<stdio.h>
#include<conio.h>
#include<maths.h>
#include<string.h>
#include<stdlib.h>

defining macors:
#include
#define
#undef
#if
#else
#endif
*/
