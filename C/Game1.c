#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int comchoose = (rand() % 3) + 1;

    // int comchoose;

    int userchoose;
    int userscore = 0, comscore = 0;
    char a[] = {'r', 'p', 's'};

    char name[20];

    printf("Enter your name  : ");
    gets(name);

    printf("Let's play Rock , Paper , Scissors...\n");
    printf("So, player choose :\n1 for Rock. \n2 for Paper. \n3 for Scissors.\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Round : %d\nPlayer's tern :", i + 1);
        scanf("%d", &userchoose);
        printf("You have choosed : %c\n", a[userchoose - 1]);
        printf("Com.'s tern : \n");

        // scanf("%d", &comchoose);

        printf("Computer have choosed : %c\n", a[comchoose - 1]);

        if (userchoose == comchoose)
        {
            userscore++;
            comscore++;
        }
        else if (userchoose == 1 && comchoose == 2)
        {
            comscore++;
        }
        else if (userchoose == 2 && comchoose == 3)
        {
            comscore++;
        }
        else if (userchoose == 3 && comchoose == 1)
        {
            comscore++;
        }
        else
        {
            userscore++;
        }
        printf("Player score : %d", userscore);
        printf("\nComputer score : %d\n\n", comscore);
    }

    if (comscore < userscore)
    {
        printf("Congratulations.. ,Finally  You win.");
    }
    else if (comscore > userscore)
    {
        printf("Sorry !!,End of the match , you are fail.");
    }
    else
    {
        printf("Match is Drow !!!.");
    }
    return 0;
}

// finally complete this game ...