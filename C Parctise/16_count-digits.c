#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int temp = n;
    int count = 0;
    while(n>0){
        count++;
        n = n / 10;
    }

    printf("Number of digits in an integer: %d\n", count);

    return 0;
}