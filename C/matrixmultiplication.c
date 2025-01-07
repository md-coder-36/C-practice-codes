#include <stdio.h>
int main()
{
    int row1, column1, row2, column2, choose;

    // matrix 1....
    printf("1.Rows :  ");
    scanf("%d", &row1);

    printf("  Columns : ");
    scanf("%d", &column1);

    int a[row1][column1];

    printf("For 1.give %d time values : ", row1 * column1);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("2.Rows : ");
    scanf("%d", &row2);

    printf("  Columns : ");
    scanf("%d", &column2);

    int b[row2][column2];

    printf("For 2.give %d time values : ", row2 * column2);
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // matrix 1....
    printf("1. matrix :  ");
    for (int i = 0; i < row1; i++)
    {
        printf("\n");
        for (int j = 0; j < column1; j++)
        {
            printf(" %d\t", a[i][j]);
        }
    }
    
    // matrix 2....
    printf("\n2. matrix :  ");
    for (int i = 0; i < row2; i++)
    {
        printf("\n");
        for (int j = 0; j < column2; j++)
        {
            printf(" %d\t", b[i][j]);
        }
    }

    if (column1 == row2)
    {
        int c[row1][column2];
        if (row1 < column2)
        {
            choose = column2;
        }
        else
        {
            choose = row1;
        }
        printf("\nMatrix multiplication ...");

        for (int i = 0; i < row1; i++)
        {
            printf("\n");
            for (int j = 0; j < column2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < choose; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < row1; i++)
        {
            printf("\n");
            for (int j = 0; j < column2; j++)
            {
                printf("%d \t", c[i][j]);
            }
        }
    }
    else
    {
        printf("\n\n\aMatrix multiplication is not possible..");
    }
    return 0;
}
