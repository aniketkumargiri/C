#include <stdio.h>

struct student
{
    int roll;
    char name[20];
};
void display(struct student stu);//function declaration(proto-type) after structure declaration. stu is optional in declaration

int main(int argc, char const *argv[])
{
    struct student stu;
    printf("%d\n",sizeof(stu));
    printf("enter student name ");
    scanf("%s", stu.name);
    printf("enter roll no ");
    scanf("%d", &stu.roll);
    display(stu);

    return 0;
}
void display(struct student stu)
{
    printf("name = %s\n", stu.name);
    printf("roll = %d\n", stu.roll);
}