#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;
    char ans;
    label:
    printf("enter a no\n");
    scanf("%d",&no);
    if (no%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    printf("do you want to exit(Y/N)");
    scanf("%c\n",&ans);
    if (ans=='N'||ans=='n')
    {
        goto label;
    }
    return 0;
}
/* goto statement is used to control the program transfer forward or backward. for this very we use a label; 
1.forward transfer syntax : 
goto label;
... //skip
    label:
statement;
...

    2.backward transfer syntax :
     label:
statements;
... 
goto label;*/