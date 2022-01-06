#include <stdio.h>
#include <string.h>

struct Driver
{
    char name[28];
    char dlNo[16];
    char route[46];
    int kms;
};

int main(int argc, char const *argv[])
{
    struct Driver d1, d2, d3;
    printf("Enter the details of the drivers Driver No. 1\n");

    printf("Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of the first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route name for the first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the numbers of kms for the first driver\n");
    scanf("%d", &d1.kms);
    printf("Enter the details of the drivers Driver No. 2\n");

    printf("Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of the second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route name for the second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the numbers of kms for the second driver\n");
    scanf("%d", &d2.kms);

    printf("Enter the details of the drivers Driver No. 3\n");

    printf("Enter the name of the third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of the third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route name for the third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the numbers of kms for the third driver\n");
    scanf("%d", &d3.kms);

    printf("Printing the details of these drivers\n");

    printf("For Driver No 1:");
    printf("Name is %s\n", d1.name);
    printf("dlNo is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("kms is %d\n", d1.kms);

    printf("For Driver No 2:");
    printf("Name is %s\n", d2.name);
    printf("dlNo is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("kms is %d\n", d2.kms);

    printf("For Driver No 3:");
    printf("Name is %s\n", d3.name);
    printf("dlNo is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("kms is %d\n", d3.kms);

    return 0;
}