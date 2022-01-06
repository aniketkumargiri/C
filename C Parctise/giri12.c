#include<stdio.h>
void func();//semi-colon is must here
int main(int argc, char const *argv[])
{
    func();
    func();
    func();
    
    return 0;
}
void func()
{
    static int a=10;//retain the value ; dont lost its value at the end of the function
    printf("%d\n",a);
    a++;

}

