#include<stdio.h>
#include <string.h>

union student             // select low size of memory location for representation 
{                         // other member are give incrupt value,try it by run code. 
    int id;
    char name[40];
    char dept[20];
}s1;

typedef union student ff; //tpyedef change "union student" long name in short "ff".
int main()
{
    printf("Give student info. : \n");

    s1.id = 1;  // access s1's attributes and modify it.
    strcpy(s1.name , "Meet");
    strcpy(s1.dept , "IT");

    printf("stu1 id : %d", s1.id);
    // scanf("%d",&s1.id);
    printf("\nstu1 name : %s", s1.name);
    // scanf("%s",&s1.name);
    printf("\nstu1 dept : %s\n",s1.dept);
    // scanf("%s",&s1.dept);

    ff s2;  // union student s1;

    printf("stu2 id : ");
    scanf("%d",&s2.id);
    printf("stu2 name : ");
    scanf("%s",&s2.name);
    printf("stu2 dept : ");
    scanf("%s",&s2.dept);

    printf("stu1 details : %d %s %s \n", s1.id , s1.name , s1.dept);
    printf("stu2 details : %d %s %s \n", s2.id , s2.name , s2.dept);

    return 0;
}