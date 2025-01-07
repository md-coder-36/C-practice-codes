#include <stdio.h>
int main()
{
    int n;
    char smile;
    printf("Give index : \n");

    // printf(3); // not valid you can can't without giving cast.

    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        smile = i;
        printf("For %d Symbol is :%c\n\n", i, smile);
    }

    return 0;
}