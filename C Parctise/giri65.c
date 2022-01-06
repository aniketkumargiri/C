#include <stdio.h>

void display(int x);

int main(int argc, char const *argv[])
{
    int x;

    printf("enter value ");
    scanf("%d",&x);
    display(x);//change in formal argument doesnot affects the actual argument in call by value

    return 0;
}
void display(int y)
{
    printf("%d",y);
}
/*Function Call
1.call by value
2.call by reference
*/