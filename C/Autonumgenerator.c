#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        printf("Computer generated num : %d\n", rand() % 3);
    }

    return 0;
}