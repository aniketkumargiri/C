#include <stdio.h>

struct info
{
    char name[20];
    int id;
    int marks[5];
};
int main(int argc, char const *argv[])
{
    struct info stu[5];
    printf("enter name of students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",&stu[i].name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s ",stu[i].name);
    }
    printf("\n");

    printf("enter rollid of students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&stu[i].id);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",stu[i].id);
    }
    printf("\n");

    printf("enter marks of students\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&stu[i].marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",stu[i].marks[i]);
    }
    

    return 0;
}