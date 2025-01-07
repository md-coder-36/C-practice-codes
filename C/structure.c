#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[40];
    char dept[20];
} s1;

typedef struct student ss; // tpyedef change "struct student" long name in short "ss".

int main()
{
    printf("Give stu1 info. : \n");
    printf("stu1 id : ");
    scanf("%d", &s1.id);
    printf("stu1 name : ");
    scanf("%s", &s1.name);
    printf("stu1 dept : ");
    scanf("%s", &s1.dept);

    struct student s2; // similar as int var;

    printf("stu2 id : ");
    scanf("%d", &s2.id);
    printf("stu2 name : ");
    scanf("%s", &s2.name);
    printf("stu2 dept : ");
    scanf("%s", &s2.dept);

    ss s3; // by using typedef

    printf("stu3 id : ");
    scanf("%d", &s3.id);
    printf("stu3 name : ");
    scanf("%s", &s3.name);
    printf("stu3 dept : ");
    scanf("%s", &s3.dept);

    printf("stu1 details : %d %s %s \n", s1.id, s1.name, s1.dept);
    printf("stu2 details : %d %s %s \n", s2.id, s2.name, s2.dept);
    printf("stu3 details : %d %s %s \n", s3.id, s3.name, s3.dept);

    return 0;
}
