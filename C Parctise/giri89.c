#include <stdio.h>

struct info
{
    char name[20];
    int id;
    int marks[5];
};
int main(int argc, char const *argv[])
{
    struct info stu;
    int sum = 0;
    printf("enter name ");
    gets(stu.name);
    printf("enter id ");
    scanf("%d", &stu.id);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &stu.marks[i]);
        sum += stu.marks[i];
    }

    printf("%s\n", stu.name);
    printf("%d\n", stu.id);
    for (int i = 0; i < 5; i++)
    {
        printf("%d " ,stu.marks[i]);
    }
    printf("\n%d\n", sum);

    return 0;
}