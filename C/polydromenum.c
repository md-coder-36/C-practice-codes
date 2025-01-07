#include <stdio.h>

int polyndrome(int num)
{
    int temp = 0;
    while (num != 0)
    {
        temp = temp * 10 + (num % 10);
        num /= 10;
    }
    printf("%d\n", temp);
    return temp;
}
int main()
{
    int n;

    printf("Enter polyndrome num  : ");
    scanf("%d", &n);

    polyndrome(n);
    (polyndrome(n) == n) ? printf("Is polyndrome.\n") : printf("Is not polyndrome.\n");

    return 0;
}

// find how many digit in variable coordinates....

// int checkdigit(int num)
// {
//     int size = 0;
//     do
//     {
//         num /= 10;
//         ++size;
//     } while (num != 0);
//     return size;
// }

//  int temp = 0;
//     while (num != 0)
//     {
//         temp = temp * 10 + num % 10;
//         num = num / 10;
//     }
//     return temp;