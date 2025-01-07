#include <stdio.h>
#include <conio.h>

void print(char arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (i >= 1)
        {
            printf("\n______________\n");
        }
        else
        {
            printf("\n");
        }
        for (int j = 0; j < 3; j++)
            printf("%c |  ", arr[i][j]);
    }
}

int main()
{
    char a[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    int m1[4], m2[4];
    int n1[4], n2[4];

    printf("Positions : ");
    printf("     |       |     \n");
    printf("0,0  |  0,1  |  0,2\n");
    printf("__________________\n");
    printf("     |       |     \n");
    printf("1,0  |  1,1  |  1,2\n");
    printf("__________________\n");
    printf("     |       |     \n");
    printf("2,0  |  2,1  |  2,2\n");

    for (int i = 0; i < 5; i++)
    {

        printf("\n1st Player turn :\nSelect position for 0 :\n");
        scanf("%d%d", &m1[i], &m2[i]);

        a[m1[i]][m2[i]] = '0';
        print(a);

        /*
                if (((a[0][0] == a[0][1]) && (a[0][0] == a[0][2])) || ((a[1][0] == a[1][1]) && (a[1][0] == a[1][2])) || ((a[2][0] == a[2][1]) && (a[2][0] == a[2][2])) || (a([0][0] == a[1][0]) && (a[0][0] == a[2][0])) || ((a[0][1] == a[1][1]) && (a[0][1] == a[2][1])) || ((a[0][2] == a[1][2]) && (a[0][2] == a[2][2])) || (([0][0] == a[1][1]) && (a[0][0] == a[2][2])) || ((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])))
                {
                    if (a[0][0] == 'X' || a[1][0] == 'X' || a[2][0] == 'X' || a[0][1] == 'X' || a[0][2] == 'X' || a[0][0] == 'X' || a[0][0] == 'X')
                    {
                        printf("2's Player is Win !!!\n");
                    }
                    else
                    {
                        printf("1's Player is Win !!!\n");
                    }
                }
        */
        if (a[0][0] == '0')
        {
            if ((a[0][0] == a[0][1]) && (a[0][0] == a[0][2]) || (a[0][0] == a[1][0]) && (a[0][0] == a[2][0]))
            {
                printf("\n\n1's Player is Win !!!\n");
                break;
            }
        }
        if (a[0][0] == 'X')
        {
            if ((a[0][0] == a[0][1]) && (a[0][0] == a[0][2]) || (a[0][0] == a[1][0]) && (a[0][0] == a[2][0]))
            {
                printf("\n\n2's Player is Win !!!\n");
                break;
            }
        }

        if (a[1][1] == '0')
        {
            if ((a[1][1] == a[0][1]) && (a[1][1] == a[2][1]) || (a[1][1] == a[1][0]) && (a[1][1] == a[1][2]) || (a[1][1] == a[0][0]) && (a[1][1] == a[2][2]) || (a[1][1] == a[0][2]) && (a[1][1] == a[2][0]))
            {
                printf("\n\n1's Player is Win !!!\n");
                break;
            }
        }
        if (a[1][1] == 'X')
        {
            if ((a[1][1] == a[0][1]) && (a[1][1] == a[2][1]) || (a[1][1] == a[1][0]) && (a[1][1] == a[1][2]) || (a[1][1] == a[0][0]) && (a[1][1] == a[2][2]) || (a[1][1] == a[0][2]) && (a[1][1] == a[2][0]))
            {
                printf("\n\n2's Player is Win !!!\n");
                break;
            }
        }

        if (a[2][2] == '0')
        {
            if ((a[2][2] == a[2][0]) && (a[2][2] == a[2][1]) || (a[2][2] == a[1][2]) && (a[2][2] == a[0][2]))
            {
                printf("\n\n1's Player is Win !!!\n");
                break;
            }
        }
        if (a[2][2] == 'X')
        {
            if ((a[2][2] == a[2][0]) && (a[2][2] == a[2][1]) || (a[2][2] == a[1][2]) && (a[2][2] == a[0][2]))
            {
                printf("\n\n2's Player is Win !!!\n");
                break;
            }
        }

        printf("\n2nd Player turn :\nSelect position for X :\n");
        scanf("%d%d", &n1[i], &n2[i]);

        if (a[m1[i]][m2[i]] == a[n1[i]][n2[i]])
        {
            printf("Invalid , choose other position. \n");
            printf("\n2nd Player turn :\nSelect position for X :\n");
            scanf("%d%d", &n1[i], &n2[i]);
        }
        else
        {
            a[n1[i]][n2[i]] = 'X';
            print(a);
        }
    }

    return 0;
}
