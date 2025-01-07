#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char string1[100];
    char string2[64] = "From_filefunction.c_contains";
    char string3[100];

    // ****** Reading a file ******
    ptr = fopen("myfile1.txt", "r");
    fscanf(ptr, "%s", string1);
    printf("The content of this file has : %s\n", string1);
    // give outout at the end of first space in text file..

    // ****** Writing a file ******
    ptr = fopen("myfile1.txt", "a");
    fprintf(ptr, "%s", string2);

    ptr = fopen("myfile1.txt", "r");
    fscanf(ptr, "%s", string3);
    printf("Content comes after aditing : %s\n", string3);

    fclose(ptr);
    return 0;
}
