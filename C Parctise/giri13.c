#include<stdio.h>
static int a=100;//now, value of a cant be accessed in another file; even if using extern keyword
void func1();
void func2();

int main(int argc, char const *argv[])
{
    func1();
    func2();

    return 0;
}
void func1()
{
    printf("%d\n",a); 
    a++;
}
void func2()
{
    printf("%d\n",a);
}
