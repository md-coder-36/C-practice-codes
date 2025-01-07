#include <stdio.h>
#include <string.h>
int main()
{
    char que1[5] = {'G', 'i', 'v', 'e', '\0'};
    char que2[5] = {'D', 'a', 't', 'a', '\0'};
    // char que3[5] = "data";
    // printf("%s %s :- ",que1,que2);
    puts(strcat(que1, que2)); // same as uper line.. but not give between space.

    char s1[20], s2[20], s3[20];

    printf("\nEnter your surname : ");
    gets(s1);
    printf("Enter your name : ");
    gets(s2);
    printf("Enter your father name : ");
    scanf("%s", &s3);

    printf("Your full name is \n");
    printf("%c %c %c", puts(s3), puts(s2), puts(s1));

    char s4[20];
    // liabrary string function...
    printf("\n\n\nyour surname lenth is : %d \n", strlen(s1));

    
     printf("your name reverse string is : %s \n", strrev(s1));

     printf("your name,surname copy in new string s4 is : %s \n", strcpy(s4, strcat(s1, s2)));

    printf("give strcmp(s1,s2) : %d" , strcmp(s1 , s2)); // s1 no 1 ele - s2 1 ele = same return 0.
                                                           // as per ascii table     index less return -1,
                                                                        //           index more return 1.
    return 0;
}

// copy code
// #include <stdio.h>
// void printStr(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
//     printf("\n");
// }
// int main()
// {
//     // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
//     // char str[6] = "harry";
//     char str[34];
//     gets(str);
//     printf("Using custom function printStr\n");
//     printStr(str);
//     printf("Using printf %s\n", str);
//     printf("using puts: \n");
//     puts(str);
//     return 0;
// }