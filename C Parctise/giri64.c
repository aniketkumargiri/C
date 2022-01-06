#include <stdio.h>

int sqr(void); //function with no arguments and having return value

int main(int argc, char const *argv[])
{
    int ans;
    ans=sqr();
    printf("square is:%d",ans);

    return 0;
}
int sqr(void)
{
    int s;
    printf("enter a value ");
    scanf("%d",&s);
    return (s*s);

}
