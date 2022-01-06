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
    struct info e4;
    printf("enter name ");
    gets(e4.name);
    printf("enter age ");
    scanf("%d", &e4.age);
    printf("enter id ");
    scanf("%d", &e4.id);
    printf("enter salary ");
    scanf("%f", &e4.salary);
    printf("enter addrdess ");
    scanf("%s", &e4.address);
    printf("%s\n", e4.name);
    printf("%d\n", e4.age);
    printf("%d\n", e4.id);
    printf("%f\n", e4.salary);
    printf("%s\n", e4.address);

    return 0;
}