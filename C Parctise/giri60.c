#include <stdio.h>

int main(int argc, char const *argv[])
{
    int f=0,m=0,l,s,n,a[50];
    printf("enter the size of array ");
    scanf("%d",&n);
    
    printf("enter the %d elements in accending order ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value you want to search ");
    scanf("%d",&s);

    l=(n-1);
    while (f<=l)
    {
        m=(f+l)/2;
        if (a[m]<s)
        {
            f=(m+1);
        }
        else if (a[m]==s)
        {
            printf("%d found at location %d",s,(m+1));
            break;
        }
        else
        {
            l=(m-1);

        }
        
    }
    if (f>l)
    {
        printf("%d not found ",s);
    }
    
    
    
    

    return 0;
}