#include<stdio.h>

int main()
{
    int a[]={2,34,5,68,26};
    int i;
    int *p=a;
    for (int i = 0; i < 5; i++)
    {
        printf("address = %d\n",&a[i]);
        printf("address = %d\n",a+i);
        printf("value = %d\n",a[i]);
        printf("value = %d\n",*(a+i));
    }
    
    return 0;
}