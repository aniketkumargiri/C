#include<stdio.h>
#define LIKES 10000
#define MESSAGES "ani loves coding"



int main(int argc, char const *argv[])
{
    int n=2000;

    if (LIKES>n)
    {
        printf(MESSAGES); //very-imporatant:no ("") in printf here
    }
    
    return 0;
}