#include <stdio.h>
int main()
{
    int index;
    int a = 3;

    printf("Give index : ");
    scanf("%d", &index);

    for (int r = 0; r < index; r++)
    {
        for (int c = -1; c < r; c++)
            printf(" %c ", a);
        printf("\n");
    }
    // printf("\n");
    for (int r = 0; r < index - 1; r++)
    {
        for (int c = r; c < index - 1; c++)
            printf(" %c ", a);
        printf("\n");
    }

    // printf("By low runtime  complexity : \n ");
    // for (int m = 0; m < index; m++)
    // {

    // }
    return 0;
}
