#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    struct stu_mark
    {
        char sub[10];
        int marks;
    } m;
};

int main(int argc, char const *argv[])
{
    struct student stu;
    printf("enter roll no ");
    scanf("%d",&stu.roll);
    printf("enter name ");
    scanf("%s",stu.name);
    printf("enter subject name ");
    scanf("%s",&stu.m.sub);
    printf("enter marks ");
    scanf("%d",&stu.m.marks);
    
    printf("roll = %d\n",stu.roll);
    printf("name = %s\n",stu.name);
    printf("sub = %s\n",stu.m.sub);
    printf("marks = %d\n",stu.m.marks);



    return 0;
}