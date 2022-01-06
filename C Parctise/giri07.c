#include<stdio.h>
int a=100;

 int main(int argc, char const *argv[])
 {
     int a=200;
     {
         extern int a;
         printf("global %d\n",a);
     }
         printf("local %d",a);

     return 0;
 }
 