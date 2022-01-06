#include <stdio.h>

union student
{
    int roll;
    char name[20];
};

int main(int argc, char const *argv[])
{
    union student stu;
    printf("%d\n",sizeof(stu));
    printf("enter roll no ");
    scanf("%d",&stu.roll);
    printf("rollno = %d\n",stu.roll);//union parameters are used one-by-one to get accurate results because all the members of union share the same memory location
    printf("enter name ");
    scanf("%s",stu.name);
    printf("name = %s\n",stu.name);



    return 0;
}