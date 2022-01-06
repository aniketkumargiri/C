#include <stdio.h>

struct info
{
    char name[20];
    int age;
    int id;
    float salary;
    char address[100];
};

int main(int argc, char const *argv[])
{
    struct info e1={"aniket",17,89,1000,"nagdiha"};
    printf("%s\n",e1.name);
    printf("%d\n",e1.age);
    printf("%d\n",e1.id);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.address);

    return 0;
}