#include <stdio.h>
int main()
{
    int row, column;

    printf("Give size of rows  and columns : ");
    scanf("%d%d", &row, &column);

    printf("Give size of rows : %d and columns : %d \n", row, column);

    int a[row][column];

    printf("give %d time values : ", row * column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
            printf(" a[%d][%d] = %d \n", i, j, a[i][j]);
        }
    }
    printf("In matrix form :  \n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < column; j++)
        {
            printf(" %d\t", a[i][j]);
        }
    }
    return 0;
}