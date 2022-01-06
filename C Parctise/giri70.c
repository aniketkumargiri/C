#include <stdio.h>

void display(int [],int);
int main(int argc, char const *argv[])
{
    int a[5];
    printf("enter values in the array ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,5);
    

    return 0;
}
void display(int a[],int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
        s+=a[i];
    }
    printf("\n%d ",s);
    
}