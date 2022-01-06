#include <stdio.h>

struct info
{
    char name[20];
    int age;
    int id;
    float salary;
    char address[100];
} e2, e3;
int main(int argc, char const *argv[])
{
    struct info e2 = {"kumar", 18, 20, 200.5, "chhapra"};
    printf("%s\n", e2.name);
    printf("%d\n", e2.age);
    printf("%d\n", e2.id);
    printf("%f\n", e2.salary);
    printf("%s\n", e2.address);
    printf("\n");
    struct info e3 = {"giri", 19, 27, 100.75, "bihar"};
    printf("%s\n", e3.name);
    printf("%d\n", e3.age);
    printf("%d\n", e3.id);
    printf("%f\n", e3.salary);
    printf("%s\n", e3.address);

    return 0;
}