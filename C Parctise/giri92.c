#include <stdio.h>

struct student
{
    char name[20];
    int roll;
};

int main(int argc, char const *argv[])
{
    struct student stu;
    struct student *p;
    p = &stu;
    printf("enter student name ");
    scanf("%s", p->name);
    printf("enter student roll ");
    scanf("%d", &p->roll);

    printf("name = %s\n", p->name);
    printf("name = %s\n", (*p).name);
    printf("roll = %d\n", p->roll);
    printf("roll = %d\n", (*p).roll);

    return 0;
}