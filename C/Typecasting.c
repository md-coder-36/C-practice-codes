#include <stdio.h>
int main()
{
    printf("Up casting : int to float\n");
    int i = 10;
    float f = i;
    printf("Value of f : %f\n", f);

    printf("\nDown casting :  float to int\n");
    int j = f;
    printf("value of J : %i\n", j);
    return 0;
}